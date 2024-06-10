Startmap_MapScripts::
# 2 "data/maps/Startmap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Startmap_EventScript_BallDefault
	.byte 0


Startmap_EventScript_BallDefault::
# 6 "data/maps/Startmap/scripts.pory"
	setvar regionstarters, 0
	return


activate_choosestarter_sequence::
# 10 "data/maps/Startmap/scripts.pory"
	lock
# 11 "data/maps/Startmap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch
# 12 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 13 "data/maps/Startmap/scripts.pory"
	msgbox BeginAdventureText
# 14 "data/maps/Startmap/scripts.pory"
	waitmessage
# 15 "data/maps/Startmap/scripts.pory"
	closemessage
# 16 "data/maps/Startmap/scripts.pory"
	applymovement 6, ProfMove
# 17 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 18 "data/maps/Startmap/scripts.pory"
	setvar indigoplatue_STATE, 1
# 19 "data/maps/Startmap/scripts.pory"
	release
	return


activate_choosestarter_sequence2::
# 23 "data/maps/Startmap/scripts.pory"
	lock
# 24 "data/maps/Startmap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBirch2
# 25 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 26 "data/maps/Startmap/scripts.pory"
	goto activate_choosestarter_sequence
	return


# 29 "data/maps/Startmap/scripts.pory"
MeetBirch:
# 30 "data/maps/Startmap/scripts.pory"
	walk_up
# 30 "data/maps/Startmap/scripts.pory"
	walk_up
# 30 "data/maps/Startmap/scripts.pory"
	walk_up
# 30 "data/maps/Startmap/scripts.pory"
	walk_up
# 31 "data/maps/Startmap/scripts.pory"
	face_up
	step_end

# 33 "data/maps/Startmap/scripts.pory"
MeetBirch2:
# 34 "data/maps/Startmap/scripts.pory"
	walk_right
# 35 "data/maps/Startmap/scripts.pory"
	face_up
	step_end

# 37 "data/maps/Startmap/scripts.pory"
ProfMove:
# 38 "data/maps/Startmap/scripts.pory"
	walk_left
# 38 "data/maps/Startmap/scripts.pory"
	walk_left
# 38 "data/maps/Startmap/scripts.pory"
	walk_left
# 38 "data/maps/Startmap/scripts.pory"
	walk_left
# 38 "data/maps/Startmap/scripts.pory"
	walk_left
# 39 "data/maps/Startmap/scripts.pory"
	face_down
	step_end

triggerstopleaving::
# 56 "data/maps/Startmap/scripts.pory"
	lockall
# 57 "data/maps/Startmap/scripts.pory"
	msgbox triggerstopleaving_Text_0
# 58 "data/maps/Startmap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DoNotLeave
# 59 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 60 "data/maps/Startmap/scripts.pory"
	releaseall
	return


# 63 "data/maps/Startmap/scripts.pory"
DoNotLeave:
# 64 "data/maps/Startmap/scripts.pory"
	walk_up
	step_end

pkmnlgintro_EventScript_receptionist::
# 68 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, pkmnlgintro_EventScript_receptionist_2
# 91 "data/maps/Startmap/scripts.pory"
	msgbox pkmnlgintro_EventScript_receptionist_Text_2, MSGBOX_NPC
pkmnlgintro_EventScript_receptionist_1:
	end

pkmnlgintro_EventScript_receptionist_2:
# 69 "data/maps/Startmap/scripts.pory"
	lock
# 70 "data/maps/Startmap/scripts.pory"
	faceplayer
# 71 "data/maps/Startmap/scripts.pory"
	message pkmnlgintro_EventScript_receptionist_Text_0
# 72 "data/maps/Startmap/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 73 "data/maps/Startmap/scripts.pory"
	closemessage
# 74 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq pkmnlgintro_EventScript_receptionist_6
# 78 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq pkmnlgintro_EventScript_receptionist_7
# 82 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq pkmnlgintro_EventScript_receptionist_8
pkmnlgintro_EventScript_receptionist_5:
# 86 "data/maps/Startmap/scripts.pory"
	msgbox pkmnlgintro_EventScript_receptionist_Text_1
# 87 "data/maps/Startmap/scripts.pory"
	waitmessage
# 88 "data/maps/Startmap/scripts.pory"
	release
	goto pkmnlgintro_EventScript_receptionist_1

pkmnlgintro_EventScript_receptionist_6:
# 75 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 76 "data/maps/Startmap/scripts.pory"
	setvar regionstarters, 2
	goto pkmnlgintro_EventScript_receptionist_5

pkmnlgintro_EventScript_receptionist_7:
# 79 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 80 "data/maps/Startmap/scripts.pory"
	setvar regionstarters, 1
	goto pkmnlgintro_EventScript_receptionist_5

pkmnlgintro_EventScript_receptionist_8:
# 83 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 84 "data/maps/Startmap/scripts.pory"
	setvar regionstarters, 0
	goto pkmnlgintro_EventScript_receptionist_5


Startmap_EventScript_PokeballOne::
# 98 "data/maps/Startmap/scripts.pory"
	lockall
# 99 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 1
# 100 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballOne_2
# 118 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballOne_1:
# 120 "data/maps/Startmap/scripts.pory"
	waitmessage
# 121 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballOne_2:
# 101 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 0
	goto_if_eq Startmap_EventScript_PokeballOne_5
# 106 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 1
	goto_if_eq Startmap_EventScript_PokeballOne_6
# 111 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 2
	goto_if_eq Startmap_EventScript_PokeballOne_7
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_5:
# 102 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 103 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_MUDKIP
# 104 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_6:
# 107 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 108 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TOTODILE
# 109 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_7:
# 112 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 113 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_SQUIRTLE
# 114 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1


