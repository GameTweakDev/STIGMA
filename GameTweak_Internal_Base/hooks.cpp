#include "hooks.hpp"
#include "macros.h"
#include "../hooks/hooks.h"
#include "../render/D3D12.h"
#include "../mem/mem.h"
bool Hooks::isWindows11OrLater()
{
	typedef NTSTATUS(WINAPI* RtlGetVersionPtr)(PRTL_OSVERSIONINFOW);

	RTL_OSVERSIONINFOW osVersionInfo = { 0 };
	osVersionInfo.dwOSVersionInfoSize = sizeof(RTL_OSVERSIONINFOW);

	HMODULE hNtdll = GetModuleHandleA("ntdll");
	if (!hNtdll) return false;

	RtlGetVersionPtr RtlGetVersion = reinterpret_cast<RtlGetVersionPtr>(
		GetProcAddress(hNtdll, "RtlGetVersion"));

	if (!RtlGetVersion) return false;

	NTSTATUS status = RtlGetVersion(&osVersionInfo);
	if (status != 0) {
		return false;
	}

	// Windows 11 starts at build 22000
	if (osVersionInfo.dwMajorVersion > 10 ||
		(osVersionInfo.dwMajorVersion == 10 && osVersionInfo.dwBuildNumber >= 22000)) {
		return true;
	}
	return false;
}

bool Hooks::Initialize() {
	return InitializeKiero();
}

void Hooks::Shutdown() {
	// Restore original window procedure
	if (g_wndProcOriginal) {
		SetWindowLongPtr(D3D12DEVICE.GetWindow(), GWLP_WNDPROC, (LONG_PTR)g_wndProcOriginal);
		g_wndProcOriginal = nullptr;
	}

	// Shutdown kiero
	kiero::shutdown();
}
void* qpc_import = nullptr;
bool Hooks::InitializeKiero() {
#if DX11
	{
		auto status = kiero::init(kiero::RenderType::Enum::D3D11);
		if (status != kiero::Status::Success)
			return false;

		return kiero::bind(8, (void**)&g_presentOriginal, HookPresent) == kiero::Status::Success;
	}
#endif
#if DX12
	{
		mem::d_log("[DllMain] Starting D3D12 Nuklear Hook...");

		// Initialize QueryPerformanceCounter hook to find SwapChain
		mem::module hdxgi(L"dxgi.dll");
		if (!hdxgi.loaded()) {
			mem::d_log("[DllMain] Failed to find dxgi.dll");
			return false;
		}

		// Global because needed for removing hook later on.
		qpc_import = hdxgi.get_import("QueryPerformanceCounter");
		if (!qpc_import) {
			mem::d_log("[DllMain] Failed to find QueryPerformanceCounter import");
			return false;
		}

		// Install QPC hook to discover SwapChain and hook Present & ResizeBuffers
		auto qpc_hook_status = g_qpc_hook.install_import(
			&qpc_import, reinterpret_cast<void*>(hooks::QueryPerformanceCounter_hk));
		mem::d_log("[DllMain] QPC hook status {}", (int)qpc_hook_status);

		mem::d_log("[DllMain] Hook initialization complete");
		return true;
		/*auto status = kiero::init(kiero::RenderType::Enum::D3D12);

		if (status != kiero::Status::Success)
			return false;
		return kiero::bind(140, (void**)&g_presentOriginal, HookPresent) == kiero::Status::Success;*/
	}
#endif
}

LRESULT __stdcall Hooks::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	// Handle specific messages that commonly cause issues
	switch (msg) {
	case WM_NCHITTEST: {
		// Let the original handle hit testing first
		LRESULT result = CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
		// If the original says it's not in client area, respect that
		if (result != HTCLIENT) {
			return result;
		}
		// Otherwise, ensure it's treated as client area for mouse input
		return HTCLIENT;
	}

	case WM_SETCURSOR: {
		// Let the game handle cursor setting
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}

	case WM_ACTIVATE:
	case WM_ACTIVATEAPP:
	case WM_SETFOCUS:
	case WM_KILLFOCUS: {
		// These are critical for tabbing in/out - let game handle them first
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}

	case WM_MOUSEACTIVATE: {
		// Ensure mouse activation works properly
		LRESULT result = CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
		// If game wants to activate, let it
		return result != MA_NOACTIVATE ? result : MA_ACTIVATE;
	}

	case WM_INPUT: {
		// Raw input - let game handle it completely
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}

				 // Mouse messages - ensure they're passed through properly
	case WM_LBUTTONDOWN:
	case WM_LBUTTONUP:
	case WM_RBUTTONDOWN:
	case WM_RBUTTONUP:
	case WM_MBUTTONDOWN:
	case WM_MBUTTONUP:
	case WM_XBUTTONDOWN:
	case WM_XBUTTONUP:
	case WM_MOUSEMOVE:
	case WM_MOUSEWHEEL:
	case WM_MOUSEHWHEEL: {
		// Your custom mouse handling code can go here if needed
		// For now, just pass through to original
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}

					   // Keyboard messages
	case WM_KEYDOWN:
	case WM_KEYUP:
	case WM_SYSKEYDOWN:
	case WM_SYSKEYUP:
	case WM_CHAR: {
		// Your custom keyboard handling code can go here if needed
		// For now, just pass through to original
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}

	default: {
		// For all other messages, just pass through
		return CallWindowProc(g_wndProcOriginal, hWnd, msg, wParam, lParam);
	}
	}
}

