#ifndef GAMEHOOKS_H
#define GAMEHOOKS_H

#include "Settings.h"
#include "framework.hpp"
#include "Utility.h"
#include "IL2CPP/Functions.hpp"
#include "ESP.hpp"
#include "minhook/include/MinHook.h"

class GameHooks
{
    private:
    static uintptr_t original_OnGUI_func;
    static uintptr_t original_StandardGun_Update;
    static uintptr_t original_BowController_UpdateBowDirection;
    static uintptr_t original_Arrow_Start;
    static uintptr_t original_DoRecoil[4];
    static uintptr_t original_TwoHandedGun_SpawnBullet;
    static uintptr_t standardGun_SpawnBullet;
    static uintptr_t original_Bullet_Start;
    static uintptr_t original_Tool_OnCollisionEnter;

    public:
    static void InitializeHooks();

    private:
    static void AimAtNearestPlayer(uintptr_t shootPoint, bool isBow);
    static Functions::Quaternion CalculateLookRotation(const Functions::Vector3& direction);
    static Functions::Quaternion CalculateLookRotationBow(const Functions::Vector3& direction);

    static void __fastcall OnGUI_Hook(uintptr_t this_ptr);
    static void __fastcall StandardGun_Update_Hook(uintptr_t this_ptr);
    static void __fastcall BowController_UpdateBowDirection_Hook(uintptr_t this_ptr);
    static void __fastcall Arrow_Start_Hook(uintptr_t this_ptr);
    static void __fastcall TwoHandedGun_SpawnBullet_Hook(uintptr_t this_ptr);
    static void __fastcall Bullet_Start_Hook(uintptr_t this_ptr);
    static void __fastcall Tool_OnCollisionEnter_Hook(uintptr_t this_ptr, uintptr_t collision);

    template<int Index>
    static void __fastcall DoRecoil_Hook(uintptr_t this_ptr)
    {
        if (!g_settings.Mods.NoRecoil && original_DoRecoil[Index])
        {
            auto original_func = reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_DoRecoil[Index]);
            original_func(this_ptr);
        }
    }

    static void CreateAndHookOnGUI();
    static void HookDoRecoilMethods();
    static void HookStandardGunUpdate();
    static void HookBowControllerUpdateBowDirection();
    static void HookArrowStart();
    static void HookTwoHandedGunSpawnBullet();
    static void HookBulletStart(); // [Bullet Hook]
    static void HookToolOnCollisionEnter(); // [Tool Hook]
};

// Static member definitions
uintptr_t GameHooks::original_OnGUI_func = 0;
uintptr_t GameHooks::original_StandardGun_Update = 0;
uintptr_t GameHooks::original_BowController_UpdateBowDirection = 0;
uintptr_t GameHooks::original_Arrow_Start = 0;
uintptr_t GameHooks::original_DoRecoil[4] = { 0, 0, 0, 0 };
uintptr_t GameHooks::original_TwoHandedGun_SpawnBullet = 0;
uintptr_t GameHooks::standardGun_SpawnBullet = 0;
uintptr_t GameHooks::original_Bullet_Start = 0;
uintptr_t GameHooks::original_Tool_OnCollisionEnter = 0;

