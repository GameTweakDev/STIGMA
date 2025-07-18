#pragma once
#include "framework.hpp"

class D3D11Manager {
public:
    static D3D11Manager& Get() {
        static D3D11Manager instance;
        return instance;
    }

    // Delete copy/move to ensure singleton
    D3D11Manager(const D3D11Manager&) = delete;
    D3D11Manager& operator=(const D3D11Manager&) = delete;

    bool Initialize(IDXGISwapChain* pSwapChain);
    void Shutdown();

    // Device access
    ID3D11Device* Device() { return m_pd3dDevice; }
    ID3D11DeviceContext* Context() { return m_pd3dDeviceContext; }
    IDXGISwapChain* SwapChain() { return m_pSwapChain; }
    ID3D11RenderTargetView* RenderTarget() { return m_mainRenderTargetView; }
    HWND GetWindow() { return m_hwnd; }

    // Render target management
    bool CreateRenderTarget();
    void CleanupRenderTarget();
    void RecreateRenderTarget();
    void HandleFullscreenTransition();

private:
    D3D11Manager() = default;
    ~D3D11Manager() = default;

    ID3D11Device* m_pd3dDevice = nullptr;
    ID3D11DeviceContext* m_pd3dDeviceContext = nullptr;
    IDXGISwapChain* m_pSwapChain = nullptr;
    ID3D11RenderTargetView* m_mainRenderTargetView = nullptr;
    HWND m_hwnd = nullptr;
};

#define DEVICE D3D11Manager::Get()