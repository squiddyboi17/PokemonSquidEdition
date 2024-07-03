VermillionGym_MapScripts::
	.byte 0


VermillionGym_EventScript_LeaderJavier::
# 6 "data/maps/VermillionGym/scripts.pory"
	compare VermillionGymState, 0
	goto_if_eq VermillionGym_EventScript_LeaderJavier_1
# 57 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 58 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_1:
# 7 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq VermillionGym_EventScript_LeaderJavier_4
# 13 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq VermillionGym_EventScript_LeaderJavier_5
# 19 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq VermillionGym_EventScript_LeaderJavier_6
# 25 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq VermillionGym_EventScript_LeaderJavier_7
# 31 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq VermillionGym_EventScript_LeaderJavier_8
# 37 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq VermillionGym_EventScript_LeaderJavier_9
# 43 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq VermillionGym_EventScript_LeaderJavier_10
# 49 "data/maps/VermillionGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq VermillionGym_EventScript_LeaderJavier_11
	return

VermillionGym_EventScript_LeaderJavier_4:
# 8 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 9 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 10 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_5:
# 14 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 15 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 16 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_6:
# 20 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 21 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 22 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_7:
# 26 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 27 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 28 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_8:
# 32 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 33 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 34 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_9:
# 38 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 39 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 40 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_10:
# 44 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 45 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 46 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_LeaderJavier_11:
# 50 "data/maps/VermillionGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderJavier_intro, LeaderJavier_outro, VermillionGym_EventScript_LeaderJavier_defeat, music = FALSE
# 51 "data/maps/VermillionGym/scripts.pory"
	msgbox LeaderJavier_idle, MSGBOX_DEFAULT
# 52 "data/maps/VermillionGym/scripts.pory"
	release
	end


VermillionGym_EventScript_LeaderJavier_defeat::
# 67 "data/maps/VermillionGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/VermillionGym/scripts.pory"
	msgbox receivedwaterbadge
# 69 "data/maps/VermillionGym/scripts.pory"
	waitfanfare
# 70 "data/maps/VermillionGym/scripts.pory"
	waitmessage
# 71 "data/maps/VermillionGym/scripts.pory"
	msgbox waterbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/VermillionGym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 73 "data/maps/VermillionGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/VermillionGym/scripts.pory"
	setvar VermillionGymState, 1
# 75 "data/maps/VermillionGym/scripts.pory"
	goto VermillionGym_EventScript_GiveReward
	end


VermillionGym_EventScript_GiveReward::
# 79 "data/maps/VermillionGym/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 80 "data/maps/VermillionGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermillionGym_EventScript_GiveReward_2
VermillionGym_EventScript_GiveReward_1:
# 83 "data/maps/VermillionGym/scripts.pory"
	msgbox VermillionGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/VermillionGym/scripts.pory"
	release
	end

VermillionGym_EventScript_GiveReward_2:
# 81 "data/maps/VermillionGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto VermillionGym_EventScript_GiveReward_1


VermillionGymExplainReward::
# 88 "data/maps/VermillionGym/scripts.pory"
	.string "This is Water Pulse.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderJavier_intro::
# 96 "data/maps/VermillionGym/scripts.pory"
	.string "Hello, I'm Javier, the Vermillion\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderJavier_outro::
# 106 "data/maps/VermillionGym/scripts.pory"
	.string "Oh shoot...$"

LeaderJavier_defeat::
# 110 "data/maps/VermillionGym/scripts.pory"
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

receivedwaterbadge::
# 124 "data/maps/VermillionGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderJavier_.$"

waterbadgeinfo::
# 129 "data/maps/VermillionGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderJavier_idle::
# 135 "data/maps/VermillionGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
