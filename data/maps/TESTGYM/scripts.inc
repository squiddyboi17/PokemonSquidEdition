TESTGYM_MapScripts::
	.byte 0


TestGymFrontDesk::
# 6 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 0
	goto_if_eq TestGymFrontDesk_1
# 31 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 2
	goto_if_eq TestGymFrontDesk_2
# 56 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_8
# 57 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_1:
# 7 "data/maps/TESTGYM/scripts.pory"
	lock
# 8 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_0, MSGBOX_YESNO
# 9 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestGymFrontDesk_6
# 26 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_4
# 27 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_2:
# 32 "data/maps/TESTGYM/scripts.pory"
	lock
# 33 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_5, MSGBOX_YESNO
# 34 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestGymFrontDesk_9
# 50 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_4
# 51 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_6:
# 10 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_1, MSGBOX_YESNO
# 11 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestGymFrontDesk_12
# 18 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 0
# 19 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_3
# 20 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_9:
# 35 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_6, MSGBOX_YESNO
# 36 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestGymFrontDesk_15
# 43 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 3
# 44 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_7
# 45 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_12:
# 12 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 1
# 13 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_2
# 14 "data/maps/TESTGYM/scripts.pory"
	release
	end

TestGymFrontDesk_15:
# 37 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 4
# 38 "data/maps/TESTGYM/scripts.pory"
	msgbox TestGymFrontDesk_Text_2
# 39 "data/maps/TESTGYM/scripts.pory"
	release
	end


TESTGYM_EventScript_GymLeader1::
# 64 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 0
	goto_if_eq TESTGYM_EventScript_GymLeader1_1
# 113 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 1
	goto_if_eq TESTGYM_EventScript_GymLeader1_2
# 163 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 3
	goto_if_eq TESTGYM_EventScript_GymLeader1_3
# 208 "data/maps/TESTGYM/scripts.pory"
	compare TestGymState1, 4
	goto_if_eq TESTGYM_EventScript_GymLeader1_4
# 255 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 256 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_1:
# 65 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq TESTGYM_EventScript_GymLeader1_11
# 71 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq TESTGYM_EventScript_GymLeader1_12
# 77 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq TESTGYM_EventScript_GymLeader1_31
# 83 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq TESTGYM_EventScript_GymLeader1_32
# 89 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq TESTGYM_EventScript_GymLeader1_51
# 95 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq TESTGYM_EventScript_GymLeader1_52
# 101 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq TESTGYM_EventScript_GymLeader1_70
# 107 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq TESTGYM_EventScript_GymLeader1_71
	return

TESTGYM_EventScript_GymLeader1_2:
# 114 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq TESTGYM_EventScript_GymLeader1_16
# 120 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq TESTGYM_EventScript_GymLeader1_17
# 126 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq TESTGYM_EventScript_GymLeader1_36
# 132 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq TESTGYM_EventScript_GymLeader1_37
# 138 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq TESTGYM_EventScript_GymLeader1_56
# 144 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq TESTGYM_EventScript_GymLeader1_57
# 150 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq TESTGYM_EventScript_GymLeader1_74
# 156 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq TESTGYM_EventScript_GymLeader1_75
	return

TESTGYM_EventScript_GymLeader1_3:
# 164 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq TESTGYM_EventScript_GymLeader1_21
# 169 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq TESTGYM_EventScript_GymLeader1_22
# 175 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq TESTGYM_EventScript_GymLeader1_41
# 180 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq TESTGYM_EventScript_GymLeader1_42
# 186 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq TESTGYM_EventScript_GymLeader1_61
# 191 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq TESTGYM_EventScript_GymLeader1_62
# 197 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq TESTGYM_EventScript_GymLeader1_78
# 202 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq TESTGYM_EventScript_GymLeader1_79
	return

TESTGYM_EventScript_GymLeader1_4:
# 209 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 0
	goto_if_eq TESTGYM_EventScript_GymLeader1_26
# 214 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 1
	goto_if_eq TESTGYM_EventScript_GymLeader1_27
