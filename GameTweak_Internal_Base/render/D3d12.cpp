#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include <winternl.h>
#include <memoryapi.h>
#include <string>
#include <string_view>
#include <mutex>
#include <intrin.h>
#include <format>
#include <vector>
#include <optional>
#include <d3d12.h>
#include "../hooks/hooks.h"
#include "../render/D3D12.h"
#include "../mem/mem.h"

#define USER_TEXTURES 6
#define MAX_VERTEX_BUFFER 512 * 1024
#define MAX_INDEX_BUFFER 128 * 1024

#define NK_INCLUDE_COMMAND_USERDATA
#define NK_INCLUDE_STANDARD_BOOL
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_DEFAULT_FONT
#define NK_INCLUDE_DEFAULT_ALLOCATOR

#define NK_IMPLEMENTATION
#include "Nuklear/nuklear.h"

#define NK_D3D12_IMPLEMENTATION
#include "Nuklear/nuklear_d3d12.h"
#include <imgui_impl_win32.h>
#include <imgui_impl_dx12.h>

// Private implementation details
static HANDLE g_hSwapChainWaitableObject = nullptr;
static WNDPROC OriginalWndProc = nullptr;
static bool needsInput = true;
static bool menu_is_open = true;

// Simple command execution for presentation layer only
static ID3D12Device* g_device = nullptr;
static ID3D12CommandAllocator* g_command_allocator = nullptr;
static ID3D12GraphicsCommandList* g_command_list = nullptr;
static ID3D12Fence* g_fence = nullptr;
static UINT64 g_fence_value = 0;
static HANDLE g_fence_event = nullptr;

static LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    auto& renderer = D3D12Renderer::get();

  //  if (!renderer.nuklear_context())
      //  return CallWindowProcW(OriginalWndProc, hWnd, msg, wParam, lParam);

    // Start fresh input state
    if (needsInput) {
       // nk_input_begin(renderer.nuklear_context());
        needsInput = false;
    }

    bool handled = nk_d3d12_handle_event(hWnd, msg, wParam, lParam);

    if (GetAsyncKeyState(VK_INSERT) & 1) {
        menu_is_open = !menu_is_open;
    }

    bool shouldCapture =
        handled && menu_is_open && nk_item_is_any_active(renderer.nuklear_context());

    if (shouldCapture && (msg == WM_LBUTTONDOWN || msg == WM_LBUTTONUP || msg == WM_RBUTTONDOWN ||
                          msg == WM_RBUTTONUP || msg == WM_MBUTTONDOWN || msg == WM_MBUTTONUP ||
                          msg == WM_MOUSEWHEEL || msg == WM_MOUSEMOVE || msg == WM_KEYDOWN ||
                          msg == WM_KEYUP || msg == WM_CHAR)) {
        return 0;
    }

    return CallWindowProcW(OriginalWndProc, hWnd, msg, wParam, lParam);
}

static void execute_commands() {
    auto& renderer = D3D12Renderer::get();

    g_command_list->Close();
    renderer.command_queue()->ExecuteCommandLists(
        1, reinterpret_cast<ID3D12CommandList* const*>(&g_command_list));

    const auto current_fence_value = ++g_fence_value;
    renderer.command_queue()->Signal(g_fence, current_fence_value);
    if (g_fence->GetCompletedValue() < current_fence_value) {
        g_fence->SetEventOnCompletion(current_fence_value, g_fence_event);
        WaitForSingleObject(g_fence_event, INFINITE);
    }

    g_command_allocator->Reset();
    g_command_list->Reset(g_command_allocator, nullptr);
}

void D3D12Renderer::release_swap_chain_buffers() {
    if (!m_rtv_buffer_count || !m_rtv_buffers)
        return;

    mem::d_log("[D3D12Renderer] Releasing swap_chain buffers");

    // Release all render target buffers
    for (UINT i = 0; i < m_rtv_buffer_count; i++) {
        if (m_rtv_buffers[i]) {
            mem::d_log("[D3D12Renderer] Releasing buffer: {}", i);
            m_rtv_buffers[i]->Release();
            m_rtv_buffers[i] = nullptr;
        }
    }

    mem::d_log("[D3D12Renderer] Release swap_chain buffers complete");
}

