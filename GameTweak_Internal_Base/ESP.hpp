#ifndef ESP_H
#define ESP_H

#include "Settings.h"
#include "framework.hpp"
#include "Utility.h"
#include "IL2CPP/Functions.hpp"
#include "LabelHelper.hpp"

class ESP
{
    public:
    // Main ESP update function
    static void Update();

    // Get nearest player info for aimbot
    static bool GetNearestPlayer(Functions::Vector3& outPosition, float& outDistance);

    private:
    // Nearest player tracking (excluding teammates)
    static Functions::Vector3 nearestPlayerHeadPos;
    static bool hasValidNearestPlayer;
    static float nearestPlayerDistance;
    static float nearestScreenDistance;  // Added for screen distance tracking

    // Camera reference
    static uintptr_t mainCamera;

    // Performance optimization
    static int frameCounter;
    static constexpr int CHAMS_UPDATE_INTERVAL = 300; // ~5 seconds at 60fps
    static constexpr int MAX_PLAYERS_SAFETY = 100;

    // Color constants
    struct Colors
    {
        static constexpr Functions::ColorRGBA RED = { 1.0f, 0.0f, 0.0f, 1.0f };
        static constexpr Functions::ColorRGBA GRAY = { 0.5f, 0.5f, 0.5f, 1.0f };
        static constexpr Functions::ColorRGBA BROWN = { 0.6f, 0.4f, 0.2f, 1.0f };
        static constexpr Functions::ColorRGBA LIME_YELLOW = { 0.8f, 1.0f, 0.3f, 1.0f };
        static constexpr Functions::ColorRGBA GREEN = { 0.0f, 1.0f, 0.0f, 1.0f };
        static constexpr Functions::ColorRGBA PURPLE = { 1.0f, 0.0f, 1.0f, 1.0f };
        static constexpr Functions::ColorRGBA BLUE = { 0.0f, 0.5f, 1.0f, 1.0f };
        static constexpr Functions::ColorRGBA CYAN = { 0.0f, 1.0f, 1.0f, 1.0f };
        static constexpr Functions::ColorRGBA ORANGE = { 1.0f, 0.5f, 0.0f, 1.0f };
        static constexpr Functions::ColorRGBA YELLOW = { 1.0f, 1.0f, 0.0f, 1.0f };
        static constexpr Functions::ColorRGBA DARK_RED = { 0.8f, 0.0f, 0.0f, 1.0f };
        static constexpr Functions::ColorRGBA TEAMMATE_GREEN = { 0.2f, 1.0f, 0.2f, 1.0f };
    };

    // Core functionality
    static bool ProcessPlayers();
    static void ProcessObjects();
    static void ResetNearestPlayerTracking();
    static bool ShouldApplyChams()
    {
        return (frameCounter % CHAMS_UPDATE_INTERVAL) == 0;
    }

    // Teammate detection
    static bool IsPlayerTeammate(const std::string& username);

    // Player processing helpers
    static bool ProcessSinglePlayer(uintptr_t playerManager, int playerIndex, const Functions::Vector3& ourPosition);
    static std::string ExtractUsername(uintptr_t playerManager);
    static void ApplyPlayerChams(uintptr_t playerManager, bool isTeammate);
    static void UpdateNearestPlayer(const Functions::Vector3& playerPos, const Functions::Vector3& ourPosition);
};

// Static member definitions
Functions::Vector3 ESP::nearestPlayerHeadPos = { 0.0f, 0.0f, 0.0f };
bool ESP::hasValidNearestPlayer = false;
float ESP::nearestPlayerDistance = FLT_MAX;
float ESP::nearestScreenDistance = FLT_MAX;  // Added
int ESP::frameCounter = 0;
uintptr_t ESP::mainCamera = 0;  // Added

