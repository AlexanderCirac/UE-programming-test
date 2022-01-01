// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prueba_TrooperBLack : ModuleRules
{
	public Prueba_TrooperBLack(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
