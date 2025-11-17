class ASG_Cap_BLK{
    model="ASG_cap";
    camo="BLK";
    headset="No";
};
class ASG_Cap_BLK_HS{
    model="ASG_cap";
    camo="BLK";
    headset="Yes";
};
class ASG_Cap_GRN{
    model="ASG_cap";
    camo="OLI";
    headset="No";
};
class ASG_Cap_GRN_HS{
    model="ASG_cap";
    camo="OLI";
    headset="Yes";
};

class ASG_Watchcap_BLK {
    model="ASG_beanie";
    camo="BLK";
    headset="No";
};
class ASG_WatchcapHS_BLK {
    model="ASG_beanie";
    camo="BLK";
    headset="Yes";
};
class ASG_Watchcap_GRN {
    model="ASG_beanie";
    camo="OLI";
    headset="No";
};
class ASG_WatchcapHS_GRN {
    model="ASG_beanie";
    camo="OLI";
    headset="Yes";
};

class ASG_Helmet_aceax {
    model="ASG_helmet";
};
class ASG_Helmet_Headset_BLK: ASG_Helmet_aceax {
    camo="BLK";
    patch="None";
};
class ASG_Helmet_Headset_GL_BLK: ASG_Helmet_aceax {
    camo="BLK";
    patch="GL";
};
class ASG_Helmet_Headset_M_BLK: ASG_Helmet_aceax {
    camo="BLK";
    patch="Medic";
};

class ASG_Helmet_Headset_GRN: ASG_Helmet_aceax {
    camo="OLI";
    patch="None";
};
class ASG_Helmet_Headset_GL_GRN: ASG_Helmet_aceax {
    camo="OLI";
    patch="GL";
};
class ASG_Helmet_Headset_M_GRN: ASG_Helmet_aceax {
    camo="OLI";
    patch="Medic";
};