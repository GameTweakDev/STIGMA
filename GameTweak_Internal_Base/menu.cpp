#include "menu.hpp"
#include "Settings.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include "ItemSpawner.h"
#include "macros.h"
#include "render/D3D12.h"
Menu Menu::s_instance;
void DebugLog(const char* fmt, ...)
{
    // 1) Format into a local buffer
    constexpr int BUF_SIZE = 1024;
    char buffer[BUF_SIZE];

    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, BUF_SIZE, fmt, args);
    va_end(args);

    // Append CRLF
    strncat_s(buffer, "\r\n", BUF_SIZE);

    // 2) Find the Notepad main window
    //    Class name for Notepad is "Notepad"
    HWND hNotepad = FindWindowA("Notepad", NULL);
    if (!hNotepad) {
        // Fallback: sometimes the title is exactly "Untitled - Notepad"
        hNotepad = FindWindowA(NULL, "Untitled - Notepad");
        if (!hNotepad)
            return; // Notepad not open
    }

    // 3) Find the child Edit control
    HWND hEdit = FindWindowExA(hNotepad, NULL, "Edit", NULL);
    if (!hEdit)
        return;

    // 4) Move caret to end and insert text
    SendMessageA(hEdit, EM_SETSEL, (WPARAM)-1, (LPARAM)-1);
    SendMessageA(hEdit, EM_REPLACESEL, FALSE, (LPARAM)buffer);
}
bool Menu::Initialize() {
    s_instance.OnInitialize();
    return true;
}

void Menu::Shutdown() {
    s_instance.OnShutdown();
}

void Menu::Render() {
    s_instance.OnRender();
}

void Menu::OnInitialize() {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();

    // Configure flags
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
    io.ConfigFlags &= ~ImGuiConfigFlags_NoMouseCursorChange;

#if DX12
    auto& renderer = D3D12::get();
    renderer.initialize();
    
    //Setup Imgui
  //  D3D12DEVICE.SetupImGui();
#endif
    // Setup fonts with FreeType
    ImFontConfig cfg;
    cfg.FontBuilderFlags = ImGuiFreeTypeBuilderFlags_ForceAutoHint | ImGuiFreeTypeBuilderFlags_Bitmap;

    // Load all fonts
   // ImGui::GetIO().Fonts->AddFontFromMemoryTTF(poppins_semibold, sizeof(poppins_semibold), 18, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->poppins_selection = io.Fonts->AddFontFromMemoryTTF(poppins_semibold, sizeof(poppins_semibold), 18, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->poppins_widget = io.Fonts->AddFontFromMemoryTTF(poppins_semibold, sizeof(poppins_semibold), 16.5, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->icon = io.Fonts->AddFontFromMemoryTTF(glypher_icon, sizeof(glypher_icon), 18, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->inter_logo = io.Fonts->AddFontFromMemoryTTF(inter_bold, sizeof(inter_bold), 40, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->icon_child = io.Fonts->AddFontFromMemoryTTF(glypher_icon, sizeof(glypher_icon), 14, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->icon_cfg = io.Fonts->AddFontFromMemoryTTF(cfg_icons, sizeof(cfg_icons), 16, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    set->icon_micro = io.Fonts->AddFontFromMemoryTTF(glypher_icon, sizeof(glypher_icon), 7, &cfg, io.Fonts->GetGlyphRangesCyrillic());


#if DX11
    // Verify device and context are valid
    if (!DEVICE.Device() || !DEVICE.Context()) {
        return;
    }

    if (!ImGui_ImplWin32_Init(DEVICE.GetWindow())) {
        return;
    }

    if (!ImGui_ImplDX11_Init(DEVICE.Device(), DEVICE.Context())) {
        // Clean up Win32 init if DX11 init fails
        ImGui_ImplWin32_Shutdown();
        return;
    }

    LoadResources();
#endif
    // Set initial style
    ImGuiStyle* style = &ImGui::GetStyle();
    style->WindowPadding = set->window_padding;
    style->WindowBorderSize = set->window_border_size;
    style->WindowRounding = set->window_rounding;
    style->ScrollbarSize = set->window_scrollbar_size;
    style->Colors[ImGuiCol_WindowBg] = clr->window_background;

    

    // Initialize settings
    set->show_menu = false;
    set->menu_alpha = 0.0f;
    set->first_time_position = true;
}

