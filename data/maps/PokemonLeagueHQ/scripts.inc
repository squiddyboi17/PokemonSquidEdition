PokemonLeagueHQ_MapScripts::
	.byte 0


Elite4_trigger_blockpath::
# 6 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 7 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox Elite4_trigger_blockpath_Text_0
# 8 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerElite4
# 9 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox Elite4_trigger_blockpath_Text_1
# 10 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 11 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


# 14 "data/maps/PokemonLeagueHQ/scripts.pory"
StopPlayerElite4:
# 15 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_down
	step_end

Startgame_trigger_blockpath1::
# 19 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 20 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox Startgame_trigger_blockpath1_Text_0
# 21 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerStart1
# 22 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 23 "data/maps/PokemonLeagueHQ/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE22
# 24 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


# 27 "data/maps/PokemonLeagueHQ/scripts.pory"
StopPlayerStart1:
# 28 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
	step_end

Startgame_trigger_blockpath2::
# 32 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 33 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox Startgame_trigger_blockpath2_Text_0
# 34 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerStart2
# 35 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 36 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


# 39 "data/maps/PokemonLeagueHQ/scripts.pory"
StopPlayerStart2:
# 40 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
	step_end

HqGuardDialogue::
# 44 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 45 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox HqGuardDialogue_Text_0
# 46 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


HQpokecenter_trigger_blockpath::
# 50 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 51 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox HQpokecenter_trigger_blockpath_Text_0
# 52 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerHQpokecenter
# 53 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 54 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


# 57 "data/maps/PokemonLeagueHQ/scripts.pory"
StopPlayerHQpokecenter:
# 58 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
	step_end

HQpokecenter_trigger_blockpath2::
# 62 "data/maps/PokemonLeagueHQ/scripts.pory"
	lockall
# 63 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox HQpokecenter_trigger_blockpath2_Text_0
# 64 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayerHQpokecenter2
# 65 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 66 "data/maps/PokemonLeagueHQ/scripts.pory"
	releaseall
	return


# 69 "data/maps/PokemonLeagueHQ/scripts.pory"
StopPlayerHQpokecenter2:
# 70 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
	step_end

activate_startgame_sequence::
# 79 "data/maps/PokemonLeagueHQ/scripts.pory"
	lock
# 80 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, meetreceptionist
# 81 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 82 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox startgamereceptionistdialogue
# 83 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmessage
# 84 "data/maps/PokemonLeagueHQ/scripts.pory"
	closemessage
# 85 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement 1, receptionistlook1
# 86 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 87 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox startgamereceptionistdialogue2
# 88 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmessage
# 89 "data/maps/PokemonLeagueHQ/scripts.pory"
	closemessage
# 90 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement 1, receptionistlook2
# 91 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 92 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox startgamereceptionistdialogue3
# 93 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmessage
# 94 "data/maps/PokemonLeagueHQ/scripts.pory"
	closemessage
# 95 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox startjuliedialogue1
# 96 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmessage
# 97 "data/maps/PokemonLeagueHQ/scripts.pory"
	closemessage
# 98 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement 4, startgamecoworkermove
# 99 "data/maps/PokemonLeagueHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, followcoworker
# 100 "data/maps/PokemonLeagueHQ/scripts.pory"
	waitmovement 0
# 101 "data/maps/PokemonLeagueHQ/scripts.pory"
	msgbox startjuliedialogue2
# 102 "data/maps/PokemonLeagueHQ/scripts.pory"
	setvar indigoplatue_STATE, 1
# 103 "data/maps/PokemonLeagueHQ/scripts.pory"
	release
	return


# 106 "data/maps/PokemonLeagueHQ/scripts.pory"
meetreceptionist:
# 107 "data/maps/PokemonLeagueHQ/scripts.pory"
	face_up
	step_end

# 110 "data/maps/PokemonLeagueHQ/scripts.pory"
receptionistlook1:
# 111 "data/maps/PokemonLeagueHQ/scripts.pory"
	face_right
	step_end

# 114 "data/maps/PokemonLeagueHQ/scripts.pory"
receptionistlook2:
# 115 "data/maps/PokemonLeagueHQ/scripts.pory"
	face_down
	step_end

# 118 "data/maps/PokemonLeagueHQ/scripts.pory"
startgamecoworkermove:
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 119 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 120 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
# 121 "data/maps/PokemonLeagueHQ/scripts.pory"
	face_down
	step_end

# 124 "data/maps/PokemonLeagueHQ/scripts.pory"
followcoworker:
# 125 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 125 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 126 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
# 126 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 127 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_right
# 128 "data/maps/PokemonLeagueHQ/scripts.pory"
	walk_up
# 129 "data/maps/PokemonLeagueHQ/scripts.pory"
	face_up
	step_end

Elite4_trigger_blockpath_Text_0:
# 7 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "GUARD: I'm afraid I cant let you enter.$"

Elite4_trigger_blockpath_Text_1:
# 9 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "GUARD: Thats too bad...$"

Startgame_trigger_blockpath1_Text_0:
# 20 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Receptionist: Welcome!$"

Startgame_trigger_blockpath2_Text_0:
# 33 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Hey... Where are you going?..$"

HqGuardDialogue_Text_0:
# 45 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "I used to be an adventurer like you,\n"
	.string "until I took a Thunderbolt to the\l"
	.string "knee...$"

HQpokecenter_trigger_blockpath_Text_0:
# 51 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "I didn't bring any Pokemon to heal...$"

HQpokecenter_trigger_blockpath2_Text_0:
# 63 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Why are you like this?$"

startgamereceptionistdialogue::
# 134 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Receptionist: Here to just look around or\n"
	.string "Do you have an appointment?.\p"
	.string "Hmm...{PLAYER}... {PLAYER}...\n"
	.string "OH!\p"
	.string "My boss needs to see you right away.$"

startgamereceptionistdialogue2::
# 142 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Julie, this is them...\n$"

startgamereceptionistdialogue3::
# 146 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "...If you follow my coworker,\l"
	.string "she can bring you to the boss's office.\n$"

startjuliedialogue1::
# 151 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Julie: Right this way $"

startjuliedialogue2::
# 155 "data/maps/PokemonLeagueHQ/scripts.pory"
	.string "Julie: You can go right on in. $"
