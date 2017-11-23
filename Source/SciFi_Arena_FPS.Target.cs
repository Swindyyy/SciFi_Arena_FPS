// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SciFi_Arena_FPSTarget : TargetRules
{
	public SciFi_Arena_FPSTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SciFi_Arena_FPS" } );
	}
}
