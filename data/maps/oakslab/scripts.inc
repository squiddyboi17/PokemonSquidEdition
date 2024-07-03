oakslab_MapScripts::
# 2 "data/maps/oakslab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, oakslab_EventScript_balldefault
	.byte 0


oakslab_EventScript_balldefault::
# 6 "data/maps/oakslab/scripts.pory"
	setvar regionstarters, 0
	return


oakslab_EventScript_oak::
# 10 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball1, oakslab_EventScript_oak_4
oakslab_EventScript_oak_3:
# 34 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_oak_Text_2, MSGBOX_NPC
oakslab_EventScript_oak_1:
	end

oakslab_EventScript_oak_2:
# 11 "data/maps/oakslab/scripts.pory"
	lock
# 12 "data/maps/oakslab/scripts.pory"
	faceplayer
# 13 "data/maps/oakslab/scripts.pory"
	message oakslab_EventScript_oak_Text_0
# 14 "data/maps/oakslab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 15 "data/maps/oakslab/scripts.pory"
	closemessage
# 16 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq oakslab_EventScript_oak_10
# 20 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq oakslab_EventScript_oak_11
# 24 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq oakslab_EventScript_oak_12
oakslab_EventScript_oak_9:
# 28 "data/maps/oakslab/scripts.pory"
	end
# 29 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_oak_Text_1
# 30 "data/maps/oakslab/scripts.pory"
	waitmessage
# 31 "data/maps/oakslab/scripts.pory"
	release
	goto oakslab_EventScript_oak_1

oakslab_EventScript_oak_4:
# 10 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball2, oakslab_EventScript_oak_6
	goto oakslab_EventScript_oak_3

oakslab_EventScript_oak_6:
# 10 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball3, oakslab_EventScript_oak_2
	goto oakslab_EventScript_oak_3

oakslab_EventScript_oak_10:
# 17 "data/maps/oakslab/scripts.pory"
	call StarterFade
# 18 "data/maps/oakslab/scripts.pory"
	setvar regionstarters, 0
	goto oakslab_EventScript_oak_9

oakslab_EventScript_oak_11:
# 21 "data/maps/oakslab/scripts.pory"
	call StarterFade
# 22 "data/maps/oakslab/scripts.pory"
	setvar regionstarters, 1
	goto oakslab_EventScript_oak_9

oakslab_EventScript_oak_12:
# 25 "data/maps/oakslab/scripts.pory"
	call StarterFade
# 26 "data/maps/oakslab/scripts.pory"
	setvar regionstarters, 2
	goto oakslab_EventScript_oak_9


StarterFade::
# 40 "data/maps/oakslab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/oakslab/scripts.pory"
	delay 20
# 42 "data/maps/oakslab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


oakslab_EventScript_PokeballOne::
# 47 "data/maps/oakslab/scripts.pory"
	lockall
# 48 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball1, oakslab_EventScript_PokeballOne_4
oakslab_EventScript_PokeballOne_3:
# 60 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_PokeballOne_Text_0
oakslab_EventScript_PokeballOne_1:
# 62 "data/maps/oakslab/scripts.pory"
	waitmessage
# 63 "data/maps/oakslab/scripts.pory"
	releaseall
	end

oakslab_EventScript_PokeballOne_2:
# 49 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 0
	goto_if_eq oakslab_EventScript_PokeballOne_9
# 52 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 1
	goto_if_eq oakslab_EventScript_PokeballOne_10
# 55 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 2
	goto_if_eq oakslab_EventScript_PokeballOne_11
	goto oakslab_EventScript_PokeballOne_1

oakslab_EventScript_PokeballOne_4:
# 48 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball2, oakslab_EventScript_PokeballOne_6
	goto oakslab_EventScript_PokeballOne_3

oakslab_EventScript_PokeballOne_6:
# 48 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball3, oakslab_EventScript_PokeballOne_2
	goto oakslab_EventScript_PokeballOne_3

