// NOTE TO  FUTURE ME - 
//G36 Rifle-length cycle - 0.093
//Carbine = 0.88
//Compact - 0.82
//IMPORT to FBX- import 0.01 , scale 0.55 all axis

#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_G36 {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "asdg_jointrails", "hlcweapons_core" };
        units[] = {};
        weapons[] = { "HLC_Optic_G36dualoptic35x","HLC_Optic_G36dualoptic35x2d","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x2d","HLC_Optic_G36Dualoptic15x","HLC_Optic_G36Dualoptic15x2d","HLC_Optic_G36Export15x","HLC_Optic_G36Export15x2d",
            "hlc_rifle_G36A1", "hlc_rifle_G36A1AG36", "hlc_rifle_G36KA1", "hlc_rifle_G36C", "hlc_rifle_G36E1", "hlc_rifle_G36E1AG36", "hlc_rifle_G36KE1", "hlc_rifle_G36V", "hlc_rifle_G36KV", "hlc_rifle_G36CV", "hlc_rifle_G36VAG36", "hlc_rifle_G36TAC",
            "hlc_rifle_G36KTAC", "hlc_rifle_G36CTAC", "hlc_rifle_G36MLIC", "hlc_rifle_G36KMLIC", "hlc_rifle_G36CMLIC","hlc_rifle_G36MLIAG36"
        };
        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SPR_G36","hlc_100rnd_556x45_EPR_G36"};
        version="v1.15";
        author="toadie";
    };
};

