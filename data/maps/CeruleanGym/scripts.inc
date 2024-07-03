CeruleanGym_MapScripts::
	.byte 0


CeruleanGym_EventScript_LeaderDevin::
# 6 "data/maps/CeruleanGym/scripts.pory"
	compare CeruleanGymState, 0
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_1
# 57 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 58 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_1:
# 7 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_4
# 13 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_5
# 19 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_6
# 25 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_7
# 31 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_8
# 37 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_9
# 43 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_10
# 49 "data/maps/CeruleanGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq CeruleanGym_EventScript_LeaderDevin_11
	return

CeruleanGym_EventScript_LeaderDevin_4:
# 8 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 9 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 10 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_5:
# 14 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 15 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 16 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_6:
# 20 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 21 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 22 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_7:
# 26 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 27 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 28 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_8:
# 32 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 33 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 34 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_9:
# 38 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 39 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 40 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_10:
# 44 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 45 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 46 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_LeaderDevin_11:
# 50 "data/maps/CeruleanGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderDevin_intro, LeaderDevin_outro, CeruleanGym_EventScript_LeaderDevin_defeat, music = FALSE
# 51 "data/maps/CeruleanGym/scripts.pory"
	msgbox LeaderDevin_idle, MSGBOX_DEFAULT
# 52 "data/maps/CeruleanGym/scripts.pory"
	release
	end


CeruleanGym_EventScript_LeaderDevin_defeat::
# 67 "data/maps/CeruleanGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/CeruleanGym/scripts.pory"
	msgbox receivedthunderbadge
# 69 "data/maps/CeruleanGym/scripts.pory"
	waitfanfare
# 70 "data/maps/CeruleanGym/scripts.pory"
	waitmessage
# 71 "data/maps/CeruleanGym/scripts.pory"
	msgbox thunderbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/CeruleanGym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 73 "data/maps/CeruleanGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/CeruleanGym/scripts.pory"
	setvar CeruleanGymState, 1
# 75 "data/maps/CeruleanGym/scripts.pory"
	goto CeruleanGym_EventScript_GiveReward
	end


CeruleanGym_EventScript_GiveReward::
# 79 "data/maps/CeruleanGym/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 80 "data/maps/CeruleanGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanGym_EventScript_GiveReward_2
CeruleanGym_EventScript_GiveReward_1:
# 83 "data/maps/CeruleanGym/scripts.pory"
	msgbox CeruleanGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/CeruleanGym/scripts.pory"
	release
	end

CeruleanGym_EventScript_GiveReward_2:
# 81 "data/maps/CeruleanGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto CeruleanGym_EventScript_GiveReward_1


CeruleanGymExplainReward::
# 88 "data/maps/CeruleanGym/scripts.pory"
	.string "This is Thunderbolt.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderDevin_intro::
# 96 "data/maps/CeruleanGym/scripts.pory"
	.string "Hello, I'm HAPPe, the Cerulean\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderDevin_outro::
# 106 "data/maps/CeruleanGym/scripts.pory"
	.string "Oh shoot...$"

LeaderDevin_defeat::
# 110 "data/maps/CeruleanGym/scripts.pory"
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

receivedthunderbadge::
# 124 "data/maps/CeruleanGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderDevin_.$"

thunderbadgeinfo::
# 129 "data/maps/CeruleanGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderDevin_idle::
# 135 "data/maps/CeruleanGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
