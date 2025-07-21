// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_GAM415_Sakamaki : ModuleRules
{
	public FPS_GAM415_Sakamaki(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "Niagara" });
	}
}
