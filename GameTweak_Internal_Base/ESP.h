#ifndef ESP_H
#define ESP_H

#include "Settings.h"
#include "ZeroGUI.h"
#include "framework.hpp"
#include "bones.h"
#include "Unreal/SDK/Engine_parameters.hpp"
#include "Utility.h"
#include "Mods.h"
#include "Aimbot.h"
class ESP
{
public:
#define M_PI 3.14159265358979323846264338327950288419716939937510
#define pi2 3.14159265358979323846264338327950288419716939937510
#define pi_double ((float)pi2*2.0f)

	// Helper function to convert degrees to radians
	static float DegreesToRadians(float degrees)
	{
		return degrees * (M_PI / 180.0f);
	}
	
	// WorldToRadar function converted to UE SDK types
	static void WorldToRadar(const SDK::FVector& worldPos,
		const SDK::FVector2D& radarPos,
		float scale,
		float radarSize,
		float blipSize,
		SDK::FVector2D& screenPos,
		const SDK::FVector& cameraPosition,
		const SDK::FRotator& viewAngles)
	{
		// Use your original rotation calculation exactly
		float flCosYaw = cosf(DegreesToRadians(viewAngles.Yaw));
		float flSinYaw = sinf(DegreesToRadians(viewAngles.Yaw));
		float flDeltaX = worldPos.X - cameraPosition.X;
		float flDeltaY = worldPos.Y - cameraPosition.Y;

		float flLocationX = (flDeltaY * flCosYaw - flDeltaX * flSinYaw) / scale;
		float flLocationY = (flDeltaX * flCosYaw + flDeltaY * flSinYaw) / scale;

		// Clamp positions
		if (flLocationX < -(radarSize / 2.0f - blipSize / 2.0f - 1.0f))
			flLocationX = -(radarSize / 2.0f - blipSize / 2.0f - 1.0f);
		else if (flLocationX > (radarSize / 2.0f - blipSize / 2.0f - 1.0f))
			flLocationX = (radarSize / 2.0f - blipSize / 2.0f - 1.0f);

		if (flLocationY < -(radarSize / 2.0f - blipSize / 2.0f - 1.0f))
			flLocationY = -(radarSize / 2.0f - blipSize / 2.0f - 1.0f);
		else if (flLocationY > (radarSize / 2.0f - blipSize / 2.0f))
			flLocationY = (radarSize / 2.0f - blipSize / 2.0f);

		// Try flipping just the X axis
		screenPos.X = flLocationX + radarPos.X;  // Keep original negative for X
		screenPos.Y = -flLocationY + radarPos.Y;   // Remove negative for Y
	}

	// Fixed CalculateTrianglePoints - matching WorldToRadar coordinate system
	static void CalculateTrianglePoints(float enemyYaw,
		float myYaw,
		const SDK::FVector2D& centerPoint,
		float size,
		SDK::FVector2D trianglePoints[3])
	{
		// Calculate relative yaw the same way WorldToRadar does it
		float relativeYaw = enemyYaw - myYaw;

		// Normalize the relative yaw to -180 to 180 (like your original commented code)
		while (relativeYaw < -180.0f) relativeYaw += 360.0f;
		while (relativeYaw > 180.0f) relativeYaw -= 360.0f;

		// Try different offset values to match the radar coordinate system
		const float rotated = relativeYaw + 90.0f + 180.0f; // Added +180

		// Convert to radians
		const float radian = DegreesToRadians(rotated);
		const float radian90 = DegreesToRadians(rotated + 90.0f);
		float pointLengthFactor = 0.9f;

		// Calculate triangle points
		trianglePoints[0].X = (size / 2.0f - 3.0f) * cosf(radian90) + centerPoint.X;
		trianglePoints[0].Y = (size / 2.0f - 3.0f) * sinf(radian90) + centerPoint.Y;
		trianglePoints[1].X = (-size / 2.0f + 3.0f) * cosf(radian90) + centerPoint.X;
		trianglePoints[1].Y = (-size / 2.0f + 3.0f) * sinf(radian90) + centerPoint.Y;
		trianglePoints[2].X = size * pointLengthFactor * cosf(radian) + centerPoint.X;
		trianglePoints[2].Y = size * pointLengthFactor * sinf(radian) + centerPoint.Y;
	}

	// Function to draw radar background (crosshairs, center dot, and border)
	static void DrawRadarBackground(SDK::UCanvas* canvas, const SDK::FVector2D& radarPos, float radarSize)
	{
		SDK::FLinearColor crosshairColor = SDK::FLinearColor(0.5f, 0.5f, 0.5f, 0.5f);
		SDK::FLinearColor centerColor = SDK::FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
		SDK::FLinearColor borderColor = SDK::FLinearColor(0.8f, 0.8f, 0.8f, 1.0f);

		// Draw horizontal crosshair line
		SDK::FVector2D horizontalStart = { radarPos.X - radarSize / 2.0f + 1.0f, radarPos.Y };
		SDK::FVector2D horizontalEnd = { radarPos.X + radarSize / 2.0f - 1.0f, radarPos.Y };
		canvas->K2_DrawLine(horizontalStart, horizontalEnd, 1.0f, crosshairColor);

		// Draw vertical crosshair line
		SDK::FVector2D verticalStart = { radarPos.X, radarPos.Y - radarSize / 2.0f };
		SDK::FVector2D verticalEnd = { radarPos.X, radarPos.Y + radarSize / 2.0f - 1.0f };
		canvas->K2_DrawLine(verticalStart, verticalEnd, 1.0f, crosshairColor);

		// Draw center dot (player position)
		float dotSize = 3.0f;
		SDK::FVector2D dotTopLeft = { radarPos.X - dotSize / 2.0f, radarPos.Y - dotSize / 2.0f };
		SDK::FVector2D dotBottomRight = { radarPos.X + dotSize / 2.0f, radarPos.Y + dotSize / 2.0f };
		// Create a small filled square for the dot using multiple thick lines
		for (float i = -dotSize / 2.0f; i <= dotSize / 2.0f; i += 1.0f)
		{
			canvas->K2_DrawLine({ radarPos.X - dotSize / 2.0f, radarPos.Y + i },
				{ radarPos.X + dotSize / 2.0f, radarPos.Y + i }, 1.0f, centerColor);
		}

		// Draw radar border (square around entire radar)
		float halfSize = radarSize / 2.0f;
		SDK::FVector2D borderTopLeft = { radarPos.X - halfSize, radarPos.Y - halfSize };
		SDK::FVector2D borderTopRight = { radarPos.X + halfSize, radarPos.Y - halfSize };
		SDK::FVector2D borderBottomRight = { radarPos.X + halfSize, radarPos.Y + halfSize };
		SDK::FVector2D borderBottomLeft = { radarPos.X - halfSize, radarPos.Y + halfSize };

		// Draw border outline
		canvas->K2_DrawLine(borderTopLeft, borderTopRight, 2.0f, borderColor);      // Top edge
		canvas->K2_DrawLine(borderTopRight, borderBottomRight, 2.0f, borderColor);  // Right edge
		canvas->K2_DrawLine(borderBottomRight, borderBottomLeft, 2.0f, borderColor); // Bottom edge
		canvas->K2_DrawLine(borderBottomLeft, borderTopLeft, 2.0f, borderColor);    // Left edge
	}

	// Function to draw circular radar blip
	static void DrawRadarBlipCircle(SDK::UCanvas* canvas, const SDK::FVector2D& blipPos, float blipSize, const SDK::FLinearColor& color)
	{
		// UE4 Canvas doesn't have direct circle drawing, so we'll approximate with lines
		int segments = 16;
		float radius = blipSize / 2.0f;

		for (int i = 0; i < segments; i++)
		{
			float angle1 = (float)i / segments * 2.0f * M_PI;
			float angle2 = (float)(i + 1) / segments * 2.0f * M_PI;

			SDK::FVector2D point1 = {
				blipPos.X + cosf(angle1) * radius,
				blipPos.Y + sinf(angle1) * radius
			};

			SDK::FVector2D point2 = {
				blipPos.X + cosf(angle2) * radius,
				blipPos.Y + sinf(angle2) * radius
			};

			canvas->K2_DrawLine(point1, point2, 2.0f, color);
		}
	}