void Menu::LoadResources()
{
    // Create texture from RGBA data
    auto CreateTextureFromRGBA = [](const unsigned char* data, ID3D11ShaderResourceView** out_srv)
        {
            D3D11_TEXTURE2D_DESC desc = {};
            desc.Width = LOGO_WIDTH;
            desc.Height = LOGO_HEIGHT;
            desc.MipLevels = 1;
            desc.ArraySize = 1;
            desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
            desc.SampleDesc.Count = 1;
            desc.SampleDesc.Quality = 0;
            desc.Usage = D3D11_USAGE_DEFAULT;
            desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            desc.CPUAccessFlags = 0;

            D3D11_SUBRESOURCE_DATA initData = {};
            initData.pSysMem = data;
            initData.SysMemPitch = LOGO_WIDTH * 4; // 4 bytes per pixel for RGBA
            initData.SysMemSlicePitch = 0;

            ID3D11Texture2D* texture = nullptr;
            HRESULT hr = DEVICE.Device()->CreateTexture2D(&desc, &initData, &texture);

            if(SUCCEEDED(hr) && texture)
            {
                D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc = {};
                srvDesc.Format = desc.Format;
                srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
                srvDesc.Texture2D.MipLevels = 1;

                hr = DEVICE.Device()->CreateShaderResourceView(texture, &srvDesc, out_srv);
                texture->Release();
            }
        };

    // Load first logo
    if(set->logo == nullptr)
    {
        CreateTextureFromRGBA(logo1, &set->logo);
    }

    // Load second logo
    if(set->logo2 == nullptr)
    {
        CreateTextureFromRGBA(logo2, &set->logo2);
    }
}

void Menu::OnRender() {
    // safety check
    if (!ImGui::GetCurrentContext())
    {
        return;
    }
  

    BeginFrame();
    if (m_visible) {
        set->menu_alpha = ImLerp(set->menu_alpha, 1.f, gui->fixed_speed(15.f));
        DrawMenu();
    }
    else {
        set->menu_alpha = ImLerp(set->menu_alpha, 0.f, gui->fixed_speed(15.f));
    }
#if DX11
    EndFrame();
#endif

#if DX12
   // DebugLog("Attempting DX12 inside");
    auto& renderer = D3D12::get();
    renderer.render();
   // D3D12DEVICE.EndFrame();
#endif

}

void Menu::BeginFrame() {

#if DX11
    ImGui_ImplDX11_NewFrame(); 
#endif

#if DX12
    ImGui_ImplDX12_NewFrame();
#endif
   
    ImGui_ImplWin32_NewFrame();
    if (m_visible)
    {
        ImGuiIO& io = ImGui::GetIO();

        POINT p{};
        GetCursorPos(&p);
        io.MousePos = ImVec2(p.x, p.y);

        io.MouseDown[0] = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;
        io.MouseDown[1] = (GetAsyncKeyState(VK_RBUTTON) & 0x8000) != 0;
    }


    ImGui::NewFrame();
}

void Menu::DrawMenu() {
    gui->push_style_var(ImGuiStyleVar_Alpha, set->menu_alpha);

    // Set fixed position with padding
   // ImGui::SetNextWindowPos(ImVec2(10, 10));
    ImGui::SetNextWindowSize(set->window_size);

    if (gui->begin("window", nullptr, set->window_flags | ImGuiWindowFlags_NoResize)) {
   
        const ImVec2 pos = ImGui::GetWindowPos();
        RenderLogo(pos);
        RenderSelections();
        RenderContent();
    }

    gui->end();

    if (set->watermark) {
        RenderWatermark();
    }

    gui->pop_style_var();
}

void Menu::RenderLogo(const ImVec2& pos) {
    // Logo text
    gui->render_text_clipped(
        set->inter_logo,
        pos,
        pos + ImVec2(250, 110),
        gui->get_clr(clr->text),
        "GAME TWEAK",
        { 0.5, 0.5 }
    );

    // Calculate logo dimensions
    float scale = 0.7f;
    ImVec2 texture_size(124 * scale, 82 * scale);
    float aspect_ratio = texture_size.x / texture_size.y;
    float target_height = 82.0f * scale;
    float target_width = target_height * aspect_ratio;

    // Center position calculation
    ImVec2 center_pos = pos + ImVec2(250, 110) / 2;
    ImVec2 min_pos = center_pos - ImVec2(target_width, target_height) / 2;
    ImVec2 max_pos = center_pos + ImVec2(target_width, target_height) / 2;

    // Update logo animation
    if (logo_counter >= 60) {
        logo_switch = !logo_switch;
        logo_counter = 0;
    }
    logo_counter++;

    // Draw logo
#if DX11
    ImGui::GetForegroundDrawList()->AddImage(
        logo_switch ? set->logo : set->logo2,
        min_pos,
        max_pos,
        ImVec2(0, 0),
        ImVec2(1, 1),
        gui->get_clr(clr->accent_color, 0.6f)
    );
#endif
}

void Menu::RenderSelections() {
    gui->set_cursor_pos(ImVec2(10, 117));
    gui->begin_group();
    {
        gui->push_style_var(ImGuiStyleVar_ItemSpacing, { 10, 10 });
        for (int i = 0; i < set->selection_labels.size(); i++) {
            switch (i) {
            case 0: gui->text_colored(gui->get_clr(clr->text), "AIMBOT"); break;
            case 1: gui->text_colored(gui->get_clr(clr->text), "VISUALS"); break;
            case 3: gui->text_colored(gui->get_clr(clr->text), "PLAYER"); break;
            case 5: gui->text_colored(gui->get_clr(clr->text), "MISCELLANEOUS"); break;
            }
            gui->selection(
                set->selection_icons[i],
                set->selection_labels[i],
                i,
                set->selection_count,
                ImVec2(240, 50)
            );
        }
        gui->pop_style_var();
    }
    gui->end_group();
}

