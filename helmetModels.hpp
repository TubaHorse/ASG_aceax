class ASG_cap {
	lablel="Cap [ASG]";
	options[]={"camo","headset"};
	class camo: ASG_colourBase{};
	class headset: ASG_yesNoBase{label="Headset"};
};

class ASG_beanie: ASG_cap {
	lablel="Beanie [ASG]";
};

class ASG_helmet {
	label="Advanced Modular Helmet [ASG]";
	options[]={"camo","patch"};
	class camo: ASG_colourBase{};
	class patch: ASG_patchBase{};
};