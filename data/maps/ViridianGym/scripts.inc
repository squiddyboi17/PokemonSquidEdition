ViridianGym_MapScripts::
	.byte 0


ViridianGym_EventScript_LeaderAndrew::
# 7 "data/maps/ViridianGym/scripts.pory"
	compare ViridianGymState, 0
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_1
# 58 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 59 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_1:
# 8 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_4
# 14 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_5
# 20 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_6
# 26 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_7
# 32 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_8
# 38 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_9
# 44 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_10
# 50 "data/maps/ViridianGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq ViridianGym_EventScript_LeaderAndrew_11
	return

ViridianGym_EventScript_LeaderAndrew_4:
# 9 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 10 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 11 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_5:
# 15 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 16 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 17 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_6:
# 21 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 22 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 23 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_7:
# 27 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 28 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 29 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_8:
# 33 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 34 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 35 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_9:
# 39 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 40 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 41 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_10:
# 45 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 46 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 47 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_LeaderAndrew_11:
# 51 "data/maps/ViridianGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderAndrew_intro, LeaderAndrew_outro, ViridianGym_EventScript_LeaderAndrew_defeat, music = TRUE
# 52 "data/maps/ViridianGym/scripts.pory"
	msgbox LeaderAndrew_idle, MSGBOX_DEFAULT
# 53 "data/maps/ViridianGym/scripts.pory"
	release
	end


ViridianGym_EventScript_LeaderAndrew_defeat::
# 68 "data/maps/ViridianGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 69 "data/maps/ViridianGym/scripts.pory"
	msgbox receivedgrassbadge
# 70 "data/maps/ViridianGym/scripts.pory"
	waitfanfare
# 71 "data/maps/ViridianGym/scripts.pory"
	waitmessage
# 72 "data/maps/ViridianGym/scripts.pory"
	msgbox grassbadgeinfo, MSGBOX_DEFAULT
# 73 "data/maps/ViridianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 74 "data/maps/ViridianGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 75 "data/maps/ViridianGym/scripts.pory"
	setvar ViridianGymState, 1
# 76 "data/maps/ViridianGym/scripts.pory"
	goto ViridianGym_EventScript_GiveReward
	end


ViridianGym_EventScript_GiveReward::
# 80 "data/maps/ViridianGym/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 81 "data/maps/ViridianGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ViridianGym_EventScript_GiveReward_2
ViridianGym_EventScript_GiveReward_1:
# 84 "data/maps/ViridianGym/scripts.pory"
	msgbox ViridianGymExplainReward, MSGBOX_DEFAULT
# 85 "data/maps/ViridianGym/scripts.pory"
	release
	end

ViridianGym_EventScript_GiveReward_2:
# 82 "data/maps/ViridianGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ViridianGym_EventScript_GiveReward_1


ViridianGymExplainReward::
# 89 "data/maps/ViridianGym/scripts.pory"
	.string "This is Giga drain.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderAndrew_intro::
# 97 "data/maps/ViridianGym/scripts.pory"
	.string "Hello, I'm Dew, the Viridian\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderAndrew_outro::
# 107 "data/maps/ViridianGym/scripts.pory"
	.string "Oh shoot...$"

LeaderAndrew_defeat::
# 111 "data/maps/ViridianGym/scripts.pory"
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

receivedgrassbadge::
# 125 "data/maps/ViridianGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderAndrew_.$"

grassbadgeinfo::
# 130 "data/maps/ViridianGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderAndrew_idle::
# 136 "data/maps/ViridianGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
