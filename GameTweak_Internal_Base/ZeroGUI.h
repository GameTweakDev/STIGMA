#pragma once
#include "Unreal/SDK.hpp"

namespace ZeroGUI
{
	namespace Colors
	{
		SDK::FLinearColor Text = { 1.0f, 1.0f, 1.0f, 1.0f };
		SDK::FLinearColor Text_Shadow = { 0.0f, 0.0f, 0.0f, 0.0f };
		SDK::FLinearColor Text_Outline = { 0.0f, 0.0f, 0.0f, 0.30f };
		// ============================================================================
		// BASIC COLORS - Primary and fundamental colors
		// ============================================================================
		SDK::FLinearColor Red = { 1.0f, 0.0f, 0.0f, 1.0f };
		SDK::FLinearColor Green = { 0.0f, 1.0f, 0.0f, 1.0f };
		SDK::FLinearColor Blue = { 0.0f, 0.0f, 1.0f, 1.0f };
		SDK::FLinearColor Yellow = { 1.0f, 1.0f, 0.0f, 1.0f };
		SDK::FLinearColor Orange = { 1.0f, 0.65f, 0.0f, 1.0f };
		SDK::FLinearColor Pink = { 1.0f, 0.75f, 0.8f, 1.0f };
		SDK::FLinearColor Brown = { 0.6f, 0.4f, 0.2f, 1.0f };
		SDK::FLinearColor Black = { 0.0f, 0.0f, 0.0f, 1.0f };
		SDK::FLinearColor White = { 1.0f, 1.0f, 1.0f, 1.0f };

		// ============================================================================
		// PURPLE/VIOLET FAMILY - Purples, violets, and magenta variants
		// ============================================================================
		SDK::FLinearColor LightPurple = { 0.80f, 0.60f, 0.90f, 1.0f };
		SDK::FLinearColor VioletRed = { 0.82f, 0.13f, 0.56f, 1.0f };
		SDK::FLinearColor Magenta = { 1.0f, 0.0f, 1.0f, 1.0f };
		SDK::FLinearColor Fuchsia = { 1.0f, 0.0f, 1.0f, 1.0f };
		SDK::FLinearColor Plum = { 0.87f, 0.63f, 0.87f, 1.0f };
		SDK::FLinearColor Orchid = { 0.85f, 0.44f, 0.84f, 1.0f };
		SDK::FLinearColor SlateBlue = { 0.42f, 0.35f, 0.8f, 1.0f };
		SDK::FLinearColor Thistle = { 0.85f, 0.75f, 0.85f, 1.0f };
		SDK::FLinearColor Indigo = { 0.29f, 0.0f, 0.51f, 1.0f };
		SDK::FLinearColor DarkMagenta = { 0.55f, 0.0f, 0.55f, 1.0f };
		SDK::FLinearColor MediumVioletRed = { 0.78f, 0.08f, 0.52f, 1.0f };
		SDK::FLinearColor PaleVioletRed = { 0.86f, 0.44f, 0.58f, 1.0f };
		SDK::FLinearColor DarkViolet = { 0.58f, 0.0f, 0.83f, 1.0f };
		SDK::FLinearColor DarkSlateBlue = { 0.28f, 0.24f, 0.55f, 1.0f };
		SDK::FLinearColor MediumOrchid = { 0.73f, 0.33f, 0.83f, 1.0f };
		SDK::FLinearColor MediumPurple = { 0.58f, 0.44f, 0.86f, 1.0f };
		SDK::FLinearColor MediumSlateBlue = { 0.48f, 0.41f, 0.93f, 1.0f };
		SDK::FLinearColor SlateBlueLight = { 0.78f, 0.78f, 1.0f, 1.0f };
		SDK::FLinearColor OrchidDark = { 0.6f, 0.2f, 0.8f, 1.0f };

