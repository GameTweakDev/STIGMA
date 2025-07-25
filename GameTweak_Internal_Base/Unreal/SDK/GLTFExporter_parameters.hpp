#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: GLTFExporter

#include "Basic.hpp"

#include "GLTFExporter_structs.hpp"


namespace SDK::Params
{

// Function GLTFExporter.GLTFExporter.ExportToGLTF
// 0x00A8 (0x00A8 - 0x0000)
struct GLTFExporter_ExportToGLTF final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FilePath;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UGLTFExportOptions*               Options;                                           // 0x0018(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class AActor*>                           SelectedActors;                                    // 0x0020(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGLTFExportMessages                    OutMessages;                                       // 0x0070(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00A0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10D4[0x7];                                     // 0x00A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(GLTFExporter_ExportToGLTF) == 0x000008, "Wrong alignment on GLTFExporter_ExportToGLTF");
static_assert(sizeof(GLTFExporter_ExportToGLTF) == 0x0000A8, "Wrong size on GLTFExporter_ExportToGLTF");
static_assert(offsetof(GLTFExporter_ExportToGLTF, Object) == 0x000000, "Member 'GLTFExporter_ExportToGLTF::Object' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, FilePath) == 0x000008, "Member 'GLTFExporter_ExportToGLTF::FilePath' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, Options) == 0x000018, "Member 'GLTFExporter_ExportToGLTF::Options' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, SelectedActors) == 0x000020, "Member 'GLTFExporter_ExportToGLTF::SelectedActors' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, OutMessages) == 0x000070, "Member 'GLTFExporter_ExportToGLTF::OutMessages' has a wrong offset!");
static_assert(offsetof(GLTFExporter_ExportToGLTF, ReturnValue) == 0x0000A0, "Member 'GLTFExporter_ExportToGLTF::ReturnValue' has a wrong offset!");

}