	// Function to draw a line forward from the player showing their view direction
	static void DrawPlayerViewDirection3D(SDK::UCanvas* canvas,
		const SDK::FVector& playerPos,
		const SDK::FRotator& playerViewAngles,
		const SDK::FVector& cameraPos,
		float lineLength = 200.0f)
	{
		// Calculate the forward direction from player's view angles
		float yawRad = DegreesToRadians(playerViewAngles.Yaw);
		float pitchRad = DegreesToRadians(playerViewAngles.Pitch);

		// Calculate 3D forward vector from yaw and pitch
		SDK::FVector forwardDirection;
		forwardDirection.X = cosf(pitchRad) * cosf(yawRad);
		forwardDirection.Y = cosf(pitchRad) * sinf(yawRad);
		forwardDirection.Z = sinf(pitchRad);

		// Calculate end point of the line
		SDK::FVector lineEnd;
		lineEnd.X = playerPos.X + forwardDirection.X * lineLength;
		lineEnd.Y = playerPos.Y + forwardDirection.Y * lineLength;
		lineEnd.Z = playerPos.Z + forwardDirection.Z * lineLength;

		// Project both start and end points to screen
		SDK::FVector screenStart = canvas->K2_Project(playerPos);
		SDK::FVector screenEnd = canvas->K2_Project(lineEnd);

		// Draw the line on screen
		SDK::FLinearColor viewLineColor = SDK::FLinearColor(1.0f, 1.0f, 0.0f, 1.0f); // Yellow
		canvas->K2_DrawLine(SDK::FVector2D(screenStart.X, screenStart.Y), SDK::FVector2D(screenEnd.X, screenEnd.Y), 3.0f, viewLineColor);
	}

	// Updated DrawRadarBlipTriangle - pass both yaws like your working code
	static void DrawRadarBlipTriangle(SDK::UCanvas* canvas,
		const SDK::FVector2D& blipPos,
		float enemyYaw,
		float myYaw,
		float size,
		const SDK::FLinearColor& color)
	{
		SDK::FVector2D trianglePoints[3];

		// Pass both yaws like your working code
		CalculateTrianglePoints(enemyYaw, myYaw, blipPos, size, trianglePoints);

		// Draw triangle outline
		canvas->K2_DrawLine(trianglePoints[0], trianglePoints[1], 2.0f, color);
		canvas->K2_DrawLine(trianglePoints[1], trianglePoints[2], 2.0f, color);
		canvas->K2_DrawLine(trianglePoints[2], trianglePoints[0], 2.0f, color);
	}

	// Complete radar drawing function
	static void DrawRadar(SDK::UCanvas* canvas,
		const SDK::FVector& worldPos,
		const SDK::FVector& cameraPosition,
		const SDK::FRotator& viewAngles,
		const SDK::FLinearColor& blipColor,
		int radarType = 0,
		float enemyYaw = 0.0f)
	{
		static float flScale = 8.0f;
		static float flRadarSize = 220.0f;
		static float flBlipSize = 7.0f;
		static SDK::FVector2D vRadarPosition = { 150.0f, 175.0f };
		SDK::FVector2D vBlipPosition{};

		// Calculate blip position
		WorldToRadar(worldPos, vRadarPosition, flScale, flRadarSize, flBlipSize, vBlipPosition, cameraPosition, viewAngles);

		// Draw radar background (only needs to be drawn once per frame, not per player) (Will Change this)

		DrawRadarBackground(canvas, vRadarPosition, flRadarSize);

		// Draw the blip based on radar type
		if (radarType == 0)
		{
			// Circular blip
			DrawRadarBlipCircle(canvas, vBlipPosition, flBlipSize, blipColor);
		}
		else if (radarType == 1)
		{
			// Triangular blip (directional)
			DrawRadarBlipTriangle(canvas, vBlipPosition, enemyYaw, viewAngles.Yaw, 29.0f / 2.0f, blipColor);
		}
	}

	static void setup_box(SDK::FVector corners[8], SDK::FVector mins, SDK::FVector maxs)
	{
		corners[0] = { mins.X, mins.Y, mins.Z };
		corners[1] = { maxs.X, mins.Y, mins.Z };
		corners[2] = { mins.X, maxs.Y, mins.Z };
		corners[3] = { maxs.X, maxs.Y, mins.Z };
		corners[4] = { mins.X, mins.Y, maxs.Z };
		corners[5] = { maxs.X, mins.Y, maxs.Z };
		corners[6] = { mins.X, maxs.Y, maxs.Z };
		corners[7] = { maxs.X, maxs.Y, maxs.Z };
	}

	static void rotate_point_yaw(SDK::FVector point, SDK::FVector center, std::float_t yaw, SDK::FVector* out)
	{
		ImVec2 delta;

		auto angle_cos = std::cosf(((-yaw + 180.0f) / 360.0f - 0.25f) * pi_double);
		auto angle_sin = std::sinf(((-yaw + 180.0f) / 360.0f - 0.25f) * pi_double);

		delta.x = point.X - center.X;
		delta.y = point.Y - center.Y;

		out->X = center.X + angle_sin * delta.x - angle_cos * delta.y;
		out->Y = center.Y + angle_cos * delta.x + angle_sin * delta.y;
		out->Z = point.Z;
	}

	static bool calculate_box(SDK::AActor* player, SDK::UCanvas* canvas, SDK::FVector center, SDK::FVector player3d[8], SDK::FVector2D player2d[8])
	{
		SDK::FVector minimum, maximum;

		minimum.X = center.X - 35.0f;
		minimum.Y = center.Y - 35.0f;
		minimum.Z = center.Z - 90.f;

		maximum.X = center.X + 35.0f;
		maximum.Y = center.Y + 35.0f;//20
		maximum.Z = center.Z + 90.f;//32,5

		setup_box(player3d, minimum, maximum);
		SDK::FVector outLocation{}; SDK::FRotator outAngles{};
		player->GetActorEyesViewPoint(&outLocation, &outAngles);
		for (auto i = 0; i < 8; i++)
		{
			rotate_point_yaw(player3d[i], center, outAngles.Yaw, &player3d[i]);

			SDK::FVector placeHolder = canvas->K2_Project(player3d[i]);
			player2d[i].X = placeHolder.X;
			player2d[i].Y = placeHolder.Y;
		}

		return true;
	}

	// Helper function to normalize a vector
	static SDK::FVector NormalizeVector(const SDK::FVector& vector)
	{
		SDK::FVector normalized = vector;
		float length = sqrtf(vector.X * vector.X + vector.Y * vector.Y + vector.Z * vector.Z);

		if (length > 0.0f)
		{
			normalized.X /= length;
			normalized.Y /= length;
			normalized.Z /= length;
		}

		return normalized;
	}

	// Helper function to convert vector to angles
	static SDK::FRotator VectorToAngles(const SDK::FVector& vector)
	{
		SDK::FRotator angles{};

		if (vector.X == 0.0f && vector.Y == 0.0f)
		{
			angles.Yaw = 0.0f;
			angles.Pitch = (vector.Z > 0.0f) ? 90.0f : -90.0f;
		}
		else
		{
			angles.Yaw = atan2f(vector.Y, vector.X) * (180.0f / pi2);
			angles.Pitch = atan2f(vector.Z, sqrtf(vector.X * vector.X + vector.Y * vector.Y)) * (180.0f / pi2);
		}

		angles.Roll = 0.0f;
		return angles;
	}

	// Helper function to clamp angles to proper range
	static SDK::FRotator ClampAngles(const SDK::FRotator& angles)
	{
		SDK::FRotator clamped = angles;

		// Normalize Yaw to -180 to 180
		while (clamped.Yaw > 180.0f) clamped.Yaw -= 360.0f;
		while (clamped.Yaw < -180.0f) clamped.Yaw += 360.0f;

		// Clamp Pitch to -90 to 90
		clamped.Pitch = fmaxf(-90.0f, fminf(90.0f, clamped.Pitch));

		return clamped;
	}

	static SDK::FVector2D RotateVector2D(const SDK::FVector2D& vector, float cosAngle, float sinAngle)
	{
		SDK::FVector2D rotated;
		rotated.X = vector.X * cosAngle - vector.Y * sinAngle;
		rotated.Y = vector.X * sinAngle + vector.Y * cosAngle;
		return rotated;
	}

	// Helper function to add two 2D vectors
	static SDK::FVector2D AddVectors2D(const SDK::FVector2D& a, const SDK::FVector2D& b)
	{
		SDK::FVector2D result;
		result.X = a.X + b.X;
		result.Y = a.Y + b.Y;
		return result;
	}

	// Helper function to subtract two vectors
	static SDK::FVector SubtractVectors(const SDK::FVector& baseNumber, const SDK::FVector& Subtraction)
	{
		SDK::FVector result;
		result.X = baseNumber.X - Subtraction.X;
		result.Y = baseNumber.Y - Subtraction.Y;
		result.Z = baseNumber.Z - Subtraction.Z;
		return result;
	}

	static SDK::FRotator CalculateAngle(SDK::FVector src, SDK::FVector dst)
	{
		auto VectorDelta = SubtractVectors(dst, src);

		auto ret = VectorToAngles(VectorDelta);

		return ret;
	}

	// Function to subtract two SDK::FRotators
	static SDK::FRotator SubtractRotators(const SDK::FRotator& a, const SDK::FRotator& b)
	{
		SDK::FRotator result;
		result.Pitch = a.Pitch - b.Pitch;
		result.Yaw = a.Yaw - b.Yaw;
		result.Roll = a.Roll - b.Roll;
		return result;
	}