		// ============================================================================
		// BLUE FAMILY - Blues from light to dark, including sky and navy variants
		// ============================================================================
		SDK::FLinearColor SkyBlue = { 0.53f, 0.81f, 0.92f, 1.0f };
		SDK::FLinearColor Cyan = { 0.0f, 1.0f, 1.0f, 1.0f };
		SDK::FLinearColor DarkBlue = { 0.0f, 0.0f, 0.55f, 1.0f };
		SDK::FLinearColor LightBlue = { 0.68f, 0.85f, 0.90f, 1.0f };
		SDK::FLinearColor Navy = { 0.0f, 0.0f, 0.5f, 1.0f };
		SDK::FLinearColor Aqua = { 0.0f, 1.0f, 1.0f, 1.0f };
		SDK::FLinearColor PowderBlue = { 0.69f, 0.88f, 0.9f, 1.0f };
		SDK::FLinearColor MidnightBlue = { 0.1f, 0.1f, 0.44f, 1.0f };
		SDK::FLinearColor SteelBlue = { 0.27f, 0.51f, 0.71f, 1.0f };
		SDK::FLinearColor LightSteelBlue = { 0.69f, 0.77f, 0.87f, 1.0f };
		SDK::FLinearColor LightSkyBlue = { 0.53f, 0.81f, 0.98f, 1.0f };
		SDK::FLinearColor MediumBlue = { 0.0f, 0.0f, 0.8f, 1.0f };
		SDK::FLinearColor Azure = { 0.94f, 1.0f, 1.0f, 1.0f };
		SDK::FLinearColor CornflowerBlue = { 0.39f, 0.58f, 0.93f, 1.0f };
		SDK::FLinearColor DeepSkyBlue = { 0.0f, 0.75f, 1.0f, 1.0f };
		SDK::FLinearColor DodgerBlue = { 0.12f, 0.56f, 1.0f, 1.0f };
		SDK::FLinearColor LightCyan = { 0.88f, 1.0f, 1.0f, 1.0f };

		// ============================================================================
		// GREEN FAMILY - Greens, teals, and nature-inspired colors
		// ============================================================================
		SDK::FLinearColor ForestGreen = { 0.13f, 0.55f, 0.13f, 1.0f };
		SDK::FLinearColor DarkGreen = { 0.0f, 0.39f, 0.0f, 1.0f };
		SDK::FLinearColor LightGreen = { 0.56f, 0.93f, 0.56f, 1.0f };
		SDK::FLinearColor Teal = { 0.0f, 0.5f, 0.5f, 1.0f };
		SDK::FLinearColor Lime = { 0.0f, 1.0f, 0.0f, 1.0f };
		SDK::FLinearColor SeaGreen = { 0.18f, 0.55f, 0.34f, 1.0f };
		SDK::FLinearColor DarkOliveGreen = { 0.33f, 0.42f, 0.18f, 1.0f };
		SDK::FLinearColor DarkSeaGreen = { 0.56f, 0.74f, 0.56f, 1.0f };
		SDK::FLinearColor LightSeaGreen = { 0.13f, 0.7f, 0.67f, 1.0f };
		SDK::FLinearColor MediumSeaGreen = { 0.24f, 0.7f, 0.44f, 1.0f };
		SDK::FLinearColor SpringGreen = { 0.0f, 1.0f, 0.5f, 1.0f };
		SDK::FLinearColor MediumSpringGreen = { 0.0f, 0.98f, 0.6f, 1.0f };
		SDK::FLinearColor PaleGreen = { 0.6f, 0.98f, 0.6f, 1.0f };
		SDK::FLinearColor DarkTurquoise = { 0.0f, 0.81f, 0.82f, 1.0f };
		SDK::FLinearColor PaleTurquoise = { 0.69f, 0.93f, 0.93f, 1.0f };
		SDK::FLinearColor MediumTurquoise = { 0.28f, 0.82f, 0.8f, 1.0f };
		SDK::FLinearColor MediumAquamarine = { 0.4f, 0.8f, 0.67f, 1.0f };
		SDK::FLinearColor LightGreenYellow = { 0.68f, 1.0f, 0.18f, 1.0f };
		SDK::FLinearColor SpringGreenLight = { 0.56f, 0.93f, 0.56f, 1.0f };

