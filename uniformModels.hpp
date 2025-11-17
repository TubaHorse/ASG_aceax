class ASG_uniform {
    label="Patrol Uniform";
    options[]={"style","shirt","pants","sleeves"};
    class style {
        label="Uniform Style";
        description="The patrol uniform comes in both normal and cold weather variants";
        values[]={"Standard","Alpine"};
        alwaysSelectable=1;
        changeInGame=0;
    };
    class shirt: ASG_colourBase{
		label="Shirt Colour";
		values[]+={"WHT"};
		alwaysSelectable=0;
		changeInGame=0;
	};
	class pants: shirt{label="Pants Colour"};
    class sleeves {
        label="Sleeves";
        values[]={"Normal","Rolled"};
        alwaysSelectable=0;
        changeInGame=1;
    };
};