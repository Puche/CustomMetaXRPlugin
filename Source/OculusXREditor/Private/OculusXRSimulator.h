// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DEFINE_LOG_CATEGORY_STATIC(LogMetaXRSim, Log, All);

/**  */
class FMetaXRSimulator
{
public:
	static bool IsSimulatorActivated();
	static void ToggleOpenXRRuntime();

private:
	static FString GetMetaXRSimPackagePath();
	static FString GetSimulatorJsonPath();
	static FString GetSimulatorConfigPath();
};
