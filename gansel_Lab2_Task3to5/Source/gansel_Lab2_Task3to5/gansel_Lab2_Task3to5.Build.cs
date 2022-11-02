// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class gansel_Lab2_Task3to5 : ModuleRules
{
	public gansel_Lab2_Task3to5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