	// Function to normalize SDK::FRotator (matching your old normalize function)
	static SDK::FRotator NormalizeRotator(const SDK::FRotator& rotation)
	{
		SDK::FRotator out{};
		out.Pitch = std::isfinite(rotation.Pitch) ? std::remainderf(rotation.Pitch, 360.0f) : 0.0f;
		out.Yaw = std::isfinite(rotation.Yaw) ? std::remainderf(rotation.Yaw, 360.0f) : 0.0f;
		out.Roll = rotation.Roll; // Keep roll as-is like your original
		return out;
	}

	// Function to get length of SDK::FRotator (magnitude)
	static float RotatorLength(const SDK::FRotator& rotation)
	{
		return sqrtf(rotation.Pitch * rotation.Pitch + rotation.Yaw * rotation.Yaw + rotation.Roll * rotation.Roll);
	}

	// Modified WorldToCompass function - matching your original exactly
	static void WorldToCompass(SDK::FRotator currentViewAngles,
		const SDK::FVector& startPos,
		const SDK::FVector& worldPos,
		const SDK::FVector2D& compassCenter,
		float compassSize,
		SDK::FVector2D* screenPos,
		float& arrow_angle)
	{
		// Calculate direction from start position to world position (same as original)
		SDK::FVector dir = startPos - worldPos;

		// Inline vector_normalize
		float length = sqrtf(dir.X * dir.X + dir.Y * dir.Y + dir.Z * dir.Z);
		if (length >= 0.0f && length != 0.0f)
		{
			dir.X *= 1.0f / length;
			dir.Y *= 1.0f / length;
			dir.Z *= 1.0f / length;
		}

		// Inline vec_to_angles
		SDK::FRotator angles{};
		float temp, yaw, pitch;
		if (dir.X == 0.0f && dir.Y == 0.0f)
		{
			yaw = 0.0f;
			if (dir.Z > 0.0f)
				pitch = 90.0f;
			else
				pitch = 270.0f;
		}
		else
		{
			yaw = (atan2f(dir.Y, dir.X) * (180.0f / pi2));
			if (yaw < 0.0f)
				yaw += 360.0f;
			temp = sqrtf(dir.X * dir.X + dir.Y * dir.Y);
			pitch = (atan2f(dir.Z, temp) * (180.0f / pi2));
			if (pitch < 0.0f)
				pitch += 360.0f;
		}
		angles.Pitch = -pitch;
		angles.Yaw = yaw;
		angles.Roll = 0.0f;

		// THIS IS THE KEY CHANGE: angles = myViewAngles - angles (not viewAngles - angles)
		SDK::FRotator relativeAngles;
		relativeAngles.Pitch = angles.Pitch - currentViewAngles.Pitch;  // Flipped
		relativeAngles.Yaw = angles.Yaw - currentViewAngles.Yaw;        // Flipped
		relativeAngles.Roll = angles.Roll - currentViewAngles.Roll;     // Flipped

		// Inline clamp_angles
		if (relativeAngles.Pitch > 180.0f)
			relativeAngles.Pitch -= 360.0f;
		if (relativeAngles.Pitch < -180.0f)
			relativeAngles.Pitch += 360.0f;
		if (relativeAngles.Yaw > 180.0f)
			relativeAngles.Yaw -= 360.0f;
		if (relativeAngles.Yaw < -180.0f)
			relativeAngles.Yaw += 360.0f;
		if (relativeAngles.Roll != 0.0f)
			relativeAngles.Roll = 0.0f;

		// Calculate angles exactly like your working source

		float angle = ((relativeAngles.Yaw + 180.0f) / 360.0f - 0.25f) * pi_double;
		float angle2 = ((relativeAngles.Yaw) / 360.0f - 0.25f) * pi_double;
		arrow_angle = angle2;

		// Calculate final screen position
		screenPos->X = compassCenter.X + (cosf(angle) * (compassSize / 2.0f));
		screenPos->Y = compassCenter.Y + (sinf(angle) * (compassSize / 2.0f));
	}

	static void DrawCompassArrow(SDK::UCanvas* canvas, const SDK::FVector2D& position, float angle, float arrowSize, SDK::FLinearColor color)
	{
		// Define arrow shape relative to center (equivalent to your ImVec2 base points)
		SDK::FVector2D base_x = { arrowSize / -2.0f, 0.0f };
		SDK::FVector2D base_y = { arrowSize / 2.0f, arrowSize / 2.0f * -0.75f };
		SDK::FVector2D base_z = { arrowSize / 2.0f, arrowSize / 2.0f * 0.75f };

		// Calculate rotation values
		float cosAngle = cosf(angle);
		float sinAngle = sinf(angle);

		// Rotate and position the arrow points
		SDK::FVector2D final_x = AddVectors2D(position, RotateVector2D(base_x, cosAngle, sinAngle));
		SDK::FVector2D final_y = AddVectors2D(position, RotateVector2D(base_y, cosAngle, sinAngle));
		SDK::FVector2D final_z = AddVectors2D(position, RotateVector2D(base_z, cosAngle, sinAngle));

		// Draw the triangle (filled arrow body)
		// Note: UE4 Canvas doesn't have direct triangle fill, so we'll draw lines to form the arrow
		float thickness = 2.5f;

		// Draw arrow outline
		canvas->K2_DrawLine(final_x, final_y, thickness, color);
		canvas->K2_DrawLine(final_y, final_z, thickness, color);
		canvas->K2_DrawLine(final_z, final_x, thickness, color);

		// Optional: For a filled look, you could draw multiple lines with slight offsets
		// or use a different UE drawing method if available
	}

	static void DrawPlayerBoxes(SDK::UCanvas* canvas, SDK::AActor* Actor, SDK::FLinearColor boxColor)
	{
		SDK::FVector playerOrigin = Actor->K2_GetActorLocation();
		SDK::FVector headPos = Actor->K2_GetActorLocation();
		playerOrigin.Z -= 90.f;
		headPos.Z += 90.f;

		// Project to screen space
		SDK::FVector originScreen = canvas->K2_Project(playerOrigin);
		SDK::FVector headScreen = canvas->K2_Project(headPos);

		if (originScreen.Z < 0 || headScreen.Z < 0)
			return;

		// Calculate dimensions in screen space
		float height = abs(originScreen.Y - headScreen.Y);
		float width = height / 2;
		float boxWidth = width / 1.8f;

		float centerX = originScreen.X;
		float topY = headScreen.Y;
		float bottomY = originScreen.Y;
		// Use the screen coordinates directly
		float originX = originScreen.X;
		float originY = originScreen.Y;
		float headY = headScreen.Y;
		// Define main rectangle corners
		SDK::FVector2D topLeft = SDK::FVector2D(centerX - boxWidth, topY);
		SDK::FVector2D bottomRight = SDK::FVector2D(centerX + boxWidth, bottomY);

		SDK::FLinearColor blackColor = SDK::FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);