void Menu::RenderContent() {
    set->selection_alpha = ImClamp(
        set->selection_alpha + (4.f * ImGui::GetIO().DeltaTime * (set->selection_count == set->selection_accept ? 1.f : -1.f)),
        0.f,
        1.f
    );

    if (set->selection_alpha == 0.f && set->selection_add == 0.f) {
        set->selection_accept = set->selection_count;
    }

    gui->set_cursor_pos(ImVec2(250, 0));
    gui->begin_content();
    {
        gui->push_style_var(ImGuiStyleVar_Alpha, set->selection_alpha * ImGui::GetStyle().Alpha);

        switch (set->selection_accept) {
        case 0: Aimbot_Tab(); break;
        case 1: Player_ESP_Tab(); break;
       // case 2: NPC_ESP_Tab(); break;            
        case 2: Item_ESP_Tab(); break;
        case 3: Local_Player_Tab(); break;
        case 4: Exploit_Tab(); break;
        case 5: Config_Tab(); break;
        case 6: Debug_Tab(); break;
            // Add other tabs as needed
        }

        gui->pop_style_var();
    }
    gui->end_content();
}

void Menu::Aimbot_Tab() {
    gui->begin_group();
    {
        // Use appropriate icons for each section
        // Replace these with your actual icon names - example uses A, B, C

        // Full-width General section at the top
        float fullWidth = ImGui::GetContentRegionAvail().x;
        gui->begin_child("A", "General", ImVec2(fullWidth, 100));
        {
            //FOV
            gui->checkbox_with_picker("Draw FOV", &g_settings.aimbot.general.show_fov, g_settings.aimbot.general.FOV_Color, ImGuiColorEditFlags_AlphaBar);
            static int fov = 30;
            gui->slider_int("Field Of View", &fov, 1, 200); //For when we add proper rage settings change to 360 to cover full front and back
            g_settings.aimbot.general.field_of_view = fov * 6;//Chnaged to this to simplify the FOV instead of 0-1000 | 180 = full screen | 360 = Everywhere around you
        }
        gui->end_child();
 
        // Add some spacing between sections
        ImGui::Spacing();

        // Store current cursor position to ensure panels start at same Y
        ImVec2 startPos = ImGui::GetCursorPos();

        // Calculate width for the side-by-side panels
        float panelWidth = (fullWidth - ImGui::GetStyle().ItemSpacing.x) / 2.0f;

        // Left panel - Player section with B icon
        gui->begin_child("B", "Player", ImVec2(panelWidth, 0));
        {
            gui->checkbox("Enable Player Aimbot", &g_settings.aimbot.player.enabled);
            gui->checkbox("Enable Player Auto Fire", &g_settings.aimbot.player.auto_fire);
            gui->dropdown("Aim Bone", &g_settings.aimbot.player.aimbone_index, g_settings.aimbot.player.aimbone_names, IM_ARRAYSIZE(g_settings.aimbot.player.aimbone_names));
            gui->slider_float("Max Distance", &g_settings.aimbot.player.max_distance, 0, 2500, "%.0f");
            gui->slider_float("Smoothing", &g_settings.aimbot.player.smoothing, 0, 100, "%.0f");
            gui->checkbox("Compensate Recoil", &g_settings.aimbot.player.compensateRecoil);
           // gui->slider_float("Miss Chance", &g_settings.aimbot.player.miss_chance, 0, 100, "%.0f");
            gui->checkbox("Only Target Visible", &g_settings.aimbot.player.visible_only);
            gui->checkbox("Show Target Line", &g_settings.aimbot.player.show_target_line);
            gui->color_edit("Target Line Color", g_settings.aimbot.player.Target_Line_Color);
        }
        gui->end_child();

        // Place NPC panel to the right of Player panel
        ImGui::SameLine();

        // This is crucial - set Y position back to match Player panel
        ImVec2 currentPos = ImGui::GetCursorPos();
        ImGui::SetCursorPos(ImVec2(currentPos.x, startPos.y));

        // Right panel - NPC section with C icon
        gui->begin_child("C", "NPC", ImVec2(panelWidth, 0));
        {
            gui->checkbox("Enable NPC Aimbot", &g_settings.aimbot.npc.enabled);
            gui->checkbox("Enable NPC Auto Fire", &g_settings.aimbot.npc.auto_fire);
            gui->dropdown("Aim Bone", &g_settings.aimbot.npc.aimbone_index, g_settings.aimbot.npc.aimbone_names, IM_ARRAYSIZE(g_settings.aimbot.npc.aimbone_names));
            gui->slider_float("Max Distance", &g_settings.aimbot.npc.max_distance, 0, 2500, "%.0f");
            gui->slider_float("Miss Chance", &g_settings.aimbot.npc.miss_chance, 0, 100, "%.0f");
            gui->checkbox("Only Target Visible", &g_settings.aimbot.npc.visible_only);
            gui->checkbox("Show Target Line", &g_settings.aimbot.npc.show_target_line);
            gui->color_edit("Target Line Color", g_settings.aimbot.npc.Target_Line_Color);
        }
        gui->end_child();
    }
    gui->end_group();
}