class cfgMods {
    class Niarms_G36 {
        name = "NIArsenal: G36 Rifles";
        picture = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class niarms_G36_OpticSlot: asdg_OpticRail {
    class compatibleItems {
        HLC_Optic_G36dualoptic35x = 1;
        HLC_Optic_G36dualoptic35x2d = 1;
        HLC_Optic_G36Export35x2d = 1;
        HLC_Optic_G36Export35x = 1;
        HLC_Optic_G36Dualoptic15x = 1;
        HLC_Optic_G36Dualoptic15x2d = 1;
        HLC_Optic_G36Export15x = 1;
        HLC_Optic_G36Export15x2d = 1;
    };
};

class CfgVehicles { 
    dlc = "Niarms_G36";
    class NATO_Box_Base;
    class HLC_G36_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC G36 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_30rnd_556x45_EPR_G36,60);
            __M_MAG(hlc_30rnd_556x45_SOST_G36,60);
            __M_MAG(hlc_30rnd_556x45_SPR_G36,60);
            __M_MAG(hlc_100rnd_556x45_EPR_G36,60);
            __M_MAG(30Rnd_65x39_caseless_mag,60);
            __M_MAG(30Rnd_65x39_caseless_mag_Tracer,60);
            __M_MAG(100Rnd_65x39_caseless_mag_Tracer,60);
            __M_MAG(100Rnd_65x39_caseless_mag,60);
            __M_MAG(1Rnd_HE_Grenade_shell,60);
            __M_MAG(UGL_FlareWhite_F,60);
            __M_MAG(UGL_FlareGreen_F,60);
            __M_MAG(UGL_FlareRed_F,60);
            __M_MAG(UGL_FlareYellow_F,60);
            __M_MAG(UGL_FlareCIR_F,60);
            __M_MAG(1Rnd_Smoke_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeRed_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeGreen_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeYellow_Grenade_shell,60);
            __M_MAG(1Rnd_SmokePurple_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeBlue_Grenade_shell,60);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_G36A1,10);
            __M_WEP(hlc_rifle_G36E1,10);
            __M_WEP(hlc_rifle_G36V,10);
            __M_WEP(hlc_rifle_G36TAC,10);
            __M_WEP(hlc_rifle_G36MLIC,10);
            __M_WEP(hlc_rifle_G36KA1,10);
            __M_WEP(hlc_rifle_G36KE1,10);
            __M_WEP(hlc_rifle_G36KV,10);
            __M_WEP(hlc_rifle_G36KTAC,10);
            __M_WEP(hlc_rifle_G36KMLIC,10);
            __M_WEP(hlc_rifle_G36C,10);
            __M_WEP(hlc_rifle_G36CV,10);
            __M_WEP(hlc_rifle_G36CTAC,10);
            __M_WEP(hlc_rifle_G36CMLIC,10);
            __M_WEP(hlc_rifle_G36A1AG36,10);
            __M_WEP(hlc_rifle_G36E1AG36,10);
            __M_WEP(hlc_rifle_G36vAG36,10);
            __M_WEP(hlc_rifle_G36MLIAG36,10);
        };
        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_Arco,10);
            __M_ITM(optic_LRPS,10);
            __M_ITM(optic_NVS,10);
            __M_ITM(HLC_Optic_G36dualoptic35x,10);
            __M_ITM(HLC_Optic_G36dualoptic35x2d,10);
            __M_ITM(HLC_Optic_G36Export35x,10);
            __M_ITM(HLC_Optic_G36Export35x2d,10);
            __M_ITM(HLC_Optic_G36Dualoptic15x,10);
            __M_ITM(HLC_Optic_G36Dualoptic15x2d,10);
            __M_ITM(HLC_Optic_G36Export15x,10);
            __M_ITM(HLC_Optic_G36Export15x2d,10);
            __M_ITM(acc_flashlight,10);
            __M_ITM(acc_pointer_IR,10);
        };
    };
    class Weapon_Base_F;
    class weapon_hlc_rifle_G36A1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36A1";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36A1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weaponhlc_rifle_G36KA1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36K";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KA1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36E1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36E";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36E1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36C : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36C";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36C";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KE1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36KE";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KE1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36V : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36V";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KV : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KV";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CV : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36CV";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CV";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36TAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36TAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KTAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36KV(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KTAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CTAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36CV(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CTAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36A1AG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36A1+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36A1AG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36E1AG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36E1+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36E1AG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36VAG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36VAG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36MLIAG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36MLI(C)+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36MLIAG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KMLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36K-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KMLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CMLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36C-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CMLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36MLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36MLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
};


class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadG36A1 = "HLC_GestureReloadG36A1"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadG36MLI =  "HLC_GestureReloadG36MLI";
        HLC_GestureReloadG36V = "HLC_GestureReloadG36V";
        HLC_GestureReloadAG36 = "HLC_GestureReloadAG36";//
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Prone", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Prone", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Prone", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Prone", "Gesture" };
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
                HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
                HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
                HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {

        class HLC_GestureReloadG36A1 : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_standing.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36A1_Prone : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_prone.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36A1_Context : HLC_GestureReloadG36A1 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36V :Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_standing.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36V_Prone : Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_prone.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36V_Context : HLC_GestureReloadG36V {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAG36 : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_standing.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadAG36_Prone : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_prone.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAG36_Context : HLC_GestureReloadAG36 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36MLI : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_standing.rtm";
            speed = 0.2727272724793388;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36MLI_Prone : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_prone.rtm";
            looped = 0;
            speed = 0.2727272724793388;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36MLI_Context : HLC_GestureReloadG36MLI {
            mask = "handsWeapon_context";
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (EPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm EPR";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_EPR_ca.paa";
    };
    class hlc_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (SOST) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 910;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm SOST";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_SOST_ca.paa";
    };
    class hlc_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Rifles";
        displayname = "G36 Mag (SPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 818.2;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm SPR";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_SPR_ca.paa";
    };
    class hlc_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 100;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 100<br />Used in: G36 Series Rifles";
        displayname = "G36 C-Mag (EPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 46;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "5.56mm";
        model = "\hlc_wp_g36\mesh\magazine\magazine_cmag.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_CMAG_ca.paa";
    };
    class hlc_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "B_556x45_Ball_Tracer_Red";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (Tracer) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_TDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (IR-DIM) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_MDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (EPR,IR-DIM) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
};

class CfgWeapons {
    class UGL_F;
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

//optics

    class InventoryOpticsItem_Base_F;
    class optic_Arco;

