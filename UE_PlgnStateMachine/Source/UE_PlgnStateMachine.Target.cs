// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE_PlgnStateMachineTarget : TargetRules
{
	public UE_PlgnStateMachineTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "UE_PlgnStateMachine" } );
	}
}