void D3D12Renderer::get_swap_chain_buffers(UINT width, UINT height) {
    if (!m_rtv_buffer_count || !m_rtv_descriptor_heap || !g_device)
        return;

    D3D12_CPU_DESCRIPTOR_HANDLE descriptor_handle =
        m_rtv_descriptor_heap->GetCPUDescriptorHandleForHeapStart();

    mem::d_log("[D3D12Renderer] Allocating {} buffers", m_rtv_buffer_count);

    for (UINT i = 0; i < m_rtv_buffer_count; i++) {
        mem::d_log("[D3D12Renderer] Creating buffer: {}", i);
        HRESULT hr = m_swap_chain->GetBuffer(i, IID_PPV_ARGS(&m_rtv_buffers[i]));
        if (FAILED(hr)) {
            mem::d_log("[D3D12Renderer] GetBuffer {} failed", i);
            continue;
        }

        g_device->CreateRenderTargetView(m_rtv_buffers[i], nullptr, descriptor_handle);
        m_rtv_handles[i] = descriptor_handle;
        descriptor_handle.ptr += m_rtv_desc_increment;
    }

    mem::d_log("[D3D12Renderer] Get swap_chain buffers complete for {} buffers",
               m_rtv_buffer_count);

    if (width || height) {
       // nk_d3d12_resize(width, height);
    }
}

bool D3D12Renderer::setup_cbv_srv_heap() {
    D3D12_DESCRIPTOR_HEAP_DESC cbv_srv_desc_heap_desc{};
    cbv_srv_desc_heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    cbv_srv_desc_heap_desc.NumDescriptors = 1; // Only need 1 for ImGui font texture
    cbv_srv_desc_heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    cbv_srv_desc_heap_desc.NodeMask = 1;

    if (FAILED(g_device->CreateDescriptorHeap(&cbv_srv_desc_heap_desc,
        IID_PPV_ARGS(&m_cbv_srv_descriptor_heap)))) {
        mem::d_log("[D3D12Renderer] Setup CBV/SRV heap: CreateDescriptorHeap failed");
        return false;
    }

    m_cbv_srv_desc_increment =
        g_device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
    return true;
}

