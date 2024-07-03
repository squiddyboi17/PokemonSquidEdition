CeladonGym_MapScripts::
	.byte 0


CeladonGym_EventScript_LeaderNick::
# 6 "data/maps/CeladonGym/scripts.pory"
	compare CeladonGymState, 0
	goto_if_eq CeladonGym_EventScript_LeaderNick_1
# 57 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 58 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_1:
# 7 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq CeladonGym_EventScript_LeaderNick_4
# 13 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq CeladonGym_EventScript_LeaderNick_5
# 19 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq CeladonGym_EventScript_LeaderNick_6
# 25 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq CeladonGym_EventScript_LeaderNick_7
# 31 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq CeladonGym_EventScript_LeaderNick_8
# 37 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq CeladonGym_EventScript_LeaderNick_9
# 43 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq CeladonGym_EventScript_LeaderNick_10
# 49 "data/maps/CeladonGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq CeladonGym_EventScript_LeaderNick_11
	return

CeladonGym_EventScript_LeaderNick_4:
# 8 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 9 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 10 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_5:
# 14 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 15 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 16 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_6:
# 20 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 21 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 22 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_7:
# 26 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 27 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 28 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_8:
# 32 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 33 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 34 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_9:
# 38 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 39 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 40 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_10:
# 44 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 45 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 46 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_LeaderNick_11:
# 50 "data/maps/CeladonGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderNick_intro, LeaderNick_outro, CeladonGym_EventScript_LeaderNick_defeat, music = FALSE
# 51 "data/maps/CeladonGym/scripts.pory"
	msgbox LeaderNick_idle, MSGBOX_DEFAULT
# 52 "data/maps/CeladonGym/scripts.pory"
	release
	end


CeladonGym_EventScript_LeaderNick_defeat::
# 67 "data/maps/CeladonGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/CeladonGym/scripts.pory"
	msgbox receivedsteelbadge
# 69 "data/maps/CeladonGym/scripts.pory"
	waitfanfare
# 70 "data/maps/CeladonGym/scripts.pory"
	waitmessage
# 71 "data/maps/CeladonGym/scripts.pory"
	msgbox steelbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/CeladonGym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 73 "data/maps/CeladonGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/CeladonGym/scripts.pory"
	setvar CeladonGymState, 1
# 75 "data/maps/CeladonGym/scripts.pory"
	goto CeladonGym_EventScript_GiveReward
	end


CeladonGym_EventScript_GiveReward::
# 79 "data/maps/CeladonGym/scripts.pory"
	giveitem ITEM_TM_IRON_TAIL
# 80 "data/maps/CeladonGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonGym_EventScript_GiveReward_2
CeladonGym_EventScript_GiveReward_1:
# 83 "data/maps/CeladonGym/scripts.pory"
	msgbox CeladonGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/CeladonGym/scripts.pory"
	release
	end

CeladonGym_EventScript_GiveReward_2:
# 81 "data/maps/CeladonGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto CeladonGym_EventScript_GiveReward_1


CeladonGymExplainReward::
# 88 "data/maps/CeladonGym/scripts.pory"
	.string "This is Iron Tail.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderNick_intro::
# 96 "data/maps/CeladonGym/scripts.pory"
	.string "Hello, I'm King, the Celadon\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderNick_outro::
# 106 "data/maps/CeladonGym/scripts.pory"
	.string "Oh shoot...$"

LeaderNick_defeat::
# 110 "data/maps/CeladonGym/scripts.pory"
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

receivedsteelbadge::
# 124 "data/maps/CeladonGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderNick_.$"

steelbadgeinfo::
# 129 "data/maps/CeladonGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderNick_idle::
# 135 "data/maps/CeladonGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