		// ============================================================================
		// YELLOW/GOLD FAMILY - Yellows, golds, and warm light colors
		// ============================================================================
		SDK::FLinearColor Gold = { 1.0f, 0.84f, 0.0f, 1.0f };
		SDK::FLinearColor LightYellow = { 1.0f, 1.0f, 0.88f, 1.0f };
		SDK::FLinearColor Khaki = { 0.94f, 0.9f, 0.55f, 1.0f };
		SDK::FLinearColor PaleGoldenrod = { 0.93f, 0.91f, 0.67f, 1.0f };
		SDK::FLinearColor LightGoldenrodYellow = { 0.98f, 0.98f, 0.82f, 1.0f };
		SDK::FLinearColor DarkKhaki = { 0.74f, 0.72f, 0.42f, 1.0f };
		SDK::FLinearColor DarkGoldenrod = { 0.72f, 0.53f, 0.04f, 1.0f };
		SDK::FLinearColor LemonChiffon = { 1.0f, 0.98f, 0.8f, 1.0f };
		SDK::FLinearColor LemonYellow = { 1.0f, 1.0f, 0.2f, 1.0f };
		SDK::FLinearColor LemonYellowLight = { 0.98f, 0.97f, 0.58f, 1.0f };
		SDK::FLinearColor SunYellow = { 1.0f, 1.0f, 0.44f, 1.0f };
		SDK::FLinearColor PapayaYellow = { 1.0f, 0.94f, 0.83f, 1.0f };

		// ============================================================================
		// RED/PINK FAMILY - Reds, pinks, and warm vibrant colors
		// ============================================================================
		SDK::FLinearColor DarkRed = { 0.55f, 0.0f, 0.0f, 1.0f };
		SDK::FLinearColor Maroon = { 0.5f, 0.0f, 0.0f, 1.0f };
		SDK::FLinearColor Coral = { 1.0f, 0.5f, 0.31f, 1.0f };
		SDK::FLinearColor DeepPink = { 1.0f, 0.08f, 0.58f, 1.0f };
		SDK::FLinearColor Crimson = { 0.86f, 0.08f, 0.24f, 1.0f };
		SDK::FLinearColor HotPink = { 1.0f, 0.41f, 0.71f, 1.0f };
		SDK::FLinearColor LightPink = { 1.0f, 0.71f, 0.76f, 1.0f };
		SDK::FLinearColor Salmon = { 0.98f, 0.5f, 0.45f, 1.0f };
		SDK::FLinearColor DarkSalmon = { 0.91f, 0.59f, 0.48f, 1.0f };
		SDK::FLinearColor LightCoral = { 0.94f, 0.5f, 0.5f, 1.0f };
		SDK::FLinearColor RosyBrown = { 0.74f, 0.56f, 0.56f, 1.0f };
		SDK::FLinearColor RosyBrownDark = { 0.74f, 0.56f, 0.56f, 1.0f };
		SDK::FLinearColor Tomato = { 1.0f, 0.39f, 0.28f, 1.0f };
		SDK::FLinearColor FireBrick = { 0.7f, 0.13f, 0.13f, 1.0f };
		SDK::FLinearColor LavenderBlush = { 1.0f, 0.94f, 0.96f, 1.0f };

		// ============================================================================
		// ORANGE/BROWN FAMILY - Oranges, browns, and earth tones
		// ============================================================================
		SDK::FLinearColor DarkOrange = { 1.0f, 0.55f, 0.0f, 1.0f };
		SDK::FLinearColor Chocolate = { 0.82f, 0.41f, 0.12f, 1.0f };
		SDK::FLinearColor Tan = { 0.82f, 0.71f, 0.55f, 1.0f };
		SDK::FLinearColor Sienna = { 0.63f, 0.32f, 0.18f, 1.0f };
		SDK::FLinearColor Peru = { 0.8f, 0.52f, 0.25f, 1.0f };
		SDK::FLinearColor SandyBrown = { 0.96f, 0.64f, 0.38f, 1.0f };
		SDK::FLinearColor SaddleBrown = { 0.55f, 0.27f, 0.07f, 1.0f };