		if (g_settings.player.boxSelection == 0)
		{
			// Draw the 3 rectangles (exactly like ImGui version)
			ZeroGUI::DrawRect(canvas, SDK::FVector2D(topLeft.X - 1, topLeft.Y - 1),
				SDK::FVector2D(bottomRight.X - 1, bottomRight.Y - 1), blackColor, g_settings.player.espThickness);

			ZeroGUI::DrawRect(canvas, SDK::FVector2D(topLeft.X + 1, topLeft.Y + 1),
				SDK::FVector2D(bottomRight.X + 1, bottomRight.Y + 1), blackColor, g_settings.player.espThickness);

			ZeroGUI::DrawRect(canvas, topLeft, bottomRight, boxColor, g_settings.player.espThickness);
		}
		else if (g_settings.player.boxSelection == 1)
		{
			// Bottom Left Corner (should be at headY - top of screen)
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 4), headY - 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 4), headY + 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 4), headY), g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 1.35) - 1, headY + (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 1.35) + 1, headY + (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), headY), SDK::FVector2D(originX - (width / 1.35), headY + (width / 2)), g_settings.player.espThickness, boxColor);

			// Bottom Right Corner (should be at headY - top of screen)
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 4), headY - 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 4), headY + 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 4), headY), g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 1.35) - 1, headY + (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 1.35) + 1, headY + (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), headY), SDK::FVector2D(originX + (width / 1.35), headY + (width / 2)), g_settings.player.espThickness, boxColor);

			// Top Left Corner (should be at originY - bottom of screen)
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 4), originY - 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 4), originY + 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 4), originY), g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 1.35) - 1, originY - (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 1.35) + 1, originY - (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX - (width / 1.35), originY), SDK::FVector2D(originX - (width / 1.35), originY - (width / 2)), g_settings.player.espThickness, boxColor);

			// Top Right Corner (should be at originY - bottom of screen)
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 4), originY - 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 4), originY + 1), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 4), originY), g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 1.35) - 1, originY - (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 1.35) + 1, originY - (width / 2)), g_settings.player.espThickness, blackColor);
			canvas->K2_DrawLine(SDK::FVector2D(originX + (width / 1.35), originY), SDK::FVector2D(originX + (width / 1.35), originY - (width / 2)), g_settings.player.espThickness, boxColor);
		}
		else if (g_settings.player.boxSelection == 2)
		{
			SDK::FVector player3d[8];
			SDK::FVector2D player2d[8];
			calculate_box(Actor, canvas, SDK::FVector(playerOrigin.X, playerOrigin.Y, playerOrigin.Z + 90.f), player3d, player2d);

			canvas->K2_DrawLine(player2d[0], player2d[1], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[0], player2d[2], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[0], player2d[4], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[1], player2d[3], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[1], player2d[5], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[2], player2d[3], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[2], player2d[6], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[3], player2d[7], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[4], player2d[5], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[4], player2d[6], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[6], player2d[7], g_settings.player.espThickness, boxColor);
			canvas->K2_DrawLine(player2d[5], player2d[7], g_settings.player.espThickness, boxColor);
		}
	}
	static void DrawSnapLines(SDK::UCanvas* canvas, SDK::AActor* Actor, SDK::FLinearColor snapLineColor)
	{
		if (g_settings.player.snap_line_location == 0)
		{
			SDK::FVector playerOrigin = Actor->K2_GetActorLocation();
			SDK::FVector headPos = Actor->K2_GetActorLocation();
			playerOrigin.Z -= 90.f;
			headPos.Z += 90.f;

			SDK::FVector originScreen = canvas->K2_Project(playerOrigin);
			SDK::FVector headScreen = canvas->K2_Project(headPos);

			canvas->K2_DrawLine(SDK::FVector2D(canvas->ClipX / 2, canvas->ClipY - canvas->ClipY),SDK::FVector2D(headScreen.X, headScreen.Y),1.f,snapLineColor);
			
		}
		else if (g_settings.player.snap_line_location == 1)
		{
			SDK::FVector playerOrigin = Actor->K2_GetActorLocation();
			playerOrigin.Z -= 90.f;
			SDK::FVector originScreen = canvas->K2_Project(playerOrigin);
			canvas->K2_DrawLine(SDK::FVector2D(canvas->ClipX / 2, canvas->ClipY), SDK::FVector2D(originScreen.X, originScreen.Y), 1.f, snapLineColor);
			
		}
		else if (g_settings.player.snap_line_location == 2)
		{
			SDK::FVector playerOrigin = Actor->K2_GetActorLocation();
			playerOrigin.Z -= 90.f;
			SDK::FVector originScreen = canvas->K2_Project(playerOrigin);
			canvas->K2_DrawLine(SDK::FVector2D(canvas->ClipX / 2, canvas->ClipY/2), SDK::FVector2D(originScreen.X, originScreen.Y), 1.f, snapLineColor);
			
		}
	}
	static void HandlePlayerESP(SDK::UCanvas* canvas, SDK::AActor* Actor, GameAimbotTargetClass*& Target_Player, GamePlayerClass* LocalPawn, SDK::FVector localPawnLocation, SDK::FVector2D screen_Center, double& ClosestDistance, GamePlayerControllerClass* PlayerController)
	{
		Utility::AppendToLogFile("HandlePlayerESP: Function entry - Actor: %llx", Actor);

		auto Player = static_cast<GamePlayerClass*>(Actor);
		Utility::AppendToLogFile("HandlePlayerESP: Cast to GamePlayerClass successful - Player: %llx", Player);

		if (!Player->IsAlive())
		{
			Utility::AppendToLogFile("HandlePlayerESP: Player is Dead Skipping");
			return;
		}

		Utility::AppendToLogFile("HandlePlayerESP: Player is alive, validating mesh component");
		// Validate mesh component
		SDK::USkeletalMeshComponent* Mesh = Player->P_SkeletalMeshComp;
		if (!Mesh)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Mesh component is null, returning");
			return;
		}
		Utility::AppendToLogFile("HandlePlayerESP: Mesh component validated - Mesh: %llx", Mesh);

		// Distance check
		Utility::AppendToLogFile("HandlePlayerESP: Calculating distance from local player");
		const float DistanceFromLP = SDK::UKismetMathLibrary::Vector_Distance(
			Player->K2_GetActorLocation(), localPawnLocation);
		Utility::AppendToLogFile("HandlePlayerESP: Distance calculated: %.2f", DistanceFromLP);

		Player->CharacterMovement->MaxCustomMovementSpeed = 0.f;
		Player->CharacterMovement->MaxWalkSpeed = 0.f;
		Player->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_None;

		if (DistanceFromLP > g_settings.player.display_distance * 100.0f)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Player too far away, returning");
			return;
		}

		// Screen position check
		Utility::AppendToLogFile("HandlePlayerESP: Projecting player position to screen");
		const auto POS2D = canvas->K2_Project(Player->GetNavAgentLocation());
		Utility::AppendToLogFile("HandlePlayerESP: Screen position - X: %.2f, Y: %.2f, Z: %.2f", POS2D.X, POS2D.Y, POS2D.Z);

		constexpr float margin = 10.0f;
		const bool isOnScreen = POS2D.Z > 0 &&
			POS2D.X > -margin && POS2D.X < (canvas->ClipX + margin) &&
			POS2D.Y > -margin && POS2D.Y < (canvas->ClipY + margin);

		// Visibility check
		Utility::AppendToLogFile("HandlePlayerESP: Checking line of sight");
		const bool visible = SDK::UGameplayStatics::GetPlayerController(SDK::UWorld::GetWorld(), 0)
			->LineOfSightTo(Player, SDK::FVector(0.f, 0.f, 0.f), false);
		Utility::AppendToLogFile("HandlePlayerESP: Line of sight result: %s", visible ? "visible" : "not visible");

		// Color helper for visibility-based colors
		auto GetColor = [&](float normalColor[4], float visibleColor[4]) -> SDK::FLinearColor {
			return visible ? Utility::CreateColor(visibleColor) : Utility::CreateColor(normalColor);
			};

		//These below require off-screen characters so it is above on screen check
		if (g_settings.player.show_radar && DistanceFromLP < g_settings.player.radar_distance * 100.f)
		{
			/*DrawPlayerViewDirection3D(canvas, Player->K2_GetActorLocation(),
				Player->GetControlRotation(),
				PlayerController->PlayerCameraManager->GetCameraLocation());*/

			SDK::FLinearColor color{};
			if (g_settings.player.aim_warning && DistanceFromLP < g_settings.player.aimWarning_distance * 100.0f && visible)
			{
				SDK::FVector bodyPos = Actor->K2_GetActorLocation();

				SDK::FVector headPos = Actor->K2_GetActorLocation();
				headPos.Z += 70.f;

				if ((RotatorLength(NormalizeRotator(SubtractRotators(Player->GetControlRotation(),
					CalculateAngle(headPos, PlayerController->PlayerCameraManager->GetCameraLocation())))) < g_settings.player.aimWarning_angle)
					||
					(RotatorLength(NormalizeRotator(SubtractRotators(Player->GetControlRotation(),
						CalculateAngle(bodyPos, PlayerController->PlayerCameraManager->GetCameraLocation())))) < g_settings.player.aimWarning_angle))
				{
					color = Utility::CreateColor(g_settings.player.aimWarning_Color);
				}
				else
				{
					color = GetColor(g_settings.player.radar_Color, g_settings.player.radar_Color_vis);
				}
			}
			else
			{
				color = GetColor(g_settings.player.radar_Color, g_settings.player.radar_Color_vis);
			}
			

			DrawRadar(canvas, Player->K2_GetActorLocation(), PlayerController->PlayerCameraManager->GetCameraLocation(),
				PlayerController->GetControlRotation(), color, g_settings.player.radar_type, Player->GetControlRotation().Yaw);//TODO
		}

		if (g_settings.player.show_compass && DistanceFromLP < g_settings.player.compass_distance * 100.0f)
		{
			// Check if we should show all players OR only visible players when visible is true
			if (!g_settings.player.show_compass_visible_only || visible)
			{
				SDK::FVector2D arrow_pos = { 0.0f, 0.0f };
				float arrow_angle = 0.0f;
				WorldToCompass(PlayerController->GetControlRotation(), LocalPawn->K2_GetActorLocation(), Player->K2_GetActorLocation(), g_settings.player.compass_pos, g_settings.player.compassSize, &arrow_pos, arrow_angle);
				// Draw the compass arrow immediately after calculation
				SDK::FLinearColor color{};
				if (g_settings.player.aim_warning && DistanceFromLP < g_settings.player.aimWarning_distance * 100.0f && visible)
				{
					SDK::FVector bodyPos = Actor->K2_GetActorLocation();

					SDK::FVector headPos = Actor->K2_GetActorLocation();
					headPos.Z += 70.f;

					if ((RotatorLength(NormalizeRotator(SubtractRotators(Player->GetControlRotation(),
						CalculateAngle(headPos, PlayerController->PlayerCameraManager->GetCameraLocation())))) < g_settings.player.aimWarning_angle)
						||
						(RotatorLength(NormalizeRotator(SubtractRotators(Player->GetControlRotation(),
							CalculateAngle(bodyPos, PlayerController->PlayerCameraManager->GetCameraLocation())))) < g_settings.player.aimWarning_angle))
					{
						color = Utility::CreateColor(g_settings.player.aimWarning_Color);
					}
					else
					{
						color = GetColor(g_settings.player.radar_Color, g_settings.player.radar_Color_vis);
					}
				}
				else
				{
					color = GetColor(g_settings.player.radar_Color, g_settings.player.radar_Color_vis);
				}

				DrawCompassArrow(canvas, arrow_pos, arrow_angle, g_settings.player.arrowSize, color);
			}
		}
		//End of off-screen player ESP

		if (!isOnScreen)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Player not on screen, returning");
			return;
		}
		Utility::AppendToLogFile("HandlePlayerESP: Player is on screen");
		// Draw bounding box
		SDK::FVector2D textStartPos;
		if (g_settings.player.show_cornered_box)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Drawing box");
			auto boxColor = GetColor(g_settings.player.cornered_box_Color, g_settings.player.cornered_box_Color_vis);
			DrawPlayerBoxes(canvas, Player, boxColor);
			Utility::AppendToLogFile("HandlePlayerESP: box drawn successfully");
		}
		else
		{
			Utility::AppendToLogFile("HandlePlayerESP: Using screen position for text start");
			textStartPos = SDK::FVector2D(POS2D.X, POS2D.Y);
		}

		//Draw Snaplines
		if (g_settings.player.snap_lines && DistanceFromLP < g_settings.player.snap_lines_distance * 100.0f)
		{
			DrawSnapLines(canvas, Player, GetColor(g_settings.player.snap_lines_Color, g_settings.player.snap_lines_Color_vis));
		}

		// Text positioning
		SDK::FVector2D currentTextPos = SDK::FVector2D(POS2D.X, POS2D.Y);
		currentTextPos.Y += 15.0f; // Move below bounding box
		constexpr float lineHeight = 15.0f;
		Utility::AppendToLogFile("HandlePlayerESP: Text positioning set - X: %.2f, Y: %.2f", currentTextPos.X, currentTextPos.Y);

		// Player name
		if (g_settings.player.show_player_name && Player->PlayerState && Player->PlayerState->PlayerNamePrivate.Num() > 0)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Displaying player name");
			auto nameColor = GetColor(g_settings.player.player_name_Color, g_settings.player.player_name_Color_vis);
			std::string playerName = Player->PlayerState->PlayerNamePrivate.ToString();
			ZeroGUI::Text(playerName.c_str(), currentTextPos, nameColor, false, true,SDK::FVector2D(1.2f,1.2f));
			currentTextPos.Y += lineHeight;
			Utility::AppendToLogFile("HandlePlayerESP: Player name displayed: %s", playerName.c_str());
		}

		// Distance display
		if (g_settings.player.show_distance)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Displaying distance");
			std::string distanceStr = Utility::Format("[%.0fm]", DistanceFromLP / 100.0);
			auto distanceColor = GetColor(g_settings.player.distance_Color, g_settings.player.distance_Color_vis);
			ZeroGUI::Text(distanceStr.c_str(), currentTextPos, distanceColor, false, true);
			Utility::AppendToLogFile("HandlePlayerESP: Distance displayed: %s", distanceStr.c_str());
		}

		// Skeleton display
		if (g_settings.player.show_skeleton && DistanceFromLP < g_settings.player.skeleton_distance * 100.0f)
		{
			if (!Mesh || !Mesh->SkeletalMesh)
			{
				Utility::AppendToLogFile("Invalid mesh component or skeletal mesh!\n");
				return;
			}

			Utility::AppendToLogFile("HandlePlayerESP: Processing skeleton display");
			auto skeletonColor = GetColor(g_settings.player.skeleton_Color, g_settings.player.skeleton_Color_vis);

			// Get bone positions
			struct BonePositions
			{
				SDK::FVector head, neck, spine, pelvis;
				SDK::FVector chestR, shoulderR, elbowR, lowerarmR;
				SDK::FVector chestL, shoulderL, elbowL, lowerarmL;
				SDK::FVector waist;
				SDK::FVector hipR, thighR, kneeR, footR;
				SDK::FVector hipL, thighL, kneeL, footL;
			} bones;

			// Get all bone positions
			Utility::AppendToLogFile("HandlePlayerESP: Getting bone positions");

			/* bones.head = Bones::GetBone3D(Mesh, p_headPos);
			 bones.neck = Bones::GetBone3D(Mesh, p_neck01Pos);
			 bones.spine = Bones::GetBone3D(Mesh, p_spine01Pos);
			 bones.pelvis = Bones::GetBone3D(Mesh, p_pelvisPos);

			 bones.clavicleR = Bones::GetBone3D(Mesh, p_clavicleRPos);
			 bones.upperarmR = Bones::GetBone3D(Mesh, p_upperarmRPos);
			 bones.lowerarmR = Bones::GetBone3D(Mesh, p_lowerarmRPos);

			 bones.clavicleL = Bones::GetBone3D(Mesh, p_clavicleLPos);
			 bones.upperarmL = Bones::GetBone3D(Mesh, p_upperarmLPos);
			 bones.lowerarmL = Bones::GetBone3D(Mesh, p_lowerarmLPos);

			 bones.thighR = Bones::GetBone3D(Mesh, p_thighRPos);
			 bones.calfR = Bones::GetBone3D(Mesh, p_calfRPos);
			 bones.footR = Bones::GetBone3D(Mesh, p_footRPos);

			 bones.thighL = Bones::GetBone3D(Mesh, p_thighLPos);
			 bones.calfL = Bones::GetBone3D(Mesh, p_calfLPos);
			 bones.footL = Bones::GetBone3D(Mesh, p_footLPos);*/
			//Bones::DumpBones(Mesh);

			bones.head = Bones::GetBone3D(Mesh, std::string("Bip001-Head"));
			bones.neck = Bones::GetBone3D(Mesh, std::string("Bip001-Neck"));
			bones.spine = Bones::GetBone3D(Mesh, std::string("Bip001-Spine"));
			bones.pelvis = Bones::GetBone3D(Mesh, std::string("Bip001-Spine2"));

			bones.chestR = Bones::GetBone3D(Mesh, std::string("Bip001-R-Clavicle"));
			bones.shoulderR = Bones::GetBone3D(Mesh, std::string("Bip001-R-UpperArm"));
			bones.elbowR = Bones::GetBone3D(Mesh, std::string("Bip001-R-ForeTwist1"));
			bones.lowerarmR = Bones::GetBone3D(Mesh, std::string("Bip001-R-Forearm"));

			bones.chestL = Bones::GetBone3D(Mesh, std::string("Bip001-L-Clavicle"));
			bones.shoulderL = Bones::GetBone3D(Mesh, std::string("Bip001-L-UpperArm"));
			bones.elbowL = Bones::GetBone3D(Mesh, std::string("Bip001-L-ForeTwist1"));
			bones.lowerarmL = Bones::GetBone3D(Mesh, std::string("Bip001-L-Forearm"));

			bones.waist = Bones::GetBone3D(Mesh, std::string("Bip001-Pelvis"));

			bones.hipR = Bones::GetBone3D(Mesh, std::string("Bone_SHip_R"));
			bones.thighR = Bones::GetBone3D(Mesh, std::string("Bip001-R-Thigh"));
			bones.kneeR = Bones::GetBone3D(Mesh, std::string("Bip001-RThighTwist"));
			bones.footR = Bones::GetBone3D(Mesh, std::string("Bip001-R-Calf"));

			bones.hipL = Bones::GetBone3D(Mesh, std::string("Bone_SHip_L"));
			bones.thighL = Bones::GetBone3D(Mesh, std::string("Bip001-L-Thigh"));
			bones.kneeL = Bones::GetBone3D(Mesh, std::string("Bip001-LThighTwist"));
			bones.footL = Bones::GetBone3D(Mesh, std::string("Bip001-L-Calf"));

			Utility::AppendToLogFile("HandlePlayerESP: All bone positions retrieved");

			// Health-based coloring for bones
			auto GetHealthColor = [&](float healthPercent) -> SDK::FLinearColor {
				if (!g_settings.player.show_bone_health) return skeletonColor;

				if (healthPercent > 0.66f) return SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f); // Green
				if (healthPercent > 0.33f) return SDK::FLinearColor(1.0f, 1.0f, 0.0f, 1.0f); // Yellow
				return SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); // Red
				};

			// Get body part health percentages
			float headHealth = 1.0f, chestHealth = 1.0f, leftArmHealth = 1.0f,
				rightArmHealth = 1.0f, leftLegHealth = 1.0f, rightLegHealth = 1.0f;

			// Draw bone connections with health colors
			auto DrawBoneLine = [&](const SDK::FVector& start, const SDK::FVector& end, float healthPercent) {
				ZeroGUI::DrawLineWorld(start, end, GetHealthColor(healthPercent), g_settings.player.espThickness);
				};

			Utility::AppendToLogFile("HandlePlayerESP: Drawing skeleton lines");
			// Head and spine

			 //Arms
			DrawBoneLine(bones.chestR, bones.chestL, rightArmHealth);

			DrawBoneLine(bones.chestR, bones.shoulderR, rightArmHealth);
			DrawBoneLine(bones.shoulderR, bones.elbowR, rightArmHealth);
			DrawBoneLine(bones.elbowR, bones.elbowR, leftArmHealth);
			DrawBoneLine(bones.elbowR, bones.lowerarmR, leftArmHealth);

			DrawBoneLine(bones.chestL, bones.shoulderL, rightArmHealth);
			DrawBoneLine(bones.shoulderL, bones.elbowL, rightArmHealth);
			DrawBoneLine(bones.elbowL, bones.elbowL, leftArmHealth);
			DrawBoneLine(bones.elbowL, bones.lowerarmL, leftArmHealth);

			//Drawing from neck to waist
			DrawBoneLine(bones.pelvis, bones.waist, leftArmHealth);

			// Legs
			DrawBoneLine(bones.waist, bones.hipR, rightLegHealth);
			DrawBoneLine(bones.hipR, bones.thighR, rightLegHealth);
			DrawBoneLine(bones.thighR, bones.kneeR, rightLegHealth);
			DrawBoneLine(bones.kneeR, bones.footR, rightLegHealth);

			DrawBoneLine(bones.waist, bones.hipL, rightLegHealth);
			DrawBoneLine(bones.hipL, bones.thighL, rightLegHealth);
			DrawBoneLine(bones.thighL, bones.kneeL, rightLegHealth);
			DrawBoneLine(bones.kneeL, bones.footL, rightLegHealth);
			// DrawBoneLine(bones.calfL, bones.footL, leftLegHealth);
		   //  Bones::DumpBones(Mesh);
		   //Bones::DrawBones(Mesh);
			Utility::AppendToLogFile("HandlePlayerESP: Skeleton drawing completed");

			Bones::ClearBoneCache();
			Bones::ClearModelCache(Mesh);
		}

		// Aimbot processing
		if (g_settings.aimbot.player.enabled && DistanceFromLP / 100.0 <= g_settings.aimbot.player.max_distance)
		{
			Utility::AppendToLogFile("HandlePlayerESP: Processing aimbot target");
			auto AimPOS = Bones::GetBone3D(Player->P_SkeletalMeshComp,
				"b_ch_neck");
			auto AimPOS_Screen = canvas->K2_Project(AimPOS);
			Utility::AppendToLogFile("HandlePlayerESP: Aimbot bone position calculated");

			if (AimPOS_Screen.Z > 0 && (!g_settings.aimbot.player.visible_only || visible))
			{
				AimPOS_Screen.Z = 0;
				auto distanceFromScreenCenter = SDK::UKismetMathLibrary::Vector_Distance(
					SDK::FVector(screen_Center.X, screen_Center.Y, 0), AimPOS_Screen);

				if (distanceFromScreenCenter < ClosestDistance &&
					distanceFromScreenCenter < g_settings.aimbot.general.field_of_view)
				{
					ClosestDistance = distanceFromScreenCenter;
					Target_Player = Player;
					Utility::AppendToLogFile("HandlePlayerESP: New aimbot target set - Distance: %.2f", distanceFromScreenCenter);
				}
			}
		}

		Utility::AppendToLogFile("HandlePlayerESP: Function completed successfully");
	}

	static void HandleNPCESP(SDK::UCanvas* canvas, SDK::AActor* Actor, GameAimbotTargetClass*& Target_Player, GamePlayerClass* LocalPawn, SDK::FVector localPawnLocation, SDK::FVector2D screen_Center, double& ClosestDistance)
	{
		auto NPC = static_cast<GameNpcClass*>(Actor);

		// Validate mesh component
		SDK::USkeletalMeshComponent* Mesh = NPC->NPC_SkeletalMeshComp;
		if (!Mesh) return;

		// Distance check
		const float DistanceFromLP = SDK::UKismetMathLibrary::Vector_Distance(
			NPC->K2_GetActorLocation(), localPawnLocation);
		if (DistanceFromLP > g_settings.npc.display_distance * 100.0f) return;

		// Screen position check
		const auto POS2D = canvas->K2_Project(NPC->GetNavAgentLocation());
		constexpr float margin = 10.0f;
		const bool isOnScreen = POS2D.Z > 0 &&
			POS2D.X > -margin && POS2D.X < (canvas->ClipX + margin) &&
			POS2D.Y > -margin && POS2D.Y < (canvas->ClipY + margin);

		if (!isOnScreen) return;

		// Visibility check
		const bool visible = SDK::UGameplayStatics::GetPlayerController(SDK::UWorld::GetWorld(), 0)
			->LineOfSightTo(NPC, SDK::FVector(0.f, 0.f, 0.f), false);

		// Color helper for visibility-based colors
		auto GetColor = [&](float normalColor[4], float visibleColor[4]) -> SDK::FLinearColor {
			return visible ? Utility::CreateColor(visibleColor) : Utility::CreateColor(normalColor);
			};

		// Draw bounding box
		SDK::FVector2D textStartPos;
		if (g_settings.npc.show_cornered_box)
		{
			auto boxColor = GetColor(g_settings.npc.cornered_box_Color, g_settings.npc.cornered_box_Color_vis);
			textStartPos = ZeroGUI::DrawBounds2D(NPC, boxColor, true, 3.0, 0.9f, 0.15f);
		}
		else
		{
			textStartPos = SDK::FVector2D(POS2D.X, POS2D.Y);
		}

		// Text positioning
		SDK::FVector2D currentTextPos = textStartPos;
		currentTextPos.Y += 15.0f; // Move below bounding box
		constexpr float lineHeight = 15.0f;

		// NPC name
		if (g_settings.npc.show_npc_name)
		{
			auto nameColor = GetColor(g_settings.npc.npc_name_Color, g_settings.npc.npc_name_Color_vis);
			ZeroGUI::Text("NPC", currentTextPos, nameColor, false, true);
			currentTextPos.Y += lineHeight;
		}

		// Distance display
		if (g_settings.npc.show_distance)
		{
			std::string distanceStr = Utility::Format("[%.0fm]", DistanceFromLP / 100.0);
			auto distanceColor = GetColor(g_settings.npc.distance_Color, g_settings.npc.distance_Color_vis);
			ZeroGUI::Text(distanceStr.c_str(), currentTextPos, distanceColor, false, true);
		}

		//// Skeleton display
		//if (settings.npc.show_skeleton && DistanceFromLP < settings.npc.skeleton_distance * 100.0f)
		//{
		//    auto skeletonColor = GetColor(settings.npc.skeleton_Color, settings.npc.skeleton_Color_vis);

		//    // Get bone positions
		//    struct BonePositions
		//    {
		//        SDK::FVector head, neck, spine, pelvis;
		//        SDK::FVector clavicleR, upperarmR, lowerarmR;
		//        SDK::FVector clavicleL, upperarmL, lowerarmL;
		//        SDK::FVector thighR, calfR, footR;
		//        SDK::FVector thighL, calfL, footL;
		//    } bones;

		//    // Get all bone positions using NPC bone indices
		//    bones.head = Bones::GetBone3D(Mesh, npc_headPos);
		//    bones.neck = Bones::GetBone3D(Mesh, npc_neck01Pos);
		//    bones.spine = Bones::GetBone3D(Mesh, npc_spine01Pos);
		//    bones.pelvis = Bones::GetBone3D(Mesh, npc_pelvisPos);

		//    bones.clavicleR = Bones::GetBone3D(Mesh, npc_clavicleRPos);
		//    bones.upperarmR = Bones::GetBone3D(Mesh, npc_upperarmRPos);
		//    bones.lowerarmR = Bones::GetBone3D(Mesh, npc_lowerarmRPos);

		//    bones.clavicleL = Bones::GetBone3D(Mesh, npc_clavicleLPos);
		//    bones.upperarmL = Bones::GetBone3D(Mesh, npc_upperarmLPos);
		//    bones.lowerarmL = Bones::GetBone3D(Mesh, npc_lowerarmLPos);

		//    bones.thighR = Bones::GetBone3D(Mesh, npc_thighRPos);
		//    bones.calfR = Bones::GetBone3D(Mesh, npc_calfRPos);
		//    bones.footR = Bones::GetBone3D(Mesh, npc_footRPos);

		//    bones.thighL = Bones::GetBone3D(Mesh, npc_thighLPos);
		//    bones.calfL = Bones::GetBone3D(Mesh, npc_calfLPos);
		//    bones.footL = Bones::GetBone3D(Mesh, npc_footLPos);

		//    // Health-based coloring for bones
		//    auto GetHealthColor = [&](float healthPercent) -> SDK::FLinearColor {
		//        if (!settings.npc.show_bone_health) return skeletonColor;

		//        if (healthPercent > 0.66f) return SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f); // Green
		//        if (healthPercent > 0.33f) return SDK::FLinearColor(1.0f, 1.0f, 0.0f, 1.0f); // Yellow
		//        return SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); // Red
		//        };

		//    // Get body part health percentages
		//    float headHealth = 1.0f, chestHealth = 1.0f, leftArmHealth = 1.0f,
		//        rightArmHealth = 1.0f, leftLegHealth = 1.0f, rightLegHealth = 1.0f;

		//

		//    // Draw bone connections with health colors
		//    auto DrawBoneLine = [&](const SDK::FVector& start, const SDK::FVector& end, float healthPercent) {
		//        ZeroGUI::DrawLineWorld(start, end, GetHealthColor(healthPercent), 2.0f);
		//        };

		//    // Head and spine
		//    DrawBoneLine(bones.head, bones.neck, headHealth);
		//    DrawBoneLine(bones.neck, bones.spine, chestHealth);
		//    DrawBoneLine(bones.spine, bones.pelvis, chestHealth);

		//    // Arms
		//    DrawBoneLine(bones.spine, bones.clavicleR, rightArmHealth);
		//    DrawBoneLine(bones.clavicleR, bones.upperarmR, rightArmHealth);
		//    DrawBoneLine(bones.upperarmR, bones.lowerarmR, rightArmHealth);

		//    DrawBoneLine(bones.spine, bones.clavicleL, leftArmHealth);
		//    DrawBoneLine(bones.clavicleL, bones.upperarmL, leftArmHealth);
		//    DrawBoneLine(bones.upperarmL, bones.lowerarmL, leftArmHealth);

		//    // Legs
		//    DrawBoneLine(bones.pelvis, bones.thighR, rightLegHealth);
		//    DrawBoneLine(bones.thighR, bones.calfR, rightLegHealth);
		//    DrawBoneLine(bones.calfR, bones.footR, rightLegHealth);

		//    DrawBoneLine(bones.pelvis, bones.thighL, leftLegHealth);
		//    DrawBoneLine(bones.thighL, bones.calfL, leftLegHealth);
		//    DrawBoneLine(bones.calfL, bones.footL, leftLegHealth);
		//}

		//// Aimbot processing
		//if (settings::aimbot.npc.enabled && DistanceFromLP / 100.0 <= settings::aimbot.npc.max_distance)
		//{
		//    auto AimPOS = Bones::GetBone3D(NPC->P_SkeletalMeshComp,
		//        settings::aimbot.npc.aimbones[settings::aimbot.npc.aimbone_index]);
		//    auto AimPOS_Screen = canvas->K2_Project(AimPOS);

		//    if (AimPOS_Screen.Z > 0 && (!settings::aimbot.npc.visible_only || visible))
		//    {
		//        AimPOS_Screen.Z = 0;
		//        auto distanceFromScreenCenter = SDK::UKismetMathLibrary::Vector_Distance(
		//            SDK::FVector(screen_Center.X, screen_Center.Y, 0), AimPOS_Screen);

		//        if (distanceFromScreenCenter < ClosestDistance &&
		//            distanceFromScreenCenter < g_settings.aimbot.general.field_of_view)
		//        {
		//            ClosestDistance = distanceFromScreenCenter;
		//            Target_Player = NPC;
		//        }
		//    }
		//}
	}

	// Hook function that replaces the original PostRender
