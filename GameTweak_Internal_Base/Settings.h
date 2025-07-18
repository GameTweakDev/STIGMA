#ifndef SETTINGS_H
#define SETTINGS_H

#include "Unreal/SDK.hpp"

// ============================================================================
// BUILD CONFIGURATION
// ============================================================================
#define Private_Build 1
#define Dev_Build 1
#define Enable_Auth 0
#define MenuTitle "GameTweak BlackStigma"

// ============================================================================
// GAME SPECIFIC CLASS DEFINITIONS
// ============================================================================
/* Game specific player class struct */
#define GamePlayerClass SDK::ACharaBase
#define GamePlayerControllerClass  SDK::AStigmaPlayerController
/* Game specific NPC class struct */
#define GameNpcClass SDK::ACharaBase
#define GameAimbotTargetClass SDK::ACharaBase
#define P_SkeletalMeshComp Mesh
#define NPC_SkeletalMeshComp Mesh

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
	// Aimbot Configuration
	// Auto-targeting and aim assistance settings
	// ========================================================================
	 struct aimbot
	 {
		 struct general
		 {
			 // Current active target for the aimbot system
			 GameAimbotTargetClass* Target_Player = nullptr;

			 // FOV circle visualization settings
			 bool show_fov = false;                     // Toggle FOV circle visibility 
			 int field_of_view = 800;                  // Targeting FOV diameter in pixels
			 float FOV_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for FOV circle (white)
		 }general;

		 struct player
		 {
			 // Main player aimbot settings
			 bool enabled = false;                      // Toggle player targeting feature

			 // Target bone selection
			 int aimbone_index = 0;                    // Current selected bone index in aimbones array
			 int aimbones[3] = {                       // Array of targetable bone IDs
				p_headPos,                                   // Head bone
				p_spine01Pos,                                // Chest/spine bone
				p_pelvisPos                                  // Pelvis/hip bone
			 };
			 const char* aimbone_names[3] = {          // Friendly names for bones (for UI)
				"Head",
				"Chest",
				"Pelvis"
			 };

			 bool visible_only = false;                // Only target players that are visible/not behind cover

			 // Visualization settings
			 bool show_target_line = true;             // Draw line from crosshair to target
			 float Target_Line_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for target line (white)

			 // Accuracy and behavior settings
			 float miss_chance = 0.0f;                 // Probability of intentional miss (0.0 = always hit)
			 float max_distance = 500.0f;                // Maximum targeting distance
			 bool auto_fire = false;                    // Automatically fire weapon when player is targeted
			 float smoothing = 20.f;
			 bool compensateRecoil = false;
		 }player;

		 struct npc
		 {
			 // Main NPC aimbot settings
			 bool enabled = false;                      // Toggle NPC targeting feature

			 // Target bone selection
			 int aimbone_index = 0;                    // Current selected bone index in aimbones array
			 int aimbones[3] = {                       // Array of targetable bone IDs
				npc_headPos,                                 // Head bone
				npc_spine01Pos,                              // Chest/spine bone
				npc_pelvisPos                                // Pelvis/hip bone
			 };
			 const char* aimbone_names[3] = {          // Friendly names for bones (for UI)
				"Head",
				"Chest",
				"Pelvis"
			 };

			 bool visible_only = false;                // Only target NPCs that are visible/not behind cover

			 // Visualization settings
			 bool show_target_line = false;             // Draw line from crosshair to target
			 float Target_Line_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for target line (white)

			 // Accuracy and behavior settings
			 float miss_chance = 0.0f;                 // Probability of intentional miss (0.0 = always hit)
			 float max_distance = 800.0f;                // Maximum targeting distance
			 bool auto_fire = false;                    // Automatically fire weapon when NPC is targeted
		 }npc;
	 }aimbot;

	// ========================================================================
	// Game Modification Features
	// Various gameplay enhancement and modification toggles
	// ========================================================================
	 struct Mods
	 {
		 bool fullbright = false;     // Remove darkness/shadows
		 bool NoRecoil = false;        // Eliminate weapon recoil
		 bool RapidFire = false;      // Increase fire rate
		 bool MagicKeys = false;       // Universal key access
		 SDK::UClass* LastKeyClass; // last held key for magic keys
		 bool infammo = false;         // Infinite ammunition
		 bool NoSound = false;         // Silent movement/actions
		 bool NoClip = false;         // Walk through walls
		 float NoClip_speed = 500.0f; // Noclip Movement speed
		 bool Ghost = false;          // Invisibility mode
		 bool PlayerWeaponStealer = false;//auto grab player weapons
		 bool PlayerWeaponEjector = false;//auto unload guns
		 bool NPCWeaponEjector = false;       // Special game mode
		 bool SpeedHack = false;      // Movement speed boost
		 bool MonkeyHack = false;      // Movement speed boost
		 bool AutoHeal = false;      // Auto heal in bunker
		 bool BRAutoRevive = false;      // Auto revive in BR
		 bool BRAutoRespawn = false;      // Auto respawn in BR
		 float WalkingMovementSpeed = 1.0f; // Movement speed

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
		 bool show_player_name = true;                   // Display player name above character
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

		 // Compass visualization
		 bool show_compass = false;                     // Draw player compass structure
		 bool show_compass_visible_only = false;
		 float compass_Color[4] = { 1.0f, 1.0f, 1.0f, 1.0f }; // RGBA color for compass when not visible (white)
		 float compass_Color_vis[4] = { 0.0f, 1.0f, 0.0f, 1.0f }; // RGBA color for compass when visible (green)
		 float compass_distance = 600.0f;
		 float compassSize = 0.f;
		 float arrowSize = 0.f;
		 SDK::FVector2D compass_pos{};

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
	 struct WorldESP {
		 // ESP configuration structure for each object type
		 struct ESPConfig
		 {
			 bool enabled = false;                                           // Enable/disable ESP for this object type
			 bool show_distance = true;                                      // Show distance text
			 float color[4] = { 1.0f, 1.0f, 1.0f, 1.0f };                  // RGBA color values
			 float max_distance = 350.0f;                                   // Maximum render distance
			 float font_size = 1.0f;                                        // Font size multiplier for text rendering

			 // Constructor for easy initialization
			 ESPConfig(bool _enabled = false, bool _show_distance = true,
				 float r = 1.0f, float g = 1.0f, float b = 1.0f, float a = 1.0f,
				 float _max_distance = 350.0f, float _font_size = 1.0f)
				 : enabled(_enabled), show_distance(_show_distance), max_distance(_max_distance), font_size(_font_size)
			 {
				 color[0] = r; color[1] = g; color[2] = b; color[3] = a;
			 }
		 };

		 // Object type configurations
		 ESPConfig Weapons = ESPConfig(false, true, 1.0f, 1.0f, 1.0f, 1.0f, 350.0f, 1.0f);     // White
		 ESPConfig Food = ESPConfig(false, true, 0.0f, 1.0f, 0.0f, 1.0f, 350.0f, 1.0f);        // Green
		 ESPConfig Valuable = ESPConfig(false, true, 1.0f, 1.0f, 0.0f, 1.0f, 350.0f, 1.0f);    // Yellow
		 ESPConfig Water = ESPConfig(false, true, 0.0f, 0.0f, 1.0f, 1.0f, 350.0f, 1.0f);      // Blue
		 ESPConfig Exfil = ESPConfig(false, true, 1.0f, 0.0f, 1.0f, 1.0f, 350.0f, 1.0f);       // Magenta
		 ESPConfig Meds = ESPConfig(false, true, 1.0f, 0.0f, 0.0f, 1.0f, 350.0f, 1.0f);       // Red
		 ESPConfig Grenades = ESPConfig(false, true, 1.0f, 0.5f, 0.0f, 1.0f, 350.0f, 1.0f);    // Orange
		 ESPConfig Keys = ESPConfig(false, true, 0.5f, 0.5f, 0.5f, 1.0f, 350.0f, 1.0f);        // Gray
		 ESPConfig Doors = ESPConfig(false, true, 0.6f, 0.3f, 0.0f, 1.0f, 350.0f, 1.0f);       // Brown

		 // Dead body configurations
		 ESPConfig PlayerCorpses = ESPConfig(true, true, 0.7f, 0.7f, 0.7f, 1.0f, 350.0f, 1.0f);  // Light Gray
		 ESPConfig NPCCorpses = ESPConfig(true, true, 0.5f, 0.5f, 0.5f, 1.0f, 350.0f, 1.0f);     // Dark Gray
		 ESPConfig Ball = ESPConfig(false, true, 1.0f, 0.0f, 1.0f, 1.0f, 350.0f, 1.0f);
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

	struct Item_Spawner
	{
		 const char* Item_names[1076] = {//Spawnable items
				"12Ga_Bullet_BuckAP_C",
				"12Ga_Bullet_BuckHP_C",
				"12Ga_Bullet_SlugAP_C",
				"12Ga_Bullet_SlugHP_C",
				"45ACP_Bullet_APv1_C",
				"45ACP_Bullet_FMJ_C",
				"45ACP_Bullet_Tracer_C",
				"45degreeRail_C",
				"545x39_Bullet_APv1_C",
				"545x39_Bullet_APv2_C",
				"545x39_Bullet_FMJ_C",
				"545x39_Bullet_HPv1_C",
				"545x39_Bullet_Tracer_C",
				"556x45_Bullet_APv1_C",
				"556x45_Bullet_APv2_C",
				"556x45_Bullet_FMJ_C",
				"556x45_Bullet_GodLikeTest_C",
				"556x45_Bullet_HPv1_C",
				"556x45_Bullet_Tracer_C",
				"68x51_Bullet_APv1_C",
				"68x51_Bullet_FMJ_C",
				"762x39_Bullet_APv1_C",
				"762x39_Bullet_APv2_C",
				"762x39_Bullet_FMJ_C",
				"762x39_Bullet_HPv1_C",
				"762x39_Bullet_Tracer_C",
				"762x51_Bullet_APv1_C",
				"762x51_Bullet_APv2_C",
				"762x51_Bullet_FMJ_C",
				"762x51_Bullet_HPv1_C",
				"762x51_Bullet_Tracer_C",
				"762x54R_Bullet_APv1_C",
				"762x54R_Bullet_APv2_C",
				"762x54R_Bullet_FMJ_C",
				"762x54R_Bullet_HPv1_C",
				"762x54R_Bullet_Tracer_C",
				"9x19_Bullet_APv1_C",
				"9x19_Bullet_FMJ_C",
				"9x19_Bullet_HPv1_C",
				"9x19_Bullet_Tracer_C",
				"ACHFaceShield_C",
				"AdrenalineInjector_C",
				"AimpointT1Sight_C",
				"AK74_Clip_C",
				"AK74TriangleGrip_C",
				"AK74ub18_Rail_C",
				"AK74VerticalGrip_C",
				"AK_Alpha_C",
				"AK_SideRailAttachment_01_C",
				"AK_SideRailAttachment_02_C",
				"AKalpha_Clip_C",
				"AKalpha_Pfog_Clip_C",
				"AKalphaLizard_Clip_C",
				"AKM_C",
				"AKM_Clip_C",
				"AKM_Clip_Gundam_C",
				"AKM_IronSight_C",
				"AKM_X_Max_Skin_C",
				"AKMSuppressor_C",
				"AKS74Suppressor_C",
				"AKS74U_C",
				"AKS74U_Clip_C",
				"AmmoBoxBase_C",
				"AmmoSupply_C",
				"Anti-ReconnaissanceUSB_C",
				"AP85_C",
				"AP85_Clip_C",
				"AP85Suppressor_C",
				"ArmorExpansion_2_C",
				"ArmorExpansion_ARK_C",
				"ArmorPlate_C",
				"As_Val_C",
				"As_Val_Clip_C",
				"AUG_C",
				"AUG_Clip_C",
				"AUGIronSight_C",
				"AUGSuppressor_C",
				"AWP_C",
				"AWP_Clip_C",
				"AWPSkinAttachment_C",
				"BackpackBP_C",
				"BackpackExpansion_C",
				"BaseAmmoPack_C",
				"BP_686_Bullet_C",
				"BP_BaseSupplies_C",
				"BP_BR_ZomboyIronSight_C",
				"BP_Card_C",
				"BP_Door_C",
				"BP_Flashlight_C",
				"BP_FlashLightBase_C",
				"BP_FlashLightWithLaser_C",
				"BP_Key_C",
				"BP_LockedDoorBase_C",
				"BP_MarkingActor_C",
				"BP_NewPrimaryGun_C",
				"BP_PendantBase_C",
				"BP_S686_BulletPouch_C",
				"BP_WarfareTraceGrenade_C",
				"BR_ACOG4X_Ground_C",
				"BR_ACOG_4Xdot_Ground_C",
				"BR_AK74_C",
				"BR_AKalpha_C",
				"BR_AKAlpha_Lizard_C",
				"BR_AKAlpha_PoisionFog_C",
				"BR_AKM_BOT_C",
				"BR_AKM_BOT_SOLO_C",
				"BR_AKM_C",
				"BR_AKM_Gundam_C",
				"BR_AKM_RecoilTest_C",
				"BR_AKM_RecoilTest_Child_C",
				"BR_AKM_Train_C",
				"BR_AKS74U_C",
				"BR_Arrow_C",
				"BR_ArrowsQuiver_C",
				"BR_As_Val_C",
				"BR_AWP_C",
				"BR_Bow_C",
				"BR_BX4_C",
				"BR_Compensator_Ground_C",
				"BR_compensator_S686_C",
				"BR_CZ805_C",
				"BR_CZEVO3_C",
				"BR_DBP12_C",
				"BR_Deagle_C",
				"BR_DefaultRedDotSight_C",
				"BR_DetectionGrenade_C",
				"BR_EOTechHologramSight_C",
				"BR_EOTechHologramSight_FDE_C",
				"BR_Famas_C",
				"BR_FlashBanger_C",
				"BR_FragmentGrenade_C",
				"BR_G3SG1_C",
				"BR_Glock18C_C",
				"BR_Glock22_C",
				"BR_Gunfighter_BK_C",
				"BR_HK416_A001_C",
				"BR_HK416_C",
				"BR_HK416_NewRecoil_C",
				"BR_HK416Clip_A001_C",
				"BR_Kar98_Bullet_C",
				"BR_Kar98_BulletPouch_C",
				"BR_Kar98_C",
				"BR_Katana_C",
				"BR_Knife_C",
				"BR_KnifeBase_C",
				"BR_KrissVector_C",
				"BR_Laser_Ground_C",
				"BR_Laser_MAWL_C1_C",
				"BR_Laser_Pistol_C",
				"BR_LaunchableGrenade_C",
				"BR_M1014_C",
				"BR_M16_C",
				"BR_M1911_C",
				"BR_M1A_C",
				"BR_M1A_Stock_C",
				"BR_M200_C",
				"BR_M249_C",
				"BR_M40A5_C",
				"BR_M4A1_C",
				"BR_M92_C",
				"BR_Machete_C",
				"BR_MeleeWeapon_C",
				"BR_MK17SSR_C",
				"BR_MK17SSRSuppressor_C",
				"BR_MK18_C",
				"BR_Money_BOT_C",
				"BR_Money_C",
				"BR_Money_lv1_C",
				"BR_Money_lv2_C",
				"BR_Money_lv3_C",
				"BR_Money_task_delivery_C",
				"BR_Money_task_hunting_C",
				"BR_MP5A2_C",
				"BR_Origin12_C",
				"BR_P30_C",
				"BR_PKP_C",
				"BR_PowerScope_Ground_C",
				"BR_RadiationGrenade_C",
				"BR_RFB_C",
				"BR_RM870_C",
				"BR_S686_C",
				"BR_Scar-L_C",
				"BR_Shift_BK_C",
				"BR_Sight1X_Ground_C",
				"BR_SKS_C",
				"BR_SmokeGrenade_C",
				"BR_Spector_BK_C",
				"BR_Suppressor_Ground_C",
				"BR_SVD_C",
				"BR_SwordBase_C",
				"BR_TriangleGripGround_C",
				"BR_Trigrip_Cobra_BK_C",
				"BR_Trigrip_SE_BK_C",
				"BR_TutorialGun_C",
				"BR_UMP_C",
				"BR_UrgentTask_DeliveryBox_C",
				"BR_UZI_C",
				"BR_VerticalGrip_Ground_C",
				"BR_VerticalGrip_RVG_BK_C",
				"BR_VerticalGrip_TDs_BK_C",
				"BR_WW2_Bren_C",
				"BR_XM5_C",
				"BR_XM5_Clip_C",
				"BR_ZomboyForeGripAttachmentBP_C",
				"BR_ZomboyGunMuzzleAttachmentBP_C",
				"BR_ZomboySightAttachmentBP_C",
				"BR_ZomboyVRZoomSight_C",
				"BR_ZomboyZoomSightBase_C",
				"BRLoadoutInteraction_C",
				"BuffSyringeBase_C",
				"BulletBox_545x39_C",
				"BulletBox_556x45_C",
				"BX4_Clip_C",
				"CharacterManipulator_C",
				"ChooseRoleInteraction_C",
				"ClamshellBoxBase_C",
				"CollectionBoxBase_C",
				"ContractorsBulletPouch_C",
				"ContractorsGun_C",
				"ContractorsGunClip_C",
				"ContractorsPrimArmAmmoClip_C",
				"ContractorsPrimaryGun_C",
				"ContractorsPumpActionShotgun_C",
				"ContractorsSideArmAmmoClip_C",
				"ContractorsSideArmGun_C",
				"Crates_Blue_C",
				"Crates_C",
				"Crates_Green_C",
				"Crates_White_C",
				"CS_Gun_Livery_C",
				"CS_MeleeWeapon_C",
				"CS_SkeletonMesh_Interactable_Actor_C",
				"CS_Skin_C",
				"CS_StaticMesh_Interactable_Actors_C",
				"CureActorBase_C",
				"CZ805_C",
				"CZ805_Clip_C",
				"CZ805_IronSight_C",
				"CZ805Suppressor_C",
				"CZevo3_C",
				"CZevo3_Clip_C",
				"Deagle_C",
				"Deagle_Clip_C",
				"DEagleSkinAttachment_C",
				"DeathBoxBP_C",
				"DecoyUSB_C",
				"DetectionGrenade_C",
				"DP12_Bullet_C",
				"DP12_BulletPouch_C",
				"DP12_Clip_C",
				"DP12Base_C",
				"DronesUSB_C",
				"ElevatingDrones_C",
				"EOTechHologramSight_C",
				"ExpansionBase_C",
				"FALSuppressor_C",
				"Famas_C",
				"Famas_Clip_C",
				"FAMASSuppressor_C",
				"FNFAL_C",
				"FNFAL_Clip_C",
				"FridgeInterable_C",
				"G36C_C",
				"G36C_Clip_C",
				"G36C_IronSight_C",
				"G36CSuppressor_C",
				"G3_RailAttachment_topbt3_C",
				"G3_RailAttachment_topHighlever_C",
				"G3_RailAttachment_topMLF_C",
				"G3_X_Max_Skin_C",
				"G3SG1_C",
				"G3SG1_Clip_C",
				"GameVaultBoxBase_C",
				"Glock18c_C",
				"Glock18c_Clip_C",
				"Glock22_1_C",
				"Glock22_Clip_C",
				"Glock_X_Max_Skin_C",
				"GlockSuppressor_C",
				"GraphicsCradRevenueScreen_C",
				"GrenadeLauncher_C",
				"gunpowder_C",
				"HCStimulantInjector_C",
				"HK416_C",
				"HK416_Clip_C",
				"HK416_TutorialClip_C",
				"hk416IronSight_C",
				"HP_needle_lv1_C",
				"HP_needle_lv2_C",
				"HP_needle_pro_lv1_C",
				"HP_needle_pro_lv2_C",
				"HPSyringeBase_C",
				"KA5C_C",
				"KA5C_Clip_C",
				"KA5CSuppressor_C",
				"KB22StimulantInjector_C",
				"Key_Map1_bearTown_h1_C",
				"Key_Map1_HighBuilding_shop_C",
				"Key_Map1_Mall_CampShop_C",
				"Key_Map1_Mall_Chaneo_C",
				"Key_Map1_motel_201_C",
				"Key_Map1_motel_206_C",
				"Key_Map1_Police_F1_C",
				"Key_Map1_PoliceOffice_F2_C",
				"Key_Map1_WestBunker_C",
				"Key_Map1_WyethFarm_C",
				"Key_Map2_Clifton_Shop_C",
				"Key_Map2_Dam_Station_East_C",
				"Key_Map2_Dam_Station_West_C",
				"Key_Map2_DockHouse_C",
				"Key_Map2_Factory_A1_C",
				"Key_Map2_Factory_B_C",
				"Key_Map2_mid_Bunker_C",
				"Key_Map3_armorHouse_C",
				"Key_Map3_DataStorage_C",
				"Key_Map3_ExitLock_F3_sewer_C",
				"Key_Map3_ExitLock_trainroad_C",
				"Key_Map3_F3_FactoryRoom_C",
				"Key_Map3_officerRoom_C",
				"Key_Map3_operatingRoom_C",
				"Key_Map4_Apartment_C",
				"Key_Map4_BankF2_C",
				"Key_Map4_BankSewer_C",
				"Key_Map4_C",
				"Key_Map4_HospitalF2_C",
				"Key_Map4_ResortHotel_C",
				"Key_Map4_Tunnel_C",
				"Key_Map4_Voyages_C",
				"Kiver-MFaceShield_C",
				"KobraSight_BP_C",
				"KrissVector_C",
				"KrissVector_Clip_C",
				"KrissVector_IronSight_C",
				"KVSuppressor_C",
				"LH250google_C",
				"LH250mask_C",
				"LMG_Clip_C",
				"LMGBase_C",
				"LootBoxBase_C",
				"M1014_C",
				"M1014_Clip_C",
				"M145Sight_C",
				"M16_C",
				"M16_Clip_C",
				"M16A2_RailAttachment_C",
				"M16IronSight_C",
				"M16Suppressor_C",
				"M1911A1new_C",
				"m1911new_Clip_C",
				"M1A_C",
				"M1A_Clip_C",
				"M1A_Clip_New_C",
				"m200_C",
				"M200_Clip_C",
				"M249_Clip_C",
				"M40A5_C",
				"M40A5_Clip_C",
				"M4A1_C",
				"M4A1_Clip_C",
				"M4A1IronSight_C",
				"M590SG_Bullet_C",
				"M590SG_BulletPouch_C",
				"M590SG_C",
				"M590SG_Clip_C",
				"M92_C",
				"M92_Clip_C",
				"Maggie_camera_C",
				"Magnum_C",
				"Magnum_Clip_C",
				"Magnum_Loader_C",
				"MagnumSight_C",
				"MainTerminalPadScreen_C",
				"MarkUSB_C",
				"MarkUSB_Warfare_C",
				"MICA_Device_Base_C",
				"MICA_Device_C",
				"MICA_DeviceOuter_C",
				"MICADevice_Tutorial_C",
				"MK17_Clip_BK_C",
				"MK17_Clip_FDE_C",
				"MK17SSR_C",
				"MK17SSR_Clip_C",
				"MK18_C",
				"MK18_Clip_C",
				"MK18_X_Max_Skin_C",
				"MK18IronSight_C",
				"Mk18Suppressor_C",
				"MLOK_RailAttachment_L_C",
				"MLOK_RailAttachment_S_C",
				"MP5_RailAttachment_C",
				"Mp5_X_Max_Skin_C",
				"MP5A2_C",
				"MP5A2_Clip_C",
				"MP5Suppressor_C",
				"NoneInteractableActor_C",
				"Origin12_C",
				"Origin12_Clip_C",
				"P250Suppressor_C",
				"P30_C",
				"P30_Clip_C",
				"P4StimulantInjector_C",
				"Pistol_RailAttachment_C",
				"PistolAmmoPack_C",
				"PistolClipExpansion_C",
				"PKP_Clip_C",
				"PKP_RailAttachment_C",
				"Placement_Igor_MemoBeer_C",
				"Placement_Igor_supplycase_C",
				"Placement_Johnny_WalkieTalkie_C",
				"Placement_Maggie_Medicine_C",
				"Placement_Maggie_USB_C",
				"Placement_Max_Cash_C",
				"Placement_Max_ring_C",
				"Placement_SignalEnhancer_C",
				"Placement_Tommy_SurveillanceCam_C",
				"Placement_Tommy_Telescope_C",
				"PlacmentMover_C",
				"PlacmentRemover_C",
				"PressSwitch_C",
				"PSG_RailAttachment_top_C",
				"QBZ95_C",
				"QBZ95_Clip_C",
				"QBZ95Suppressor_C",
				"QBZIronSight_C",
				"QuadBikeDoor_C",
				"QuadBikeSteeringWheel_C",
				"RailAttachment_BPBase_C",
				"RailAttachmentBase_C",
				"RecyclingBinPadScreen_C",
				"ReflexRedDotSight_C",
				"RemoteBombUSB_C",
				"RescueNeedle_C",
				"ReverseRail_Base_C",
				"RFB_Clip_C",
				"RFBrifle_C",
				"RifleAmmoPack_C",
				"RifleClipExpansion_C",
				"RM870_C",
				"RM870_Clip_C",
				"RM870_X_Max_Skin_C",
				"RoomPlacementPad_C",
				"RoomPlacer_C",
				"RYS-TFaceShield_bonecrusher_C",
				"RYS-TFaceShield_C",
				"S686_C",
				"Sako85_C",
				"Sako85_Clip_C",
				"Sako_IronSight_C",
				"SCALTriangleGrip_C",
				"Scar-L_C",
				"Scar-LClip_C",
				"Scar_IronSight_C",
				"ScarSuppressor_C",
				"SelfRescueNeedle_C",
				"ShieldUSB_C",
				"ShotGunAmmoPack_C",
				"ShotGunShellHolder_C",
				"SKS_Old_C",
				"SKS_Old_Clip_C",
				"SKS_RailAttachment_C",
				"SKSIronSight_C",
				"SMGAmmoPack_C",
				"SMGClipExpansion_C",
				"SniperAmmoPack_C",
				"SniperClipExpansion_C",
				"SteeringWheel_C",
				"STG77_Scope_C",
				"StorePadScreen_armor_C",
				"StorePadScreen_C",
				"SUVSteeringWheel_C",
				"SVD_C",
				"SVD_Clip_1_C",
				"SVT_PowerScope_C",
				"TaksItem_baseball_C",
				"Task_ARK_FloppyDisk_C",
				"Task_GameDisk_C",
				"Task_Igor_sunglass_C",
				"Task_MedicalReport_C",
				"Task_MissileLauncher_C",
				"Task_MS2000_Tracker_C",
				"Task_ValuableItem_B_ElectricDrill_blue_C",
				"Task_VRheadset_C",
				"TaskIntelPhone_C",
				"TaskItem_B_ElectricDrill_C",
				"TaskItem_GoldCup_C",
				"TaskItem_GoldeEarth_C",
				"TaskItem_GoldIngot_C",
				"TaskItem_Igor_notebook_C",
				"TaskItem_MedHerb_C",
				"TaskItem_medicalbag_C",
				"Taskitem_plate1_C",
				"Taskitem_plate2_C",
				"TaskItem_Radio_C",
				"TaskItem_Safecase_C",
				"TaskItem_SharkDVD1_C",
				"TaskItem_SharkDVD2_C",
				"TaskItem_SubwayDVD1_C",
				"TaskItem_SubwayDVD2_C",
				"TaskItem_WyethWine_C",
				"TaskItemBase_C",
				"TaskItemBase_FamilyTape_C",
				"TaskItemBase_PoliceF1Key_C",
				"TouchScreenInteraction_AmmoBox_C",
				"TouchScreenInteraction_C",
				"UAVUSB_C",
				"UAVUSB_Super_C",
				"UMP_C",
				"UMP_Clip_C",
				"UMPSuppressor_C",
				"UrgentTaskUSB_Delivery_C",
				"UrgentTaskUSBBase_C",
				"USB_Base_C",
				"UZI_C",
				"UZI_Clip_C",
				"UZISuppressor_C",
				"ValuableBoxScreen_C",
				"ValuableItem_1batterie_2_C",
				"ValuableItem_B_1battery_C",
				"ValuableItem_B_AladdinLamp_C",
				"ValuableItem_B_AntiqueBook_C",
				"ValuableItem_B_AntiqueTeaSet_C",
				"ValuableItem_B_Aspire_C",
				"ValuableItem_B_AsthmaMedication_C",
				"ValuableItem_B_BandAid_C",
				"ValuableItem_B_batter_large_C",
				"ValuableItem_B_BeardOil_C",
				"ValuableItem_B_BottledGlucose_C",
				"ValuableItem_B_BullStatue_C",
				"ValuableItem_B_cash2_C",
				"ValuableItem_B_cash3_C",
				"ValuableItem_B_cash_C",
				"ValuableItem_B_Centrifuge_C",
				"ValuableItem_B_ceramic_adhesive_C",
				"ValuableItem_B_civilRadio_C",
				"ValuableItem_B_ClimbingRope_C",
				"ValuableItem_B_ComputerTextbook_C",
				"ValuableItem_B_CPU_C",
				"ValuableItem_B_CrimsonQueenRing_C",
				"ValuableItem_B_DataLine_C",
				"ValuableItem_B_defibrillator_C",
				"ValuableItem_B_Deodorant_C",
				"ValuableItem_B_DigitalSensor_C",
				"ValuableItem_B_DisinfectingWipes_C",
				"ValuableItem_B_ElectricDrill_C",
				"ValuableItem_B_flashLight_C",
				"ValuableItem_B_GameCartridge_A_C",
				"ValuableItem_B_GameCartridge_B_C",
				"ValuableItem_B_GameCartridge_C",
				"ValuableItem_B_GameCartridge_D_C",
				"ValuableItem_B_GameConsole_C",
				"ValuableItem_B_GasPipeWrench_C",
				"ValuableItem_B_GasTank_C",
				"ValuableItem_B_GasTank_Large_C",
				"ValuableItem_B_glue_large_C",
				"ValuableItem_B_goldElephant_C",
				"ValuableItem_B_GoldenKnife_C",
				"ValuableItem_B_GoldenLionRing_C",
				"ValuableItem_B_GoldenPrize_C",
				"ValuableItem_B_GunOil_C",
				"ValuableItem_B_HardDrive_C",
				"ValuableItem_B_HorrorNovel_C",
				"ValuableItem_B_InsulatingTape_C",
				"ValuableItem_B_Iodophor_C",
				"ValuableItem_B_IonBattery_C",
				"ValuableItem_B_LightBulb_C",
				"ValuableItem_B_Lighter_C",
				"ValuableItem_B_Magazine_C",
				"ValuableItem_B_MarineStorageBattery_C",
				"ValuableItem_B_match_C",
				"ValuableItem_B_MedicalKit_C",
				"ValuableItem_B_MedicalScissors_C",
				"ValuableItem_B_MilitaryHardDrive_C",
				"ValuableItem_B_MilitaryUSBdrive_C",
				"ValuableItem_B_Moldboard_C",
				"ValuableItem_B_Nail_C",
				"ValuableItem_B_NewPhone_C",
				"ValuableItem_B_nut2_C",
				"ValuableItem_B_Nut_C",
				"ValuableItem_B_OldPhone_C",
				"ValuableItem_B_OliveOil_C",
				"ValuableItem_B_OpticalDisc_C",
				"ValuableItem_B_PCFAN_C",
				"ValuableItem_B_Perfume_C",
				"ValuableItem_B_Pesticide_C",
				"ValuableItem_B_Piezometer_C",
				"ValuableItem_B_Pipeline_C",
				"ValuableItem_B_Plier_C",
				"ValuableItem_B_Plier_Large_C",
				"ValuableItem_B_PowerBank_C",
				"ValuableItem_B_radioScanner_C",
				"ValuableItem_B_RAM_C",
				"ValuableItem_B_rat_poison_C",
				"ValuableItem_B_Recorder_C",
				"ValuableItem_B_rustedCleaner_C",
				"ValuableItem_B_SaltCan_C",
				"ValuableItem_B_screw_C",
				"ValuableItem_B_Shampoo_C",
				"ValuableItem_B_SmallShovel_C",
				"ValuableItem_B_smokelessPowder_C",
				"ValuableItem_B_Soap_C",
				"ValuableItem_B_socket_C",
				"ValuableItem_B_SparkPlug_C",
				"ValuableItem_B_SprayCan_C",
				"ValuableItem_B_stonLion_C",
				"ValuableItem_B_StorageBattery_C",
				"ValuableItem_B_Superglue_C",
				"ValuableItem_B_tape_holder_C",
				"ValuableItem_B_TapeMeasure_C",
				"ValuableItem_B_TapePlayer_C",
				"ValuableItem_B_tire_sealant_C",
				"ValuableItem_B_toiletpaper_C",
				"ValuableItem_B_Toothpaste_C",
				"ValuableItem_B_Transformer_C",
				"ValuableItem_B_Uvlight_C",
				"ValuableItem_B_VisionModule_C",
				"ValuableItem_B_WD40_C",
				"ValuableItem_B_Wire_C",
				"ValuableItem_B_WireCutting_C",
				"ValuableItem_B_Wrench_C",
				"ValuableItem_badge_C",
				"ValuableItem_camera_C",
				"ValuableItem_copperwire_C",
				"ValuableItem_csdoll_gold_C",
				"ValuableItem_csdoll_standard_2_C",
				"ValuableItem_csdoll_standard_3_C",
				"ValuableItem_csdoll_standard_4_C",
				"ValuableItem_csdoll_standard_5_C",
				"ValuableItem_csdoll_standard_6_C",
				"ValuableItem_csdoll_standard_7_C",
				"ValuableItem_csdoll_standard_C",
				"ValuableItem_Diamondring_C",
				"ValuableItem_Facialcleaner_C",
				"ValuableItem_floppydisk_C",
				"ValuableItem_fossil_C",
				"ValuableItem_gamedisk_C",
				"ValuableItem_gamedisk_DeluxEdition_C",
				"ValuableItem_gamedisk_showdown_C",
				"ValuableItem_gamedisk_showdown_DeluxEdition_C",
				"ValuableItem_goldcup_C",
				"ValuableItem_GoldIngot_C",
				"ValuableItem_Graphiccard_C",
				"ValuableItem_gunpowder_C",
				"ValuableItem_hammer_C",
				"ValuableItem_Household_Cleaner_C",
				"ValuableItem_Lighterfluid_C",
				"ValuableItem_metroentry_C",
				"ValuableItem_mouse_C",
				"ValuableItem_notebook_C",
				"ValuableItem_Oilcan_C",
				"ValuableItem_pocketwatch_C",
				"ValuableItem_Radio_C",
				"ValuableItem_remote_C",
				"ValuableItem_Screwdriver_C",
				"ValuableItem_silvercup_C",
				"ValuableItem_tape_C",
				"ValuableItem_videotape_C",
				"ValuableItem_wastechip_C",
				"ValuableItem_Wrench_C",
				"ValuableItemBase_C",
				"ValuableItemCollectionBox_C",
				"ValuableItemCollectionBox_small_C",
				"VariableMagnificationScopeBase_C",
				"VaultActor_C",
				"VehicleMicaAttachGrabActor_C",
				"VehicleSeatDoor_C",
				"VestHolster_556Faster_C",
				"VestHolster_C",
				"VestHolster_Grenade_C",
				"VestHolster_MagD_C",
				"VestHolster_MagL_C",
				"VestHolster_MagM_C",
				"VestHolster_MagS_C",
				"VestHolster_Water_C",
				"WalkieTalkie_C",
				"Warfare_HK416_C",
				"Warfare_HK416_Magazine_C",
				"WarfareAlternatorOilDrum_C",
				"WarfareAlternatorOilDrum_XL_C",
				"WarfareBackpack006_C",
				"WarfareBackpack007_C",
				"WarfareBackpack_Odldos_Black_C",
				"WarfareBackpack_Odldos_flower_C",
				"WarfareBackpack_Robinson_C",
				"WarfareBackpack_Rucksack_C",
				"WarfareBackpack_SportBag_C",
				"WarfareBackpackBase_3DRT_C",
				"WarfareBackpackBase_C",
				"WarfareBackpackBase_EliteOps_C",
				"WarfareBackpackBase_EliteOps_Green_C",
				"WarfareBandage_lv1_C",
				"WarfareBandage_lv2_C",
				"WarfareBandage_lv3_C",
				"WarfareBandageBase_C",
				"WarfareBrokenLimbRestorer_C",
				"WarfareBrokenLimbRestorerLv1_C",
				"WarfareBrokenLimbRestorerLv2_C",
				"WarfareBrokenLimbRestorerLv3_C",
				"WarfareBullet_C",
				"WarfareHelmet_6B47_C",
				"WarfareHelmet_ACHF_C",
				"WarfareHelmet_ACHFB_C",
				"WarfareHelmet_beanie_C",
				"WarfareHelmet_BikeHelmet_C",
				"WarfareHelmet_blackberet_C",
				"WarfareHelmet_C",
				"WarfareHelmet_camoberet_C",
				"WarfareHelmet_cap_C",
				"WarfareHelmet_Chrismas_Fast_C",
				"WarfareHelmet_Chrismas_Fast_rd_C",
				"WarfareHelmet_Delta_C",
				"WarfareHelmet_Delta_LE_C",
				"WarfareHelmet_Fast_C",
				"WarfareHelmet_KeepSafe_C",
				"WarfareHelmet_KiverMF_C",
				"WarfareHelmet_Lightweight_BK_C",
				"WarfareHelmet_Lightweight_C",
				"WarfareHelmet_OPSWAT_C",
				"WarfareHelmet_PASGT_C",
				"WarfareHelmet_pilot_C",
				"WarfareHelmet_Redberet_C",
				"WarfareHelmet_RSP_C",
				"WarfareHelmet_RSP_NE_C",
				"WarfareHelmet_RSP_NK_C",
				"WarfareHelmet_RYS_T_bonecrusher_C",
				"WarfareHelmet_RYS_T_C",
				"WarfareHelmet_SkullFaceBoss_C",
				"WarfareHelmet_tsh4m_C",
				"WarfareHelmet_usww2_C",
				"WarfareHelmet_Warrior_C",
				"WarfareHelmet_WBK_C",
				"WarfareMicaDevice_C",
				"WarfareMorphineNeedle_C",
				"WarfarePainkiller_C",
				"WarfarePainkillerLv1_C",
				"WarfarePainkillerLv2_C",
				"WarfarePainkillerLv3_C",
				"WarfareTecVest_6B17_C",
				"WarfareTecVest_6B17rig_C",
				"WarfareTecVest_6B2_C",
				"WarfareTecVest_ApexBK_C",
				"WarfareTecVest_ApexMC_C",
				"WarfareTecVest_C",
				"WarfareTecVest_DuoMoutains_C",
				"WarfareTecVest_IMTV_Bonecrusher_C",
				"WarfareTecVest_IMTV_C",
				"WarfareTecVest_IOTVGEN3_C",
				"WarfareTecVest_JPC_C",
				"WarfareTecVest_Police_C",
				"WarfareTecVest_Press_C",
				"WarfareTecVest_RaidExplorer_Black_C",
				"WarfareTecVest_RaidExplorer_SD_C",
				"WarfareTecVest_Rampage_bells_C",
				"WarfareTecVest_Rampage_C",
				"WarfareTecVest_Rampage_OD_C",
				"WarfareTecVest_Rampage_skull_C",
				"WarfareTecVest_SDprotecter_Black_C",
				"WarfareTecVest_SDprotecter_C",
				"WarfareTecVest_Security_C",
				"WarfareTecVest_SoftArmor_C",
				"WarfareTecVest_SuddenAttack_C",
				"WarfareTecVest_WDCS_C",
				"WarfareTecVest_WDCS_Swat_C",
				"WaterCollectorPressSwitch_C",
				"WF_545Mag_PUFGUN_C",
				"WF_545x39_74UDefault_C",
				"WF_545y_Mag_C",
				"WF_556x45_20R_C",
				"WF_556x45_Clip_SECA16_C",
				"WF_556x45NATO_Drum50_C",
				"WF_556x45NATO_Pmag30_C",
				"WF_556x45NATO_Pmag60_C",
				"WF_556x45NATO_SF60_C",
				"WF_ACOG_C",
				"WF_AFGTriangleGrip_C",
				"WF_AimpointT1Sight_C",
				"WF_Airdrop_2_C",
				"WF_AirdropBase_C",
				"WF_AK74_C",
				"WF_AK74M_C",
				"WF_AK74N_Factory_C",
				"WF_AK74N_MOD1_C",
				"WF_AKM_C",
				"WF_AKM_mag75Drum_C",
				"WF_AKM_Magazine_C",
				"WF_AKM_MagC10R_C",
				"WF_AKM_MagC20R_C",
				"WF_AKM_MagP10RBK_C",
				"WF_AKM_MagP10RFDE_C",
				"WF_AKM_MagP20RBK_C",
				"WF_AKM_MagP20RFDE_C",
				"WF_AKM_magq60bk_C",
				"WF_AKM_magq60FDE_C",
				"WF_AKMN_C",
				"WF_AKMN_G_C",
				"WF_AKMN_GLP_C",
				"WF_AKMN_XM_C",
				"WF_AKS74U_C",
				"WF_AKS74U_ZT_C",
				"WF_AR15_Pistol_C",
				"WF_AR308_C",
				"WF_AR308_LT_C",
				"WF_AR308clip_10_C",
				"WF_AR308clip_20_C",
				"WF_AUG_A1_C",
				"WF_AUG_A3_CQB_C",
				"WF_AUG_A3_RIS_C",
				"WF_AUG_A3_STG77_C",
				"WF_AUG_Mag30_C",
				"WF_AUG_Mag42_C",
				"WF_AUG_Mag_para25_C",
				"WF_AUG_para_C",
				"WF_Backpack_6sh118_C",
				"WF_Bomb_C",
				"WF_box_7788_airdrop_C",
				"WF_box_7788_lv3_C",
				"WF_box_ammo_lv4_C",
				"WF_box_blindBox_C",
				"WF_box_gear_lv4_C",
				"WF_box_safebox_airdrop_C",
				"WF_box_weapon_lv4_C",
				"WF_BRAVO4_C",
				"WF_BX4_C",
				"WF_BX4_Clip_C",
				"WF_Cmuzzle_SLR_C",
				"WF_Cmuzzle_SLR_HiHeat_C",
				"WF_Compensator_AUG_adaptor_C",
				"WF_Compensator_CookieCutter_C",
				"WF_Compensator_DMR_C",
				"WF_Compensator_DTK1_C",
				"WF_Compensator_DTK2_C",
				"WF_Compensator_Innovations_C",
				"WF_Compensator_Pistol_C",
				"WF_Compensator_Raptor_C",
				"WF_Compensator_Rifle_Default_C",
				"WF_Compensator_VP09_C",
				"WF_CompensatorBase_C",
				"WF_DefaultSuppressor_C",
				"WF_Devo_C",
				"WF_EOTechHologramSight_C",
				"WF_EOTechHologramSight_FDE_C",
				"WF_EVO3_C",
				"WF_Evo3_Clip_C",
				"WF_Evo3_Clip_Drum_C",
				"WF_FAL_clip_C",
				"WF_FalconZF_C",
				"WF_Flame12_C",
				"WF_Flame12_Clip_C",
				"WF_FlashBanger_C",
				"WF_FlashLight_H200_C",
				"WF_FNFAL_C",
				"WF_food2_apple_C",
				"WF_food2_base_C",
				"WF_food2_ginger_C",
				"WF_food_base_C",
				"WF_food_BisCuits_C",
				"WF_food_chocolate_bar_C",
				"WF_food_meatbox_C",
				"WF_food_meatcan_C",
				"WF_food_peacan_C",
				"WF_food_sausage_C",
				"WF_food_Snickers_C",
				"WF_food_watle1_base_C",
				"WF_food_watle1_bear_C",
				"WF_food_watle1_coffee_C",
				"WF_food_watle1_nomal_C",
				"WF_food_watle1_orange_C",
				"WF_food_watle1_xmasBottle_C",
				"WF_FragmentGrenade_C",
				"WF_FragmentGrenade_F1_C",
				"WF_FragmentGrenade_RDG5_C",
				"WF_FragmentGrenade_RGN_C",
				"WF_FragmentGrenade_RGO_C",
				"WF_FragmentGrenade_VOG17_C",
				"WF_FragmentGrenade_VOG25_C",
				"WF_G3A3_C",
				"WF_G3series_hk51_ace_C",
				"WF_G3series_hk51_C",
				"WF_G3series_hk51k_C",
				"WF_G3series_HK91_wood_C",
				"WF_G3series_PSG_1_C",
				"WF_G3SG1_ak4_C",
				"WF_G3SG1_Clip_10_C",
				"WF_G3SG1_Clip_20_C",
				"WF_G3SG1_Clip_30_C",
				"WF_G3SG1_Clip_50_Black_C",
				"WF_G3SG1_Clip_50_green_C",
				"WF_G3SG1_PRS_C",
				"WF_G3SG1_spuhr_C",
				"WF_Glock18C_C",
				"WF_Glock18c_Clip33R_C",
				"WF_Glock18c_Clip_C",
				"WF_Gunfighter_BK_C",
				"WF_Gunfighter_FDE_C",
				"WF_Gunfighter_Olive_C",
				"WF_HAMRSight_4X_C",
				"WF_InteractionIronsight_Base_C",
				"WF_Ironsight_CAFFS_C",
				"WF_Ironsight_CAFFS_FDE_C",
				"WF_Ironsight_CAFFS_Green_C",
				"WF_Ironsight_CAFRS_C",
				"WF_Ironsight_CAFRS_FDE_C",
				"WF_Ironsight_CAFRS_green_C",
				"WF_KACPRS_BK_C",
				"WF_KACPRS_Sand_C",
				"WF_KobraSight_BP_C",
				"WF_Laser_Base_C",
				"WF_Laser_MAWL_C1_C",
				"WF_Laser_MX400_C",
				"WF_Laser_PEQ_C",
				"WF_Laser_Pistol_C",
				"WF_Laser_vario_BKshort_C",
				"WF_Laser_vario_FDElong_C",
				"WF_LcoSight_C",
				"WF_M16A2_C",
				"WF_M16A2_LV2_C",
				"WF_M1897_C",
				"WF_M1897_Clip_C",
				"WF_M1911_C",
				"WF_M1911_Clip_C",
				"WF_M1928_C",
				"WF_M1928_Clip_C",
				"WF_M3A1_C",
				"WF_m3a1_Clip_C",
				"WF_M40A5_C",
				"WF_M40A5_Clip_C",
				"WF_M40A5_Clip_Short_C",
				"WF_M4A1_Agent_C",
				"WF_M4A1_CQBR_C",
				"WF_M4A1_DD_C",
				"WF_M4A1_Factory_C",
				"WF_M4A1_Hunter_C",
				"WF_m4sd_C",
				"WF_M590Clip_C",
				"WF_M590SG_C",
				"WF_M92_C",
				"WF_M92_Clip_C",
				"WF_Malyuk545_C",
				"WF_Malyuk762_C",
				"WF_mark3scope_C",
				"WF_Mosin_9130_C",
				"WF_Mosin_C",
				"WF_Mosin_Clip_C",
				"WF_Mosin_M38_C",
				"WF_Mosin_OBREZ_C",
				"WF_MosinPU_C",
				"WF_MP5A3_C",
				"WF_MP5A3_Magazine_C",
				"WF_MP9_C",
				"WF_MP9_Clip15_C",
				"WF_MP9_Clip20_C",
				"WF_MP9_Clip30_C",
				"WF_MP9_N_C",
				"WF_MP9_Suppressor_C",
				"WF_MP9_T_C",
				"WF_NightHawk_C",
				"WF_NightVisionDevice_ANPVS31_C",
				"WF_NightVisionDevice_C",
				"WF_NomadRig_C",
				"WF_OCP7_C",
				"WF_Osprey9_C",
				"WF_P250_C",
				"WF_P250_Clip_C",
				"WF_PistolSight_Doc_mount_C",
				"WF_PistolSuppressor_C",
				"WF_PKP_C",
				"WF_PKP_Clip_C",
				"WF_PlacementActorBase_C",
				"WF_Pmag545_Mag_C",
				"WF_Pmag762_Mag_C",
				"WF_PSGscope_C",
				"WF_PumpActionShotgun_C",
				"WF_Romeo8T_C",
				"WF_S_Hybrid46_Grey_C",
				"WF_S_Hybrid46_Sand_C",
				"WF_S_TBeast_Normal_C",
				"WF_S_TBeast_U_BK_C",
				"WF_S_TBeast_U_Camo_C",
				"WF_S_TBeast_U_CB_C",
				"WF_SECA16_C",
				"WF_SECA17_BK_C",
				"WF_SECA17_FDE_C",
				"WF_SECA17SSR_C",
				"WF_Shift_BK_C",
				"WF_Shift_Olive_C",
				"WF_Shift_Red_C",
				"WF_Shift_Sand_C",
				"WF_SjogrenInertia_C",
				"WF_SjogrenInertia_clip_C",
				"WF_SKS_C",
				"WF_SKS_Clip_C",
				"WF_SmokeGrenade_C",
				"WF_Spector_BK_C",
				"WF_Spector_FDE_C",
				"WF_SRS_C",
				"WF_Suppressor_Base_C",
				"WF_svt40_C",
				"WF_svt40_mag_C",
				"WF_SvtPU_C",
				"WF_Trigrip_Cobra_BK_C",
				"WF_Trigrip_Cobra_OD_C",
				"WF_Trigrip_Cobra_Sand_C",
				"WF_Trigrip_SE_BK_C",
				"WF_Trigrip_SE_Grey_C",
				"WF_Trigrip_SE_Olive_C",
				"WF_Trigrip_SE_Sand_C",
				"WF_UMP45_C",
				"WF_ump45_Clip_C",
				"WF_Vertex_C",
				"WF_VerticalGrip_PK1B25U_C",
				"WF_VerticalGrip_RK1_C",
				"WF_VerticalGrip_RVG_BK_C",
				"WF_VerticalGrip_RVG_Olive_C",
				"WF_VerticalGrip_RVG_Sand_C",
				"WF_VerticalGrip_SG_C",
				"WF_VerticalGrip_TD_C",
				"WF_VerticalGrip_TDs_BK_C",
				"WF_VerticalGrip_TDs_Olive_C",
				"WF_VerticalGrip_TDs_Sand_C",
				"WF_walter_coke_base_C",
				"WF_walter_coke_C",
				"WF_walter_coke_thin_C",
				"WF_Walther_C",
				"WF_WarfareMask_C",
				"WF_XM5_C",
				"WF_XM5_Clip_C",
				"WF_ZomboySightAttachmentBP_C",
				"WW2_Bayonet_C",
				"WW2_Bren_C",
				"WW2_Bren_Clip_C",
				"WW2_Kar98_Bullet_C",
				"WW2_Kar98_BulletPouch_C",
				"WW2_Kar98_C",
				"WW2_Kar98_Clip_C",
				"WW2_MK2FragmentGrenade_C",
				"WW2_PowerScope_C",
				"WW2_PPSh41_C",
				"WW2_PPSh41_Clip_C",
				"WW2_SVT40_C",
				"WW2_SVT40_Clip_C",
				"XM5_spear_C",
				"ZiplineActor_C",
				"ZomboyACOGSight_C",
				"ZomboyAdvancedBullet_C",
				"ZomboyAUGTriangleGrip_C",
				"ZomboyBandage_C",
				"ZomboyBeverages_C",
				"ZomboyChocolate_C",
				"ZomboyClaymoreBP_C",
				"ZomboyCZ805TriangleGrip_C",
				"ZomboyDocterSight_C",
				"ZomboyEpinephrine_C",
				"ZomboyForeGripAttachmentBP_C",
				"ZomboyG3SG1PowerScope_C",
				"ZomboyGrenadeBP_C",
				"ZomboyGunBaseBP_C",
				"ZomboyGunClipBaseBP_C",
				"ZomboyGunForeGripAttachmentBP_C",
				"ZomboyGunMuzzleAttachmentBP_C",
				"ZomboyHAMRSight_C",
				"ZomboyIronSight_C",
				"ZomboyKashtanSight_C",
				"ZomboyM16TriangleGrip_C",
				"ZomboyMagnifierMultiSight_C",
				"ZomboyMedicalNeedle_C",
				"ZomboyMK18TriangleGrip_C",
				"ZomboyMuzzleAttachmentBP_C",
				"ZomboyParachute_C",
				"ZomboyPowerScope_C",
				"ZomboyRifleSuppressor_C",
				"ZomboySemiSuppressor_C",
				"ZomboySightAttachmentBP_C",
				"ZomboySupply_C",
				"ZomboySVDScope_C",
				"ZomboyTraceGrenadeBP_C",
				"ZomboyVerticalGrip_C",
				"ZomboyVRZoomSight_C",
		};
	}Item_Spawner;
};

extern settings g_settings;

#endif // SETTINGS_H