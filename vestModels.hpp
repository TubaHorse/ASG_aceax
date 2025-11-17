class ASG_vest {
	label="Modular Carrier Combat Rig [ASG]";
	options[]={"camo","loadout","patch"};
	class camo: ASG_colourBase{};
	class loadout {
		label="Loadout";
		values[]={"Combat","Compact","CQB","Recon"};
		alwaysSelectable=1;
		changeInGame=0;
	};
	class patch: ASG_patchBase{alwaysSelectable=0;};
};