void Menu::Player_ESP_Tab()
{
    gui->begin_group();
    {
        // Calculate full width for panels
        float fullWidth = ImGui::GetContentRegionAvail().x;

        // Store current cursor position to ensure panels start at same Y
        ImVec2 startPos = ImGui::GetCursorPos();

        // Calculate width for the side-by-side panels
        float panelWidth = (fullWidth - ImGui::GetStyle().ItemSpacing.x) / 2.0f;

        // Left panel - Visual Elements (Bones, Boxes, etc.)
        gui->begin_child("A", "Visual Elements", ImVec2(panelWidth, 0));
        {
            // General display settings
            gui->checkbox("Draw Boxes", &g_settings.player.show_cornered_box);
            if (g_settings.player.show_cornered_box)
            {
                gui->dropdown("Box Type",&g_settings.player.boxSelection, g_settings.player.boxTypes,IM_ARRAYSIZE(g_settings.player.boxTypes));
            }
            gui->checkbox("Draw Skeleton", &g_settings.player.show_skeleton);
            gui->checkbox("Draw Player Name", &g_settings.player.show_player_name);      
            gui->checkbox("Draw Distance", &g_settings.player.show_distance);
            gui->checkbox("Draw Snaplines", &g_settings.player.snap_lines);
            if (g_settings.player.snap_lines)
            {
                gui->dropdown("Snapline Position", &g_settings.player.snap_line_location, g_settings.player.snaplinePostitions, IM_ARRAYSIZE(g_settings.player.snaplinePostitions));
            }
            gui->checkbox("Draw Radar", &g_settings.player.show_radar);
            gui->checkbox("Draw Compass", &g_settings.player.show_compass);
            gui->checkbox("Aim Warnings", &g_settings.player.aim_warning);
        }
        gui->end_child();


        gui->begin_child("C", "Color Settings", ImVec2(panelWidth, 0));
        {

            if (g_settings.player.show_cornered_box)
            {
                gui->color_edit("Box Color", g_settings.player.cornered_box_Color);
                gui->color_edit("Box Visible Color", g_settings.player.cornered_box_Color_vis);
            }
            if (g_settings.player.show_skeleton)
            {
                gui->color_edit("Skeleton Color", g_settings.player.skeleton_Color);
                gui->color_edit("Skeleton Visible Color", g_settings.player.skeleton_Color_vis);
            }
            if (g_settings.player.show_player_name)
            {
                gui->color_edit("Name Color", g_settings.player.player_name_Color);
                gui->color_edit("Name Visible Color", g_settings.player.player_name_Color_vis);
            }
          
            if (g_settings.player.show_distance)
            {
                gui->color_edit("Distance Color", g_settings.player.distance_Color);
                gui->color_edit("Distance Visible Color", g_settings.player.distance_Color_vis);
            }
            if (g_settings.player.snap_lines)
            {
                gui->color_edit("Snapline Color", g_settings.player.snap_lines_Color);
                gui->color_edit("Snapline Visible Color", g_settings.player.snap_lines_Color_vis);
            }
            if (g_settings.player.show_compass)
            {
                gui->color_edit("Compass Color", g_settings.player.compass_Color);
                gui->color_edit("Compass Visible Color", g_settings.player.compass_Color_vis);
            }
            if (g_settings.player.show_compass)
            {
                gui->color_edit("Radar Color", g_settings.player.radar_Color);
                gui->color_edit("Radar Visible Color", g_settings.player.radar_Color_vis);
            }
            if (g_settings.player.aim_warning)
            {
                gui->color_edit("Aim Warning Color", g_settings.player.aimWarning_Color);
            }

        }
        gui->end_child();
        // Place second panel to the right of first panel
        ImGui::SameLine();

        // This is crucial - set Y position back to match first panel
        ImVec2 currentPos = ImGui::GetCursorPos();
        ImGui::SetCursorPos(ImVec2(currentPos.x, startPos.y));

        // Right panel - Text Rendering Options
        gui->begin_child("B", "Player Settings", ImVec2(panelWidth, 0));
        {
            gui->slider_float("ESP Thickness", &g_settings.player.espThickness, 0.1, 2.0, "%.1f");
            gui->slider_float("Skeleton Distance", &g_settings.player.skeleton_distance, 0, 2500, "%.0f");
            gui->slider_float("Display Distance", &g_settings.player.display_distance, 0, 2500, "%.0f");
            gui->slider_float("Snapline Distance", &g_settings.player.snap_lines_distance, 0, 2500, "%.0f");
            gui->slider_float("Radar Distance", &g_settings.player.radar_distance, 0, 2500, "%.0f");
            gui->dropdown("Radar Type", &g_settings.player.radar_type, g_settings.player.radarTypes, IM_ARRAYSIZE(g_settings.player.radarTypes));
            gui->slider_float("Compass Distance", &g_settings.player.compass_distance, 0, 2500, "%.0f");
            gui->slider_float("Compass Size", &g_settings.player.compassSize, 0, 1000, "%.0f");
            gui->slider_float("Compass Arrow Size", &g_settings.player.arrowSize, 0, 100, "%.0f");
            gui->checkbox("Compass Show Visible Only", &g_settings.player.show_compass_visible_only);
            gui->slider_float("Aim Warning Distance", &g_settings.player.aimWarning_distance, 0, 2500, "%.0f");
            gui->checkbox("Aim Warning Angle Preview", &g_settings.player.aimWarningPreview);
            gui->slider_float("Aim Warning Angle", &g_settings.player.aimWarning_angle, 1, 30, "%.0f");
            
        }
        gui->end_child();
    }
    gui->end_group();
}