		// ============================================================================
		// NEUTRAL/GRAY FAMILY - Grays, whites, and neutral tones
		// ============================================================================
		SDK::FLinearColor Silver = { 0.75f, 0.75f, 0.75f, 1.0f };
		SDK::FLinearColor LightGray = { 0.83f, 0.83f, 0.83f, 1.0f };
		SDK::FLinearColor DarkSlateGray = { 0.18f, 0.31f, 0.31f, 1.0f };
		SDK::FLinearColor LightSlateGray = { 0.47f, 0.53f, 0.6f, 1.0f };
		SDK::FLinearColor SlateGray = { 0.44f, 0.5f, 0.56f, 1.0f };
		SDK::FLinearColor Gainsboro = { 0.86f, 0.86f, 0.86f, 1.0f };
		SDK::FLinearColor GhostWhite = { 0.97f, 0.97f, 1.0f, 1.0f };

		// ============================================================================
		// SPECIALTY/NAMED COLORS - Unique or theme-specific colors
		// ============================================================================
		SDK::FLinearColor Olive = { 0.5f, 0.5f, 0.0f, 1.0f };
		SDK::FLinearColor Wheat = { 0.96f, 0.87f, 0.7f, 1.0f };
		SDK::FLinearColor WheatLight = { 0.96f, 0.87f, 0.7f, 1.0f };
		SDK::FLinearColor Peach = { 1.0f, 0.85f, 0.73f, 1.0f };
		SDK::FLinearColor Lavender = { 0.9f, 0.9f, 0.98f, 1.0f };
		SDK::FLinearColor Beige = { 0.96f, 0.96f, 0.86f, 1.0f };
		SDK::FLinearColor MintCream = { 0.96f, 1.0f, 0.98f, 1.0f };
		SDK::FLinearColor FloralWhite = { 1.0f, 0.98f, 0.94f, 1.0f };
		SDK::FLinearColor Honeydew = { 0.94f, 1.0f, 0.94f, 1.0f };
		SDK::FLinearColor Ivory = { 1.0f, 1.0f, 0.94f, 1.0f };
		SDK::FLinearColor Linen = { 0.98f, 0.94f, 0.9f, 1.0f };
		SDK::FLinearColor PapayaWhip = { 1.0f, 0.94f, 0.84f, 1.0f };
		SDK::FLinearColor PeachPuff = { 1.0f, 0.85f, 0.73f, 1.0f };
		SDK::FLinearColor BlanchedAlmond = { 1.0f, 0.92f, 0.8f, 1.0f };
		SDK::FLinearColor Cornsilk = { 1.0f, 0.97f, 0.86f, 1.0f };
		SDK::FLinearColor Almond = { 0.94f, 0.87f, 0.8f, 1.0f };
		SDK::FLinearColor Eggshell = { 0.99f, 0.94f, 0.93f, 1.0f };
		SDK::FLinearColor Seashell = { 1.0f, 0.96f, 0.93f, 1.0f };
		SDK::FLinearColor Snow = { 1.0f, 0.98f, 0.98f, 1.0f };
		SDK::FLinearColor NavajoWhite = { 1.0f, 0.87f, 0.68f, 1.0f };
		SDK::FLinearColor Moccasin = { 1.0f, 0.89f, 0.71f, 1.0f };
	}

	SDK::UCanvas* canvas;
	wchar_t* s2wc(const char* c)
	{
		const size_t cSize = (strlen)(c)+1;
		wchar_t* wc = new wchar_t[cSize];
		(mbstowcs)(wc, c, cSize);

		return wc;
	}

