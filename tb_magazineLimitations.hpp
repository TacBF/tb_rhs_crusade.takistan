class cfgMagazines
{
	class magazineLimitations
	{
		/*---------------------------------------------------------------------------
			Sets the amount of magazines you can have out of the following array (So in total!)
			You can specify a special number for resistance as well
		---------------------------------------------------------------------------*/
		class 40mm_HE
		{

			magazineArray[] = {"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_VOG25", "rhs_VOG25P","rhs_VG40TB"};
			limit = 8;
			limtResistance = 8;
			categoryName = "40mm HE Grenades";
		};
		class Grenade
		{
			magazineArray[] = {"rhs_mag_rgd5"};
			limit = 2;
			limtResistance = 2;
			categoryName = "HE Grenades";
		};
	};
};