void Menu::NPC_ESP_Tab()
{
    gui->begin_group();
    {
        // Calculate full width for panels
        float fullWidth = ImGui::GetContentRegionAvail().x;
        // Store current cursor position to ensure panels start at same Y
        ImVec2 startPos = ImGui::GetCursorPos();
        // Calculate width for the side-by-side panels
        float panelWidth = (fullWidth - ImGui::GetStyle().ItemSpacing.x) / 2.0f;

        // Left panel - Visual Elements (Bones, Boxes, etc.)
        gui->begin_child("A", "Visual Elements", ImVec2(panelWidth, 0));
        {
            // General display settings
            gui->slider_float("Display Distance", &g_settings.npc.display_distance, 0, 2500, "%.0f");

            ImGui::Spacing();

            // Skeleton settings
            gui->checkbox("Draw Skeleton", &g_settings.npc.show_skeleton);
            if (g_settings.npc.show_skeleton)
            {
                gui->color_edit("Skeleton Color", g_settings.npc.skeleton_Color);
                gui->color_edit("Skeleton Visible Color", g_settings.npc.skeleton_Color_vis);
                gui->slider_float("Skeleton Distance", &g_settings.npc.skeleton_distance, 0, 2500, "%.0f");
            }
            ImGui::Spacing();

            // Bounding box settings
            gui->checkbox("Cornered Box", &g_settings.npc.show_cornered_box);
            if (g_settings.npc.show_cornered_box)
            {
                gui->color_edit("Box Color", g_settings.npc.cornered_box_Color);
                gui->color_edit("Box Visible Color", g_settings.npc.cornered_box_Color_vis);
            }
            ImGui::Spacing();

            // Bone health settings
            gui->checkbox("Show Bone Health", &g_settings.npc.show_bone_health);

            ImGui::Spacing();

            // Dead body settings
            gui->checkbox("NPC Corpses", &g_settings.WorldESP.NPCCorpses.enabled);
            if (g_settings.WorldESP.NPCCorpses.enabled)
            {
                gui->color_edit("NPC Corpse Color", g_settings.WorldESP.NPCCorpses.color);
                gui->checkbox("NPC Corpse Distance", &g_settings.WorldESP.NPCCorpses.show_distance);
                gui->slider_float("NPC Corpse Max Distance", &g_settings.WorldESP.NPCCorpses.max_distance, 0.0, 1000.0, "%.0f");
                gui->slider_float("NPC Corpse Font Size", &g_settings.WorldESP.NPCCorpses.font_size, 0.0, 10.0, "%.1f");
            }            
        }
        gui->end_child();

        // Place second panel to the right of first panel
        ImGui::SameLine();

        // This is crucial - set Y position back to match first panel
        ImVec2 currentPos = ImGui::GetCursorPos();
        ImGui::SetCursorPos(ImVec2(currentPos.x, startPos.y));

        // Right panel - Text Rendering Options
        gui->begin_child("B", "Text Rendering", ImVec2(panelWidth, 0));
        {
            // NPC name settings
            gui->checkbox("NPC Name", &g_settings.npc.show_npc_name);
            if (g_settings.npc.show_npc_name)
            {
                gui->color_edit("Name Color", g_settings.npc.npc_name_Color);
                gui->color_edit("Name Visible Color", g_settings.npc.npc_name_Color_vis);
            }
            ImGui::Spacing();

            // Equipment visualization
            gui->checkbox("Show Held Item", &g_settings.npc.show_held_item);
            if (g_settings.npc.show_held_item)
            {
                gui->color_edit("Item Color", g_settings.npc.held_item_Color);
                gui->color_edit("Item Visible Color", g_settings.npc.held_item_Color_vis);
            }
            ImGui::Spacing();

            // Health visualization
            gui->checkbox("Show Health", &g_settings.npc.show_health);
            if (g_settings.npc.show_health)
            {
                gui->color_edit("Health Color", g_settings.npc.show_health_Color);
                gui->color_edit("Health Visible Color", g_settings.npc.show_health_Color_vis);
            }
            ImGui::Spacing();

            // Distance settings
            gui->checkbox("Show Distance", &g_settings.npc.show_distance);
            if (g_settings.npc.show_distance)
            {
                gui->color_edit("Distance Color", g_settings.npc.distance_Color);
                gui->color_edit("Distance Visible Color", g_settings.npc.distance_Color_vis);
            }
        }
        gui->end_child();
    }
    gui->end_group();
}

