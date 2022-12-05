using UnrealBuildTool;

public class Project_KiloTarget : TargetRules {
	public Project_KiloTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Project_Kilo",
		});
	}
}