bool D3D12Renderer::initialize() {
    if (m_shutdown) {
        mem::d_log("[D3D12Renderer] Initialize: shutdown flag set");
        return false;
    }

    if (m_initialized) {
        return true;
    }

    if (!m_swap_chain) {
        mem::d_log("[D3D12Renderer] Initialize: swap_chain is null");
        return false;
    }

    if (!m_command_queue) {
        mem::d_log("[D3D12Renderer] Initialize: command_queue is null");
        return false;
    }

    // Get device from swap chain
    if (FAILED(m_swap_chain->GetDevice(__uuidof(ID3D12Device), reinterpret_cast<void**>(&g_device)))) {
        mem::d_log("[D3D12Renderer] Initialize: GetDevice failed");
        return false;
    }

    // Get swap chain description for buffer setup
    DXGI_SWAP_CHAIN_DESC sd{};
    if (FAILED(m_swap_chain->GetDesc(&sd))) {
        mem::d_log("[D3D12Renderer] Initialize: GetDesc failed");
        cleanup_device_resources();
        return false;
    }

    // Setup our presentation command resources
    if (!setup_command_resources()) {
        cleanup_device_resources();
        return false;
    }

    // Setup our render target resources (presentation management)
    m_rtv_buffer_count = sd.BufferCount;
    m_rtv_buffers = new ID3D12Resource * [m_rtv_buffer_count]();
    m_rtv_handles = new D3D12_CPU_DESCRIPTOR_HANDLE[m_rtv_buffer_count]();

    // Create descriptor heap for render targets
    if (!setup_render_target_heap()) {
        cleanup_presentation_resources();
        cleanup_device_resources();
        return false;
    }

    // CRITICAL: Create CBV/SRV descriptor heap for ImGui
       // CBV/SRV heap for ImGui
    {
        D3D12_DESCRIPTOR_HEAP_DESC hd = {};
        hd.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        hd.NumDescriptors = 1;
        hd.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        hd.NodeMask = 0;
        if (FAILED(g_device->CreateDescriptorHeap(&hd, IID_PPV_ARGS(&m_cbv_srv_descriptor_heap))))
            return false;
    }

    mem::d_log("[D3D12Renderer] BufferCount: {}", m_rtv_buffer_count);

    // Setup swap chain waitable object
    g_hSwapChainWaitableObject = m_swap_chain->GetFrameLatencyWaitableObject();

    // Get swap chain buffers
    get_swap_chain_buffers();

    // Get detailed swap chain description for window setup
    DXGI_SWAP_CHAIN_DESC1 sd1{};
    if (FAILED(m_swap_chain->GetDesc1(&sd1))) {
        mem::d_log("[D3D12Renderer] Initialize: GetDesc1 failed");
        return false;
    }

    // Setup window procedure hook
    // setup_window_hook(sd.OutputWindow);

    ImGui_ImplWin32_Init(sd.OutputWindow);

    // FIXED: Use CBV/SRV heap instead of RTV heap for ImGui
    ImGui_ImplDX12_Init(
        g_device,                         // ID3D12Device*
        m_rtv_buffer_count,               // number of back�\buffers
        DXGI_FORMAT_R8G8B8A8_UNORM,      // RTV format
        m_cbv_srv_descriptor_heap,        // CBV/SRV heap (NOT RTV heap!)
        m_cbv_srv_descriptor_heap->GetCPUDescriptorHandleForHeapStart(),
        m_cbv_srv_descriptor_heap->GetGPUDescriptorHandleForHeapStart());

    mem::d_log("[D3D12Renderer] Initialize success");
    m_initialized = true;
    return true;
}

void D3D12Renderer::start_input() {
    needsInput = true;
}

void D3D12Renderer::shutdown() {
    if (!m_initialized && !m_shutdown)
        return;

    m_mutex.lock();

    m_shutdown = true;

    // Clean up nuklear
    if (m_nk_ctx) {
        nk_d3d12_shutdown();
        m_nk_ctx = nullptr;
    }

    // Clean up presentation resources
    cleanup_presentation_resources();

    // Clean up command resources
    cleanup_command_resources();

    // Clean up device
    cleanup_device_resources();

    mem::d_log("[D3D12Renderer] Cleanup success");
    m_initialized = false;
    m_mutex.unlock();
}


void D3D12Renderer::render() {
    if (!m_initialized || !g_command_list || !g_command_allocator)
    {
        mem::d_log("[D3D12Renderer] Render: Missing some important shit");
        return;
    }
    if (!m_swap_chain || !m_rtv_buffers || !m_rtv_handles) {
        mem::d_log("[D3D12Renderer] Render: missing presentation resources");
        return;
    }

   // m_mutex.lock();
    mem::d_log("[D3D12Renderer] Render: inside lock");
    UINT rtv_index = m_swap_chain->GetCurrentBackBufferIndex();
    mem::d_log("[D3D12Renderer] Render: before reset");
    // Reset our command resources for this frame
    g_command_allocator->Reset();
    g_command_list->Reset(g_command_allocator, nullptr);
    mem::d_log("[D3D12Renderer] Render: after reset");
    // Transition render target to render state
    D3D12_RESOURCE_BARRIER resource_barrier{};
    resource_barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    resource_barrier.Transition.pResource = m_rtv_buffers[rtv_index];
    resource_barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    resource_barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    resource_barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    resource_barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;

    g_command_list->ResourceBarrier(1, &resource_barrier);
    mem::d_log("[D3D12Renderer] Render: after ResourceBarrier");
    // Set our render target
    g_command_list->OMSetRenderTargets(1, &m_rtv_handles[rtv_index], FALSE, nullptr);
    
    mem::d_log("[D3D12Renderer] Render: after OMSetRenderTargets");
    //Rmem::d_log("[D3D12Renderer] Render: after ResourceBarrier");ender Imgui
    mem::d_log("[D3D12Renderer] Render: Attempting render");
    // CRITICAL: Set the CBV/SRV descriptor heap before ImGui rendering
    ID3D12DescriptorHeap* descriptor_heaps[] = { m_cbv_srv_descriptor_heap };
    g_command_list->SetDescriptorHeaps(_countof(descriptor_heaps), descriptor_heaps);
    mem::d_log("[D3D12Renderer] Render: after SetDescriptorHeaps");
    ImGui::Render();
    mem::d_log("[D3D12Renderer] Render: past  ImGui::Render();");
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), g_command_list);
    mem::d_log("[D3D12Renderer] Render: render complete");
    // Transition render target to present state
    resource_barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    resource_barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    g_command_list->ResourceBarrier(1, &resource_barrier);
    mem::d_log("[D3D12Renderer] Render: after ResourceBarrier");
    // Execute commands
    execute_commands();
    mem::d_log("[D3D12Renderer] Render: execute_commands");
 //   m_mutex.unlock();


}

