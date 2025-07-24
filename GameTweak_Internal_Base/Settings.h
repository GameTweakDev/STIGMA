#ifndef SETTINGS_H
#define SETTINGS_H

// ============================================================================
// BUILD CONFIGURATION
// ============================================================================
#define Private_Build 1
#define Dev_Build 1
#define Enable_Auth 0
#define MenuTitle "GameTweak Strayed"
#define WaterMarkTitle "Strayed"

// ============================================================================
// PLAYER BONE INDEX DEFINITIONS
// Head to neck, spine, arms, and legs bone indices for player characters
// ============================================================================
//Head to neck
constexpr auto p_headPos = 8;
constexpr auto p_neck01Pos = 7;
//Spine	
constexpr auto p_spine01Pos = 2;
constexpr auto p_pelvisPos = 5;
// Right Arm
constexpr auto p_clavicleRPos = 6;
constexpr auto p_upperarmRPos = 10;
constexpr auto p_lowerarmRPos = 11;
// Left Arm
constexpr auto p_clavicleLPos = 9;
constexpr auto p_upperarmLPos = 35;
constexpr auto p_lowerarmLPos = 36;
// Right Leg
constexpr auto p_thighRPos = 62;
constexpr auto p_calfRPos = 76;
constexpr auto p_footRPos = 77;
// Left Leg
constexpr auto p_thighLPos = 60;
constexpr auto p_calfLPos = 68;
constexpr auto p_footLPos = 69;

// ============================================================================
// NPC BONE INDEX DEFINITIONS
// Head to neck, spine, arms, and legs bone indices for NPC characters
// ============================================================================
//Head to neck
constexpr auto npc_headPos = 48;
constexpr auto npc_neck01Pos = 47;
//Spine		   
constexpr auto npc_spine01Pos = 2;
constexpr auto npc_pelvisPos = 1;
// Right Arm   
constexpr auto npc_clavicleRPos = 26;
constexpr auto npc_upperarmRPos = 27;
constexpr auto npc_lowerarmRPos = 28;
// Left Arm	   
constexpr auto npc_clavicleLPos = 5;
constexpr auto npc_upperarmLPos = 6;
constexpr auto npc_lowerarmLPos = 7;
// Right Leg   
constexpr auto npc_thighRPos = 55;
constexpr auto npc_calfRPos = 56;
constexpr auto npc_footRPos = 58;
// Left Leg	   
constexpr auto npc_thighLPos = 49;
constexpr auto npc_calfLPos = 50;
constexpr auto npc_footLPos = 52;

// ============================================================================
// RUNTIME SETTINGS AND CONFIGURATION
// All configurable options and feature toggles for the cheat system
// ============================================================================
struct settings
{
	// Global debug settings
	 bool DebugLogging = true;

	// ========================================================================
	// Game Modification Features
	// Various gameplay enhancement and modification toggles
	// ========================================================================
	 struct Mods
	 {
		 bool Aimbot = false;
		 bool NoRecoil = false;
		 bool NoSpread = false;
		 bool QuickFarm = false;
		 float Bullet_Velocity = 1000.0f;
		 float Bullet_Scale = 0.10f;
	 }Mods;

	// ========================================================================
// Player ESP (Extra Sensory Perception) Settings
// Visual information overlays for other players in the game
// ========================================================================
	 struct player
	 {
		 const char* boxTypes[3] = {
			"Boxed",
			"Cornered",
			"3D Boxes"
		 };
		 float espThickness = 0.7;
		 // Skeleton visualization
		 bool show_skeleton = false;                     // Draw player skeleton structure
		 float skeleton_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for skeleton when not visible (white)
		 float skeleton_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for skeleton when visible (green)
		 float skeleton_distance = 600.0f;              // Maximum skeleton render distance in game units

		 // Bounding box settings
		 bool show_cornered_box = false;                 // Draw cornered bounding box around player
		 float cornered_box_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for bounding box when not visible (white)
		 float cornered_box_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for bounding box when visible (green)
		 int boxSelection = 0;

		 // Information display
		 bool show_player_name = false;                   // Display player name above character
		 float player_name_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for player name when not visible (white)
		 float player_name_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for player name when visible (green)

		 // Equipment visualization
		 bool show_held_item = false;                    // Show player's equipped weapon/item
		 float held_item_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for held item when not visible (white)
		 float held_item_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for held item when visible (green)

