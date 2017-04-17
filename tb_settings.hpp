class ICE
{
    class vehicles
    {
    class armaments
        {
        startFullyRearmed = 1;
        };
    };
  class zones
  {
    #include "zoneList.hpp"
  };
    /*class firstAid
  {
    bleedoutTimeSteps[] = {150, 75, 0}; // Controls the bleedout time steps
    bleedoutTimeReset = 180; // Controls the time that you should go incapped within to go down a step. 2 * this time takes you a step back up.
  };*/
	class mission
	{
		gameMode = "A&D";
		missionScale = "large";
		attackingSide = "west";
		recommendedTotalPlayers = 50;

                class briefings
        {
        // Provide file name containing side specific mission briefings here. File text can use structured text syntax. Use <br /> tag for line breaks.
        class west
              {
             original = "briefing_blue.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        class east
             {
             original = "briefing_red.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        };

		class factions // or sides
		{
			class faction
			{
				bluFor = "BLU_F";
				opFor = "OPF_F";
			};
		};
		class scoring
		{
			class tickets
			{
				// In A&S, specify the tickets per hour, (not total tickets). It will later be scaled by duration.
				// In A&D, specify the tickets per zone. It is usually a 7:5 ratio, for attackers/defenders respectively.
				// In S&D, do not specify any tickets. It is automatically calculated, with the defenders ticket count representing the total caches.
				bluFor = 100;
				opFor = 50;
			};
		};
	};
	class respawn
	{
        class vehicles
        {
            class respawnDelay
            {
                // 'globalOverride' takes precedence over 'multiplier'
                //globalOverride = -1; // Value is in minutes. set to >= 0 to override scaled "vehicle category" values.

                multiplier = 0.5; // set to > 0 to override scaled "vehicle category" values. Eg: 0.5 to halve all values. 1.5 to increase all values.
                //(<= 0 uses default multiplier), (> 0, < 1 scales down), (> 1 scales up), (== 1 uses 1 for all vehicles, regardless of missionScale)
            };
        };
		class FO
		{
			minSpacingDist = 600;
			maxFriendlySiteDist = 2200;
			minZoneDist = 50;
			minEnemyFBDist = 400;
			minEnemyBaseDist = 1000;
		};
		class SRP
		{
			maxFriendlySiteDist = 1000;
		};
		class HO
		{
			minSpacingDist = 250;
		};
        class infantry
        {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60; // "pivot value" where low player count differences result in small time penalties,
                // but large differences result in exponential time penalties
                maxDuration = 240;
            };
        };
	};
	class gameModes
	{
	    class objectives
        {
            class zones
            {
                class captureRates
                {
                    // Eg: A higher value (eg: 2 to 3) is ideal for smaller missions.
                    heldZoneMultiplier = 2; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate). Eg: 0.25, 0.5, 0.75, 1.0, 1.25, 1.5

                    // This value is a cumulative multiplier with 'captureRateMultiplier'. (So if captureRateMultiplier == 2 and neutralZoneCaptureRateMultiplier == 3, then overall rate is 6 times faster.)
                    // Eg: A value of 2 is ideal for missions which have very few neutral zones at the start.
					// Eg: A value of 2 is ideal for missions which have very few neutral zones at the start.
                    // Eg: A high value (eg: 3 to 6) is ideal for missions which have many neutral zones at the start or for smaller missions.
                    neutralZoneMultiplier = 4; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate)

                                        negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier".
                };
            };
		};

		class AAD
		{
            attackerTicketsPerZoneCapture = 30;
            attackerMaxTotalTickets = 100;
		};
	};
    class gear
    {
        #include "tb_kitDefines.sqh" // Unconfirmed. These files might need to be copied local to mission.

        class magazineExclusions
      {
         // This does not include any derived classes.
         individualClasses[] = {

            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhsusf_20Rnd_762x51_m993_Mag",
            "rhsusf_100Rnd_556x45_M200_soft_pouch",
            "rhs_g_vg40sz",
            "rhs_30Rnd_545x39_7n10_AK",
            "rhs_30Rnd_545x39_7n22_AK",
            "rhs_45Rnd_545X39_7N10_AK",
            "rhs_45Rnd_545X39_7N22_AK",
            "rhs_30Rnd_762x39mm_89",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "rhsusf_8Rnd_doomsday_Buck",
            "rhsusf_5Rnd_doomsday_Buck"
         };

         // This automatically include all derived classes too. Use sparingly, since processing is quite slow.
         baseClasses[] = {
           // "rhsusf_8Rnd_doomsday_Buck",
           // "rhsusf_5Rnd_doomsday_Buck"
         };
      };
	    class NVGogglesForAll
        {
            west = 1;
            east = 1;
            resistance = 0;
            civilian = 0;
        };
        class roles
        {
        #define __unlimited -99
            kits[] =
            {
                // BLUFOR or ALL factions
                {
                    // {id, caption, ratio, minimum, minTeamSize, minSquadSize}
                    {__ICE_gear_Rifleman, "Rifleman", __unlimited, 0, 0, 0},
                    {__ICE_gear_Grenadier, "Grenadier", 6, 1, 0, 3},
                    {__ICE_gear_MG, "MG", 6, 1, 0, 3},
                    {__ICE_gear_Medic, "Medic", 4, 2, 0, 2},
                    {__ICE_gear_CombatEngineer, "Combat Engineer", 5, 2, 0, 3},
                    {__ICE_gear_LightAT, "Light AT", 4, 0, 0, 4},
                    {__ICE_gear_HeavyAT, "Heavy AT", 20, 0},
                    {__ICE_gear_AA, "Anti-Air", 12, 0, 0, 4},
                    {__ICE_gear_Marksman, "Marksman", 8, 0, 0, 4},
                    {__ICE_gear_Sniper, "Sniper", 15, 0, 0, 2},
                    {__ICE_gear_SL, "Squad Leader", __unlimited, 0},
                    {__ICE_gear_Crewman, "Crewman", __unlimited, 0, 0, 0},
                    {__ICE_gear_Pilot, "Pilot", __unlimited, 0, 0, 0},
                    {__ICE_gear_Diver, "Heavy MG", 10, 0, 0, 2}
                },
				// OPFOR (delete OPFOR array or leave OPFOR array empty, to re-use (copy) BLUFOR array for both sides)
                {
                    // {id, caption, ratio, minimum, minTeamSize, minSquadSize}
                    {__ICE_gear_Rifleman, "Rifleman", __unlimited, 0, 0, 0},
                    {__ICE_gear_Grenadier, "Grenadier", 6, 1, 0, 3},
                    {__ICE_gear_MG, "MG", 6, 1, 0, 3},
                    {__ICE_gear_Medic, "Medic", 4, 2, 0, 2},
                    {__ICE_gear_CombatEngineer, "Combat Engineer", 5, 2, 0, 3},
                    {__ICE_gear_LightAT, "Light AT", 4, 0, 0, 4},
                    {__ICE_gear_HeavyAT, "Heavy AT", 10, 0},
                    {__ICE_gear_AA, "Anti-Air", 12, 0, 0, 4},
                    {__ICE_gear_Marksman, "Marksman", 8, 0, 0, 4},
                    {__ICE_gear_Sniper, "Sniper", 15, 0, 0, 2},
                    {__ICE_gear_SL, "Squad Leader", __unlimited, 0},
                    {__ICE_gear_Crewman, "Crewman", __unlimited, 0, 0, 0},
                    {__ICE_gear_Pilot, "Pilot", __unlimited, 0, 0, 3},
                    {__ICE_gear_Diver, "Heavy MG", 10, 0, 0, 2}
                };
            };
		};
	      class armaments
      {


         class BLU_F
         {
            defaultGear = "default_Gear\A3\BLU_F.sqh";
            #include "factions\A3\_common_smallItems.sqh"
            #include "factions\A3\BLU_F.sqh"
            #include "factions\A3\BLU_F_uniforms.sqh"
         };
         class OPF_F
         {
            defaultGear = "default_Gear\A3\OPF_F.sqh";
            #include "factions\A3\_common_smallItems.sqh"
            #include "factions\A3\OPF_F.sqh"
            #include "factions\A3\OPF_F_uniforms.sqh"
         };
      };
   };
};
