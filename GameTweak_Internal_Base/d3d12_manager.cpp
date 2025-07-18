#include "d3d12_manager.hpp"
#include <stdexcept>

D3D12Manager& D3D12Manager::Get()
{
    static D3D12Manager instance;
    return instance;
}

bool D3D12Manager::Initialize(IDXGISwapChain3* pSwapChain, ID3D12CommandQueue* pCommandQueue)
{
    if (m_isReady)
        clear();

    m_pSwapChain = pSwapChain;
    m_pCommandQueue = pCommandQueue;

    // Grab device
    if (FAILED(m_pSwapChain->GetDevice(
        __uuidof(ID3D12Device),
        reinterpret_cast<void**>(&m_pDevice))))
        return false;

    // Store HWND
    {
        DXGI_SWAP_CHAIN_DESC scd;
        m_pSwapChain->GetDesc(&scd);
        m_hWnd = scd.OutputWindow;
    }

    // Count buffers
    {
        DXGI_SWAP_CHAIN_DESC1 desc1;
        if (FAILED(m_pSwapChain->GetDesc1(&desc1)))
            return false;
        m_NUM_BACK_BUFFERS = desc1.BufferCount;
        m_NUM_FRAMES_IN_FLIGHT = desc1.BufferCount;
    }

    // RTV heap
    {
        D3D12_DESCRIPTOR_HEAP_DESC hd = {};
        hd.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        hd.NumDescriptors = m_NUM_BACK_BUFFERS;
        hd.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        hd.NodeMask = 1;
        if (FAILED(m_pDevice->CreateDescriptorHeap(&hd, IID_PPV_ARGS(&m_pRtvDescHeap))))
            return false;
    }

    // CBV/SRV heap for ImGui
    {
        D3D12_DESCRIPTOR_HEAP_DESC hd = {};
        hd.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        hd.NumDescriptors = 1;
        hd.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        hd.NodeMask = 0;
        if (FAILED(m_pDevice->CreateDescriptorHeap(&hd, IID_PPV_ARGS(&m_pSrvDescHeap))))
            return false;
    }

    // Fence
    if (FAILED(m_pDevice->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&m_pFence))))
        return false;

    // Allocate per-frame arrays
    m_pFrameContextArray = new FrameContext[m_NUM_FRAMES_IN_FLIGHT];
    m_pResourceArray = new ID3D12Resource * [m_NUM_BACK_BUFFERS];
    m_pRTVDescriptorArray = new D3D12_CPU_DESCRIPTOR_HANDLE[m_NUM_BACK_BUFFERS];

    // Command allocators
    for (UINT i = 0; i < m_NUM_FRAMES_IN_FLIGHT; ++i)
    {
        if (FAILED(m_pDevice->CreateCommandAllocator(
            D3D12_COMMAND_LIST_TYPE_DIRECT,
            IID_PPV_ARGS(&m_pFrameContextArray[i].CommandAllocator))))
            return false;
    }

    // Bake RTV descriptors
    {
        SIZE_T inc = m_pDevice->GetDescriptorHandleIncrementSize(
            D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
        auto handle = m_pRtvDescHeap->GetCPUDescriptorHandleForHeapStart();
        for (UINT i = 0; i < m_NUM_BACK_BUFFERS; ++i)
        {
            m_pRTVDescriptorArray[i] = handle;
            handle.ptr += inc;
        }
    }

    // Single command-list
    if (FAILED(m_pDevice->CreateCommandList(
        0,
        D3D12_COMMAND_LIST_TYPE_DIRECT,
        m_pFrameContextArray[0].CommandAllocator,
        nullptr,
        IID_PPV_ARGS(&m_pCommandList))) ||
        FAILED(m_pCommandList->Close()))
        return false;

    // Frame-latency object
    m_hSwapChainWaitableObject = m_pSwapChain->GetFrameLatencyWaitableObject();

    // Fence event
    m_hFenceEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    if (!m_hFenceEvent) return false;

    // Back-buffers + RTVs
    for (UINT i = 0; i < m_NUM_BACK_BUFFERS; ++i)
    {
        ID3D12Resource* buf = nullptr;
        if (FAILED(m_pSwapChain->GetBuffer(i, IID_PPV_ARGS(&buf))))
            return false;
        m_pDevice->CreateRenderTargetView(buf, nullptr, m_pRTVDescriptorArray[i]);
        m_pResourceArray[i] = buf;
    }

    m_isReady = true;
    return true;
}

void D3D12Manager::SetupImGui()
{
    // Win32 hookup
    ImGui_ImplWin32_Init(m_hWnd);

    // DX12 hookup
    ImGui_ImplDX12_Init(
        m_pDevice,                         // ID3D12Device*
        m_NUM_FRAMES_IN_FLIGHT,            // number of back©\buffers
        DXGI_FORMAT_R8G8B8A8_UNORM,                       // RTV format we saved
        m_pSrvDescHeap,                    // your CBV/SRV heap
        m_pSrvDescHeap->GetCPUDescriptorHandleForHeapStart(),
        m_pSrvDescHeap->GetGPUDescriptorHandleForHeapStart());
}

void D3D12Manager::BeginFrame()
{
    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
}

