#include "d3d11_manager.hpp"
#include "mem/mem.h"

bool D3D11Manager::Initialize(IDXGISwapChain* pSwapChain) {
    if (m_pd3dDevice)
        return true;

    m_pSwapChain = pSwapChain;

    HRESULT hr = pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&m_pd3dDevice);
    if (FAILED(hr) || !m_pd3dDevice) {
        mem::d_log("[D3D11] Failed to get device from swap chain");
        return false;
    }

    m_pd3dDevice->GetImmediateContext(&m_pd3dDeviceContext);
    if (!m_pd3dDeviceContext) {
        mem::d_log("[D3D11] Failed to get device context");
        return false;
    }

    DXGI_SWAP_CHAIN_DESC sd;
    pSwapChain->GetDesc(&sd);
    m_hwnd = sd.OutputWindow;

    if (!CreateRenderTarget()) {
        mem::d_log("[D3D11] Failed to create render target");
        return false;
    }

    return true;
}

void D3D11Manager::Shutdown() {
    CleanupRenderTarget();
    if (m_pd3dDeviceContext) { m_pd3dDeviceContext->Release(); m_pd3dDeviceContext = nullptr; }
    if (m_pd3dDevice) { m_pd3dDevice->Release(); m_pd3dDevice = nullptr; }
    m_pSwapChain = nullptr;  // Don't release as we don't own it
    m_hwnd = nullptr;
}

bool D3D11Manager::CreateRenderTarget() {
    if (!m_pSwapChain || !m_pd3dDevice)
        return false;

    ID3D11Texture2D* pBackBuffer;
    if (SUCCEEDED(m_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer)))) {
        m_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &m_mainRenderTargetView);
        pBackBuffer->Release();
    }
}

void D3D11Manager::CleanupRenderTarget() {
    if (m_mainRenderTargetView) { m_mainRenderTargetView->Release(); m_mainRenderTargetView = nullptr; }
}

void D3D11Manager::RecreateRenderTarget() {
    CleanupRenderTarget();
    CreateRenderTarget();
}

void D3D11Manager::HandleFullscreenTransition() {
    if (!m_pSwapChain || !m_pd3dDevice || !m_pd3dDeviceContext)
        return;

    CleanupRenderTarget();
    m_pd3dDeviceContext->OMSetRenderTargets(0, 0, 0);
    m_pd3dDeviceContext->Flush();

    BOOL fullscreen;
    if (SUCCEEDED(m_pSwapChain->GetFullscreenState(&fullscreen, NULL))) {
        DXGI_SWAP_CHAIN_DESC desc;
        m_pSwapChain->GetDesc(&desc);

        HRESULT hr = m_pSwapChain->SetFullscreenState(!fullscreen, NULL);
        if (SUCCEEDED(hr)) {
            Sleep(100);  // Wait for transition

            RECT rect;
            GetClientRect(m_hwnd, &rect);

            hr = m_pSwapChain->ResizeBuffers(
                desc.BufferCount,
                rect.right - rect.left,
                rect.bottom - rect.top,
                desc.BufferDesc.Format,
                desc.Flags
            );

            if (SUCCEEDED(hr)) {
                CreateRenderTarget();
            }
        }
    }
}