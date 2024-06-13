Startmap_MapScripts::
# 2 "data/maps/Startmap/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Startmap_EventScript_BallDefault
	.byte 0


Startmap_EventScript_BallDefault::
# 6 "data/maps/Startmap/scripts.pory"
	setvar UnusualStarters, 0
	return


pkmnlgintro_EventScript_receptionist::
# 10 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, pkmnlgintro_EventScript_receptionist_2
# 37 "data/maps/Startmap/scripts.pory"
	msgbox pkmnlgintro_EventScript_receptionist_Text_2, MSGBOX_NPC
pkmnlgintro_EventScript_receptionist_1:
	end

pkmnlgintro_EventScript_receptionist_2:
# 11 "data/maps/Startmap/scripts.pory"
	lock
# 12 "data/maps/Startmap/scripts.pory"
	faceplayer
# 13 "data/maps/Startmap/scripts.pory"
	message pkmnlgintro_EventScript_receptionist_Text_0
# 14 "data/maps/Startmap/scripts.pory"
	multichoice 25, 3, MULTI_STARTER_CHOICE_2, 0
# 15 "data/maps/Startmap/scripts.pory"
	closemessage
# 16 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq pkmnlgintro_EventScript_receptionist_6
# 20 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq pkmnlgintro_EventScript_receptionist_7
# 24 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq pkmnlgintro_EventScript_receptionist_8
# 28 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq pkmnlgintro_EventScript_receptionist_9
pkmnlgintro_EventScript_receptionist_5:
# 32 "data/maps/Startmap/scripts.pory"
	msgbox pkmnlgintro_EventScript_receptionist_Text_1
# 33 "data/maps/Startmap/scripts.pory"
	waitmessage
# 34 "data/maps/Startmap/scripts.pory"
	release
	goto pkmnlgintro_EventScript_receptionist_1

pkmnlgintro_EventScript_receptionist_6:
# 17 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 18 "data/maps/Startmap/scripts.pory"
	setvar UnusualStarters, 0
	goto pkmnlgintro_EventScript_receptionist_5

pkmnlgintro_EventScript_receptionist_7:
# 21 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 22 "data/maps/Startmap/scripts.pory"
	setvar UnusualStarters, 1
	goto pkmnlgintro_EventScript_receptionist_5

pkmnlgintro_EventScript_receptionist_8:
# 25 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 26 "data/maps/Startmap/scripts.pory"
	setvar UnusualStarters, 2
	goto pkmnlgintro_EventScript_receptionist_5

pkmnlgintro_EventScript_receptionist_9:
# 29 "data/maps/Startmap/scripts.pory"
	call StarterFade
# 30 "data/maps/Startmap/scripts.pory"
	setvar UnusualStarters, 3
	goto pkmnlgintro_EventScript_receptionist_5


Startmap_EventScript_PokeballOne::
# 44 "data/maps/Startmap/scripts.pory"
	lockall
# 45 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 1
# 46 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballOne_2
# 69 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballOne_1:
# 71 "data/maps/Startmap/scripts.pory"
	waitmessage
# 72 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballOne_2:
# 47 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 0
	goto_if_eq Startmap_EventScript_PokeballOne_5
# 52 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 1
	goto_if_eq Startmap_EventScript_PokeballOne_6
# 57 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 2
	goto_if_eq Startmap_EventScript_PokeballOne_7
# 62 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 3
	goto_if_eq Startmap_EventScript_PokeballOne_8
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_5:
# 48 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
# 49 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_PIKACHU
# 50 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_6:
# 53 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VULPIX
# 54 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_VULPIX
# 55 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_7:
# 58 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
# 59 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CLEFAIRY
# 60 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1

Startmap_EventScript_PokeballOne_8:
# 63 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DRATINI
# 64 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_DRATINI
# 65 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballOne_1


Startmap_EventScript_PokeballTwo::
# 77 "data/maps/Startmap/scripts.pory"
	lockall
# 78 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 2
# 79 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballTwo_2
# 102 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballTwo_1:
# 104 "data/maps/Startmap/scripts.pory"
	waitmessage
# 105 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballTwo_2:
# 80 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 0
	goto_if_eq Startmap_EventScript_PokeballTwo_5
# 85 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 1
	goto_if_eq Startmap_EventScript_PokeballTwo_6
# 90 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 2
	goto_if_eq Startmap_EventScript_PokeballTwo_7
# 95 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 3
	goto_if_eq Startmap_EventScript_PokeballTwo_8
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_5:
# 81 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 82 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_EEVEE
# 83 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_6:
# 86 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHROOMISH
# 87 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_SHROOMISH
# 88 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_7:
# 91 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GASTLY
# 92 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_GASTLY
# 93 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1

Startmap_EventScript_PokeballTwo_8:
# 96 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 97 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_BAGON
# 98 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballTwo_1


Startmap_EventScript_PokeballThree::
# 110 "data/maps/Startmap/scripts.pory"
	lockall
# 111 "data/maps/Startmap/scripts.pory"
	setvar VAR_TEMP_0, 3
# 112 "data/maps/Startmap/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Startmap_EventScript_PokeballThree_2
# 135 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_PokeballOne_Text_0
Startmap_EventScript_PokeballThree_1:
# 137 "data/maps/Startmap/scripts.pory"
	waitmessage
# 138 "data/maps/Startmap/scripts.pory"
	releaseall
	end

Startmap_EventScript_PokeballThree_2:
# 113 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 0
	goto_if_eq Startmap_EventScript_PokeballThree_5