// Public interface implementation
void ESP::Update()
{
    frameCounter++;

    // Begin frame tracking for labels
    EasyLabels::BeginFrame();

    // Reset nearest player tracking
    ResetNearestPlayerTracking();

    // Process players and objects
    if (ProcessPlayers())
    {
        ProcessObjects();
    }

    if (hasValidNearestPlayer)
    {
        Functions::Vector3 nearestPlayerPos;
        float distance;
        if (ESP::GetNearestPlayer(nearestPlayerPos, distance))
        {
            EasyLabels::SetEntityLabel(0x1337, nearestPlayerPos,
                Functions::Vector3{ 0.0f, 2.0f, 0.0f }, 1.0f, "X", Colors::PURPLE);
        }
    }

    // Update and finalize labels
    EasyLabels::UpdateAllLabelsFacing();
    EasyLabels::EndFrame();
}

bool ESP::GetNearestPlayer(Functions::Vector3& outPosition, float& outDistance)
{
    if (hasValidNearestPlayer)
    {
        outPosition = nearestPlayerHeadPos;
        outDistance = nearestPlayerDistance;
        return true;
    }
    return false;
}

// Private implementation
bool ESP::IsPlayerTeammate(const std::string& username)
{
    // Get TeamManager instance (same way as other singletons)
    uintptr_t teamManager_instance = il2cpp::offset("TeamManager", "instance", "", false);

    if (!Functions::Utils::IsValidUnityObject(teamManager_instance))
    {
        return false;
    }

    // Get teammates dictionary (offset 0x20 from decompiled code)
    uintptr_t teammates_dict_ptr = *reinterpret_cast<uintptr_t*>(teamManager_instance + 0x20);

    if (!Functions::Utils::IsValidAddr(teammates_dict_ptr))
    {
        return false;
    }

    Functions::Utils::UnityDictionary teammates_dict(teammates_dict_ptr);
    if (!teammates_dict.IsValid())
    {
        return false;
    }

    // Loop through teammates dictionary to find the username
    for (const auto& entry : teammates_dict)
    {
        // Get the key (username) from the dictionary entry
        uintptr_t key_string = entry.GetKey<uintptr_t>();

        if (!Functions::Utils::IsValidAddr(key_string))
        {
            continue;
        }

        // Extract the username from the Unity string
        int string_length = *reinterpret_cast<int*>(key_string + 0x10);
        if (string_length <= 0 || string_length >= 100)
        {
            continue;
        }

        wchar_t* string_chars = reinterpret_cast<wchar_t*>(key_string + 0x14);
        if (!Functions::Utils::IsValidAddr(reinterpret_cast<uintptr_t>(string_chars)))
        {
            continue;
        }

        std::string teammate_username;
        teammate_username.reserve(string_length);
        for (int i = 0; i < string_length; i++)
        {
            teammate_username += static_cast<char>(string_chars[i]);
        }

        // Check if this teammate matches the username we're looking for
        if (teammate_username == username)
        {
            return true;
        }
    }

    return false;
}