# 220 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 2
	goto_if_eq TESTGYM_EventScript_GymLeader1_46
# 225 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 3
	goto_if_eq TESTGYM_EventScript_GymLeader1_47
# 231 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 4
	goto_if_eq TESTGYM_EventScript_GymLeader1_66
# 236 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 5
	goto_if_eq TESTGYM_EventScript_GymLeader1_67
# 242 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 6
	goto_if_eq TESTGYM_EventScript_GymLeader1_82
# 247 "data/maps/TESTGYM/scripts.pory"
	compare GymBadgeScaling, 7
	goto_if_eq TESTGYM_EventScript_GymLeader1_83
	return

TESTGYM_EventScript_GymLeader1_11:
# 66 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 67 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 68 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_12:
# 72 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 73 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 74 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_16:
# 115 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 116 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 117 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_17:
# 121 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 122 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 123 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_21:
# 165 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 166 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 167 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_22:
# 170 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 171 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 172 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_26:
# 210 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 211 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 212 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_27:
# 215 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 216 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 217 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_31:
# 78 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 79 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 80 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_32:
# 84 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 85 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 86 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_36:
# 127 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 128 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 129 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_37:
# 133 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 134 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 135 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_41:
# 176 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 177 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 178 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_42:
# 181 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 182 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 183 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_46:
# 221 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 222 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 223 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_47:
# 226 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 227 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 228 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_51:
# 90 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 91 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 92 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_52:
# 96 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 97 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 98 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_56:
# 139 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 140 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 141 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_57:
# 145 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 146 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 147 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_61:
# 187 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 188 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 189 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_62:
# 192 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 193 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 194 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_66:
# 232 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 233 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 234 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_67:
# 237 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 238 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 239 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_70:
# 102 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 103 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 104 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_71:
# 108 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 109 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 110 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_74:
# 151 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 152 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 153 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_75:
# 157 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_2, GymLeader1intro, GymLeader1outro, TESTGYM_EventScript_GymLeader1defeat, music = TRUE
# 158 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeader1idle, MSGBOX_DEFAULT
# 159 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_78:
# 198 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 199 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 200 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_79:
# 203 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_3, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 204 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 205 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_82:
# 243 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 244 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 245 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GymLeader1_83:
# 248 "data/maps/TESTGYM/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_4, GymLeader1rematchintro, GymLeader1Rematachoutro, TESTGYM_EventScript_GymLeader1rematchdefeat, music = TRUE
# 249 "data/maps/TESTGYM/scripts.pory"
	msgbox GymLeaderrematch1idle, MSGBOX_DEFAULT
# 250 "data/maps/TESTGYM/scripts.pory"
	release
	end


TESTGYM_EventScript_GymLeader1defeat::
# 263 "data/maps/TESTGYM/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 264 "data/maps/TESTGYM/scripts.pory"
	msgbox receivedxbadge
# 265 "data/maps/TESTGYM/scripts.pory"
	waitfanfare
# 266 "data/maps/TESTGYM/scripts.pory"
	waitmessage
# 267 "data/maps/TESTGYM/scripts.pory"
	msgbox badge1info, MSGBOX_DEFAULT
# 268 "data/maps/TESTGYM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 269 "data/maps/TESTGYM/scripts.pory"
	addvar GymBadgeScaling, 1
# 270 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 2
# 271 "data/maps/TESTGYM/scripts.pory"
	goto TESTGYM_EventScript_GiveReward
	end


TESTGYM_EventScript_GymLeader1rematchdefeat::
# 276 "data/maps/TESTGYM/scripts.pory"
	setvar TestGymState1, 2
# 277 "data/maps/TESTGYM/scripts.pory"
	goto TESTGYM_EventScript_GiveReward2
	end


TESTGYM_EventScript_GiveReward::
# 282 "data/maps/TESTGYM/scripts.pory"
	giveitem ITEM_TM_DIG
# 283 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TESTGYM_EventScript_GiveReward_2
TESTGYM_EventScript_GiveReward_1:
# 286 "data/maps/TESTGYM/scripts.pory"
	msgbox TESTGYMExplainReward, MSGBOX_DEFAULT
