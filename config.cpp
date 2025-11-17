class CfgPatches
{
    class ASG_aceax
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Equipment_F_ASG"};
    };
};

class XtdGearModels {
    class ASG_colourBase {
        values[]={"BLK","OLI"};
    };
    class ASG_patchBase {
        label="Patch";
        values[]={"None","Medic","GL"};
    };
    class ASG_yesNoBase {
        values[]={"Yes","No"};
    };
    class CfgWeapons {
        #include "helmetModels.hpp"
        #include "uniformModels.hpp"
        #include "vestModels.hpp"
    };
    class CfgVehicles {
        #include "backpackModels.hpp"
    };
};

class XtdGearInfos {
    class CfgWeapons {
        #include "helmetInfos.hpp"
        #include "uniformInfos.hpp"
        #include "vestInfos.hpp"
    };
    class CfgVehicles {
        #include "backpackInfos.hpp"
    };
};