	void SetupCanvas(SDK::UCanvas* _canvas)
	{
		canvas = _canvas;
	}

	void Text(const char* name, SDK::FVector2D pos, SDK::FLinearColor color, bool outline, bool center, SDK::FVector2D Scale = SDK::FVector2D{ 0.97f, 0.97f })
	{
		int length = (strlen)(name)+1;
		canvas->K2_DrawText(SDK::UEngine::GetEngine()->LargeFont, SDK::FString{ s2wc(name) }, pos, Scale, color, false, Colors::Text_Shadow, SDK::FVector2D{ pos.X + 1, pos.Y + 1 }, center, true, true, Colors::Text_Outline);
	}

	void Draw_Line(SDK::FVector2D from, SDK::FVector2D to, int thickness, SDK::FLinearColor color)
	{
		canvas->K2_DrawLine(SDK::FVector2D{ from.X, from.Y }, SDK::FVector2D{ to.X, to.Y }, thickness, color);
	}
	void drawFilledRect(SDK::FVector2D initial_pos, float w, float h, SDK::FLinearColor color)
	{
		for (float i = 0.0f; i < h; i += 1.0f)
			canvas->K2_DrawLine(SDK::FVector2D{ initial_pos.X, initial_pos.Y + i }, SDK::FVector2D{ initial_pos.X + w, initial_pos.Y + i }, 1.0f, color);
	}
	void drawFilledRect_trans(SDK::FVector2D initial_pos, float w, float h, SDK::FLinearColor color)
	{
		for (float i = 0.0f; i < h; i += 1.0f)
			canvas->K2_DrawLine(SDK::FVector2D{ initial_pos.X, initial_pos.Y + i }, SDK::FVector2D{ initial_pos.X + w, initial_pos.Y + i }, 0.4f, color);
	}
	void DrawFilledCircle(SDK::FVector2D pos, float r, SDK::FLinearColor color)
	{
		float smooth = 0.07f;

		double PI = 3.14159265359;
		int size = (int)(2.0f * PI / smooth) + 1;

		float angle = 0.0f;
		int i = 0;

		for (; angle < 2 * PI; angle += smooth, i++)
		{
			Draw_Line(SDK::FVector2D{ pos.X, pos.Y }, SDK::FVector2D{ pos.X + cosf(angle) * r, pos.Y + sinf(angle) * r }, 1.0f, color);
		}
	}
	void DrawCircle(SDK::FVector2D pos, int radius, int numSides, SDK::FLinearColor Color)
	{
		float PI = 3.1415927f;

		float Step = PI * 2.0 / numSides;
		int Count = 0;
		SDK::FVector2D V[128];
		for (float a = 0; a < PI * 2.0; a += Step) {
			float X1 = radius * SDK::UKismetMathLibrary::GetDefaultObj()->Cos(a) + pos.X;
			float Y1 = radius * SDK::UKismetMathLibrary::GetDefaultObj()->Sin(a) + pos.Y;
			float X2 = radius * SDK::UKismetMathLibrary::GetDefaultObj()->Cos(a + Step) + pos.X;
			float Y2 = radius * SDK::UKismetMathLibrary::GetDefaultObj()->Sin(a + Step) + pos.Y;
			V[Count].X = X1;
			V[Count].Y = Y1;
			V[Count + 1].X = X2;
			V[Count + 1].Y = Y2;
			//Draw_Line(SDK::FVector2D{ pos.X, pos.Y }, SDK::FVector2D{ X2, Y2 }, 1.0f, Color); // Points from Centre to ends of circle
			Draw_Line(SDK::FVector2D{ V[Count].X, V[Count].Y }, SDK::FVector2D{ X2, Y2 }, 1.0f, Color);// Circle Around
		}
	}

