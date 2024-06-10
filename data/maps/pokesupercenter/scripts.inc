pokesupercenter_MapScripts::
# 2 "data/maps/pokesupercenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, pokesupercenter_OnTransition
# 3 "data/maps/pokesupercenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


pokesupercenter_OnTransition::
# 8 "data/maps/pokesupercenter/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
	return


pokecenternursesimple::
# 13 "data/maps/pokesupercenter/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/pokesupercenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/pokesupercenter/scripts.pory"
	waitmessage
# 16 "data/maps/pokesupercenter/scripts.pory"
	waitbuttonpress
# 17 "data/maps/pokesupercenter/scripts.pory"
	release
	end


pokecenternurse::
# 23 "data/maps/pokesupercenter/scripts.pory"
	lock
# 24 "data/maps/pokesupercenter/scripts.pory"
	faceplayer
# 25 "data/maps/pokesupercenter/scripts.pory"
	msgbox pokecenternurse_Text_0, MSGBOX_YESNO
# 26 "data/maps/pokesupercenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq pokecenternurse_1
# 41 "data/maps/pokesupercenter/scripts.pory"
	msgbox pokecenternurse_Text_2, MSGBOX_NPC
	return

pokecenternurse_1:
# 27 "data/maps/pokesupercenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 34 "data/maps/pokesupercenter/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/pokesupercenter/scripts.pory"
	msgbox pokecenternurse_Text_1
# 36 "data/maps/pokesupercenter/scripts.pory"
	waitmessage
# 37 "data/maps/pokesupercenter/scripts.pory"
	release
	end


pokecenternurse_Text_0:
# 25 "data/maps/pokesupercenter/scripts.pory"
	.string "Would you like me to heal your party?$"

pokecenternurse_Text_1:
# 35 "data/maps/pokesupercenter/scripts.pory"
	.string "Come again soon.$"

pokecenternurse_Text_2:
# 41 "data/maps/pokesupercenter/scripts.pory"
	.string "Have a nice day$"
