waitUntil {(player == player) && (!isNull (findDisplay 46))};
/*

*/
["MRH_SideHQ_ReceivedPictures_global", 
{
	params ["_HQ","_hqCallSign","_pics","_sender"];
	systemChat str _this;
	hint "side hq picture event fired";
}] call CBA_fnc_addEventHandler;

["MRH_SideHQ_ReceivedData_global", 
{
	params ["_HQ","_hqCallSign","_data","_sender"];
	systemChat str _this;
	hint "side hq data event fired";
}] call CBA_fnc_addEventHandler;


["MRH_Player_ReceivedData", 
{
	params ["_receiver","_data","_sender"];
	systemChat str _this;
}] call CBA_fnc_addEventHandler;

["MRH_Player_ReceivedPictures", 
{
	params ["_receiver","_pictures","_sender"];
	systemChat str _this;
}] call CBA_fnc_addEventHandler;

sleep 2;
[player,["dataEntry1"]]call MRH_fnc_MilsimTools_SoldierTab_attributeData;
[player,["pic1"]]call MRH_fnc_MilsimTools_SoldierTab_attributePictures;

_action = ["ASO_Logistics_Update", "Save Position", "", {
	[ALiVE_SYS_LOGISTICS, "updateObject", [_target]] call ALiVE_fnc_logistics;
	hintSilent "Position saved!";
}, {true}] call ace_interact_menu_fnc_createAction;
["Reammobox_F", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

