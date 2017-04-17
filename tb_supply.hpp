class TacBF
{
	class Supply
	{
		// Generates cargo IDs (More effecient broadcasting for these items + their ammo)
		staticWeapons[] = {"RHS_M2StaticMG_MiniTripod_USMC_WD", "RHS_M2StaticMG_USMC_WD", "rhs_KORD_high_MSV", "rhs_KORD_MSV", "rhsgref_cdf_DSHKM", "rhsgref_cdf_DSHKM_Mini_TriPod", "RHS_M252_D", "rhs_2b14_82mm_msv", "RHS_TOW_TriPod_D", "rhs_Metis_9k115_2_msv", "rhs_D30_msv", "RHS_ZU23_MSV", "RHS_M119_D"};
		class CargoCollections
		{
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_USMC_WD", 2, 4}};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"rhsgref_cdf_DSHKM", 2, 4}};
			};

			class statics_westSmall {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_USMC_WD", 2, 4}, {"RHS_M2StaticMG_USMC_WD", 2, 4}, {"RHS_M252_D", 1, 3}};
			};

			class statics_eastSmall {
				transportClear = 1;
				cargo[] = {{"rhs_KORD_high_MSV", 1, 2}, {"rhs_KORD_MSV", 1, 2}, {"rhsgref_cdf_DSHKM", 1, 2}, {"rhsgref_cdf_DSHKM_Mini_TriPod", 1, 2}, {"rhs_2b14_82mm_msv", 1, 3}};
			};

			class statics_westHeavy {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_USMC_WD", 2, 4}, {"RHS_M2StaticMG_USMC_WD", 4, 6}, {"RHS_TOW_TriPod_D", 1, 6}, {"RHS_M252_D", 2, 6}};
			};

			class statics_eastHeavy {
				transportClear = 1;
				cargo[] = {{"rhs_KORD_high_MSV", 2, 4}, {"rhs_KORD_MSV", 1, 2}, {"rhsgref_cdf_DSHKM", 2, 4}, {"rhsgref_cdf_DSHKM_Mini_TriPod", 1, 2}, {"rhs_Metis_9k115_2_msv", 1, 2}, {"rhs_2b14_82mm_msv", 2, 6}};
			};

			class statics_westArty {
				transportClear = 1;
				cargo[] = {{"RHS_M119_D", -0, 4}};
			};

			class statics_eastArty {
				transportClear = 1;
				cargo[] = {{"rhs_D30_msv", -0, 4}};
			};
			class statics_eastAAA {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", 2, 8}};
			};
			class statics_eastAAA_ammo {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", -0, 8}};
			};


		};
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				crateMass = 1750;
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750;
			};
		};
	};
};