bool ESP::ProcessPlayers()
{
    // Get main camera first
    mainCamera = Functions::Camera::GetMain();
    if (!Functions::Utils::IsValidUnityObject(mainCamera))
    {
        return false;
    }

    // Get GameManager instance
    uintptr_t gameManager_instance = il2cpp::offset("GameManager", "instance", "", false);

    if (!Functions::Utils::IsValidUnityObject(gameManager_instance))
    {
        return false;
    }

    // Get players dictionary
    uintptr_t players_dict_ptr = *reinterpret_cast<uintptr_t*>(gameManager_instance + il2cpp::offset("GameManager", "players", "", true));

    if (!Functions::Utils::IsValidAddr(players_dict_ptr))
    {
        return false;
    }

    Functions::Utils::UnityDictionary players_dict(players_dict_ptr);
    if (!players_dict.IsValid())
    {
        return false;
    }

    Functions::Vector3 ourPosition = { 0.0f, 0.0f, 0.0f };
    bool hasOurPosition = false;
    int processed = 0;

    // Process all players
    for (const auto& entry : players_dict)
    {
        if (processed >= MAX_PLAYERS_SAFETY) break;

        uintptr_t playerManager = entry.GetValue<uintptr_t>();

        if (!Functions::Utils::IsValidAddr(playerManager) ||
            !Functions::Utils::IsValidUnityObject(playerManager))
        {
            processed++;
            continue;
        }

        //Skip dead players
        bool m_isAlive = Functions::ObscuredBool::GetDecrypted(playerManager + il2cpp::offset("NetworkPlayerManager", "m_isAlive", "", true));
        if (!m_isAlive)
        {
            processed++;
            continue;
        }

        // Handle our position (player 0)
        if (processed == 0)
        {
            uintptr_t headTransform = Functions::Utils::SafeRead(playerManager + il2cpp::offset("NetworkPlayerManager", "head", "", true));
            if (Functions::Utils::IsValidAddr(headTransform) &&
                Functions::Utils::IsValidUnityObject(headTransform))
            {
                ourPosition = Functions::Transform::GetPosition(headTransform);
                hasOurPosition = true;
            }
            processed++;
            continue;
        }

        // Process other players
        if (hasOurPosition)
        {
            ProcessSinglePlayer(playerManager, processed, ourPosition);
        }

        processed++;
    }

    return true;
}

bool ESP::ProcessSinglePlayer(uintptr_t playerManager, int playerIndex, const Functions::Vector3& ourPosition)
{
    // Get head transform
    uintptr_t headTransform = Functions::Utils::SafeRead(playerManager + il2cpp::offset("NetworkPlayerManager", "head", "", true));

    if (!Functions::Utils::IsValidAddr(headTransform) ||
        !Functions::Utils::IsValidUnityObject(headTransform))
    {
        return false;
    }

    Functions::Vector3 playerPos = Functions::Transform::GetPosition(headTransform);

    // Extract username first to check teammate status
    std::string username = ExtractUsername(playerManager);
    bool isTeammate = IsPlayerTeammate(username);

    std::string ClanTag = "[TEAM] ";
    //if (username == "devcam" || username == "Kenny")
    //{
    //    ClanTag = "[TWEAK] ";
    //    isTeammate = true;
    //}

    // Only update nearest player if this is NOT a teammate
    if (!isTeammate)
    {
        UpdateNearestPlayer(playerPos, ourPosition);
    }

    // Handle player name labels with appropriate color
    if (g_settings.player.show_player_name)
    {
        Functions::ColorRGBA labelColor = isTeammate ? Colors::TEAMMATE_GREEN : Colors::RED;
        std::string displayName = isTeammate ? ClanTag + username : username;

        EasyLabels::SetEntityLabel(headTransform, playerPos,
            Functions::Vector3{ 0.0f, 1.0f, 0.0f }, 1.0f, displayName, labelColor);
    }

    // Apply chams if needed with appropriate color
    if (ShouldApplyChams() && g_settings.CHAMS.Chams_Player)
    {
        ApplyPlayerChams(playerManager, isTeammate);
    }

    return true;
}

std::string ESP::ExtractUsername(uintptr_t playerManager)
{
    std::string username = "UNKNOWN";

    uintptr_t username_obscured = Functions::Utils::SafeRead(playerManager + il2cpp::offset("NetworkPlayerManager", "username", "", true));
    if (!Functions::Utils::IsValidAddr(username_obscured))
    {
        return username;
    }

    uintptr_t decrypted_string = Functions::ObscuredString::GetDecrypted(username_obscured);
    if (!Functions::Utils::IsValidAddr(decrypted_string))
    {
        return username;
    }

    int string_length = *reinterpret_cast<int*>(decrypted_string + 0x10);
    if (string_length <= 0 || string_length >= 100)
    {
        return username;
    }

    wchar_t* string_chars = reinterpret_cast<wchar_t*>(decrypted_string + 0x14);
    if (!Functions::Utils::IsValidAddr(reinterpret_cast<uintptr_t>(string_chars)))
    {
        return username;
    }

    username.clear();
    username.reserve(string_length);
    for (int i = 0; i < string_length; i++)
    {
        username += static_cast<char>(string_chars[i]);
    }

    return username;
}

