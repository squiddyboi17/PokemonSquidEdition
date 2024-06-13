PokemonLeagueHQPokecenter_MapScripts::
# 2 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeagueHQPokecenter_OnTransition
# 3 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PokemonLeagueHQPokecenter_OnTransition::
# 7 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE22
	return


HQpokecenternurse::
# 11 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	waitmessage
# 14 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/PokemonLeagueHQPokecenter/scripts.pory"
	release
	end