void D3D12Renderer::draw() {
    if (!initialize()) {
        mem::d_log("[D3D12Renderer] Initialize failed, aborting draw");
        return;
    }

    if (!menu_is_open)
        return;

    m_mutex.lock();

    start_input();

    /* GUI */
    if (nk_begin(m_nk_ctx, "Demo", nk_rect(50, 50, 230, 250),
                 NK_WINDOW_BORDER | NK_WINDOW_MOVABLE | NK_WINDOW_SCALABLE | NK_WINDOW_MINIMIZABLE |
                     NK_WINDOW_TITLE)) {
        enum {
            EASY,
            HARD
        };
        static int op = EASY;
        static int property = 20;

        nk_layout_row_static(m_nk_ctx, 30, 80, 1);
        if (nk_button_label(m_nk_ctx, "button")) {
            // Button pressed - implement functionality here
        }
        nk_layout_row_dynamic(m_nk_ctx, 30, 2);
        if (nk_option_label(m_nk_ctx, "easy", op == EASY))
            op = EASY;
        if (nk_option_label(m_nk_ctx, "hard", op == HARD))
            op = HARD;
        nk_layout_row_dynamic(m_nk_ctx, 22, 1);
        nk_property_int(m_nk_ctx, "Compression:", 0, &property, 100, 10, 1);

        nk_layout_row_dynamic(m_nk_ctx, 20, 1);
        nk_label(m_nk_ctx, "background:", NK_TEXT_LEFT);
        nk_layout_row_dynamic(m_nk_ctx, 25, 1);

        static struct nk_colorf bg;
        if (nk_combo_begin_color(m_nk_ctx, nk_rgb_cf(bg),
                                 nk_vec2(nk_widget_width(m_nk_ctx), 400))) {
            nk_layout_row_dynamic(m_nk_ctx, 120, 1);
            bg = nk_color_picker(m_nk_ctx, bg, NK_RGBA);
            nk_layout_row_dynamic(m_nk_ctx, 25, 1);
            bg.r = nk_propertyf(m_nk_ctx, "#R:", 0, bg.r, 1.0f, 0.01f, 0.005f);
            bg.g = nk_propertyf(m_nk_ctx, "#G:", 0, bg.g, 1.0f, 0.01f, 0.005f);
            bg.b = nk_propertyf(m_nk_ctx, "#B:", 0, bg.b, 1.0f, 0.01f, 0.005f);
            bg.a = nk_propertyf(m_nk_ctx, "#A:", 0, bg.a, 1.0f, 0.01f, 0.005f);
            nk_combo_end(m_nk_ctx);
        }

        nk_end(m_nk_ctx);
    }

    m_mutex.unlock();
}