void D3D12Manager::EndFrame()
{
    FrameContext* frameCtxt = WaitForNextFrameResources();
    UINT idx = m_pSwapChain->GetCurrentBackBufferIndex();

    // reset allocator & transition to RENDER_TARGET
    frameCtxt->CommandAllocator->Reset();
    D3D12_RESOURCE_BARRIER br = {};
    br.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    br.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    br.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    br.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    br.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    br.Transition.pResource = m_pResourceArray[idx];

    m_pCommandList->Reset(frameCtxt->CommandAllocator, nullptr);
    m_pCommandList->ResourceBarrier(1, &br);

    // bind RTV
    m_pCommandList->OMSetRenderTargets(
        1,
        &m_pRTVDescriptorArray[idx],
        FALSE,
        nullptr);

    // bind ImGui heap
    ID3D12DescriptorHeap* heaps[] = { m_pSrvDescHeap };
    m_pCommandList->SetDescriptorHeaps(1, heaps);

    // render ImGui
    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), m_pCommandList);

    // transition back to PRESENT
    br.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    br.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    m_pCommandList->ResourceBarrier(1, &br);

    // execute & fence
    m_pCommandList->Close();
    ID3D12CommandList* lists[] = { m_pCommandList };
    m_pCommandQueue->ExecuteCommandLists(1, lists);

    UINT64 fv = m_fenceLastSignaledValue + 1;
    m_pCommandQueue->Signal(m_pFence, fv);
    m_fenceLastSignaledValue = fv;
    frameCtxt->FenceValue = fv;
}

void D3D12Manager::HandleFullscreenTransition()
{
    if (!m_pSwapChain) return;
    BOOL fs = FALSE;
    if (SUCCEEDED(m_pSwapChain->GetFullscreenState(&fs, nullptr)))
    {
        // toggle
        if (SUCCEEDED(m_pSwapChain->SetFullscreenState(!fs, nullptr)))
        {
            Sleep(100);
            RECT rc; GetClientRect(m_hWnd, &rc);
            DXGI_SWAP_CHAIN_DESC desc;
            m_pSwapChain->GetDesc(&desc);
            m_pSwapChain->ResizeBuffers(
                desc.BufferCount,
                rc.right - rc.left,
                rc.bottom - rc.top,
                desc.BufferDesc.Format,
                desc.Flags);

            // re-create RTV views
            for (UINT i = 0; i < m_NUM_BACK_BUFFERS; ++i)
            {
                if (m_pResourceArray[i]) m_pResourceArray[i]->Release();
                ID3D12Resource* buf = nullptr;
                m_pSwapChain->GetBuffer(i, IID_PPV_ARGS(&buf));
                m_pDevice->CreateRenderTargetView(buf, nullptr, m_pRTVDescriptorArray[i]);
                m_pResourceArray[i] = buf;
            }
        }
    }
}

void D3D12Manager::Shutdown()
{
    clear();
}

D3D12Manager::FrameContext* D3D12Manager::WaitForNextFrameResources()
{
    m_frameIndex++;
    UINT idx = m_frameIndex % m_NUM_FRAMES_IN_FLIGHT;
    // frame latency
    WaitForSingleObject(m_hSwapChainWaitableObject, INFINITE);

    // fence
    FrameContext* fc = &m_pFrameContextArray[idx];
    if (fc->FenceValue &&
        m_pFence->GetCompletedValue() < fc->FenceValue)
    {
        m_pFence->SetEventOnCompletion(fc->FenceValue, m_hFenceEvent);
        WaitForSingleObject(m_hFenceEvent, INFINITE);
    }
    return fc;
}

void D3D12Manager::_clear()
{
    if (m_pFence) { m_pFence->Release();               m_pFence = nullptr; }
    if (m_pSrvDescHeap) { m_pSrvDescHeap->Release();         m_pSrvDescHeap = nullptr; }
    if (m_pRtvDescHeap) { m_pRtvDescHeap->Release();         m_pRtvDescHeap = nullptr; }
    if (m_pCommandList) { m_pCommandList->Release();         m_pCommandList = nullptr; }
    // host-owned
    m_pCommandQueue = nullptr;
    m_pDevice = nullptr;
    m_pSwapChain = nullptr;

    if (m_pFrameContextArray)
    {
        for (UINT i = 0; i < m_NUM_FRAMES_IN_FLIGHT; ++i)
        {
            if (m_pFrameContextArray[i].CommandAllocator)
            {
                m_pFrameContextArray[i].CommandAllocator->Release();
            }
        }
        delete[] m_pFrameContextArray;
        m_pFrameContextArray = nullptr;
    }
    if (m_pResourceArray)
    {
        for (UINT i = 0; i < m_NUM_BACK_BUFFERS; ++i)
            if (m_pResourceArray[i]) m_pResourceArray[i]->Release();
        delete[] m_pResourceArray;
        m_pResourceArray = nullptr;
    }
    if (m_pRTVDescriptorArray) { delete[] m_pRTVDescriptorArray; m_pRTVDescriptorArray = nullptr; }
    if (m_hFenceEvent) { CloseHandle(m_hFenceEvent); m_hFenceEvent = nullptr; }

    m_isReady = false;
    m_frameIndex = m_fenceLastSignaledValue = 0;
    m_NUM_BACK_BUFFERS = m_NUM_FRAMES_IN_FLIGHT = 0;
}

void D3D12Manager::clear()
{
    if (!m_pFrameContextArray)
        return;

    FrameContext* fc = &m_pFrameContextArray[m_frameIndex % m_NUM_FRAMES_IN_FLIGHT];
    if (fc->FenceValue &&
        m_pFence->GetCompletedValue() < fc->FenceValue)
    {
        m_pFence->SetEventOnCompletion(fc->FenceValue, m_hFenceEvent);
        WaitForSingleObject(m_hFenceEvent, INFINITE);
    }
    _clear();
}
