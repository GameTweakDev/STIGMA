#pragma once
#include "framework.hpp"
#include "d3d11_manager.hpp"
#include "d3d12_manager.hpp"
#include "menu.hpp"

class Hooks {
public:
    static bool Initialize();
    static void Shutdown();

    // Window Procedure
    static LRESULT __stdcall WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

    // D3D11 Hook
    static HRESULT __stdcall HookPresent(uintptr_t ecx, UINT SyncInterval, UINT Flags);
    static void __stdcall hkExecuteCommandLists(ID3D12CommandQueue* pCommandQueue, UINT NumCommandLists, ID3D12CommandList* const* ppCommandLists);
    // Original functions
    typedef void(__stdcall* ExecuteCommandLists)(ID3D12CommandQueue* pCommandQueue, UINT NumCommandLists, ID3D12CommandList* const* ppCommandLists);
    static inline ExecuteCommandLists oExecuteCommandLists = nullptr;
    static inline Present g_presentOriginal = nullptr;
    static inline WNDPROC g_wndProcOriginal = nullptr;

private:
    static bool isWindows11OrLater();
    static bool InitializeKiero();
    static void HandleWindowMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};