// Aimbot helpers
void GameHooks::AimAtNearestPlayer(uintptr_t shootPoint, bool isBow)
{
    if (!Functions::Utils::IsValidAddr(shootPoint) || !Functions::Utils::IsValidUnityObject(shootPoint))
        return;

    Functions::Vector3 nearestPlayerPos;
    float distance;
    if (!ESP::GetNearestPlayer(nearestPlayerPos, distance))
        return;

    if (isBow)
    {
        Functions::Vector3 shootPointPos = Functions::Transform::GetPosition(shootPoint);
        // Calculate direction to target
        Functions::Vector3 direction = {
            nearestPlayerPos.x - shootPointPos.x,
            nearestPlayerPos.y - shootPointPos.y,
            nearestPlayerPos.z - shootPointPos.z
        };
        // Normalize direction
        float magnitude = sqrt(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
        if (magnitude <= 0.001f) return;
        direction.x /= magnitude;
        direction.y /= magnitude;
        direction.z /= magnitude;
        // Set rotation
        Functions::Quaternion lookRotation = CalculateLookRotationBow(direction);
        Functions::Transform::SetRotation(shootPoint, lookRotation);
    }
    else
    {
        Functions::Vector3 shootPointPos = Functions::Transform::GetPosition(shootPoint);
        Functions::Vector3 direction = nearestPlayerPos - shootPointPos;

        float magnitude = sqrt(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
        if (magnitude <= 0.001f) return;

        direction = direction * (1.0f / magnitude);
        Functions::Quaternion lookRotation = CalculateLookRotation(direction);
        Functions::Transform::SetRotation(shootPoint, lookRotation);
    }
}

Functions::Quaternion GameHooks::CalculateLookRotationBow(const Functions::Vector3& direction)
{
    // Calculate quaternion from direction vector
    Functions::Vector3 forward = { -1.0f, 0.0f, 0.0f }; // Assuming negative X is forward

    float dot = forward.x * direction.x + forward.y * direction.y + forward.z * direction.z;

    if (dot < -0.999999f)
    {
        // Vectors are opposite - rotate 180 degrees around Y axis
        return { 0.0f, 1.0f, 0.0f, 0.0f };
    }
    else if (dot > 0.999999f)
    {
        // Vectors are the same - identity quaternion
        return { 0.0f, 0.0f, 0.0f, 1.0f };
    }
    else
    {
        // Calculate cross product for rotation axis
        Functions::Vector3 cross = {
            forward.y * direction.z - forward.z * direction.y,
            forward.z * direction.x - forward.x * direction.z,
            forward.x * direction.y - forward.y * direction.x
        };

        // Create quaternion from axis-angle
        float w = 1.0f + dot;
        float norm = sqrt(cross.x * cross.x + cross.y * cross.y + cross.z * cross.z + w * w);

        return {
            cross.x / norm,
            cross.y / norm,
            cross.z / norm,
            w / norm
        };
    }
}

Functions::Quaternion GameHooks::CalculateLookRotation(const Functions::Vector3& direction)
{
    float yaw = atan2(direction.x, direction.z);
    float pitch = -asin(direction.y);

    float cy = cos(yaw * 0.5f);
    float sy = sin(yaw * 0.5f);
    float cp = cos(pitch * 0.5f);
    float sp = sin(pitch * 0.5f);

    return Functions::Quaternion{ cy * sp, sy * cp, -sy * sp, cy * cp };
}

// Hooks
void __fastcall GameHooks::OnGUI_Hook(uintptr_t this_ptr)
{
    ESP::Update();
    if (original_OnGUI_func)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_OnGUI_func)(this_ptr);
}

// Gun P Silent
void __fastcall GameHooks::StandardGun_Update_Hook(uintptr_t this_ptr)
{
    if (g_settings.Mods.Aimbot)
    {
        uintptr_t gunModel = Functions::Utils::SafeRead(this_ptr + il2cpp::offset("StandardGun", "gunModel", "", true));
        if (Functions::Utils::IsValidAddr(gunModel) && Functions::Utils::IsValidUnityObject(gunModel))
        {
            uintptr_t shootPoint = Functions::Utils::SafeRead(gunModel + il2cpp::offset("StandardGunModel", "shootPoint", "", true));
            AimAtNearestPlayer(shootPoint, false);
        }
    }

    if (original_StandardGun_Update)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_StandardGun_Update)(this_ptr);
}

// Bow P Silent
void __fastcall GameHooks::BowController_UpdateBowDirection_Hook(uintptr_t this_ptr)
{
    if (g_settings.Mods.Aimbot)
    {
        uintptr_t shootPoint = Functions::Utils::SafeRead(this_ptr + il2cpp::offset("BowController", "arrowShootPoint", "", true));
        AimAtNearestPlayer(shootPoint, true);
    }

    if (original_BowController_UpdateBowDirection)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_BowController_UpdateBowDirection)(this_ptr);
}