// Hook function that replaces the original PostRender
	static void PostRenderHook(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvasScreen)
	{
		Utility::AppendToLogFile("PostRenderHook: Entry\n");

		// Initialize canvas once and cache it
		static SDK::UCanvas* canvas = nullptr;
		if (!canvas)
		{
			Utility::AppendToLogFile("PostRenderHook: Searching for CanvasObject\n");
			canvas = SDK::UObject::FindObjectFast<SDK::UCanvas>("CanvasObject");
			if (!canvas)
			{
				Utility::AppendToLogFile("Failed to find CanvasObject\n");
				return Utility::GameCall<void>(Utility::Utility::PostRenderOG)(viewport, canvasScreen);
			}

			Utility::AppendToLogFile("PostRenderHook: Setting up canvas\n");
			ZeroGUI::SetupCanvas(canvas);
			Utility::AppendToLogFile("CanvasObject: %llx\n", canvas);
		}

		Utility::AppendToLogFile("PostRenderHook: ZeroGUI::SetupCanvas\n");

		//Set canvas to screen canvas for the menu
		ZeroGUI::SetupCanvas(canvas);

		Utility::AppendToLogFile("PostRenderHook: ZeroMenu::Render\n");

		// Render the menu
	   // ZeroMenu::Render();

		Utility::AppendToLogFile("PostRenderHook: Getting world\n");
		// Get world and skip ESP in main menu
		SDK::UWorld* World = SDK::UWorld::GetWorld();
		if (!World)
		{
			Utility::AppendToLogFile("PostRenderHook: World is null, calling original\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}
		else
		{
			Utility::AppendToLogFile("PostRenderHook: world Name: %s", World->GetFullName().c_str());
		}

		Utility::AppendToLogFile("PostRenderHook: Getting game objects World %llX\n", World);
		if (World->GetFullName() == "World None.None")
		{
			Utility::AppendToLogFile("PostRenderHook: World is None\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}
		// Get required game objects with null checks
		SDK::UGameInstance* GameInstance = World ? SDK::UGameplayStatics::GetGameInstance(World) : nullptr;
		if (!GameInstance)
		{
			Utility::AppendToLogFile("PostRenderHook: GameInstance is null\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}

		Utility::AppendToLogFile("PostRenderHook: Getting LocalPlayer\n");
		SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers.Num() > 0 ? GameInstance->LocalPlayers[0] : nullptr;
		if (!LocalPlayer)
		{
			Utility::AppendToLogFile("PostRenderHook: LocalPlayer is null\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}
		//  SDK::AINSPlayerController
		Utility::AppendToLogFile("PostRenderHook: Getting PlayerController\n");
		GamePlayerControllerClass* PlayerController = static_cast<GamePlayerControllerClass*>(SDK::UGameplayStatics::GetPlayerController(World, 0));
		if (!PlayerController)
		{
			Utility::AppendToLogFile("PostRenderHook: PlayerController is null\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}

		//canvas->ClipX = 960.0f;//((1706.666667) * factor);//lower number = move left
		//canvas->ClipY = 1080.0f;//((1920.0f) * factor);//lower number = move up

		if (PlayerController->IsActorBeingDestroyed())
		{
			Utility::AppendToLogFile("PostRenderHook: PlayerController being destroyed\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}

		Utility::AppendToLogFile("PostRenderHook: Getting LocalPawn\n");
		auto LPawn = SDK::UGameplayStatics::GetPlayerPawn(World, 0);
		if (!LPawn)
		{
			Utility::AppendToLogFile("PostRenderHook: LPawn is null\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}

		Utility::AppendToLogFile("PostRenderHook: Pre-Casting LocalPawn\n");
		if (!LPawn->IsA(GamePlayerClass::StaticClass()))
		{
			Utility::AppendToLogFile("PostRenderHook: LocalPawn IsA Failed\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}
		else
		{
			Utility::AppendToLogFile("LPawn: %s, PlayerController: %s", LPawn->GetName().c_str(), PlayerController->GetName().c_str());
		}

		GamePlayerClass* LocalPawn = static_cast<GamePlayerClass*>(LPawn);
		if (!LocalPawn)
		{
			Utility::AppendToLogFile("PostRenderHook: LocalPawn is null\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}
		else
		{
			//Local Player Mods
		}

		if (LocalPawn->IsActorBeingDestroyed())
		{
			Utility::AppendToLogFile("PostRenderHook: LocalPawn being destroyed\n");
			return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvas);
		}

		Utility::AppendToLogFile("PostRenderHook: Calling LocalPlayerMods\n");

		//Local Player Mods
		Mods::LocalPlayerMods(LocalPawn, PlayerController);

		Utility::AppendToLogFile("PostRenderHook: Calculating screen parameters\n");
		// Calculate screen parameters
		const auto screen_size = SDK::FVector2D(static_cast<double>(canvas->ClipX), static_cast<double>(canvas->ClipY));
		const auto screen_Center = SDK::FVector2D(canvas->ClipX / 2.0f, canvas->ClipY / 2.0f);
		Utility::AppendToLogFile("PostRenderHook: Screen size: %.0f x %.0f\n", screen_size.X, screen_size.Y);
		static bool compassInitialized = false;

		if (!compassInitialized)
		{
			// Get viewport dimensions from canvas
			SDK::FVector2D viewPort = { static_cast<float>(canvas->ClipX), static_cast<float>(canvas->ClipY) };

			// Calculate scaling factor based on 1080p reference
			auto scaling_factor = viewPort.Y / 1080.0f;

			// Scale compass and arrow sizes
			g_settings.player.compassSize = 300.0f * scaling_factor;
			g_settings.player.arrowSize = 27.0f * scaling_factor;

			// Set compass position to center of screen
			g_settings.player.compass_pos.X = viewPort.X / 2.0f;
			g_settings.player.compass_pos.Y = viewPort.Y / 2.0f;

			compassInitialized = true;
		}

		// One-time console initialization
		static bool DidEnableConsole = false;
		if (!DidEnableConsole)
		{
			Utility::AppendToLogFile("PostRenderHook: Enabling console\n");
			DidEnableConsole = true;
			PlayerController->EnableCheats();
			Utility::EnableConsole();
		}

		// Draw aimbot FOV circle
		if (g_settings.aimbot.general.show_fov)
		{
			Utility::AppendToLogFile("PostRenderHook: Drawing FOV circle\n");
			ZeroGUI::DrawCircle(screen_Center, g_settings.aimbot.general.field_of_view, 100,
				Utility::CreateColor(g_settings.aimbot.general.FOV_Color));
		}

		if (g_settings.player.aimWarningPreview)
		{
			ZeroGUI::DrawCircle(screen_Center, tan(DegreesToRadians(g_settings.player.aimWarning_angle) / 2.f) / tan(DegreesToRadians(120) / 2.f) * canvas->ClipX, 32,
				Utility::CreateColor(g_settings.aimbot.general.FOV_Color));
		}

		Utility::AppendToLogFile("PostRenderHook: Initializing aimbot variables\n");
		// Aimbot target tracking
		GameAimbotTargetClass* Target_Player = nullptr;
		double ClosestDistance = 999999999.0;
		double ClosestDistance3D = 999999999.0;
		SDK::AActor* Monkey_Player = nullptr;

		const SDK::FVector localPawnLocation = LocalPawn->K2_GetActorLocation(); // Cache for performance
		Utility::AppendToLogFile("PostRenderHook: Local pawn location: %.2f, %.2f, %.2f\n",
			localPawnLocation.X, localPawnLocation.Y, localPawnLocation.Z);

		Utility::AppendToLogFile("PostRenderHook: Starting world actor iteration, Levels count: %d\n", World->Levels.Num());
		// Process all actors in world
		//for (int L = 0; L < World->Levels.Num(); ++L)
		for (int L = 0; L < 1; ++L)//important shit seems to be at index 0 all other levels seem to be buildings etc
		{
			if (!World->Levels[L])
			{
				Utility::AppendToLogFile("PostRenderHook: Level %d is null, skipping\n", L);
				continue;
			}

			const auto& Actors = World->Levels[L]->Actors;
			Utility::AppendToLogFile("PostRenderHook: Level %d has %d actors\n", L, Actors.Num());

			for (int A = 0; A < Actors.Num(); ++A)
			{
				auto Actor = Actors[A];

				// Skip invalid actors
				if (!Actor || !Actor->RootComponent || Actor->IsActorBeingDestroyed())
					continue;

				// Debug mode: show all nearby actors
				if (g_settings.WorldESP.debugdraw)
				{
					Utility::AppendToLogFile("PostRenderHook: Processing debug draw for actor: %s\n", Actor->GetName().c_str());
					const float distance = SDK::UKismetMathLibrary::GetDefaultObj()->Vector_Distance(
						Actor->K2_GetActorLocation(), localPawnLocation);
					if (distance < 10000.0f) // 100m in UE units
					{
						ZeroGUI::TextWorld(Actor->K2_GetActorLocation(), Actor->GetName().c_str(), ZeroGUI::Colors::Yellow);
					}
				}

				// Remove kill volumes
				if (Actor->IsA(SDK::AKillZVolume::StaticClass()))
				{
					Utility::AppendToLogFile("PostRenderHook: Destroying kill volume\n");
					Actor->K2_DestroyActor();
					continue;
				}

				//SDK::ABP_Character_Player_C
				  // Process players
				if (Actor->IsA(GamePlayerClass::StaticClass()))
				{
					// Skip self
					if (reinterpret_cast<uintptr_t>(Actor) == reinterpret_cast<uintptr_t>(LocalPawn))
					{
						Utility::AppendToLogFile("HandlePlayerESP: Skipping self - Actor matches LocalPawn");
						continue;
					}

					//Skip team mates
					auto Player = static_cast<GamePlayerClass*>(Actor);
					//if (Player->TeamId == LocalPawn->TeamId)
						//continue;
					Utility::AppendToLogFile("PostRenderHook: Processing player actor\n");
					if (g_settings.Mods.MonkeyHack)
					{
						if (Player->CharacterMovement)
						{
							if (Player->CharacterMovement->MovementMode != SDK::EMovementMode::MOVE_Falling)
							{
								const auto ActorLocation = Actor->K2_GetActorLocation();
								const float distance = SDK::UKismetMathLibrary::GetDefaultObj()->Vector_Distance(ActorLocation, localPawnLocation);
								if (distance < ClosestDistance3D)
								{
									ClosestDistance3D = distance;
									Monkey_Player = Actor;
								}
							}
						}
					}

					HandlePlayerESP(canvas, Actor, Target_Player, LocalPawn, localPawnLocation, screen_Center, ClosestDistance, PlayerController);
				}
				// Process NPCs
				else if (Actor->IsA(GameNpcClass::StaticClass()))
				{
					Utility::AppendToLogFile("PostRenderHook: Processing NPC actor\n");
					HandleNPCESP(canvas, Actor, Target_Player, LocalPawn, localPawnLocation, screen_Center, ClosestDistance);
				}
			}
			Utility::AppendToLogFile("PostRenderHook: Completed processing level %d\n", L);
		}

		Utility::AppendToLogFile("PostRenderHook: Setting aimbot target\n");
		// Update aimbot target
		g_settings.aimbot.general.Target_Player = Target_Player;

		// Draw target line
		if (g_settings.aimbot.general.Target_Player &&
			((g_settings.aimbot.player.show_target_line && Target_Player->IsA(GamePlayerClass::StaticClass())) ||
				(g_settings.aimbot.npc.show_target_line && Target_Player->IsA(GameNpcClass::StaticClass()))))
		{
			Utility::AppendToLogFile("PostRenderHook: Drawing target line\n");
			const SDK::FVector2D screenCenterPos(screen_Center.X, screen_Center.Y);
			const SDK::FVector targetWorldPos = canvas->K2_Project(g_settings.aimbot.general.Target_Player->K2_GetActorLocation());

			// Get target line color based on target type
			SDK::FLinearColor targetLineColor = SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); // Default red
			if (Target_Player->IsA(GamePlayerClass::StaticClass()))
			{
				targetLineColor = Utility::CreateColor(g_settings.aimbot.player.Target_Line_Color);
			}
			else if (Target_Player->IsA(GameNpcClass::StaticClass()))
			{
				targetLineColor = Utility::CreateColor(g_settings.aimbot.npc.Target_Line_Color);
			}

			canvas->K2_DrawLine(screenCenterPos, SDK::FVector2D(targetWorldPos.X, targetWorldPos.Y), 1.0f, targetLineColor);
		}
		if (g_settings.aimbot.general.Target_Player && g_settings.aimbot.player.enabled)
		{
			Aimbot::ApplyAngles(PlayerController, LocalPawn);
		}

		if (g_settings.Mods.MonkeyHack && Monkey_Player)
		{
			if (LocalPawn->CharacterMovement)
			{
				LocalPawn->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;
				LocalPawn->SetActorEnableCollision(false);
			}

			// Calculate position manually each frame

			auto Player = static_cast<GamePlayerClass*>(Monkey_Player);

			SDK::FVector PlayerLocation = Monkey_Player->K2_GetActorLocation();
			SDK::FRotator PlayerRotation = Player->K2_GetActorRotation();// = Monkey_Player->K2_GetActorRotation();
			//Player->GetCharacterRotation(&PlayerRotation);

			SDK::FVector ForwardVector = SDK::UKismetMathLibrary::GetForwardVector(PlayerRotation);
			SDK::FVector BackwardOffset = ForwardVector * -90.0f;
			SDK::FVector UpwardOffset = SDK::FVector(0, 0, 40.0f);
			SDK::FVector PiggybackPosition = PlayerLocation + BackwardOffset + UpwardOffset;

			LocalPawn->K2_SetActorLocation(PiggybackPosition, false, nullptr, true);
			// LocalPawn->SyncLocation(PiggybackPosition);
		}
		else if (g_settings.Mods.MonkeyHack)
		{
			if (LocalPawn->CharacterMovement && LocalPawn->CharacterMovement->MovementMode == SDK::EMovementMode::MOVE_Flying)
			{
				LocalPawn->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Walking;
				LocalPawn->SetActorEnableCollision(true);
			}
		}

		Utility::AppendToLogFile("PostRenderHook: Calling original PostRender\n");
		return Utility::GameCall<void>(Utility::PostRenderOG)(viewport, canvasScreen);
	}

private:
	// Helper to check if actor is a valuable item
	static bool IsValuableItem(SDK::AActor* actor)
	{
		return false;
	}
};

#endif // ESP_H