void ESP::ApplyPlayerChams(uintptr_t playerManager, bool isTeammate)
{
    uintptr_t playerMeshesRoot = Functions::Utils::SafeRead(playerManager + il2cpp::offset("NetworkPlayerManager", "playerMeshesRoot", "", true));

    if (Functions::Utils::IsValidAddr(playerMeshesRoot) &&
        Functions::Utils::IsValidUnityObject(playerMeshesRoot))
    {
        // Use green color for teammates, red for enemies
        Functions::ColorRGBA chamColor = isTeammate ? Colors::TEAMMATE_GREEN : Colors::RED;
        Functions::Utils::ApplyMaterial(playerMeshesRoot, false, chamColor);
    }
}

void ESP::UpdateNearestPlayer(const Functions::Vector3& playerPos, const Functions::Vector3& ourPosition)
{
    if (!mainCamera) return;

    // Convert world position to screen position
    Functions::Vector3 screenPos = Functions::Camera::WorldToScreenPoint(mainCamera, playerPos);

    // Get screen dimensions (hardcoded for now - we'll update Functions.hpp later)
    float screenWidth = 1920.0f;
    float screenHeight = 1080.0f;

    // Calculate screen center
    float centerX = screenWidth / 2.0f;
    float centerY = screenHeight / 2.0f;

    // Calculate distance from screen center
    float deltaX = screenPos.x - centerX;
    float deltaY = screenPos.y - centerY;
    float screenDistance = std::sqrt(deltaX * deltaX + deltaY * deltaY);

    // Also store world distance for reference
    float worldDistance = playerPos.Distance(ourPosition);

    // Check if player is on screen (z > 0 means in front of camera)
    if (screenPos.z > 0.0f && (!hasValidNearestPlayer || screenDistance < nearestScreenDistance))
    {
        nearestScreenDistance = screenDistance;
        nearestPlayerDistance = worldDistance;
        nearestPlayerHeadPos = playerPos;
        hasValidNearestPlayer = true;
    }
}