void Hooks::HandleWindowMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_KEYUP:
		if (wParam == VK_INSERT) {
			Menu::Toggle();
		}
		break;

	case WM_SYSKEYDOWN:
		if (wParam == VK_RETURN && (lParam & (1 << 29))) {
			D3D12DEVICE.HandleFullscreenTransition();
		}
		break;

	case WM_KEYDOWN:
		if (wParam == VK_F11) {
			D3D12DEVICE.HandleFullscreenTransition();
		}
		break;

		/*  case WM_SIZE:
			  if (D3D12DEVICE.Device() && wParam != SIZE_MINIMIZED) {
				  D3D12DEVICE.RecreateRenderTarget();
			  }
			  break;

		  case WM_DISPLAYCHANGE:
			  if (D3D12DEVICE.Device()) {
				  D3D12DEVICE.RecreateRenderTarget();
			  }
			  break;

		  case WM_ACTIVATEAPP:
			  if (D3D12DEVICE.Device()) {
				  BOOL fullscreen;
				  if (SUCCEEDED(D3D12DEVICE.SwapChain()->GetFullscreenState(&fullscreen, NULL)) && fullscreen) {
					  D3D12DEVICE.RecreateRenderTarget();
				  }
			  }
			  break;
		  }*/
	}
}

HRESULT __stdcall Hooks::HookPresent(uintptr_t ecx, UINT SyncInterval, UINT Flags) {
	static bool initialized = false;
	
#if DX11
	if (!initialized && ecx) {

		IDXGISwapChain3* pSwapChain = (IDXGISwapChain3*)(ecx);

		if (DEVICE.Initialize(pSwapChain)) {
			// Setup window procedure hook
			//g_wndProcOriginal = (WNDPROC)SetWindowLongPtr(DEVICE.GetWindow(), GWLP_WNDPROC, (LONG_PTR)WndProc);

			// Initialize menu system
			if (Menu::Initialize()) {
				initialized = true;
				//Skip a frame
			
				return g_presentOriginal(ecx, SyncInterval, Flags);
			}
		}
	}
#endif

#if DX12

	auto& renderer = D3D12::get();

	// Initialize SwapChain if not already done
	if (!renderer.swap_chain()) {
		renderer.set_swap_chain(reinterpret_cast<IDXGISwapChain3*>(ecx));
		mem::d_log("[Present] SwapChain initialized at {:#x}",
			reinterpret_cast<uintptr_t>(renderer.swap_chain()));
	}

	// Initialize CommandQueue if not already done
	if (!renderer.command_queue()) {
		mem::module hdxgi(L"dxgi.dll");
		auto result = hdxgi.scan("8B 87 ? ? ? ? 89 06 8B 87 ? ? ? ? 89 46 04 8B 87");
		if (result.cast()) {
			auto commandQueueOffset = result.self_offset(2).get<unsigned int>() - 0x8;
			auto command_queue = *reinterpret_cast<ID3D12CommandQueue**>(ecx + commandQueueOffset);
			renderer.set_command_queue(command_queue);
			mem::d_log("[Present] CommandQueue initialized at {:#x} (offset: {:#x})",
				reinterpret_cast<uintptr_t>(renderer.command_queue()), commandQueueOffset);
			
		}
		else {
			mem::d_log("[Present] Failed to find CommandQueue pattern");
		}
	}

	//Checks and drawing
	if (renderer.swap_chain() && renderer.command_queue() && !(Flags & DXGI_PRESENT_TEST)) {
		if (!initialized)
		{
			mem::d_log("[Present] Starting initialization");
			if (Menu::Initialize())
			{
				initialized = true;
				mem::d_log("[Present] Callbackl first time");
				auto original = g_present_hook.get_original<HRESULT(__fastcall*)(uintptr_t, UINT, UINT)>();
				return original ? original(ecx, SyncInterval, Flags) : E_FAIL;
				//				initialized = true;
				//				//Skip a frame
				//				return g_presentOriginal(pSwapChain, SyncInterval, Flags);
			}
		}
		if (initialized)
		{
			if (GetAsyncKeyState(VK_INSERT) & 1)
			{
				Menu::Toggle();
			}

			// Render menu
			Menu::Render();
			mem::d_log("[Present] FULLY RENDERED");
			// Render the ESP
			Cheat::InitializeHooks();
		}
	}
	mem::d_log("[Present] Calling original");
	// Call original Present function
	auto original = g_present_hook.get_original<HRESULT(__fastcall*)(uintptr_t, UINT, UINT)>();
	return original ? original(ecx, SyncInterval, Flags) : E_FAIL;
	//if (!initialized && ecx) {
	//	ID3D12CommandQueue* command = nullptr;
	//	// Initialize D3D12Manager
	//	/*if (!isWindows11OrLater())
	//		command = *reinterpret_cast<decltype(pCommandQueue)*>((std::uintptr_t)pSwapChain + 0x118);
	//	else
	//		command = *reinterpret_cast<decltype(pCommandQueue)*>((std::uintptr_t)pSwapChain + 0x168);*/
	//		if (D3D12DEVICE.Initialize(pSwapChain, command)) {
	//			// Setup window procedure hook
	//			//g_wndProcOriginal = (WNDPROC)SetWindowLongPtr(D3D12DEVICE.GetWindow(), GWLP_WNDPROC, (LONG_PTR)WndProc);

	//			// Initialize menu system
	//			
	//		}
	//}
#endif

	if (!initialized)
		return g_presentOriginal(ecx, SyncInterval, Flags);

	if (GetAsyncKeyState(VK_INSERT) & 1)
	{
		Menu::Toggle();
	}

	// Render menu
	Menu::Render();

	return g_presentOriginal(ecx, SyncInterval, Flags);
}