oakslab_EventScript_PokeballOne_9:
# 50 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Mudkip
	goto oakslab_EventScript_PokeballOne_1

oakslab_EventScript_PokeballOne_10:
# 53 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Totodile
	goto oakslab_EventScript_PokeballOne_1

oakslab_EventScript_PokeballOne_11:
# 56 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Squirtle
	goto oakslab_EventScript_PokeballOne_1


oakslab_EventScript_PokeballTwo::
# 68 "data/maps/oakslab/scripts.pory"
	lockall
# 69 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball1, oakslab_EventScript_PokeballTwo_4
oakslab_EventScript_PokeballTwo_3:
# 81 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_PokeballOne_Text_0
oakslab_EventScript_PokeballTwo_1:
# 83 "data/maps/oakslab/scripts.pory"
	waitmessage
# 84 "data/maps/oakslab/scripts.pory"
	releaseall
	end

oakslab_EventScript_PokeballTwo_2:
# 70 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 0
	goto_if_eq oakslab_EventScript_PokeballTwo_9
# 73 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 1
	goto_if_eq oakslab_EventScript_PokeballTwo_10
# 76 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 2
	goto_if_eq oakslab_EventScript_PokeballTwo_11
	goto oakslab_EventScript_PokeballTwo_1

oakslab_EventScript_PokeballTwo_4:
# 69 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball2, oakslab_EventScript_PokeballTwo_6
	goto oakslab_EventScript_PokeballTwo_3

oakslab_EventScript_PokeballTwo_6:
# 69 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball3, oakslab_EventScript_PokeballTwo_2
	goto oakslab_EventScript_PokeballTwo_3

oakslab_EventScript_PokeballTwo_9:
# 71 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Treecko
	goto oakslab_EventScript_PokeballTwo_1

oakslab_EventScript_PokeballTwo_10:
# 74 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Chikorita
	goto oakslab_EventScript_PokeballTwo_1

oakslab_EventScript_PokeballTwo_11:
# 77 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Bulbasaur
	goto oakslab_EventScript_PokeballTwo_1


oakslab_EventScript_PokeballThree::
# 89 "data/maps/oakslab/scripts.pory"
	lockall
# 90 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball1, oakslab_EventScript_PokeballThree_4
oakslab_EventScript_PokeballThree_3:
# 102 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_PokeballOne_Text_0
oakslab_EventScript_PokeballThree_1:
# 104 "data/maps/oakslab/scripts.pory"
	waitmessage
# 105 "data/maps/oakslab/scripts.pory"
	releaseall
	end

oakslab_EventScript_PokeballThree_2:
# 91 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 0
	goto_if_eq oakslab_EventScript_PokeballThree_9
# 94 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 1
	goto_if_eq oakslab_EventScript_PokeballThree_10
# 97 "data/maps/oakslab/scripts.pory"
	compare regionstarters, 2
	goto_if_eq oakslab_EventScript_PokeballThree_11
	goto oakslab_EventScript_PokeballThree_1

oakslab_EventScript_PokeballThree_4:
# 90 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball2, oakslab_EventScript_PokeballThree_6
	goto oakslab_EventScript_PokeballThree_3

oakslab_EventScript_PokeballThree_6:
# 90 "data/maps/oakslab/scripts.pory"
	goto_if_unset starterball3, oakslab_EventScript_PokeballThree_2
	goto oakslab_EventScript_PokeballThree_3

oakslab_EventScript_PokeballThree_9:
# 92 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Torchic
	goto oakslab_EventScript_PokeballThree_1

oakslab_EventScript_PokeballThree_10:
# 95 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_Cyndaquil
	goto oakslab_EventScript_PokeballThree_1

oakslab_EventScript_PokeballThree_11:
# 98 "data/maps/oakslab/scripts.pory"
	call oakslab_EventScript_CHARMANDER
	goto oakslab_EventScript_PokeballThree_1


