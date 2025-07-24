#pragma once
#include "IL2CPP/Functions.hpp"
#include <unordered_map>
#include <unordered_set>
#include <string>
#include "Utility.h"

class LabelHelper
{
    private:
    std::unordered_map<uintptr_t, uintptr_t> labels; // entityId -> labelGameObject
    std::unordered_set<uintptr_t> currentFrameEntities; // Track entities seen this frame

    public:
    LabelHelper()
    {
    }

    // Call at the beginning of each frame
    void BeginFrame()
    {
        currentFrameEntities.clear();
    }

    // Call at the end of each frame to clean up unused labels
    void EndFrame()
    {
        // Find entities that weren't seen this frame
        std::vector<uintptr_t> entitiesToRemove;

        for (const auto& labelPair : labels)
        {
            uintptr_t entityId = labelPair.first;
            if (currentFrameEntities.find(entityId) == currentFrameEntities.end())
            {
                // Entity wasn't seen this frame, mark for removal
                entitiesToRemove.push_back(entityId);
            }
        }

        // Remove labels for entities that weren't seen
        for (uintptr_t entityId : entitiesToRemove)
        {
            RemoveLabel(entityId);
            Utility::AppendToLogFile("[LabelHelper] Cleaned up unused label for entity %d", entityId);
        }

        if (!entitiesToRemove.empty())
        {
            Utility::AppendToLogFile("[LabelHelper] Cleaned up %d unused labels", static_cast<int>(entitiesToRemove.size()));
        }
    }

    // Create or update a label for a specific entity
    void SetLabel(uintptr_t entityId, const Functions::Vector3& worldPos, Functions::Vector3 Offset, float size, const std::string& text, const Functions::ColorRGBA color)
    {
        // Mark this entity as seen this frame
        currentFrameEntities.insert(entityId);

        // Check if label already exists
        if (labels.find(entityId) != labels.end())
        {
            UpdateExistingLabel(entityId, worldPos, Offset, size, text, color);
        }
        else
        {
            CreateNewLabel(entityId, worldPos, Offset, size, text, color);
        }
    }

    // Remove a specific label
    void RemoveLabel(uintptr_t entityId)
    {
        auto it = labels.find(entityId);
        if (it != labels.end())
        {
            if (it->second)
            {
                Functions::Object::Destroy(it->second);
            }
            labels.erase(it);
        }

        // Also remove from current frame tracking if present
        currentFrameEntities.erase(entityId);
    }

    // Update all labels to face the camera
    void UpdateCameraFacing()
    {
        uintptr_t camera = Functions::Camera::GetMain();
        if (!camera) return;

        uintptr_t cameraTransform = Functions::Camera::GetTransform(camera);
        if (!cameraTransform) return;

        Functions::Vector3 cameraPos = Functions::Transform::GetPosition(cameraTransform);

        for (const auto& labelPair : labels)
        {
            if (labelPair.second)
            {
                MakeLabelFaceCamera(labelPair.second, cameraPos);
            }
        }
    }

    // Get label count
    int GetLabelCount() const
    {
        return static_cast<int>(labels.size());
    }

    // Get current frame entity count (for debugging)
    int GetCurrentFrameEntityCount() const
    {
        return static_cast<int>(currentFrameEntities.size());
    }

    // Remove all labels
    void ClearAllLabels()
    {
        for (const auto& labelPair : labels)
        {
            if (labelPair.second)
            {
                Functions::Object::Destroy(labelPair.second);
            }
        }
        labels.clear();
        currentFrameEntities.clear();
        Utility::AppendToLogFile("[LabelHelper] Cleared all labels");
    }

    // Check if entity has a label
    bool HasLabel(uintptr_t entityId) const
    {
        return labels.find(entityId) != labels.end();
    }

