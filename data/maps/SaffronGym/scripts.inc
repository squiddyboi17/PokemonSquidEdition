SaffronGym_MapScripts::
	.byte 0


SaffronGym_EventScript_LeaderBous::
# 6 "data/maps/SaffronGym/scripts.pory"
	compare SaffronGymState, 0
	goto_if_eq SaffronGym_EventScript_LeaderBous_1
# 57 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 58 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_1:
# 7 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq SaffronGym_EventScript_LeaderBous_4
# 13 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq SaffronGym_EventScript_LeaderBous_5
# 19 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq SaffronGym_EventScript_LeaderBous_6
# 25 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq SaffronGym_EventScript_LeaderBous_7
# 31 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq SaffronGym_EventScript_LeaderBous_8
# 37 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq SaffronGym_EventScript_LeaderBous_9
# 43 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq SaffronGym_EventScript_LeaderBous_10
# 49 "data/maps/SaffronGym/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq SaffronGym_EventScript_LeaderBous_11
	return

SaffronGym_EventScript_LeaderBous_4:
# 8 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 9 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 10 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_5:
# 14 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 15 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 16 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_6:
# 20 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 21 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 22 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_7:
# 26 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 27 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 28 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_8:
# 32 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 33 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 34 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_9:
# 38 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 39 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 40 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_10:
# 44 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 45 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 46 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_LeaderBous_11:
# 50 "data/maps/SaffronGym/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, LeaderBous_intro, LeaderBous_outro, SaffronGym_EventScript_LeaderBous_defeat, music = FALSE
# 51 "data/maps/SaffronGym/scripts.pory"
	msgbox LeaderBous_idle, MSGBOX_DEFAULT
# 52 "data/maps/SaffronGym/scripts.pory"
	release
	end


SaffronGym_EventScript_LeaderBous_defeat::
# 67 "data/maps/SaffronGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 68 "data/maps/SaffronGym/scripts.pory"
	msgbox receivedghostbadge
# 69 "data/maps/SaffronGym/scripts.pory"
	waitfanfare
# 70 "data/maps/SaffronGym/scripts.pory"
	waitmessage
# 71 "data/maps/SaffronGym/scripts.pory"
	msgbox ghostbadgeinfo, MSGBOX_DEFAULT
# 72 "data/maps/SaffronGym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 73 "data/maps/SaffronGym/scripts.pory"
	addvar GymBadgeScaling, 1
# 74 "data/maps/SaffronGym/scripts.pory"
	setvar SaffronGymState, 1
# 75 "data/maps/SaffronGym/scripts.pory"
	goto SaffronGym_EventScript_GiveReward
	end


SaffronGym_EventScript_GiveReward::
# 79 "data/maps/SaffronGym/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 80 "data/maps/SaffronGym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronGym_EventScript_GiveReward_2
SaffronGym_EventScript_GiveReward_1:
# 83 "data/maps/SaffronGym/scripts.pory"
	msgbox SaffronGymExplainReward, MSGBOX_DEFAULT
# 84 "data/maps/SaffronGym/scripts.pory"
	release
	end

SaffronGym_EventScript_GiveReward_2:
# 81 "data/maps/SaffronGym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SaffronGym_EventScript_GiveReward_1


SaffronGymExplainReward::
# 88 "data/maps/SaffronGym/scripts.pory"
	.string "This is Shadow Ball.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

LeaderBous_intro::
# 96 "data/maps/SaffronGym/scripts.pory"
	.string "Hello, I'm Bous, the Saffron\n"
	.string "City Gym Leader.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

LeaderBous_outro::
# 106 "data/maps/SaffronGym/scripts.pory"
	.string "Oh shoot...$"

LeaderBous_defeat::
# 110 "data/maps/SaffronGym/scripts.pory"
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

receivedghostbadge::
# 124 "data/maps/SaffronGym/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from LeaderBous_.$"

ghostbadgeinfo::
# 129 "data/maps/SaffronGym/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"

LeaderBous_idle::
# 135 "data/maps/SaffronGym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
