#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: OodleNetworkHandlerComponent

#include "Basic.hpp"


namespace SDK
{

// Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
// NumValues: 0x0003
enum class EOodleNetworkEnableMode : uint8
{
	AlwaysEnabled                            = 0,
	WhenCompressedPacketReceived             = 1,
	EOodleNetworkEnableMode_MAX              = 2,
};

// Enum OodleNetworkHandlerComponent.EOodleNetResult
// NumValues: 0x0007
enum class EOodleNetResult : uint8
{
	Unknown                                  = 0,
	Success                                  = 1,
	OodleDecodeFailed                        = 2,
	OodleSerializePayloadFail                = 3,
	OodleBadDecompressedLength               = 4,
	OodleNoDictionary                        = 5,
	EOodleNetResult_MAX                      = 6,
};

}