Startmap_EventScript_PokeballTwo::
# 126 "data/maps/Startmap/scripts.pory"
	lockall
# 127 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 2
# 128 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballTwo_2
# 146 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballTwo_1:
# 148 "data/maps/Startmap/scripts.pory"
	waitmessage
# 149 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballTwo_2:
# 129 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 0
	goto_if_eq Startmap_EventScript_PokeballTwo_5
# 134 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 1
	goto_if_eq Startmap_EventScript_PokeballTwo_6
# 139 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 2
	goto_if_eq Startmap_EventScript_PokeballTwo_7
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_5:
# 130 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 131 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TREECKO
# 132 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_6:
# 135 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 136 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CHIKORITA
# 137 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_7:
# 140 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 141 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_BULBASAUR
# 142 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1


Startmap_EventScript_PokeballThree::
# 154 "data/maps/Startmap/scripts.pory"
	lockall
# 155 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 3
# 156 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballThree_2
# 174 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballThree_1:
# 176 "data/maps/Startmap/scripts.pory"
	waitmessage
# 177 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballThree_2:
# 157 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 0
	goto_if_eq Startmap_EventScript_PokeballThree_5
# 162 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 1
	goto_if_eq Startmap_EventScript_PokeballThree_6
# 167 "data/maps/Startmap/scripts.pory"
	compare regionstarters, 2
	goto_if_eq Startmap_EventScript_PokeballThree_7
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_5:
# 158 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 159 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_TORCHIC
# 160 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_6:
# 163 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 164 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CYNDAQUIL
# 165 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_7:
# 168 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 169 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CHARMANDER
# 170 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1


Startmap_EventScript_GiveStarter::
# 183 "data/maps/Startmap/scripts.pory"
	showmonpic STARTER_CHOICE, 10, 3
# 184 "data/maps/Startmap/scripts.pory"
	playmoncry STARTER_CHOICE, CRY_MODE_NORMAL
# 185 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 186 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Startmap_EventScript_GiveStarter_1
# 211 "data/maps/Startmap/scripts.pory"
	hidemonpic
# 212 "data/maps/Startmap/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

Startmap_EventScript_GiveStarter_1:
# 187 "data/maps/Startmap/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 188 "data/maps/Startmap/scripts.pory"
	setvar indigoplatue_STATE, 2
# 189 "data/maps/Startmap/scripts.pory"
	givemon STARTER_CHOICE, 10, ITEM_EXP_SHARE
# 190 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Startmap_EventScript_GiveStarter_4
# 197 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Startmap_EventScript_GiveStarter_5
# 206 "data/maps/Startmap/scripts.pory"
	hidemonpic
# 207 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_3
	return

Startmap_EventScript_GiveStarter_4:
# 191 "data/maps/Startmap/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_1
# 193 "data/maps/Startmap/scripts.pory"
	removeobject VAR_TEMP_0
# 194 "data/maps/Startmap/scripts.pory"
	call SetBallFlag
# 195 "data/maps/Startmap/scripts.pory"
	call NicknamePartyMon
	return

Startmap_EventScript_GiveStarter_5:
# 198 "data/maps/Startmap/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_1
# 200 "data/maps/Startmap/scripts.pory"
	removeobject VAR_TEMP_0
# 201 "data/maps/Startmap/scripts.pory"
	call SetBallFlag
# 202 "data/maps/Startmap/scripts.pory"
	call NicknameBoxMon
# 203 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_2
	return


SetBallFlag::
# 219 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
# 223 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 227 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 220 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_ONE
	return

SetBallFlag_5:
# 224 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 228 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_THREE
	return


DontTouchThat::
# 240 "data/maps/Startmap/scripts.pory"
	lockall
# 241 "data/maps/Startmap/scripts.pory"
	msgbox DontTouchThat_Text_0
# 242 "data/maps/Startmap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 243 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 244 "data/maps/Startmap/scripts.pory"
	releaseall
	return


# 247 "data/maps/Startmap/scripts.pory"
MoveAwayFromThere:
# 248 "data/maps/Startmap/scripts.pory"
	walk_left
# 248 "data/maps/Startmap/scripts.pory"
	walk_left
	step_end

triggerstopleaving_Text_0:
# 57 "data/maps/Startmap/scripts.pory"
	.string "You Need To Choose a Pokemon$"

pkmnlgintro_EventScript_receptionist_Text_0:
# 71 "data/maps/Startmap/scripts.pory"
	.string "Would you like to see more?$"

pkmnlgintro_EventScript_receptionist_Text_1:
# 86 "data/maps/Startmap/scripts.pory"
	.string "Choose wisely...$"

pkmnlgintro_EventScript_receptionist_Text_2:
# 91 "data/maps/Startmap/scripts.pory"
	.string "Take care of your Pokemon$"

Startmap_EventScript_PokeballOne_Text_0:
# 118 "data/maps/Startmap/scripts.pory"
	.string "Don't Take Another$"

Startmap_EventScript_GiveStarter_Text_0:
# 185 "data/maps/Startmap/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Startmap_EventScript_GiveStarter_Text_1:
# 192 "data/maps/Startmap/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

Startmap_EventScript_GiveStarter_Text_2:
# 203 "data/maps/Startmap/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

Startmap_EventScript_GiveStarter_Text_3:
# 207 "data/maps/Startmap/scripts.pory"
	.string "No More Room For Pokemon$"

DontTouchThat_Text_0:
# 241 "data/maps/Startmap/scripts.pory"
	.string "DONT TOUCH THAT$"

BeginAdventureText::
# 44 "data/maps/Startmap/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Birch:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is Prof Birch\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now Choose Wisely,\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.\n$"

NewProfessor_NotChosen::
# 234 "data/maps/Startmap/scripts.pory"
	.string "You did not choose {STR_VAR_1}$"