void Menu::Item_ESP_Tab()
{
    gui->begin_group();
    {
        // Store current cursor position to ensure panels start at same Y
        ImVec2 startPos = ImGui::GetCursorPos();

        // Calculate width for the side-by-side panels
        float fullWidth = ImGui::GetContentRegionAvail().x;
        float panelWidth = (fullWidth - ImGui::GetStyle().ItemSpacing.x) / 2.0f;

        // Left panel - First column of ESP items
        gui->begin_child("A", "World ESP", ImVec2(panelWidth, 0));
        {
            {//Weapons
                gui->checkbox("Ball", &g_settings.WorldESP.Ball.enabled);
                gui->begin_popup_w("Ball settings", 350);
                {
                    gui->color_edit("Ball Color", g_settings.WorldESP.Ball.color);
                    gui->checkbox("Ball Distance", &g_settings.WorldESP.Ball.show_distance);
                    gui->slider_float("Ball Distance", &g_settings.WorldESP.Ball.max_distance, 0.0, 1000.0, "%.0f");
                    gui->slider_float("Font Size", &g_settings.WorldESP.Ball.font_size, 0.0, 10.0, "%.1f");

                }
                gui->end_popup_w();
            }

        }
        gui->end_child();

        //// Place right panel next to left panel
        //ImGui::SameLine();

        //// This is crucial - set Y position back to match left panel
        //ImVec2 currentPos = ImGui::GetCursorPos();
        //ImGui::SetCursorPos(ImVec2(currentPos.x, startPos.y));

        //// Right panel - Second column of ESP items
        //gui->begin_child("B", "World ESP Config 2", ImVec2(panelWidth, 0));
        //{
        //    {//Food
        //        gui->checkbox("Food", &g_settings.WorldESP.Food.enabled);
        //        gui->begin_popup_w("Food settings", 350);
        //        {
        //            gui->color_edit("Food Color", settings.WorldESP.Food.color);
        //            gui->checkbox("Food Distance", &g_settings.WorldESP.Food.show_distance);
        //            gui->slider_float("Food Distance", &g_settings.WorldESP.Food.max_distance, 0.0, 1000.0, "%.0f");
        //            gui->slider_float("Font Size", &g_settings.WorldESP.Food.font_size, 0.0, 10.0, "%.1f");
        //        }
        //        gui->end_popup_w();
        //    }

        //    {//Water
        //        gui->checkbox("Water", &g_settings.WorldESP.Water.enabled);
        //        gui->begin_popup_w("Water settings", 350);
        //        {
        //            gui->color_edit("Water Color", settings.WorldESP.Water.color);
        //            gui->checkbox("Water Distance", &g_settings.WorldESP.Water.show_distance);
        //            gui->slider_float("Water Distance", &g_settings.WorldESP.Water.max_distance, 0.0, 1000.0, "%.0f");
        //            gui->slider_float("Font Size", &g_settings.WorldESP.Water.font_size, 0.0, 10.0, "%.1f");
        //        }
        //        gui->end_popup_w();
        //    }
        //}
        //gui->end_child();
    }
    gui->end_group();
}

void Menu::Local_Player_Tab()
{
    gui->begin_group();
    {
        // Store current cursor position to ensure panels start at same Y
        ImVec2 startPos = ImGui::GetCursorPos();
        // Calculate width for the side-by-side panels
        float fullWidth = ImGui::GetContentRegionAvail().x;
        float panelWidth = (fullWidth - ImGui::GetStyle().ItemSpacing.x) / 2.0f;

        // Left panel - Combat & Gameplay Mods
        gui->begin_child("A", "Gameplay", ImVec2(panelWidth, 0));
        {
            // Combat related mods
            gui->checkbox("No Clip", &g_settings.Mods.NoClip);
            if (g_settings.Mods.NoClip)
            {
                gui->slider_float("Noclip Speed", &g_settings.Mods.NoClip_speed, 0, 2000, "%.0f");
            }

            // Movement related mods
            gui->checkbox("Speed Hack", &g_settings.Mods.SpeedHack);
            if (g_settings.Mods.SpeedHack)
            {
                gui->slider_float("Movement Speed", &g_settings.Mods.WalkingMovementSpeed, 0, 10, "%.1f");
            }


        }
        gui->end_child();

        // Place right panel next to left panel
        ImGui::SameLine();

        // This is crucial - set Y position back to match left panel
        ImVec2 currentPos = ImGui::GetCursorPos();
        ImGui::SetCursorPos(ImVec2(currentPos.x, startPos.y));

        // Right panel - Visual & Special Mods
        gui->begin_child("B", "Visual & Special", ImVec2(panelWidth, 0));
        {
            // Visual enhancement
            gui->checkbox("Full Bright", &g_settings.Mods.fullbright);
            
        }
        gui->end_child();
    }
    gui->end_group();
}

