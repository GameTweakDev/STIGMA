#pragma once

#include <Windows.h>
#include <d3d12.h>
#include <dxgi1_6.h>
#include <imgui.h>
#include <imgui_impl_dx12.h>
#include <imgui_impl_win32.h>

#define D3D12DEVICE D3D12Manager::Get()

class D3D12Manager
{
public:
    static D3D12Manager& Get();

    // Must be called once you have a valid DX12 swap-chain & command-queue
    bool Initialize(IDXGISwapChain3* pSwapChain, ID3D12CommandQueue* pCommandQueue);
    void SetupImGui();
    // Call at the start of your ImGui frame
    void BeginFrame();

    // Call at the end of your ImGui frame (will Present internally)
    void EndFrame();

    // Toggle fullscreen and resize buffers
    void HandleFullscreenTransition();

    // Tear down all DX12 & ImGui resources
    void Shutdown();

    // Access the HWND of the output window
    HWND GetWindow() const { return m_hWnd; }

private:
    D3D12Manager() = default;
    ~D3D12Manager() = default;
    D3D12Manager(const D3D12Manager&) = delete;
    D3D12Manager& operator=(const D3D12Manager&) = delete;

    struct FrameContext
    {
        ID3D12CommandAllocator* CommandAllocator = nullptr;
        UINT64                 FenceValue = 0;
    };

    // DX12 core
    IDXGISwapChain3* m_pSwapChain = nullptr;
    ID3D12Device* m_pDevice = nullptr;
    ID3D12CommandQueue* m_pCommandQueue = nullptr;
    ID3D12Fence* m_pFence = nullptr;
    ID3D12DescriptorHeap* m_pSrvDescHeap = nullptr;
    ID3D12DescriptorHeap* m_pRtvDescHeap = nullptr;
    ID3D12GraphicsCommandList* m_pCommandList = nullptr;
    HWND                        m_hWnd = nullptr;

    // Back-buffer & frame resources
    FrameContext* m_pFrameContextArray = nullptr;
    ID3D12Resource** m_pResourceArray = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE* m_pRTVDescriptorArray = nullptr;

    HANDLE                      m_hSwapChainWaitableObject = nullptr;
    HANDLE                      m_hFenceEvent = nullptr;

    UINT                        m_NUM_BACK_BUFFERS = 0;
    UINT                        m_NUM_FRAMES_IN_FLIGHT = 0;
    UINT                        m_frameIndex = 0;
    UINT64                      m_fenceLastSignaledValue = 0;

    bool                        m_isReady = false;

    // Helpers
    FrameContext* WaitForNextFrameResources();
    void          clear();   // waits on GPU, then calls _clear()
    void          _clear();  // immediately releases & deletes everything
};