# 118 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 1
	goto_if_eq Startmap_EventScript_PokeballThree_6
# 123 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 2
	goto_if_eq Startmap_EventScript_PokeballThree_7
# 128 "data/maps/Startmap/scripts.pory"
	compare UnusualStarters, 3
	goto_if_eq Startmap_EventScript_PokeballThree_8
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_5:
# 114 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CUBONE
# 115 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_CUBONE
# 116 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_6:
# 119 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_WOOPER
# 120 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_WOOPER
# 121 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_7:
# 124 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCYTHER
# 125 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_SCYTHER
# 126 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1

Startmap_EventScript_PokeballThree_8:
# 129 "data/maps/Startmap/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 130 "data/maps/Startmap/scripts.pory"
	setvar STARTER_CHOICE, SPECIES_BELDUM
# 131 "data/maps/Startmap/scripts.pory"
	call Startmap_EventScript_GiveStarter
	goto Startmap_EventScript_PokeballThree_1


Startmap_EventScript_GiveStarter::
# 144 "data/maps/Startmap/scripts.pory"
	showmonpic STARTER_CHOICE, 10, 3
# 145 "data/maps/Startmap/scripts.pory"
	playmoncry STARTER_CHOICE, CRY_MODE_NORMAL
# 146 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
# 147 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Startmap_EventScript_GiveStarter_1
# 172 "data/maps/Startmap/scripts.pory"
	hidemonpic
# 173 "data/maps/Startmap/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

Startmap_EventScript_GiveStarter_1:
# 148 "data/maps/Startmap/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 149 "data/maps/Startmap/scripts.pory"
	setvar indigoplatue_STATE, 2
# 150 "data/maps/Startmap/scripts.pory"
	givemon STARTER_CHOICE, 10, ITEM_EXP_SHARE
# 151 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Startmap_EventScript_GiveStarter_4
# 158 "data/maps/Startmap/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Startmap_EventScript_GiveStarter_5
# 167 "data/maps/Startmap/scripts.pory"
	hidemonpic
# 168 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_3
	return

Startmap_EventScript_GiveStarter_4:
# 152 "data/maps/Startmap/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_1
# 154 "data/maps/Startmap/scripts.pory"
	removeobject VAR_TEMP_0
# 155 "data/maps/Startmap/scripts.pory"
	call SetBallFlag
# 156 "data/maps/Startmap/scripts.pory"
	call NicknamePartyMon
	return

Startmap_EventScript_GiveStarter_5:
# 159 "data/maps/Startmap/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_1
# 161 "data/maps/Startmap/scripts.pory"
	removeobject VAR_TEMP_0
# 162 "data/maps/Startmap/scripts.pory"
	call SetBallFlag
# 163 "data/maps/Startmap/scripts.pory"
	call NicknameBoxMon
# 164 "data/maps/Startmap/scripts.pory"
	msgbox Startmap_EventScript_GiveStarter_Text_2
	return


SetBallFlag::
# 180 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SetBallFlag_2
SetBallFlag_1:
# 183 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq SetBallFlag_5
# 187 "data/maps/Startmap/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq SetBallFlag_7
	return

SetBallFlag_2:
# 181 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_ONE
	goto SetBallFlag_1

SetBallFlag_5:
# 184 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_TWO
	return

SetBallFlag_7:
# 188 "data/maps/Startmap/scripts.pory"
	setflag STARTER_BALL_THREE
	return


DontTouchThat::
# 200 "data/maps/Startmap/scripts.pory"
	lockall
# 201 "data/maps/Startmap/scripts.pory"
	msgbox DontTouchThat_Text_0
# 202 "data/maps/Startmap/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveAwayFromThere
# 203 "data/maps/Startmap/scripts.pory"
	waitmovement 0
# 204 "data/maps/Startmap/scripts.pory"
	releaseall
	return


# 207 "data/maps/Startmap/scripts.pory"
MoveAwayFromThere:
# 208 "data/maps/Startmap/scripts.pory"
	walk_left
# 208 "data/maps/Startmap/scripts.pory"
	walk_left
	step_end

pkmnlgintro_EventScript_receptionist_Text_0:
# 13 "data/maps/Startmap/scripts.pory"
	.string "Choose from a different selection?$"

pkmnlgintro_EventScript_receptionist_Text_1:
# 32 "data/maps/Startmap/scripts.pory"
	.string "Selection changed.$"

pkmnlgintro_EventScript_receptionist_Text_2:
# 37 "data/maps/Startmap/scripts.pory"
	.string "Take care of your Pokemon$"

Startmap_EventScript_PokeballOne_Text_0:
# 69 "data/maps/Startmap/scripts.pory"
	.string "Don't Take Another$"

Startmap_EventScript_GiveStarter_Text_0:
# 146 "data/maps/Startmap/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Startmap_EventScript_GiveStarter_Text_1:
# 153 "data/maps/Startmap/scripts.pory"
	.string "Recieved {STR_VAR_1}$"

Startmap_EventScript_GiveStarter_Text_2:
# 164 "data/maps/Startmap/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

Startmap_EventScript_GiveStarter_Text_3:
# 168 "data/maps/Startmap/scripts.pory"
	.string "No More Room For Pokemon$"

DontTouchThat_Text_0:
# 201 "data/maps/Startmap/scripts.pory"
	.string "DONT TOUCH THAT$"

NewProfessor_NotChosen::
# 194 "data/maps/Startmap/scripts.pory"
	.string "You did not choose {STR_VAR_1}$"
