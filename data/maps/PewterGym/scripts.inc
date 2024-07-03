PewterGym_MapScripts::
	.byte 0


PewterGym_EventScript_LeaderBree::
# 6 "data/maps/PewterGym/scripts.pory"
	compare PewterGymState, 0
	goto_if_eq PewterGym_EventScript_LeaderBree_1
# 57 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 58 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_1:
# 7 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq PewterGym_EventScript_LeaderBree_4
# 13 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq PewterGym_EventScript_LeaderBree_5
# 19 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq PewterGym_EventScript_LeaderBree_6
# 25 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq PewterGym_EventScript_LeaderBree_7
# 31 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq PewterGym_EventScript_LeaderBree_8
# 37 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq PewterGym_EventScript_LeaderBree_9
# 43 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq PewterGym_EventScript_LeaderBree_10
# 49 "data/maps/PewterGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq PewterGym_EventScript_LeaderBree_11
	return

PewterGym_EventScript_LeaderBree_4:
# 8 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 9 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 10 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_5:
# 14 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 15 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 16 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_6:
# 20 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 21 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 22 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_7:
# 26 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 27 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 28 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_8:
# 32 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 33 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 34 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_9:
# 38 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 39 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 40 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_10:
# 44 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 45 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 46 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_LeaderBree_11:
# 50 "data/maps/PewterGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderBree_intro, LeaderBree_outro, PewterGym_EventScript_LeaderBree_defeat, music = FALSE
# 51 "data/maps/PewterGym/scripts.pory"
	msgbox LeaderBree_idle, MSGBOX_DEFAULT
# 52 "data/maps/PewterGym/scripts.pory"
	release
	end


PewterGym_EventScript_LeaderBree_defeat::
# 67 "data/maps/PewterGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/PewterGym/scripts.pory"
	msgbox receivedgroundbadge
# 69 "data/maps/PewterGym/scripts.pory"
	waitfanfare
# 70 "data/maps/PewterGym/scripts.pory"
	waitmessage
# 71 "data/maps/PewterGym/scripts.pory"
	msgbox Groundbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/PewterGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 73 "data/maps/PewterGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/PewterGym/scripts.pory"
	setvar PewterGymState, 1
# 75 "data/maps/PewterGym/scripts.pory"
	goto PewterGym_EventScript_GiveReward
	end


PewterGym_EventScript_GiveReward::
# 79 "data/maps/PewterGym/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 80 "data/maps/PewterGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PewterGym_EventScript_GiveReward_2
PewterGym_EventScript_GiveReward_1:
# 83 "data/maps/PewterGym/scripts.pory"
	msgbox PewterGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/PewterGym/scripts.pory"
	release
	end

PewterGym_EventScript_GiveReward_2:
# 81 "data/maps/PewterGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PewterGym_EventScript_GiveReward_1


PewterGymExplainReward::
# 88 "data/maps/PewterGym/scripts.pory"
	.string "This is Giga drain.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderBree_intro::
# 96 "data/maps/PewterGym/scripts.pory"
	.string "Hello, I'm Bree, the Pewter\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderBree_outro::
# 106 "data/maps/PewterGym/scripts.pory"
	.string "Oh shoot...$"

LeaderBree_defeat::
# 110 "data/maps/PewterGym/scripts.pory"
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

receivedgroundbadge::
# 124 "data/maps/PewterGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderBree_.$"

Groundbadgeinfo::
# 129 "data/maps/PewterGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderBree_idle::
# 135 "data/maps/PewterGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