		 // Health visualization
		 bool show_health = false;                       // Show player's health bar/value
		 float show_health_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for health when not visible (white)
		 float show_health_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for health when visible (green)
		 bool show_bone_health = false;                  // Show health/damage state of individual bones

		 // Distance information
		 bool show_distance = true;                      // Show distance between player and local character
		 float distance_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for distance when not visible (white)
		 float distance_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for distance when visible (green)
		 float display_distance = 600.0f;               // Maximum distance to display ESP elements in game units

		 //MiniMap Radar
		 const char* radarTypes[2] = {
			"Dots",
			"Directional"
		 };
		 bool show_radar = false;
		 float radar_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for compass when not visible (white)
		 float radar_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for compass when visible (green)
		 float radar_distance = 600.0f;
		 int radar_type = 0;

		 // Aim Warning Information
		 bool aim_warning = false;                     // Draw player compass structure
		 bool aimWarningPreview = false;
		 bool aimWarningList = false;
		 float aimWarning_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for compass when not visible (white)
		 float aimWarning_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for compass when visible (green)
		 float aimWarning_distance = 600.0f;
		 float aimWarning_angle = 9.f;

		 // Snapline display
		 bool snap_lines = false;
		 float snap_lines_distance = 600.f;                   // Display player name above character
		 float snap_lines_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for player name when not visible (white)
		 float snap_lines_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for player name when visible (green)
		 int snap_line_location = 0;

		 const char* snaplinePostitions[3] = {
			"Top",
			"Bottom",
			"Middle"
		 };
	 }player;

	// ========================================================================
	// NPC ESP (Extra Sensory Perception) Settings
	// Visual information overlays for non-player characters
	// ========================================================================
	 struct npc
	 {
		 // Skeleton visualization
		 bool show_skeleton = false;                     // Draw NPC skeleton structure
		 float skeleton_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for skeleton when not visible (white)
		 float skeleton_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for skeleton when visible (green)
		 float skeleton_distance = 600.0f;              // Maximum skeleton render distance in game units

		 // Bounding box settings
		 bool show_cornered_box = false;                  // Draw cornered bounding box around NPC
		 float cornered_box_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for bounding box when not visible (white)
		 float cornered_box_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for bounding box when visible (green)

		 // Information display
		 bool show_npc_name = false;                      // Display NPC name/type above character
		 float npc_name_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for NPC name when not visible (white)
		 float npc_name_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for NPC name when visible (green)

		 // Equipment visualization
		 bool show_held_item = false;                    // Show NPC's equipped weapon/item
		 float held_item_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for held item when not visible (white)
		 float held_item_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for held item when visible (green)

		 // Health visualization
		 bool show_health = false;                       // Show NPC's health bar/value
		 float show_health_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for health when not visible (white)
		 float show_health_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for health when visible (green)
		 bool show_bone_health = false;                  // Show health/damage state of individual bones

		 // Distance information
		 bool show_distance = false;                      // Show distance between NPC and local character
		 float distance_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for distance when not visible (white)
		 float distance_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for distance when visible (green)
		 float display_distance = 600.0f;               // Maximum distance to display ESP elements in game units
	 }npc;

	// ========================================================================
	// World Object ESP Settings
	// Visual overlays for various interactive world objects
	// ========================================================================
	 struct WorldESP
	 {
		 bool StoneNode = false;
		 bool MetalNode = false;
		 bool SulfurNode = false;
		 bool Hemp = false;
		 bool Sleepers = false;
		 bool SleepingBags = false;
		 bool Vehicles = false;
		 bool Barrels = false;
		 bool ToolCupboards = false;
		 bool DeathBags = false;
		 // Global debug setting
		 bool debugdraw = false;                                     // Debug visualization mode
	 }WorldESP;

	// ========================================================================
	// CHAMS (Colored Model Rendering)
	// Render entities with special colors through walls
	// ========================================================================
	 struct CHAMS
	 {
		 bool Chams_Weapon = false;   // Highlight weapons
		 bool Chams_Player = false;   // Highlight players
		 bool Chams_NPC = false;      // Highlight NPCs
		 bool Chams_Keys = false;     // Highlight keys
	 }CHAMS;

};

extern settings g_settings;

#endif // SETTINGS_H