FuchsiaGym_MapScripts::
	.byte 0


FuchsiaGym_EventScript_LeaderAleks::
# 6 "data/maps/FuchsiaGym/scripts.pory"
	compare FuchsiaGymState, 0
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_1
# 57 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 58 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_1:
# 7 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_4
# 13 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_5
# 19 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_6
# 25 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_7
# 31 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_8
# 37 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_9
# 43 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_10
# 49 "data/maps/FuchsiaGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq FuchsiaGym_EventScript_LeaderAleks_11
	return

FuchsiaGym_EventScript_LeaderAleks_4:
# 8 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 9 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 10 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_5:
# 14 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 15 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 16 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_6:
# 20 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 21 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 22 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_7:
# 26 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 27 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 28 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_8:
# 32 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 33 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 34 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_9:
# 38 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 39 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 40 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_10:
# 44 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 45 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 46 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_LeaderAleks_11:
# 50 "data/maps/FuchsiaGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderAleks_intro, LeaderAleks_outro, FuchsiaGym_EventScript_LeaderAleks_defeat, music = FALSE
# 51 "data/maps/FuchsiaGym/scripts.pory"
	msgbox LeaderAleks_idle, MSGBOX_DEFAULT
# 52 "data/maps/FuchsiaGym/scripts.pory"
	release
	end


FuchsiaGym_EventScript_LeaderAleks_defeat::
# 67 "data/maps/FuchsiaGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/FuchsiaGym/scripts.pory"
	msgbox receiveddarkbadge
# 69 "data/maps/FuchsiaGym/scripts.pory"
	waitfanfare
# 70 "data/maps/FuchsiaGym/scripts.pory"
	waitmessage
# 71 "data/maps/FuchsiaGym/scripts.pory"
	msgbox darkbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/FuchsiaGym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 73 "data/maps/FuchsiaGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/FuchsiaGym/scripts.pory"
	setvar FuchsiaGymState, 1
# 75 "data/maps/FuchsiaGym/scripts.pory"
	goto FuchsiaGym_EventScript_GiveReward
	end


FuchsiaGym_EventScript_GiveReward::
# 79 "data/maps/FuchsiaGym/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 80 "data/maps/FuchsiaGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FuchsiaGym_EventScript_GiveReward_2
FuchsiaGym_EventScript_GiveReward_1:
# 83 "data/maps/FuchsiaGym/scripts.pory"
	msgbox FuchsiaGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/FuchsiaGym/scripts.pory"
	release
	end

FuchsiaGym_EventScript_GiveReward_2:
# 81 "data/maps/FuchsiaGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FuchsiaGym_EventScript_GiveReward_1


FuchsiaGymExplainReward::
# 88 "data/maps/FuchsiaGym/scripts.pory"
	.string "This is Giga drain.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderAleks_intro::
# 96 "data/maps/FuchsiaGym/scripts.pory"
	.string "Hello, I'm Bree, the Pewter\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderAleks_outro::
# 106 "data/maps/FuchsiaGym/scripts.pory"
	.string "Oh shoot...$"

LeaderAleks_defeat::
# 110 "data/maps/FuchsiaGym/scripts.pory"
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The POKéMON LEAGUE's rules state\n"
	.string "that TRAINERS are to be given this\l"
	.string "if they defeat a GYM LEADER.\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE STONE BADGE.$"

receiveddarkbadge::
# 124 "data/maps/FuchsiaGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderAleks_.$"

darkbadgeinfo::
# 129 "data/maps/FuchsiaGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderAleks_idle::
# 135 "data/maps/FuchsiaGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