	void DrawLineWorld(SDK::FVector POSA, SDK::FVector POSB, SDK::FLinearColor color, float LineWidth)
	{
		//w2s
		SDK::FVector POS1 = canvas->K2_Project(POSA);
		SDK::FVector POS2 = canvas->K2_Project(POSB);
		if (POS1.Z < 0 || POS2.Z < 0)
		{
			return;
		}
		//draw line
		canvas->K2_DrawLine(SDK::FVector2D(POS1.X, POS1.Y), SDK::FVector2D(POS2.X, POS2.Y), LineWidth, color);
	}

	void DrawRectWorld(SDK::FVector topLeft, SDK::FVector bottomRight, SDK::FLinearColor color, float lineWidth = 1.0f)
	{
		// Calculate the four corners of the rectangle
		SDK::FVector topRight = SDK::FVector(bottomRight.X, topLeft.Y, topLeft.Z);
		SDK::FVector bottomLeft = SDK::FVector(topLeft.X, bottomRight.Y, bottomRight.Z);

		// Draw the four sides of the rectangle
		DrawLineWorld(topLeft, topRight, color, lineWidth);        // Top edge
		DrawLineWorld(topRight, bottomRight, color, lineWidth);    // Right edge  
		DrawLineWorld(bottomRight, bottomLeft, color, lineWidth);  // Bottom edge
		DrawLineWorld(bottomLeft, topLeft, color, lineWidth);      // Left edge
	}

	// Simple DrawRect function like ImGui's AddRect
	void DrawRect(SDK::UCanvas* canvas, SDK::FVector2D topLeft, SDK::FVector2D bottomRight, SDK::FLinearColor color, float lineWidth = 1.0f)
	{
		SDK::FVector2D topRight = SDK::FVector2D(bottomRight.X, topLeft.Y);
		SDK::FVector2D bottomLeft = SDK::FVector2D(topLeft.X, bottomRight.Y);

		// Draw the four sides
		canvas->K2_DrawLine(topLeft, topRight, lineWidth, color);       // Top
		canvas->K2_DrawLine(topRight, bottomRight, lineWidth, color);   // Right
		canvas->K2_DrawLine(bottomRight, bottomLeft, lineWidth, color); // Bottom
		canvas->K2_DrawLine(bottomLeft, topLeft, lineWidth, color);     // Left
	}

	void TextWorld(SDK::FVector position, const char* text, SDK::FLinearColor Color = SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, float scale = 0.97f, bool center = true, bool outline = true)
	{
		// w2s
		auto POS2D = canvas->K2_Project(position);
		if (POS2D.Z > 0 && POS2D.X < canvas->SizeX && POS2D.Y < canvas->SizeY && POS2D.X > 0 && POS2D.Y > 0)
		{
			//Text
			SDK::FVector2D textPos = SDK::FVector2D{ POS2D.X, POS2D.Y };
			Text(text, textPos, Color, outline, center, SDK::FVector2D(scale, scale));
		}
	}

