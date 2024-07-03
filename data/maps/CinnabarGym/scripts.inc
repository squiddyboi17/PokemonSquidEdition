CinnabarGym_MapScripts::
	.byte 0


CinnabarGym_EventScript_LeaderNeenee::
# 6 "data/maps/CinnabarGym/scripts.pory"
	compare CinnabarGymState, 0
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_1
# 57 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 58 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_1:
# 7 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_4
# 13 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_5
# 19 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_6
# 25 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_7
# 31 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_8
# 37 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_9
# 43 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_10
# 49 "data/maps/CinnabarGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq CinnabarGym_EventScript_LeaderNeenee_11
	return

CinnabarGym_EventScript_LeaderNeenee_4:
# 8 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 9 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 10 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_5:
# 14 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 15 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 16 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_6:
# 20 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 21 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 22 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_7:
# 26 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 27 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 28 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_8:
# 32 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 33 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 34 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_9:
# 38 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 39 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 40 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_10:
# 44 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 45 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 46 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_LeaderNeenee_11:
# 50 "data/maps/CinnabarGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderNeenee_intro, LeaderNeenee_outro, CinnabarGym_EventScript_LeaderNeenee_defeat, music = FALSE
# 51 "data/maps/CinnabarGym/scripts.pory"
	msgbox LeaderNeenee_idle, MSGBOX_DEFAULT
# 52 "data/maps/CinnabarGym/scripts.pory"
	release
	end


CinnabarGym_EventScript_LeaderNeenee_defeat::
# 67 "data/maps/CinnabarGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/CinnabarGym/scripts.pory"
	msgbox receivedfirebadge
# 69 "data/maps/CinnabarGym/scripts.pory"
	waitfanfare
# 70 "data/maps/CinnabarGym/scripts.pory"
	waitmessage
# 71 "data/maps/CinnabarGym/scripts.pory"
	msgbox firebadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/CinnabarGym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 73 "data/maps/CinnabarGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/CinnabarGym/scripts.pory"
	setvar CinnabarGymState, 1
# 75 "data/maps/CinnabarGym/scripts.pory"
	goto CinnabarGym_EventScript_GiveReward
	end


CinnabarGym_EventScript_GiveReward::
# 79 "data/maps/CinnabarGym/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 80 "data/maps/CinnabarGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CinnabarGym_EventScript_GiveReward_2
CinnabarGym_EventScript_GiveReward_1:
# 83 "data/maps/CinnabarGym/scripts.pory"
	msgbox CinnabarGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/CinnabarGym/scripts.pory"
	release
	end

CinnabarGym_EventScript_GiveReward_2:
# 81 "data/maps/CinnabarGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto CinnabarGym_EventScript_GiveReward_1


CinnabarGymExplainReward::
# 88 "data/maps/CinnabarGym/scripts.pory"
	.string "This is Giga drain.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderNeenee_intro::
# 96 "data/maps/CinnabarGym/scripts.pory"
	.string "Hello, I'm Bree, the Pewter\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderNeenee_outro::
# 106 "data/maps/CinnabarGym/scripts.pory"
	.string "Oh shoot...$"

LeaderNeenee_defeat::
# 110 "data/maps/CinnabarGym/scripts.pory"
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

receivedfirebadge::
# 124 "data/maps/CinnabarGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderNeenee_.$"

firebadgeinfo::
# 129 "data/maps/CinnabarGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderNeenee_idle::
# 135 "data/maps/CinnabarGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