void ESP::ProcessObjects()
{
    uintptr_t prefabDB_instance = il2cpp::offset("PrefabDatabase", "instance", "", false);
    if (!Functions::Utils::IsValidUnityObject(prefabDB_instance))
        return;

    uintptr_t activeObjects_dict_ptr = *reinterpret_cast<uintptr_t*>(prefabDB_instance + il2cpp::offset("PrefabDatabase", "activeObjects", "", true));
    if (!Functions::Utils::IsValidAddr(activeObjects_dict_ptr))
        return;

    Functions::Utils::UnityDictionary activeObjects_dict(activeObjects_dict_ptr);
    if (!activeObjects_dict.IsValid())
        return;

    for (const auto& entry : activeObjects_dict)
    {
        uintptr_t obj = entry.GetValue<uintptr_t>();
        if (!Functions::Utils::IsValidAddr(obj) || !Functions::Utils::IsValidUnityObject(obj))
            continue;

        // Check class name first, cheap compared to GameObject/Transform resolution
        std::string className = Functions::Utils::GetNameClass(obj);

        // RESOURCE NODES
        if (g_settings.WorldESP.StoneNode || g_settings.WorldESP.MetalNode || g_settings.WorldESP.SulfurNode)
        {
            if (className == "HarvestableStoneNode")
            {
                uintptr_t go = Functions::Component::GetGameObject(obj);
                if (!Functions::Utils::IsValidUnityObject(go)) continue;

                std::string name = Functions::GameObject::GetName(go);
                if ((g_settings.WorldESP.StoneNode && name == "Stone node (POOLED)") ||
                    (g_settings.WorldESP.MetalNode && name == "Metal node (POOLED)") ||
                    (g_settings.WorldESP.SulfurNode && name == "Sulfur node (POOLED)"))
                {
                    uintptr_t tf = Functions::GameObject::GetTransform(go);
                    if (!Functions::Utils::IsValidUnityObject(tf)) continue;

                    Functions::Vector3 pos = Functions::Transform::GetPosition(tf);

                    if (name == "Stone node (POOLED)" && g_settings.WorldESP.StoneNode)
                        EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Stone", Colors::GRAY);
                    else if (name == "Metal node (POOLED)" && g_settings.WorldESP.MetalNode)
                        EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Metal", Colors::BROWN);
                    else if (name == "Sulfur node (POOLED)" && g_settings.WorldESP.SulfurNode)
                        EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Sulfur", Colors::LIME_YELLOW);
                }
            }
        }

        // WORLD OBJECTS
        if (g_settings.WorldESP.Hemp && className == "ClothPickup")
            goto label_draw;

        if (g_settings.WorldESP.Sleepers && className == "SleepingPlayerContainer")
            goto label_draw;

        if (g_settings.WorldESP.SleepingBags && className == "SleepingBag")
            goto label_draw;

        if (g_settings.WorldESP.Vehicles && (className == "BoatVehicle" || className == "HelicopterVehicle"))
            goto label_draw;

        if (g_settings.WorldESP.Barrels && className == "ScrapBarrel")
            goto label_draw;

        if (g_settings.WorldESP.ToolCupboards && className == "PoolableDamageableSlotContainer")
        {
            uintptr_t go = Functions::Component::GetGameObject(obj);
            if (!Functions::Utils::IsValidUnityObject(go)) continue;
            std::string name = Functions::GameObject::GetName(go);
            if (name != "Resource Container (POOLED)") continue;

            uintptr_t tf = Functions::GameObject::GetTransform(go);
            if (!Functions::Utils::IsValidUnityObject(tf)) continue;

            Functions::Vector3 pos = Functions::Transform::GetPosition(tf);
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "TC", Colors::YELLOW);
            continue;
        }

        if (g_settings.WorldESP.DeathBags && className == "SlotContainer")
        {
            uintptr_t go = Functions::Component::GetGameObject(obj);
            if (!Functions::Utils::IsValidUnityObject(go)) continue;
            std::string name = Functions::GameObject::GetName(go);
            if (name != "Player Death Bag(Clone)") continue;

            uintptr_t tf = Functions::GameObject::GetTransform(go);
            if (!Functions::Utils::IsValidUnityObject(tf)) continue;

            Functions::Vector3 pos = Functions::Transform::GetPosition(tf);
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "BackPack", Colors::DARK_RED);
            continue;
        }

        continue;

label_draw:
        uintptr_t go = Functions::Component::GetGameObject(obj);
        if (!Functions::Utils::IsValidUnityObject(go)) continue;
        uintptr_t tf = Functions::GameObject::GetTransform(go);
        if (!Functions::Utils::IsValidUnityObject(tf)) continue;

        Functions::Vector3 pos = Functions::Transform::GetPosition(tf);

        if (className == "ClothPickup")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Cloth", Colors::GREEN);
        else if (className == "SleepingPlayerContainer")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Sleeper", Colors::RED);
        else if (className == "SleepingBag")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Sleeping Bag", Colors::PURPLE);
        else if (className == "BoatVehicle")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Boat", Colors::BLUE);
        else if (className == "HelicopterVehicle")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Heli", Colors::CYAN);
        else if (className == "ScrapBarrel")
            EasyLabels::SetEntityLabel(tf, pos, {}, 0.5f, "Barrel", Colors::ORANGE);
    }
}

void ESP::ResetNearestPlayerTracking()
{
    hasValidNearestPlayer = false;
    nearestPlayerDistance = FLT_MAX;
    nearestScreenDistance = FLT_MAX;  // Reset screen distance too
    nearestPlayerHeadPos = { 0.0f, 0.0f, 0.0f };
    mainCamera = 0;
}

#endif // ESP_H