#pragma once

// Windows & DirectX
#include "../macros.h"
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <memory>

// ImGui Core
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_dx12.h"
#include "imgui_freetype.h"

// Core Systems
#include "kiero.h"

// Custom UI Components
#include "custom_widgets/custom_widgets.hpp"
#include "custom_widgets/fonts.h"
#include "custom_widgets/textures.h"

// Common Types

typedef HRESULT(__stdcall* Present) (uintptr_t ecx, UINT SyncInterval, UINT Flags);
//typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

// Forward Declarations
class Menu;
class D3D11Manager;

// External Declarations
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);