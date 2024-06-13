PalletTown_MapScripts::
	.byte 0


PalletTown_EventScript_townsign::
# 7 "data/maps/PalletTown/scripts.pory"
	lockall
# 8 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_townsign_Text_0
# 9 "data/maps/PalletTown/scripts.pory"
	releaseall
	return


firstbattlesetup::
# 13 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball1, firstbattlesetup_3
firstbattlesetup_2:
# 17 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_UNUSED_0x023
	return

firstbattlesetup_1:
# 14 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_UNUSED_0x023
	return

firstbattlesetup_3:
# 13 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball2, firstbattlesetup_5
	goto firstbattlesetup_2

firstbattlesetup_5:
# 13 "data/maps/PalletTown/scripts.pory"
	goto_if_unset starterball3, firstbattlesetup_1
	goto firstbattlesetup_2


firstbattletest::
# 22 "data/maps/PalletTown/scripts.pory"
	trainerbattle_single TRAINER_RED, trainerintro, traineroutro
# 23 "data/maps/PalletTown/scripts.pory"
	msgbox postbattletrainer, MSGBOX_AUTOCLOSE
	end


PalletTown_EventScript_townsign_Text_0:
# 8 "data/maps/PalletTown/scripts.pory"
	.string "Pallet Town$"

trainerintro::
# 26 "data/maps/PalletTown/scripts.pory"
	.string "...$"

traineroutro::
# 30 "data/maps/PalletTown/scripts.pory"
	.string "...$"

postbattletrainer::
# 33 "data/maps/PalletTown/scripts.pory"
	.string "I'm mute, leave me alone...$"
