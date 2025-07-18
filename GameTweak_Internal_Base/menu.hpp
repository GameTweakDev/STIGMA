#pragma once
#include "framework.hpp"
#include "d3d11_manager.hpp"
#include "d3d12_manager.hpp"
#include "AutoConfigManager.h"
class Menu {
public:
    static bool Initialize();
    static void Shutdown();
    static void Render();
    static bool IsVisible() { return s_instance.m_visible; }
    static void Toggle() { s_instance.m_visible = !s_instance.m_visible; UpdateCursor(); }
    static void Show() { s_instance.m_visible = true; UpdateCursor(); }
    static void Hide() { s_instance.m_visible = false; UpdateCursor(); }

private:
    Menu() = default;

    // Core methods
    void OnInitialize();
    void OnShutdown();
    void OnRender();
    void LoadResources();

    // Menu rendering
    void BeginFrame();
    void EndFrame();
    void DrawMenu();
    void RenderLogo(const ImVec2& pos);
    void RenderSelections();
    void RenderContent();
    void RenderWatermark();

    //Aimbot
    void Aimbot_Tab();
    void Player_ESP_Tab();
    void NPC_ESP_Tab();
    void Item_ESP_Tab();
    void Local_Player_Tab();
    void Exploit_Tab();
    void Config_Tab();
    void Debug_Tab();

    // Utility
    static void UpdateCursor();

private:
    // State
    bool m_visible = true;
	int logo_counter = 0;
	bool logo_switch = false;

    //Configs
    AutoConfigManager config_manager;
    char create_config[128] = { "" };
    std::vector<std::string> config_list;
    int selected_config_index = -1;
    bool needs_config_refresh = true;

    // Static instance
    static Menu s_instance;
};