# 287 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GiveReward_2:
# 284 "data/maps/TESTGYM/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto TESTGYM_EventScript_GiveReward_1


TESTGYM_EventScript_GiveReward2::
# 292 "data/maps/TESTGYM/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 293 "data/maps/TESTGYM/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TESTGYM_EventScript_GiveReward2_2
TESTGYM_EventScript_GiveReward2_1:
# 296 "data/maps/TESTGYM/scripts.pory"
	msgbox TESTGYMExplainReward2, MSGBOX_DEFAULT
# 297 "data/maps/TESTGYM/scripts.pory"
	release
	end

TESTGYM_EventScript_GiveReward2_2:
# 294 "data/maps/TESTGYM/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto TESTGYM_EventScript_GiveReward2_1


TestGymFrontDesk_Text_0:
# 8 "data/maps/TESTGYM/scripts.pory"
	.string "Are you here to take the Gym Challenge?$"

TestGymFrontDesk_Text_1:
# 10 "data/maps/TESTGYM/scripts.pory"
	.string "Will you face the Leader with a Double\n"
	.string "Battle?$"

TestGymFrontDesk_Text_2:
# 13 "data/maps/TESTGYM/scripts.pory"
	.string "Okay, great. You may enter now.$"

TestGymFrontDesk_Text_3:
# 19 "data/maps/TESTGYM/scripts.pory"
	.string "Okay, sounds good. You can go on ahead.$"

TestGymFrontDesk_Text_4:
# 26 "data/maps/TESTGYM/scripts.pory"
	.string "Oh... Well have a good day then!$"

TestGymFrontDesk_Text_5:
# 33 "data/maps/TESTGYM/scripts.pory"
	.string "Ah! Back for a Rematch huh?$"

TestGymFrontDesk_Text_6:
# 35 "data/maps/TESTGYM/scripts.pory"
	.string "Face the Leader in a Double Battle?$"

TestGymFrontDesk_Text_7:
# 44 "data/maps/TESTGYM/scripts.pory"
	.string "Okay, sounds good. you can go on ahead.$"

TestGymFrontDesk_Text_8:
# 56 "data/maps/TESTGYM/scripts.pory"
	.string "Oh... Well good luck to you!$"

GymLeader1intro::
# 301 "data/maps/TESTGYM/scripts.pory"
	.string "Hello, I am GYM_LEADER, the _TOWNNAME_\n"
	.string "CITY GYM LEADER.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

GymLeader1rematchintro::
# 311 "data/maps/TESTGYM/scripts.pory"
	.string "Hey, You're back! You here for a rematch?$"

GymLeader1outro::
# 315 "data/maps/TESTGYM/scripts.pory"
	.string "Oh shoot...$"

GymLeader1Rematachoutro::
# 319 "data/maps/TESTGYM/scripts.pory"
	.string "Damn... not again$"

GymLeader1defeat::
# 323 "data/maps/TESTGYM/scripts.pory"
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

GymLeader1idle::
# 336 "data/maps/TESTGYM/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"

GymLeaderrematch1idle::
# 343 "data/maps/TESTGYM/scripts.pory"
	.string "Ah I guess, I'll get you next time.$"

TESTGYMExplainReward::
# 347 "data/maps/TESTGYM/scripts.pory"
	.string "This is Dig.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

TESTGYMExplainReward2::
# 354 "data/maps/TESTGYM/scripts.pory"
	.string "This is Earthquake.\p"
	.string "It's super strong. I'm sure\n"
	.string "you'll get ALOT of use out of it.$"

receivedxbadge::
# 360 "data/maps/TESTGYM/scripts.pory"
	.string "{PLAYER} received the BADGE\n"
	.string "from GymLeader.$"

badge1info::
# 365 "data/maps/TESTGYM/scripts.pory"
	.string "This badge doesnt really\n"
	.string "do anything,\p"
	.string "but it looks pretty cool.$"
