#include "\ice\tb_main\sys\gameModes\aas_init.sqf";
[] execVM "functions\initFastRope.sqf";



/*if (!isDedicated) then {waitUntil {!isNull player && isPlayer player};};
if (side player == west) then {
	tf_radio_channel_password = "TB_Blufor";
	tf_radio_channel_name = "Blufor";
};
if (side player == east) then {
	tf_radio_channel_password = "TB_Opfor";
	tf_radio_channel_name = "Opfor";
};
if (side player == resistance) then {
	tf_radio_channel_password = "TB_Independent";
	tf_radio_channel_name = "Independent";
};
*/