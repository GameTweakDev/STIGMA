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

HRESULT __fastcall hooks::ResizeBuffers_hk(uintptr_t ecx, UINT BufferCount, UINT Width, UINT Height,
                                           DXGI_FORMAT NewFormat, UINT SwapChainFlags) {
    HRESULT hr = S_OK;
    auto& renderer = D3D12::get();

    // Lock the D3D12 context while handling resize
    renderer.mutex().lock();

    // Release existing swap chain buffers before resize
    renderer.release_swap_chain_buffers();
    mem::d_log("[ResizeBuffers] Window resize triggered: {}x{}", Width, Height);

    // Call original ResizeBuffers function
    auto original =
        g_resize_buffers_hook
            .get_original<HRESULT(__fastcall*)(uintptr_t, UINT, UINT, UINT, DXGI_FORMAT, UINT)>();
    if (original) {
        hr = original(ecx, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    }

    // If resize succeeded, recreate swap chain buffers with new dimensions
    if (SUCCEEDED(hr)) {
        renderer.get_swap_chain_buffers(Width, Height);
    } else {
        mem::d_log("[ResizeBuffers] ResizeBuffers failed with HRESULT {:#x}",
                   static_cast<unsigned int>(hr));
    }

    renderer.mutex().unlock();

    return hr;
}