oakslab_EventScript_Mudkip::
# 110 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 111 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 112 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 113 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Mudkip_1
# 139 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 140 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Mudkip_1:
# 114 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_MUDKIP, 10, ITEM_MYSTIC_WATER
# 115 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Mudkip_4
# 124 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Mudkip_5
# 134 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 135 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Mudkip_4:
# 116 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 118 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_1
# 119 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 120 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 121 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 122 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Mudkip_5:
# 125 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 127 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_1
# 128 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 129 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 130 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 131 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Totodile::
# 146 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 147 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 148 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 149 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Totodile_1
# 175 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 176 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Totodile_1:
# 150 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_MYSTIC_WATER
# 151 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Totodile_4
# 160 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Totodile_5
# 170 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 171 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Totodile_4:
# 152 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 154 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_1
# 155 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 156 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 157 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 158 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Totodile_5:
# 161 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 163 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_1
# 164 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 165 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 166 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 167 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Squirtle::
# 182 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 183 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 184 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 185 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Squirtle_1
# 211 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 212 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Squirtle_1:
# 186 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, ITEM_MYSTIC_WATER
# 187 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Squirtle_4
# 196 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Squirtle_5
# 206 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 207 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Squirtle_4:
# 188 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 190 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_1
# 191 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 192 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 193 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 194 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Squirtle_5:
# 197 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 198 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 199 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_1
# 200 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 201 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 202 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 203 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Treecko::
# 218 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 219 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 220 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 221 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Treecko_1
# 247 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 248 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Treecko_1:
# 222 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TREECKO, 10, ITEM_MIRACLE_SEED
# 223 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Treecko_4
# 232 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Treecko_5
# 242 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 243 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Treecko_4:
# 224 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 226 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_1
# 227 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 228 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 229 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 230 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Treecko_5:
# 233 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 234 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 235 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_1
# 236 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 237 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 238 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 239 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Chikorita::
# 254 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 255 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 256 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 257 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Chikorita_1
# 283 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 284 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Chikorita_1:
# 258 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CHIKORITA, 10, ITEM_MIRACLE_SEED
# 259 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Chikorita_4
# 268 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Chikorita_5
# 278 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 279 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Chikorita_4:
# 260 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 262 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_1
# 263 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 264 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 265 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 266 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Chikorita_5:
# 269 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 271 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_1
# 272 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 273 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 274 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 275 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Bulbasaur::
# 290 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 291 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 292 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 293 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Bulbasaur_1
# 319 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 320 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Bulbasaur_1:
# 294 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, ITEM_MIRACLE_SEED
# 295 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Bulbasaur_4
# 304 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Bulbasaur_5
# 314 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 315 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Bulbasaur_4:
# 296 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 298 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_1
# 299 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 300 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 301 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 302 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Bulbasaur_5:
# 305 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 306 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 307 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_1
# 308 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 309 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 310 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 311 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Torchic::
# 326 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 327 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 328 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 329 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Torchic_1
# 355 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 356 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Torchic_1:
# 330 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TORCHIC, 10, ITEM_CHARCOAL
# 331 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Torchic_4
# 340 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Torchic_5
# 350 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 351 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Torchic_4:
# 332 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 333 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 334 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_1
# 335 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 336 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 337 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 338 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Torchic_5:
# 341 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 342 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 343 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_1
# 344 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 345 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 346 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 347 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Cyndaquil::
# 362 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 363 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 364 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 365 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Cyndaquil_1
# 391 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 392 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Cyndaquil_1:
# 366 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 10, ITEM_CHARCOAL
# 367 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Cyndaquil_4
# 376 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Cyndaquil_5
# 386 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 387 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Cyndaquil_4:
# 368 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 369 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 370 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_1
# 371 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 372 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 373 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 374 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Cyndaquil_5:
# 377 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 379 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_1
# 380 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 381 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 382 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 383 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_CHARMANDER::
# 398 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 399 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 400 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARMANDER_Text_0, MSGBOX_YESNO
# 401 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_CHARMANDER_1
# 427 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 428 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_CHARMANDER_1:
# 402 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, ITEM_CHARCOAL
# 403 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_CHARMANDER_4
# 412 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_CHARMANDER_5
# 422 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 423 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_CHARMANDER_4:
# 404 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 405 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 406 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARMANDER_Text_1
# 407 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 408 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 409 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 410 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_CHARMANDER_5:
# 413 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 414 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 415 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARMANDER_Text_1
# 416 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 417 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 418 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 419 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 435 "data/maps/oakslab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 436 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 437 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 438 "data/maps/oakslab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 439 "data/maps/oakslab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 446 "data/maps/oakslab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 447 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 448 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 451 "data/maps/oakslab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 449 "data/maps/oakslab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


