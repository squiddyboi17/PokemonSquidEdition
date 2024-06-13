ViridianPokemonCenterF1_MapScripts::
# 2 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianPokemonCenterF1_OnTransition
# 3 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ViridianPokemonCenterF1_OnTransition::
# 7 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	return


Viridianpokecenternurse::
# 11 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	waitmessage
# 14 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ViridianPokemonCenterF1/scripts.pory"
	release
	end