void Menu::Exploit_Tab()
{
    gui->begin_group();
    {
        
     
    }
    gui->end_group();
}

void Menu::Config_Tab()
{
    // Refresh config list when needed
    if (needs_config_refresh)
    {
        config_list = config_manager.GetConfigList();
        needs_config_refresh = false;

        // Ensure default config exists
        config_manager.EnsureDefaultConfig();

        // If config list was empty and now has default, refresh again
        if (config_list.empty())
        {
            config_list = config_manager.GetConfigList();
        }
    }

    // Create new config section with better layout
    ImGui::TextColored(ImVec4(0.9f, 0.9f, 0.9f, 1.0f), "Create New Config");
    ImGui::PushStyleColor(ImGuiCol_Separator, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::Separator();
    ImGui::PopStyleColor();

    // Full width input and create button
    float available_width = ImGui::GetContentRegionAvail().x;
    float button_width = 100.0f;
    float input_width = available_width - button_width - ImGui::GetStyle().ItemSpacing.x;

    ImGui::SetNextItemWidth(input_width);
    gui->text_field("##config_name", "Enter config name...", ImVec2(input_width, 40), create_config, IM_ARRAYSIZE(create_config));
    ImGui::SameLine();

    bool can_create = strlen(create_config) > 0 && !config_manager.ConfigExists(create_config);
    if (!can_create)
        ImGui::BeginDisabled();

    if (gui->button("Create", ImVec2(button_width, 40)))
    {
        if (config_manager.SaveConfig(create_config, g_settings))
        {
            needs_config_refresh = true;
            memset(create_config, 0, sizeof(create_config));
        }
    }

    if (!can_create)
        ImGui::EndDisabled();

    // Show warning if config already exists
    if (strlen(create_config) > 0 && config_manager.ConfigExists(create_config))
    {
        ImGui::TextColored(ImVec4(1.0f, 0.3f, 0.3f, 1.0f), "Config already exists!");
    }

    ImGui::Spacing();
    ImGui::Spacing();

    // Current config info with better styling and context
    std::string current_config = config_manager.GetCurrentConfig();
    ImGui::TextColored(ImVec4(0.8f, 0.8f, 0.8f, 1.0f), "Current Loaded Config:");
    ImGui::SameLine();
    ImGui::TextColored(ImVec4(0.3f, 1.0f, 0.3f, 1.0f), "%s", current_config.empty() ? "None" : current_config.c_str());

    ImGui::Spacing();
    ImGui::PushStyleColor(ImGuiCol_Separator, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::Separator();
    ImGui::PopStyleColor();
    ImGui::Spacing();

    // Config list header
    ImGui::TextColored(ImVec4(0.9f, 0.9f, 0.9f, 1.0f), "Available Configs (%zu)", config_list.size());
    ImGui::PushStyleColor(ImGuiCol_Separator, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::Separator();
    ImGui::PopStyleColor();

    if (config_list.empty())
    {
        ImGui::TextColored(ImVec4(0.6f, 0.6f, 0.6f, 1.0f), "No configs found.");
        ImGui::TextColored(ImVec4(0.6f, 0.6f, 0.6f, 1.0f), "Create one above to get started.");
    }
    else
    {
        // Config list in scrollable child window
        if (ImGui::BeginChild("ConfigList", ImVec2(0, -125), true, ImGuiWindowFlags_HorizontalScrollbar))
        {
            for (int i = 0; i < static_cast<int>(config_list.size()); i++)
            {
                bool is_selected = (selected_config_index == i);
                bool is_current = (current_config == config_list[i]);

                ImGui::PushID(i);

                // Set background colors that are always visible
                if (is_selected)
                {
                    ImGui::PushStyleColor(ImGuiCol_Header, ImVec4(0.2f, 0.4f, 0.8f, 0.9f));        // Blue when selected
                    ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImVec4(0.3f, 0.5f, 0.9f, 0.9f));
                    ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImVec4(0.1f, 0.3f, 0.7f, 0.9f));
                }
                else
                {
                    ImGui::PushStyleColor(ImGuiCol_Header, ImVec4(0.25f, 0.25f, 0.25f, 0.8f));      // Light gray background always visible
                    ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImVec4(0.35f, 0.35f, 0.35f, 0.9f)); // Lighter on hover
                    ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImVec4(0.3f, 0.3f, 0.3f, 0.9f));
                }

                std::string display_name = config_list[i];
                if (is_current)
                    display_name += " (current)";

                // Set text color
                if (is_current)
                    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.3f, 1.0f, 0.3f, 1.0f)); // Green for current
                else
                    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f)); // White for others

                // Create selectable with visible text and background
                if (ImGui::Selectable(display_name.c_str(), is_selected, ImGuiSelectableFlags_AllowDoubleClick, ImVec2(0, 30)))
                {
                    selected_config_index = i;

                    // Double-click to load config
                    if (ImGui::IsMouseDoubleClicked(0))
                    {
                        config_manager.LoadConfig(config_list[i], g_settings);
                    }
                }

                ImGui::PopStyleColor(4); // Pop all colors

                // Add small spacing between items for separation
                if (i < static_cast<int>(config_list.size()) - 1)
                {
                    ImGui::Dummy(ImVec2(0, 2)); // Small gap
                }

                ImGui::PopID();
            }
        }
        ImGui::EndChild();
    }

    // Action buttons with better spacing and full width
    ImGui::Spacing();
    ImGui::PushStyleColor(ImGuiCol_Separator, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::Separator();
    ImGui::PopStyleColor();
    ImGui::Spacing();

    bool has_selection = selected_config_index >= 0 && selected_config_index < static_cast<int>(config_list.size());

    // Calculate button widths to fill the space
    float total_width = ImGui::GetContentRegionAvail().x;
    float spacing = ImGui::GetStyle().ItemSpacing.x;
    float button_width_each = (total_width - (spacing * 3)) / 4.0f; // 4 buttons, 3 spaces

    // Load button
    if (!has_selection)
        ImGui::BeginDisabled();

    if (gui->button("Load", ImVec2(button_width_each, 35)) && has_selection)
    {
        config_manager.LoadConfig(config_list[selected_config_index], g_settings);
    }

    if (!has_selection)
        ImGui::EndDisabled();

    ImGui::SameLine();

    // Save button
    if (!has_selection)
        ImGui::BeginDisabled();

    if (gui->button("Save", ImVec2(button_width_each, 35)) && has_selection)
    {
        config_manager.SaveConfig(config_list[selected_config_index], g_settings);
    }

    if (!has_selection)
        ImGui::EndDisabled();

    ImGui::SameLine();

    // Delete button
    bool can_delete = has_selection && config_list[selected_config_index] != "default";
    if (!can_delete)
        ImGui::BeginDisabled();

    if (gui->button("Delete", ImVec2(button_width_each, 35)) && can_delete)
    {
        if (config_manager.DeleteConfig(config_list[selected_config_index]))
        {
            needs_config_refresh = true;
            selected_config_index = -1;
        }
    }

    if (!can_delete)
        ImGui::EndDisabled();

    ImGui::SameLine();

    // Refresh button
    if (gui->button("Refresh", ImVec2(button_width_each, 35)))
    {
        needs_config_refresh = true;
        selected_config_index = -1;
    }

    // Help text
    ImGui::Spacing();
    ImGui::PushStyleColor(ImGuiCol_Separator, ImVec4(0.5f, 0.5f, 0.5f, 1.0f));
    ImGui::Separator();
    ImGui::PopStyleColor();
    ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f), "Tip: Double-click a config to load it.");
}