	SDK::FVector2D DrawBounds2D(SDK::AActor* Actor, SDK::FLinearColor color, bool draw = false, float LineWidth = 1.0, float scale = 1.0f, float percentage = 1.0f)
	{
		SDK::FVector Origin, Extent;
		Actor->GetActorBounds(true, &Origin, &Extent, false);
		Extent = Extent * scale;

		// Get the actor's rotation and convert to a quaternion
		SDK::FRotator Rotation = Actor->K2_GetActorRotation();
		SDK::FVector EulerVector = SDK::FVector(Rotation.Roll, Rotation.Pitch, Rotation.Yaw);
		SDK::FQuat RotationQuat = SDK::UKismetMathLibrary::GetDefaultObj()->Quat_MakeFromEuler(EulerVector);

		// Calculate the 8 corners of the bounding box
		std::vector<SDK::FVector> Corners = {
			SDK::FVector(-Extent.X, -Extent.Y, -Extent.Z),
			SDK::FVector(Extent.X, -Extent.Y, -Extent.Z),
			SDK::FVector(Extent.X, Extent.Y, -Extent.Z),
			SDK::FVector(-Extent.X, Extent.Y, -Extent.Z),
			SDK::FVector(-Extent.X, -Extent.Y, Extent.Z),
			SDK::FVector(Extent.X, -Extent.Y, Extent.Z),
			SDK::FVector(Extent.X, Extent.Y, Extent.Z),
			SDK::FVector(-Extent.X, Extent.Y, Extent.Z)
		};

		// Transform the corners based on the actor's rotation and position manually
		std::vector<SDK::FVector> TransformedCorners;
		for (const SDK::FVector& Corner : Corners)
		{
			SDK::FVector TransformedCorner = SDK::UKismetMathLibrary::GetDefaultObj()->Quat_RotateVector(RotationQuat, Corner) + Origin;
			TransformedCorners.push_back(TransformedCorner);
		}

		// Project the 3D world positions to 2D screen positions
		std::vector<SDK::FVector> ScreenPositions;
		int NumVisiblePoints = 0;
		for (const SDK::FVector& Corner : TransformedCorners)
		{
			SDK::FVector ScreenPosition = canvas->K2_Project(Corner);
			ScreenPositions.push_back(ScreenPosition);
			if (ScreenPosition.Z > 0) // Check if point is in front of the camera
			{
				NumVisiblePoints++;
			}
		}

		// Check if a significant portion of the box is visible
		if (NumVisiblePoints < 2) return SDK::FVector2D(0.0f); // Less than 25% of the points are visible

		// Determine the min and max screen positions for 2D bounding box
		SDK::FVector2D MinScreenPosition(ScreenPositions[0].X, ScreenPositions[0].Y);
		SDK::FVector2D MaxScreenPosition(ScreenPositions[0].X, ScreenPositions[0].Y);
		for (const SDK::FVector& ScreenPosition : ScreenPositions)
		{
			if (ScreenPosition.X < MinScreenPosition.X) MinScreenPosition.X = ScreenPosition.X;
			if (ScreenPosition.Y < MinScreenPosition.Y) MinScreenPosition.Y = ScreenPosition.Y;
			if (ScreenPosition.X > MaxScreenPosition.X) MaxScreenPosition.X = ScreenPosition.X;
			if (ScreenPosition.Y > MaxScreenPosition.Y) MaxScreenPosition.Y = ScreenPosition.Y;
		}
		if (draw)
		{
			// Draw the 2D bounding box lines with percentage
			auto DrawPartialLine = [&](const SDK::FVector2D& Start, const SDK::FVector2D& End)
				{
					SDK::FVector2D PartialEnd = Start + (End - Start) * percentage;
					canvas->K2_DrawLine(Start, PartialEnd, LineWidth, color);
				};

			if (percentage < 1.0f)
			{
				// Top Line
				DrawPartialLine(MinScreenPosition, SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y));
				DrawPartialLine(SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y), MinScreenPosition);

				// Bottom Line
				DrawPartialLine(SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y), MaxScreenPosition);
				DrawPartialLine(MaxScreenPosition, SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y));

				// Left Line
				DrawPartialLine(MinScreenPosition, SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y));
				DrawPartialLine(SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y), MinScreenPosition);

				// Right Line
				DrawPartialLine(SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y), MaxScreenPosition);
				DrawPartialLine(MaxScreenPosition, SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y));
			}
			else//More Efficient
			{
				// Top Line
				canvas->K2_DrawLine(MinScreenPosition, SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y), LineWidth, color);

				// Bottom Line
				canvas->K2_DrawLine(SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y), MaxScreenPosition, LineWidth, color);

				// Left Line
				canvas->K2_DrawLine(MinScreenPosition, SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y), LineWidth, color);

				// Right Line
				canvas->K2_DrawLine(SDK::FVector2D(MaxScreenPosition.X, MinScreenPosition.Y), MaxScreenPosition, LineWidth, color);
			}
		}
		return SDK::FVector2D(MinScreenPosition.X, MaxScreenPosition.Y);
	}
}