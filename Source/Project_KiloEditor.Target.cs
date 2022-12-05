using UnrealBuildTool;

public class Project_KiloEditorTarget : TargetRules {
	public Project_KiloEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Project_Kilo",
		});
	}
}
