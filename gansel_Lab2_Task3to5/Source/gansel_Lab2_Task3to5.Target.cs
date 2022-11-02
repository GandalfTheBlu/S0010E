// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class gansel_Lab2_Task3to5Target : TargetRules
{
	public gansel_Lab2_Task3to5Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("gansel_Lab2_Task3to5");
	}
}