// Thick Arrow & Fast Arrow
void __fastcall GameHooks::Arrow_Start_Hook(uintptr_t this_ptr)
{
    Functions::ObscuredFloat::SetValue(this_ptr + il2cpp::offset("Arrow", "arrowRadius", "", true), g_settings.Mods.Bullet_Scale);
    Functions::ObscuredFloat::SetValue(this_ptr + il2cpp::offset("Arrow", "arrowForce", "", true), g_settings.Mods.Bullet_Velocity);

    if (original_Arrow_Start)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_Arrow_Start)(this_ptr);
}

// No hip fire spread
void __fastcall GameHooks::TwoHandedGun_SpawnBullet_Hook(uintptr_t this_ptr)
{
    if (g_settings.Mods.NoSpread && standardGun_SpawnBullet)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(standardGun_SpawnBullet)(this_ptr);
    else if (original_TwoHandedGun_SpawnBullet)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_TwoHandedGun_SpawnBullet)(this_ptr);
}

// Bullet Start Hook
void __fastcall GameHooks::Bullet_Start_Hook(uintptr_t this_ptr)
{
    // Set bullet velocity
    Functions::ObscuredFloat::SetValue(this_ptr + il2cpp::offset("Bullet", "bulletForce", "", true), g_settings.Mods.Bullet_Velocity);

    // Call original
    if (original_Bullet_Start)
        reinterpret_cast<void(__fastcall*)(uintptr_t)>(original_Bullet_Start)(this_ptr);
}

// Enhanced Tool Hit Detection
void __fastcall GameHooks::Tool_OnCollisionEnter_Hook(uintptr_t this_ptr, uintptr_t collision)
{
    // Set canHit to true and minHitVelocity to 0 for enhanced tool functionality
    if (g_settings.Mods.QuickFarm) // Add this setting to your settings structure
    {
        //Functions::ObscuredBool::SetValue(this_ptr + il2cpp::offset("Tool", "canHit", "Strayed", true), true);
        Functions::ObscuredFloat::SetValue(this_ptr + il2cpp::offset("Tool", "minHitVelocity", "Strayed", true), 0.0f);
        //Functions::ObscuredFloat::SetValue(this_ptr + il2cpp::offset("Tool", "hitCooldown", "Strayed", true), 0.0f);
    }

    if (original_Tool_OnCollisionEnter)
    {
        reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t)>(original_Tool_OnCollisionEnter)(this_ptr, collision);
    }
}

// Initialization
void GameHooks::InitializeHooks()
{
    CreateAndHookOnGUI();
    HookDoRecoilMethods();
    HookStandardGunUpdate();
    HookBowControllerUpdateBowDirection();
    HookArrowStart();
    HookTwoHandedGunSpawnBullet();
    HookBulletStart(); // [Bullet Hook]
    HookToolOnCollisionEnter(); // [Tool Hook]


    // Get VRPlatformManager instance (same way as other singletons)
    uintptr_t VRPlatformManager_instance = il2cpp::offset("VRPlatformManager", "instance", "", false);
    Utility::AppendToLogFile("VRPlatformManager.instance: %llx", VRPlatformManager_instance);

    uintptr_t loadedDeviceName_obscured = Functions::Utils::SafeRead(VRPlatformManager_instance + il2cpp::offset("VRPlatformManager", "loadedDeviceName", "", true));
    Utility::AppendToLogFile("VRPlatformManager.loadedDeviceName: %llx", loadedDeviceName_obscured);

    uintptr_t decrypted_string = Functions::ObscuredString::GetDecrypted(loadedDeviceName_obscured);
    Utility::AppendToLogFile("VRPlatformManager.loadedDeviceName.decrypted_string: %llx", decrypted_string);

    Utility::AppendToLogFile("loadedDeviceName: %s", Functions::Utils::UnityStringToStd(decrypted_string).c_str());
}