void Menu::Debug_Tab()
{
    gui->begin_group();
    {
       
        if (gui->button("Load Test Level", ImVec2(150.0f, 55.0f)))
        {
            //Validate world
            SDK::UWorld* World = SDK::UWorld::GetWorld();
            if (World)
            {
                //Validate GameInstance
                SDK::UGameInstance* GameInstance = SDK::UGameplayStatics::GetGameInstance(World);
                if (GameInstance)
                {
                    //Validate ULocalPlayer
                    SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
                    if (LocalPlayer)
                    {
                       // SDK::ASCBasePlayerController
                        //Validate PlayerController
                        GamePlayerControllerClass* PlayerController = (GamePlayerControllerClass*)SDK::UGameplayStatics::GetPlayerController(World, 0);
                        if (PlayerController)
                        {
                           // SDK::FString mapname = SDK::FString(L"/BattleRoyale/Level_Underground/WF_Underground");
                            //PlayerController->LocalTravel(mapname);
                        }
                    }
                }
            }
        }
       
        gui->checkbox("Debug Item ESP", &g_settings.WorldESP.debugdraw);

        gui->checkbox("Debug Logging (Detect Crashing)", &g_settings.DebugLogging);

    }
    gui->end_group();
}

void Menu::RenderWatermark() {
    gui->water_mark("watermark", set->watermark_list, func->mark_count, &set->watermark);
}

void Menu::EndFrame() {
    ImGui::Render();
    auto context = DEVICE.Context();
    auto rtv = DEVICE.RenderTarget();
    context->OMSetRenderTargets(1, &rtv, NULL);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
}

void Menu::OnShutdown() {
    // Reset cursor state
    ImGuiIO& io = ImGui::GetIO();
    io.MouseDrawCursor = false;
    while (ShowCursor(TRUE) <= 0);

    // Release resources
    if (set->logo) {
        set->logo->Release();
        set->logo = nullptr;
    }

    if (set->logo2) {
        set->logo2->Release();
        set->logo2 = nullptr;
    }

    // Cleanup ImGui
    ImGui_ImplDX12_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
}

void Menu::UpdateCursor() {
    ImGuiIO& io = ImGui::GetIO();
    if (s_instance.m_visible) {
        io.MouseDrawCursor = true;
        while (ShowCursor(FALSE) >= 0);
    }
    else {
        io.MouseDrawCursor = false;
        while (ShowCursor(TRUE) <= 0);
    }
}