oakslab_EventScript_oak_Text_0:
# 13 "data/maps/oakslab/scripts.pory"
	.string "Which Region?$"

oakslab_EventScript_oak_Text_1:
# 29 "data/maps/oakslab/scripts.pory"
	.string "Hurry up...$"

oakslab_EventScript_oak_Text_2:
# 34 "data/maps/oakslab/scripts.pory"
	.string "Now scram... I'm trying to bang your mom.$"

oakslab_EventScript_PokeballOne_Text_0:
# 60 "data/maps/oakslab/scripts.pory"
	.string "Dude, don't get greedy.$"

oakslab_EventScript_Mudkip_Text_0:
# 112 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

oakslab_EventScript_Mudkip_Text_1:
# 118 "data/maps/oakslab/scripts.pory"
	.string "Recieved Mudkip$"

oakslab_EventScript_Mudkip_Text_2:
# 135 "data/maps/oakslab/scripts.pory"
	.string "No More Room$"

oakslab_EventScript_Totodile_Text_0:
# 148 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Totodile?$"

oakslab_EventScript_Totodile_Text_1:
# 154 "data/maps/oakslab/scripts.pory"
	.string "Recieved Totodile$"

oakslab_EventScript_Squirtle_Text_0:
# 184 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

oakslab_EventScript_Squirtle_Text_1:
# 190 "data/maps/oakslab/scripts.pory"
	.string "Recieved Squirtle$"

oakslab_EventScript_Treecko_Text_0:
# 220 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Treecko?$"

oakslab_EventScript_Treecko_Text_1:
# 226 "data/maps/oakslab/scripts.pory"
	.string "Recieved Treecko$"

oakslab_EventScript_Chikorita_Text_0:
# 256 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

oakslab_EventScript_Chikorita_Text_1:
# 262 "data/maps/oakslab/scripts.pory"
	.string "Recieved Chikorita$"

oakslab_EventScript_Bulbasaur_Text_0:
# 292 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

oakslab_EventScript_Bulbasaur_Text_1:
# 298 "data/maps/oakslab/scripts.pory"
	.string "Recieved Bulbasaur$"

oakslab_EventScript_Torchic_Text_0:
# 328 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Torchic?$"

oakslab_EventScript_Torchic_Text_1:
# 334 "data/maps/oakslab/scripts.pory"
	.string "Recieved Torchic$"

oakslab_EventScript_Cyndaquil_Text_0:
# 364 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

oakslab_EventScript_Cyndaquil_Text_1:
# 370 "data/maps/oakslab/scripts.pory"
	.string "Recieved Cyndaquil$"

oakslab_EventScript_CHARMANDER_Text_0:
# 400 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose CHARMANDER?$"

oakslab_EventScript_CHARMANDER_Text_1:
# 406 "data/maps/oakslab/scripts.pory"
	.string "Recieved CHARMANDER$"

NicknamePartyMon_Text_0:
# 435 "data/maps/oakslab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 451 "data/maps/oakslab/scripts.pory"
	.string "Transferred to PC$"

oakslab_NotChosen::
# 454 "data/maps/oakslab/scripts.pory"
	.string "You did not choose that Pokemon$"