// Make an OnGUI we can hook to use as our "Thread"
void GameHooks::CreateAndHookOnGUI()
{
    uintptr_t fpsCounterObj = Functions::GameObject::Create("FPSCounter");
    if (!fpsCounterObj) return;

    uintptr_t type = il2cpp::type_object("FPSCounter", "");
    if (!type) return Functions::Object::Destroy(fpsCounterObj);

    uintptr_t component = Functions::GameObject::AddComponent(fpsCounterObj, type);
    if (!component) return Functions::Object::Destroy(fpsCounterObj);

    Functions::Object::DontDestroyOnLoad(fpsCounterObj);
    Functions::GameObject::SetActive(fpsCounterObj, true);

    uintptr_t onGUI = il2cpp::method("FPSCounter", "OnGUI", "", 0);
    if (!onGUI) return Functions::Object::Destroy(fpsCounterObj);

    original_OnGUI_func = *reinterpret_cast<uintptr_t*>(onGUI);
    *reinterpret_cast<uintptr_t*>(onGUI) = reinterpret_cast<uintptr_t>(OnGUI_Hook);
}

void GameHooks::HookStandardGunUpdate()
{
    uintptr_t method = il2cpp::method("StandardGun", "Update", "", 0);
    if (method)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(method);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)StandardGun_Update_Hook, (LPVOID*)&original_StandardGun_Update) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

void GameHooks::HookBowControllerUpdateBowDirection()
{
    uintptr_t method = il2cpp::method("BowController", "UpdateBowDirection", "", 0);
    if (method)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(method);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)BowController_UpdateBowDirection_Hook, (LPVOID*)&original_BowController_UpdateBowDirection) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

void GameHooks::HookArrowStart()
{
    uintptr_t method = il2cpp::method("Arrow", "Start", "", 0);
    if (method)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(method);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)Arrow_Start_Hook, (LPVOID*)&original_Arrow_Start) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

void GameHooks::HookBulletStart()
{
    uintptr_t method = il2cpp::method("Bullet", "Start", "", 0);
    if (method)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(method);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)Bullet_Start_Hook, (LPVOID*)&original_Bullet_Start) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

void GameHooks::HookToolOnCollisionEnter()
{
    Utility::AppendToLogFile("Hooking OnCollisionEnter");

    uintptr_t method = il2cpp::method("Tool", "OnCollisionEnter", "Strayed", 1); // 1 parameter (Collision)
    if (method)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(method);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)Tool_OnCollisionEnter_Hook, (LPVOID*)&original_Tool_OnCollisionEnter) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

void GameHooks::HookDoRecoilMethods()
{
    auto hook = [](const char* cls, const char* method, void* hookFunc, uintptr_t* originalPtr)
    {
        uintptr_t m = il2cpp::method(cls, method, "", 0);
        if (m)
        {
            uintptr_t addr = *reinterpret_cast<uintptr_t*>(m);
            if (MH_CreateHook((LPVOID)addr, hookFunc, (LPVOID*)originalPtr) == MH_OK)
                MH_EnableHook((LPVOID)addr);
        }
    };

    hook("RocketLauncher", "DoRecoil", (void*)DoRecoil_Hook<0>, &original_DoRecoil[0]);
    hook("TwoHandedGun", "DoRecoil", (void*)DoRecoil_Hook<1>, &original_DoRecoil[1]);
    hook("StandardGun", "DoRecoil", (void*)DoRecoil_Hook<2>, &original_DoRecoil[2]);
    hook("BoltActionRifleGun", "DoRecoil", (void*)DoRecoil_Hook<3>, &original_DoRecoil[3]);
}

void GameHooks::HookTwoHandedGunSpawnBullet()
{
    uintptr_t stdSpawn = il2cpp::method("StandardGun", "SpawnBullet", "", 0);
    if (stdSpawn)
        standardGun_SpawnBullet = *reinterpret_cast<uintptr_t*>(stdSpawn);

    uintptr_t twoHanded = il2cpp::method("TwoHandedGun", "SpawnBullet", "", 0);
    if (twoHanded && standardGun_SpawnBullet)
    {
        uintptr_t addr = *reinterpret_cast<uintptr_t*>(twoHanded);
        if (MH_CreateHook((LPVOID)addr, (LPVOID)TwoHandedGun_SpawnBullet_Hook, (LPVOID*)&original_TwoHandedGun_SpawnBullet) == MH_OK)
            MH_EnableHook((LPVOID)addr);
    }
}

#endif // GAMEHOOKS_H