    class HLC_Optic_G36dualoptic35x : optic_Arco {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 3.5x";
        displayname = "G36 Dual-Optic 3.5x";
        model = "\hlc_wp_G36\mesh\optics\dualoptic3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.07114;
                    opticsZoomMax = 0.07114;
                    opticsZoomInit = 0.07114;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
		tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
    };
    class HLC_Optic_G36dualoptic35x2d : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Dual-Optic 3.5x(2D)";
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };
    class HLC_Optic_G36Export35x : HLC_Optic_G36dualoptic35x {
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 3.5x";
        displayname = "G36 Export Optic 3.5x";
        model = "\hlc_wp_G36\mesh\optics\Export3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
    };
    class HLC_Optic_G36Export35x2d : HLC_Optic_G36Export35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Export Optic 3.5x(2D)";
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };

    class HLC_Optic_G36Dualoptic15x : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Dual-Optic 1.5x";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
        model = "\hlc_wp_G36\mesh\optics\dualoptic1-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle1-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.166;
                    opticsZoomMax = 0.166;
                    opticsZoomInit = 0.166;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36Dualoptic15x2d : HLC_Optic_G36Dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
        displayname = "G36 Dual-Optic 1.5x(2D)";
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };
    class HLC_Optic_G36Export15x : HLC_Optic_G36dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
        displayname = "G36 Export Optic 1.5x";
        model = "\hlc_wp_G36\mesh\optics\Export1-5xy.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";

    };
    class HLC_Optic_G36Export15x2d : HLC_Optic_G36Export15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
        displayname = "G36 Export Optic 1.5x(2D)";
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };

    class hlc_G36_base : Rifle_Base_F {
        scope = protected;
        recoil = "recoil_trg20";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = { __556G36_MAGS, __556NATO_BI_DRUMS };
        class Library {
            libTextDesc = "H&K Gewehr36";
        };
        reloadAction = "GestureReloadEBR";
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        cameraDir = "";
        bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15};
        bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15};
        bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15};
        bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15};
        bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15};
        bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15};
        bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15};
        bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15};
        bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15};
        bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15};
        bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15};
        bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15};
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        class hlc_GL_AG36 : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100,150, 200,250,300,350};
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"}; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "AG36";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadtime = 0.1;
            reloadAction = "HLC_GestureReloadAG36";
            reloadMagazineSound[] = { "hlc_wp_g36\snd\ag36_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_wp_g36\snd\ag36_drystrike", 0.66, 1, 10 };
            modes[] = { "Single" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    closure1[] = { "hlc_wp_g36\snd\ag36_striker", 1.0, 1, 10 };
                    soundClosure[] = { "closure1", 1 };
                    begin1[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    begin2[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
                };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\AG36_indoor", 1, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                minRange = 30;
                minRangeProbab = 0.1;
                midRange = 200;
                midRangeProbab = 0.7;
                maxRange = 400;
                maxRangeProbab = 0.05;
            };
        };

        soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };

        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1,10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };

        class Burst : Mode_Burst {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
    };

    class hlc_rifle_G36A1 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = "HK G36A1";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };
        };

        model = "hlc_wp_g36\mesh\G36A1\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36A1_ca.paa";
        discretedistance[] = {200};
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 73;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        inertia = 0.36;
    };

    class hlc_rifle_G36A1AG36 : hlc_rifle_G36A1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36A1(GL)";
        muzzles[] = { "this", "hlc_GL_AG36"};
        model = "hlc_wp_g36\mesh\G36A1\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36A1_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 103;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        inertia = 0.66;
    };

    class hlc_rifle_MG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        recoil = "recoil_trg20";
        displayName = "HK MG36A1";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };

        };
        model = "hlc_wp_g36\mesh\G36 LSW\MG36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_MG36_ca.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        inertia = 0.38;

        class fullauto_medium : fullauto_medium {
            burst = 4;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
        };
    };

    class hlc_rifle_G36KA1 : hlc_rifle_G36A1 {
        dlc = "Niarms_G36";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        author = "Toadie";
        displayName = "HK G36KA1";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        model = "hlc_wp_g36\mesh\G36A1\G36K.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36k_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67;
        };
        inertia = 0.34;

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
    };

    class hlc_rifle_G36C : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = "HK G36C";
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500 };
        discretedistanceinitindex = 1;
        model = "hlc_wp_g36\mesh\G36E1\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36C_ca.paa";
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 56;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
        };
        inertia = 0.28;

        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };

        class Burst : Mode_Burst {
            burst = 2;
            textureType = "dual";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };

        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 200;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
        };
    };

    class hlc_rifle_G36E1 : hlc_rifle_g36A1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\G36.p3d";
        displayName = "HK G36E";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36E_ca.paa";
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };
    };

    class hlc_rifle_G36E1AG36 : hlc_rifle_G36A1AG36 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\AG36.p3d";
        displayName = "HK G36E(GL)";
        picture = "\hlc_wp_g36\tex\ui\gear_AG36E_ca.paa";
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };
    };

    class hlc_rifle_G36KE1 : hlc_rifle_g36KA1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\G36K.p3d";
        displayName = "HK G36KE";
        picture = "\hlc_wp_g36\tex\ui\gear_g36ke_ca.paa";
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
    };

    class hlc_rifle_G36V : hlc_rifle_G36E1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36V";
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36V_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot :asdg_UnderSlot {};
        };
        inertia = 0.33;
    };

    class hlc_rifle_G36KV : hlc_rifle_G36KE1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36KV";
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36K.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36KV_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot :asdg_UnderSlot {};
        };
        inertia = 0.3;
    };

    class hlc_rifle_G36CV : hlc_rifle_G36C {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36CV";
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36CV_ca.paa";
    };

    class hlc_rifle_G36VAG36 : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36V(GL)";
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36V\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36V_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97;
            class UnderBarrelSlot {};
        };
        inertia = 0.63;
    };

    class hlc_rifle_G36TAC : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36.p3d";
        displayName = "HK G36V(KAC)";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36tac_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };
    };

    class hlc_rifle_g36KTac : hlc_rifle_G36KV {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36K.p3d";
        displayName = "HK G36KV(KAC)";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36ktac_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };
    };

    class hlc_rifle_G36CTac : hlc_rifle_G36CV {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36C.p3d";
        displayName = "HK G36CV(KAC)";
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36Ctac_ca.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };
    };

    ///CASELESS 

    class hlc_rifle_G36MLIC : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 203;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_mx";
        displayName = "HK G36-MLI(C)";
        descriptionShort = "Infantry Carbine<br/>Caliber: 6.5x38mm NATO Caseless";
        reloadAction = "HLC_GestureReloadG36MLI";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\g36mlic_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500,600,700,800 };
        discretedistanceinitindex = 1;
        magazines[] = {
            "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag"
        };
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        model = "hlc_wp_g36\mesh\G36MLIC\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36mli_ca.paa";
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.55;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };

        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 1200;
            maxRangeProbab = 0.2;
        };
    };

    class hlc_rifle_G36KMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 318;
        displayName = "HK G36K-MLI(C)";
        model = "hlc_wp_g36\mesh\G36MLIC\G36K.p3d";
        inertia = 0.5;
        picture = "\hlc_wp_g36\tex\ui\gear_g36Kmli_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
        };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 1000;
            maxRangeProbab = 0.2;
        };
    };

    class hlc_rifle_G36CMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 278;
        displayName = "HK G36C-MLI(C)";
        descriptionShort = "Compact Carbine<br/>Caliber: 6.5x38mm NATO Caseless";
        model = "hlc_wp_g36\mesh\G36MLIC\G36C.p3d";
        inertia = 0.5;
        picture = "\hlc_wp_g36\tex\ui\gear_g36Cmli_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68;
            class CowsSlot : asdg_OpticRail1913_short {};
        };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 200;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
        };
    };

    class hlc_rifle_G36MLIAG36 : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        displayName = "HK G36MLI(C)(GL)";
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36MLIC\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36MLI_ca.paa";

        inertia = 0.57;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 120;
            class UnderBarrelSlot {};
        };
    };
};
