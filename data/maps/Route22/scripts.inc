Route22_MapScripts::
	.byte 0


Startgameoutside_trigger_blockpath1::
# 8 "data/maps/Route22/scripts.pory"
	lockall
# 9 "data/maps/Route22/scripts.pory"
	msgbox Startgameoutside_trigger_blockpath1_Text_0
# 10 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopOutsidePlayerStart1
# 11 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route22/scripts.pory"
	releaseall
	return


Startgameoutside_trigger_blockpath2::
# 16 "data/maps/Route22/scripts.pory"
	lockall
# 17 "data/maps/Route22/scripts.pory"
	msgbox Startgameoutside_trigger_blockpath1_Text_0
# 18 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopOutsidePlayerStart2
# 19 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route22/scripts.pory"
	releaseall
	return


Startgameoutside_trigger_blockpath3::
# 24 "data/maps/Route22/scripts.pory"
	lockall
# 25 "data/maps/Route22/scripts.pory"
	msgbox Startgameoutside_trigger_blockpath1_Text_0
# 26 "data/maps/Route22/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopOutsidePlayerStart3
# 27 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route22/scripts.pory"
	releaseall
	return


# 31 "data/maps/Route22/scripts.pory"
StopOutsidePlayerStart1:
# 32 "data/maps/Route22/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/Route22/scripts.pory"
StopOutsidePlayerStart2:
# 36 "data/maps/Route22/scripts.pory"
	walk_right
	step_end

# 39 "data/maps/Route22/scripts.pory"
StopOutsidePlayerStart3:
# 40 "data/maps/Route22/scripts.pory"
	walk_left
	step_end

Shadyguy::
# 44 "data/maps/Route22/scripts.pory"
	lock
# 45 "data/maps/Route22/scripts.pory"
	faceplayer
# 46 "data/maps/Route22/scripts.pory"
	msgbox Shadyguy_Text_0, MSGBOX_YESNO
# 47 "data/maps/Route22/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Shadyguy_1
# 56 "data/maps/Route22/scripts.pory"
	msgbox Shadyguy_Text_3, MSGBOX_NPC
	return

Shadyguy_1:
# 48 "data/maps/Route22/scripts.pory"
	message Shadyguy_Text_1
# 49 "data/maps/Route22/scripts.pory"
	waitmessage
# 50 "data/maps/Route22/scripts.pory"
	pokemart strangemanmart
# 51 "data/maps/Route22/scripts.pory"
	msgbox Shadyguy_Text_2
# 52 "data/maps/Route22/scripts.pory"
	release
	end


	.align 2
# 60 "data/maps/Route22/scripts.pory"
strangemanmart:
# 61 "data/maps/Route22/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 62 "data/maps/Route22/scripts.pory"
	.2byte ITEM_MEGA_RING
# 63 "data/maps/Route22/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 64 "data/maps/Route22/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 65 "data/maps/Route22/scripts.pory"
	.2byte ITEM_ACRO_BIKE
	.2byte ITEM_NONE

singlebattletest1::
# 69 "data/maps/Route22/scripts.pory"
	trainerbattle_single TRAINER_Route22_1, singlebattleintro1, singlebattleoutro1
# 70 "data/maps/Route22/scripts.pory"
	msgbox singlebattleidle1, MSGBOX_AUTOCLOSE
	end


singlebattletest2::
# 75 "data/maps/Route22/scripts.pory"
	trainerbattle_single TRAINER_Route22_2, singlebattleintro1, singlebattleoutro1
# 76 "data/maps/Route22/scripts.pory"
	msgbox singlebattleidle2, MSGBOX_AUTOCLOSE
	end


singlebattletest3::
# 81 "data/maps/Route22/scripts.pory"
	trainerbattle_single TRAINER_Route22_3, singlebattleintro1, singlebattleoutro1
# 82 "data/maps/Route22/scripts.pory"
	msgbox singlebattleidle3, MSGBOX_AUTOCLOSE
	end


singlebattletest4::
# 87 "data/maps/Route22/scripts.pory"
	trainerbattle_single TRAINER_Route22_4, singlebattleintro1, singlebattleoutro1
# 88 "data/maps/Route22/scripts.pory"
	msgbox singlebattleidle4, MSGBOX_AUTOCLOSE
	end


Startgameoutside_trigger_blockpath1_Text_0:
# 9 "data/maps/Route22/scripts.pory"
	.string "I should see why I was sent here$"

Shadyguy_Text_0:
# 46 "data/maps/Route22/scripts.pory"
	.string "...You a narc?$"

Shadyguy_Text_1:
# 48 "data/maps/Route22/scripts.pory"
	.string "Good... lets make this quick$"

Shadyguy_Text_2:
# 51 "data/maps/Route22/scripts.pory"
	.string "Aye, pleasure doin business$"

Shadyguy_Text_3:
# 56 "data/maps/Route22/scripts.pory"
	.string "Then beat it.$"

singlebattleintro1::
# 92 "data/maps/Route22/scripts.pory"
	.string "Single Battle Intro!$"

singlebattleoutro1::
# 96 "data/maps/Route22/scripts.pory"
	.string "Single Battle Outro!$"

singlebattleidle1::
# 99 "data/maps/Route22/scripts.pory"
	.string "Single Battle Idle Message$"

singlebattleintro2::
# 103 "data/maps/Route22/scripts.pory"
	.string "Single Battle Intro!$"

singlebattleoutro2::
# 107 "data/maps/Route22/scripts.pory"
	.string "Single Battle Outro!$"

singlebattleidle2::
# 110 "data/maps/Route22/scripts.pory"
	.string "Single Battle Idle Message$"

singlebattleintro3::
# 114 "data/maps/Route22/scripts.pory"
	.string "Single Battle Intro!$"

singlebattleoutro3::
# 118 "data/maps/Route22/scripts.pory"
	.string "Single Battle Outro!$"

singlebattleidle3::
# 121 "data/maps/Route22/scripts.pory"
	.string "Single Battle Idle Message$"

singlebattleintro4::
# 125 "data/maps/Route22/scripts.pory"
	.string "Single Battle Intro!$"

singlebattleoutro4::
# 129 "data/maps/Route22/scripts.pory"
	.string "Single Battle Outro!$"

singlebattleidle4::
# 132 "data/maps/Route22/scripts.pory"
	.string "Single Battle Idle Message$"
