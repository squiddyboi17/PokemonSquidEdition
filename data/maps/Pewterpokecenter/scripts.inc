Pewterpokecenter_MapScripts::
# 2 "data/maps/Pewterpokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pewterpokecenter_OnTransition
# 3 "data/maps/Pewterpokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Pewterpokecenter_OnTransition::
# 7 "data/maps/Pewterpokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
	return


Pewterpokecenternurse::
# 11 "data/maps/Pewterpokecenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/Pewterpokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/Pewterpokecenter/scripts.pory"
	waitmessage
# 14 "data/maps/Pewterpokecenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/Pewterpokecenter/scripts.pory"
	release
	end

