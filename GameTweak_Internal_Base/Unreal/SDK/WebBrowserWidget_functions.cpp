#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WebBrowserWidget

#include "Basic.hpp"

#include "WebBrowserWidget_classes.hpp"
#include "WebBrowserWidget_parameters.hpp"


namespace SDK
{

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ScriptText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::ExecuteJavascript(const class FString& ScriptText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "ExecuteJavascript");

	Params::WebBrowser_ExecuteJavascript Parms{};

	Parms.ScriptText = std::move(ScriptText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Contents                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DummyURL                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "LoadString");

	Params::WebBrowser_LoadString Parms{};

	Parms.Contents = std::move(Contents);
	Parms.DummyURL = std::move(DummyURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           NewURL                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::LoadURL(const class FString& NewURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "LoadURL");

	Params::WebBrowser_LoadURL Parms{};

	Parms.NewURL = std::move(NewURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           URL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Frame                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "OnBeforePopup__DelegateSignature");

	Params::WebBrowser_OnBeforePopup__DelegateSignature Parms{};

	Parms.URL = std::move(URL);
	Parms.Frame = std::move(Frame);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnConsoleMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           Message                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Source                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Line                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBrowser::OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "OnConsoleMessage__DelegateSignature");

	Params::WebBrowser_OnConsoleMessage__DelegateSignature Parms{};

	Parms.Message = std::move(Message);
	Parms.Source = std::move(Source);
	Parms.Line = Line;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                             Text                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "OnUrlChanged__DelegateSignature");

	Params::WebBrowser_OnUrlChanged__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWebBrowser::GetTitleText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "GetTitleText");

	Params::WebBrowser_GetTitleText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWebBrowser::GetUrl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WebBrowser", "GetUrl");

	Params::WebBrowser_GetUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