// Private helper methods
bool D3D12Renderer::setup_command_resources() {
    g_fence_event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (!g_fence_event) {
        mem::d_log("[D3D12Renderer] Setup command resources: fence_event creation failed");
        return false;
    }

    if (FAILED(g_device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&g_fence)))) {
        mem::d_log("[D3D12Renderer] Setup command resources: CreateFence failed");
        CloseHandle(g_fence_event);
        g_fence_event = nullptr;
        return false;
    }



    if (FAILED(g_device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
                                                IID_PPV_ARGS(&g_command_allocator)))) {
        mem::d_log("[D3D12Renderer] Setup command resources: CreateCommandAllocator failed");
        g_fence->Release();
        g_fence = nullptr;
        CloseHandle(g_fence_event);
        g_fence_event = nullptr;
        return false;
    }



    if (FAILED(g_device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_command_allocator,
                                           nullptr, IID_PPV_ARGS(&g_command_list)))) {
        mem::d_log("[D3D12Renderer] Setup command resources: CreateCommandList failed");
        g_command_allocator->Release();
        g_command_allocator = nullptr;
        g_fence->Release();
        g_fence = nullptr;
        CloseHandle(g_fence_event);
        g_fence_event = nullptr;
        return false;
    }
    m_pFrameContextArray = new FrameContext[m_rtv_buffer_count];

    // Command allocators
    for (UINT i = 0; i < m_rtv_buffer_count; ++i)
    {
        if (FAILED(g_device->CreateCommandAllocator(
            D3D12_COMMAND_LIST_TYPE_DIRECT,
            IID_PPV_ARGS(&m_pFrameContextArray[i].CommandAllocator))))
            return false;
    }
    return true;
}

bool D3D12Renderer::setup_render_target_heap() {
    D3D12_DESCRIPTOR_HEAP_DESC rtv_desc_heap_desc{};
    rtv_desc_heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_desc_heap_desc.NumDescriptors = m_rtv_buffer_count;
    rtv_desc_heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    rtv_desc_heap_desc.NodeMask = 1;

    if (FAILED(g_device->CreateDescriptorHeap(&rtv_desc_heap_desc,
                                              IID_PPV_ARGS(&m_rtv_descriptor_heap)))) {
        mem::d_log("[D3D12Renderer] Setup render target heap: CreateDescriptorHeap failed");
        return false;
    }

    m_rtv_desc_increment =
        g_device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    return true;
}

void D3D12Renderer::setup_window_hook(HWND window) {
    OriginalWndProc = reinterpret_cast<WNDPROC>(
        SetWindowLongPtr(window, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
}

void D3D12Renderer::setup_nuklear_fonts() {
    struct nk_font_atlas* atlas;
    nk_d3d12_font_stash_begin(&atlas);
    nk_d3d12_font_stash_end(g_command_list);
    execute_commands();
    nk_d3d12_font_stash_cleanup();
}

void D3D12Renderer::cleanup_presentation_resources() {
    if (m_rtv_buffers) {
        for (UINT i = 0; i < m_rtv_buffer_count; i++) {
            if (m_rtv_buffers[i]) {
                m_rtv_buffers[i]->Release();
            }
        }
        delete[] m_rtv_buffers;
        m_rtv_buffers = nullptr;
    }

    if (m_rtv_handles) {
        delete[] m_rtv_handles;
        m_rtv_handles = nullptr;
    }

    if (m_rtv_descriptor_heap) {
        m_rtv_descriptor_heap->Release();
        m_rtv_descriptor_heap = nullptr;
    }

    m_rtv_buffer_count = 0;
}

void D3D12Renderer::cleanup_command_resources() {
    if (g_command_list) {
        g_command_list->Release();
        g_command_list = nullptr;
    }
    if (g_command_allocator) {
        g_command_allocator->Release();
        g_command_allocator = nullptr;
    }
    if (g_fence) {
        g_fence->Release();
        g_fence = nullptr;
    }
    if (g_fence_event) {
        CloseHandle(g_fence_event);
        g_fence_event = nullptr;
    }
}

void D3D12Renderer::cleanup_device_resources() {
    if (g_device) {
        g_device->Release();
        g_device = nullptr;
    }
}