    private:
    void CreateNewLabel(uintptr_t entityId, const Functions::Vector3& worldPos, Functions::Vector3 Offset, float size, const std::string& text, const Functions::ColorRGBA color)
    {
        uintptr_t labelObj = Functions::GameObject::Create("EntityLabel");
        if (!labelObj) return;

        uintptr_t transform = Functions::GameObject::GetTransform(labelObj);
        if (transform)
        {
            Functions::Transform::SetPosition(transform, worldPos + Offset);
            Functions::Transform::SetLocalScale(transform, Functions::Vector3(size, size, size));
        }

        uintptr_t textMesh = Functions::GameObject::AddTextMesh(labelObj);
        if (textMesh)
        {
            Functions::TextMesh::SetText(textMesh, text.c_str());
            // Skip fontSize entirely - use default 13 and rely on scaling
            Functions::TextMesh::SetAnchor(textMesh, Functions::TextAnchor::LowerCenter);
            SetLabelColor(labelObj, color);
        }

        labels[entityId] = labelObj;
    }

    void UpdateExistingLabel(uintptr_t entityId, const Functions::Vector3& worldPos, Functions::Vector3 Offset, float size, const std::string& text, const Functions::ColorRGBA color)
    {
        uintptr_t labelObj = labels[entityId];
        if (!labelObj) return;

        // Update position
        uintptr_t transform = Functions::GameObject::GetTransform(labelObj);
        if (transform)
        {
            Functions::Vector3 labelPos = worldPos + Offset;
            Functions::Transform::SetPosition(transform, labelPos);
        }

        //// Update text
        //uintptr_t textMesh = Functions::GameObject::GetComponent(labelObj, Functions::Cache::GetTextMeshType());
        //if (textMesh)
        //{
        //    Functions::TextMesh::SetText(textMesh, text.c_str());
        //    Functions::TextMesh::SetFontSize(textMesh, size);
        //}

        // Update color if needed (Laggy as fuck)
        //SetLabelColor(labelObj, color);
    }

    void MakeLabelFaceCamera(uintptr_t labelObj, const Functions::Vector3& cameraPos)
    {
        uintptr_t transform = Functions::GameObject::GetTransform(labelObj);
        if (!transform) return;

        // Get label position
        Functions::Vector3 labelPos = Functions::Transform::GetPosition(transform);

        // Calculate direction from label to camera
        Functions::Vector3 direction = cameraPos - labelPos;

        // Calculate Y rotation (around up axis) to face camera
        float yRotation = atan2(direction.x, direction.z) * 180.0f / 3.14159f;

        // Add 180 degrees so text reads correctly (faces away from camera)
        yRotation += 180.0f;

        // Create rotation quaternion (only rotating around Y axis)
        Functions::Quaternion rotation(0, sin(yRotation * 3.14159f / 360.0f), 0, cos(yRotation * 3.14159f / 360.0f));

        // Set the rotation directly
        Functions::Transform::SetRotation(transform, rotation);
    }

    void SetLabelColor(uintptr_t labelObj, const Functions::ColorRGBA color)
    {
        // Get MeshRenderer component
        uintptr_t renderer = Functions::GameObject::GetComponent(labelObj, Functions::Cache::GetRendererType());
        if (renderer)
        {
            // Get material
            uintptr_t material = Functions::Renderer::GetMaterial(renderer);
            if (material)
            {
                // Set color property
                Functions::Material::SetColor(material, Functions::PropertyNames::Color(), color);
            }
        }
    }
};

// Global instance for easy access
static LabelHelper g_LabelHelper;

// Helper functions for easy use
namespace EasyLabels
{
    inline void BeginFrame()
    {
        g_LabelHelper.BeginFrame();
    }

    inline void EndFrame()
    {
        g_LabelHelper.EndFrame();
    }

    inline void SetEntityLabel(uintptr_t entityId, const Functions::Vector3& pos, Functions::Vector3 Offset, float size, const std::string& text, const Functions::ColorRGBA color)
    {
        g_LabelHelper.SetLabel(entityId, pos, Offset, size, text, color);
    }

    inline void RemoveEntityLabel(uintptr_t entityId)
    {
        g_LabelHelper.RemoveLabel(entityId);
    }

    inline void UpdateAllLabelsFacing()
    {
        g_LabelHelper.UpdateCameraFacing();
    }

    inline void ClearAllLabels()
    {
        g_LabelHelper.ClearAllLabels();
    }

    inline int GetLabelCount()
    {
        return g_LabelHelper.GetLabelCount();
    }

    inline int GetCurrentFrameEntityCount()
    {
        return g_LabelHelper.GetCurrentFrameEntityCount();
    }
}