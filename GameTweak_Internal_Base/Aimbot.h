#include "Settings.h"
#include "bones.h"
#include "utility.h"
class Cheat;

class Aimbot
{
private:


	static  bool RunTargetChecks()
	{
		return true;
	}
	static void adjustAngles(float& xAngle, float& yAngle)
	{
		if (xAngle > 360.0f)
		{
			xAngle -= 360.0f;
		}
		else if (xAngle > 85.0f && xAngle < 360.0f)
		{
			xAngle = -(360.0f - xAngle);
		}
		if (yAngle > 180.0f)
			yAngle -= 360.0f;

		if (yAngle < -180.0f)
			yAngle += 360.0f;
	}

	
	static void normalizeAngle(SDK::FRotator& ang)
	{
		ang.Pitch = std::isfinite(ang.Pitch) ? std::remainderf(ang.Pitch, 360.0f) : 0.0f;
		ang.Yaw = std::isfinite(ang.Yaw) ? std::remainderf(ang.Yaw, 360.0f) : 0.0f;
		ang.Roll = 0.0f;
	}

	static SDK::FRotator SubtractRotations(const SDK::FRotator& a, const SDK::FRotator& b)
	{
		SDK::FRotator result;
		result.Pitch = a.Pitch - b.Pitch;
		result.Yaw = a.Yaw - b.Yaw;
		result.Roll = a.Roll - b.Roll;
		return result;
	}

	static SDK::FRotator AddRotations(const SDK::FRotator& a, const SDK::FRotator& b)
	{
		SDK::FRotator result;
		result.Pitch = a.Pitch + b.Pitch;
		result.Yaw = a.Yaw + b.Yaw;
		result.Roll = a.Roll + b.Roll;
		return result;
	}

	static SDK::FRotator DivideRotation(const SDK::FRotator& rotation, float divisor)
	{
		SDK::FRotator result;
		result.Pitch = rotation.Pitch / divisor;
		result.Yaw = rotation.Yaw / divisor;
		result.Roll = rotation.Roll / divisor;
		return result;
	}

	static SDK::FRotator ApplySmoothing(const SDK::FRotator& currentRotation, const SDK::FRotator& targetRotation, int smoothness)
	{
		// Calculate angle difference
		SDK::FRotator angleDelta = SubtractRotations(targetRotation, currentRotation);
		normalizeAngle(angleDelta);

		// Apply smoothing by dividing the delta
		SDK::FRotator smoothedDelta = DivideRotation(angleDelta, (float)smoothness);

		// Add smoothed delta to current rotation
		SDK::FRotator finalRotation = AddRotations(currentRotation, smoothedDelta);
		normalizeAngle(finalRotation);

		return finalRotation;
	}

	//static SDK::FRotator CompensateGunAngles(const SDK::FRotator& targetRotation, GamePlayerClass* localPawn, SDK::APlayerController* PlayerController)
	//{
	//	static bool wasCompensating = false;

	//	auto gunAngles = localPawn->GetShootAngles();
	//	auto viewAngles = PlayerController->GetControlRotation();
	//	SDK::FRotator normalizedGun = gunAngles;
	//	SDK::FRotator normalizedView = viewAngles;
	//	normalizeAngle(normalizedGun);
	//	normalizeAngle(normalizedView);

	//	float pitchDifference = abs(normalizedGun.Pitch - normalizedView.Pitch);
	//	float yawDifference = abs(normalizedGun.Yaw - normalizedView.Yaw);
	//	if (yawDifference > 180.0f) yawDifference = 360.0f - yawDifference;

	//	// Use different thresholds for starting vs maintaining compensation
	//	float startThreshold = 2.0f;      // Strict threshold to start
	//	float maintainThreshold = 8.0f;   // Lenient threshold to keep going

	//	bool shouldCompensate = false;

	//	if (!wasCompensating) {
	//		// Need strict alignment to start compensating
	//		shouldCompensate = (pitchDifference <= startThreshold && yawDifference <= startThreshold);
	//	}
	//	else {
	//		// Once started, use looser threshold to maintain through recoil
	//		shouldCompensate = (pitchDifference <= maintainThreshold && yawDifference <= maintainThreshold);
	//	}

	//	wasCompensating = shouldCompensate;

	//	if (shouldCompensate) {
	//		SDK::FRotator gunOffset = SubtractRotations(normalizedGun, normalizedView);
	//		normalizeAngle(gunOffset);

	//		SDK::FRotator compensatedRotation = SubtractRotations(targetRotation, gunOffset);
	//		normalizeAngle(compensatedRotation);

	//		return compensatedRotation;
	//	}

	//	return targetRotation;
	//}

public:

	static void ApplyAngles(SDK::APlayerController* PlayerController, GamePlayerClass* localPawn)
	{
		if (RunTargetChecks())
		{
			if (GetAsyncKeyState(0x02))//This needs to be changed to a wndproc handler or something to avoid detections
			{
				auto character = static_cast<GamePlayerClass*>(g_settings.aimbot.general.Target_Player);
				auto aimPosition = Bones::GetBone3D(character->P_SkeletalMeshComp, "b_ch_neck");
				auto cameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				auto currentRotation = PlayerController->GetControlRotation();
				auto targetRotation = SDK::UKismetMathLibrary::FindLookAtRotation(cameraLocation, aimPosition);

				// Apply smoothing
				auto smoothedRotation = ApplySmoothing(currentRotation, targetRotation, g_settings.aimbot.player.smoothing);
			
				//if (g_settings.aimbot.player.compensateRecoil)
				//{
				//	// Apply gun angle compensation
				//	auto compensatedRotation = CompensateGunAngles(smoothedRotation, localPawn, PlayerController);

				//	PlayerController->ClientSetRotation(compensatedRotation, false);
				//}
				//else
				//{
					PlayerController->ClientSetRotation(smoothedRotation, false);
				//}
			}
		}
	}
};