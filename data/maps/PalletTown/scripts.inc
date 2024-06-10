PalletTown_MapScripts::
	.byte 0


Shadyguy::
# 7 "data/maps/PalletTown/scripts.pory"
	lock
# 8 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 9 "data/maps/PalletTown/scripts.pory"
	msgbox Shadyguy_Text_0, MSGBOX_YESNO
# 10 "data/maps/PalletTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Shadyguy_1
# 19 "data/maps/PalletTown/scripts.pory"
	msgbox Shadyguy_Text_3, MSGBOX_NPC
	return

Shadyguy_1:
# 11 "data/maps/PalletTown/scripts.pory"
	message Shadyguy_Text_1
# 12 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 13 "data/maps/PalletTown/scripts.pory"
	pokemart strangemanmart
# 14 "data/maps/PalletTown/scripts.pory"
	msgbox Shadyguy_Text_2
# 15 "data/maps/PalletTown/scripts.pory"
	release
	end


	.align 2
# 23 "data/maps/PalletTown/scripts.pory"
strangemanmart:
# 24 "data/maps/PalletTown/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 25 "data/maps/PalletTown/scripts.pory"
	.2byte ITEM_MEGA_RING
# 26 "data/maps/PalletTown/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 27 "data/maps/PalletTown/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 28 "data/maps/PalletTown/scripts.pory"
	.2byte ITEM_ACRO_BIKE
	.2byte ITEM_NONE

PalletTown_EventScript_townsign::
# 32 "data/maps/PalletTown/scripts.pory"
	lockall
# 33 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_townsign_Text_0
# 34 "data/maps/PalletTown/scripts.pory"
	releaseall
	return


PalletTown_Trigger_BlockPath1::
# 38 "data/maps/PalletTown/scripts.pory"
	lockall
# 39 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Trigger_BlockPath1_Text_0
# 40 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer1
# 41 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/PalletTown/scripts.pory"
	releaseall
	return


PalletTown_Trigger_BlockPath2::
# 46 "data/maps/PalletTown/scripts.pory"
	lockall
# 47 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Trigger_BlockPath2_Text_0
# 48 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer2
# 49 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/PalletTown/scripts.pory"
	releaseall
	return


# 53 "data/maps/PalletTown/scripts.pory"
StopPlayer1:
# 54 "data/maps/PalletTown/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/PalletTown/scripts.pory"
StopPlayer2:
# 58 "data/maps/PalletTown/scripts.pory"
	walk_down
	step_end

firstbattlesetup::
# 62 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball1, firstbattlesetup_3
firstbattlesetup_2:
# 66 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_UNUSED_0x023
	return

firstbattlesetup_1:
# 63 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_UNUSED_0x023
	return

firstbattlesetup_3:
# 62 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball2, firstbattlesetup_5
	goto firstbattlesetup_2

firstbattlesetup_5:
# 62 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball3, firstbattlesetup_1
	goto firstbattlesetup_2


firstbattletest::
# 71 "data/maps/PalletTown/scripts.pory"
	trainerbattle_single TRAINER_RED, trainerintro, traineroutro
# 72 "data/maps/PalletTown/scripts.pory"
	msgbox postbattletrainer, MSGBOX_AUTOCLOSE
	end


Shadyguy_Text_0:
# 9 "data/maps/PalletTown/scripts.pory"
	.string "...you a narc?$"

Shadyguy_Text_1:
# 11 "data/maps/PalletTown/scripts.pory"
	.string "Good... lets make this quick$"

Shadyguy_Text_2:
# 14 "data/maps/PalletTown/scripts.pory"
	.string "Pleasure doing business$"

Shadyguy_Text_3:
# 19 "data/maps/PalletTown/scripts.pory"
	.string "Then beat it.$"

PalletTown_EventScript_townsign_Text_0:
# 33 "data/maps/PalletTown/scripts.pory"
	.string "Pallet Town$"

PalletTown_Trigger_BlockPath1_Text_0:
# 39 "data/maps/PalletTown/scripts.pory"
	.string "You don't have a Pokemon yet$"

PalletTown_Trigger_BlockPath2_Text_0:
# 47 "data/maps/PalletTown/scripts.pory"
	.string "You need a Pokemon to heal it...$"

trainerintro::
# 75 "data/maps/PalletTown/scripts.pory"
	.string "...$"

traineroutro::
# 79 "data/maps/PalletTown/scripts.pory"
	.string "...$"

postbattletrainer::
# 82 "data/maps/PalletTown/scripts.pory"
	.string "I'm mute, leave me alone...$"
