// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class gansel_Lab2_Task3to5EditorTarget : TargetRules
{
	public gansel_Lab2_Task3to5EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("gansel_Lab2_Task3to5");
	}
}
