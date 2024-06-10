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
	setvar regionstarters, 2
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
	setvar regionstarters, 0
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
	call oakslab_EventScript_CHARIZARD
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
# 141 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 142 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Mudkip_1:
# 114 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_MUDKIP, 10, ITEM_MYSTIC_WATER
# 115 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Mudkip_4
# 125 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Mudkip_5
# 136 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 137 "data/maps/oakslab/scripts.pory"
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
	setflag FLAG_SYS_POKEMON_GET
# 120 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 121 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 122 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 123 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Mudkip_5:
# 126 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 128 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_1
# 129 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 130 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 131 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 132 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 133 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Totodile::
# 148 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 149 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 150 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 151 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Totodile_1
# 179 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 180 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Totodile_1:
# 152 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_MYSTIC_WATER
# 153 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Totodile_4
# 163 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Totodile_5
# 174 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 175 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Totodile_4:
# 154 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 156 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_1
# 157 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 158 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 159 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 160 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 161 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Totodile_5:
# 164 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 166 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Totodile_Text_1
# 167 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 169 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 170 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 171 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Squirtle::
# 186 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 187 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 188 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 189 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Squirtle_1
# 217 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 218 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Squirtle_1:
# 190 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 10, ITEM_MYSTIC_WATER
# 191 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Squirtle_4
# 201 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Squirtle_5
# 212 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 213 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Squirtle_4:
# 192 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 194 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_1
# 195 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 196 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 197 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 198 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 199 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Squirtle_5:
# 202 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 204 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Squirtle_Text_1
# 205 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 206 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 207 "data/maps/oakslab/scripts.pory"
	removeobject 1
# 208 "data/maps/oakslab/scripts.pory"
	setflag starterball1
# 209 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Treecko::
# 224 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 225 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 226 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 227 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Treecko_1
# 255 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 256 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Treecko_1:
# 228 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TREECKO, 10, ITEM_MIRACLE_SEED
# 229 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Treecko_4
# 239 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Treecko_5
# 250 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 251 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Treecko_4:
# 230 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 231 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 232 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_1
# 233 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 234 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 235 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 236 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 237 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Treecko_5:
# 240 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 241 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 242 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Treecko_Text_1
# 243 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 244 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 245 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 246 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 247 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Chikorita::
# 262 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 263 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 264 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 265 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Chikorita_1
# 293 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 294 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Chikorita_1:
# 266 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CHIKORITA, 10, ITEM_MIRACLE_SEED
# 267 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Chikorita_4
# 277 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Chikorita_5
# 288 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 289 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Chikorita_4:
# 268 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 269 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 270 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_1
# 271 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 272 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 273 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 274 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 275 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Chikorita_5:
# 278 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 280 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Chikorita_Text_1
# 281 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 282 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 283 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 284 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 285 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Bulbasaur::
# 300 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 301 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 302 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 303 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Bulbasaur_1
# 331 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 332 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Bulbasaur_1:
# 304 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_BULBASAUR, 10, ITEM_MIRACLE_SEED
# 305 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Bulbasaur_4
# 315 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Bulbasaur_5
# 326 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 327 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Bulbasaur_4:
# 306 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 307 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 308 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_1
# 309 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 310 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 311 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 312 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 313 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Bulbasaur_5:
# 316 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 318 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Bulbasaur_Text_1
# 319 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 320 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 321 "data/maps/oakslab/scripts.pory"
	removeobject 2
# 322 "data/maps/oakslab/scripts.pory"
	setflag starterball2
# 323 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Torchic::
# 338 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 339 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 340 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 341 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Torchic_1
# 369 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 370 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Torchic_1:
# 342 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_TORCHIC, 10, ITEM_CHARCOAL
# 343 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Torchic_4
# 353 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Torchic_5
# 364 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 365 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Torchic_4:
# 344 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 345 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 346 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_1
# 347 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 348 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 349 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 350 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 351 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Torchic_5:
# 354 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 355 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 356 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Torchic_Text_1
# 357 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 358 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 359 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 360 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 361 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_Cyndaquil::
# 376 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 377 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 378 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 379 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_Cyndaquil_1
# 407 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 408 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_Cyndaquil_1:
# 380 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 10, ITEM_CHARCOAL
# 381 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_Cyndaquil_4
# 391 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_Cyndaquil_5
# 402 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 403 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_Cyndaquil_4:
# 382 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 384 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_1
# 385 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 386 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 387 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 388 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 389 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_Cyndaquil_5:
# 392 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 393 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 394 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Cyndaquil_Text_1
# 395 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 396 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 397 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 398 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 399 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


oakslab_EventScript_CHARIZARD::
# 414 "data/maps/oakslab/scripts.pory"
	showmonpic SPECIES_CHARIZARD, 10, 3
# 415 "data/maps/oakslab/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 416 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARIZARD_Text_0, MSGBOX_YESNO
# 417 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq oakslab_EventScript_CHARIZARD_1
# 445 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 446 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_NotChosen
	return

oakslab_EventScript_CHARIZARD_1:
# 418 "data/maps/oakslab/scripts.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_X
# 419 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq oakslab_EventScript_CHARIZARD_4
# 429 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq oakslab_EventScript_CHARIZARD_5
# 440 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 441 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_Mudkip_Text_2
	return

oakslab_EventScript_CHARIZARD_4:
# 420 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 421 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 422 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARIZARD_Text_1
# 423 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 424 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 425 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 426 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 427 "data/maps/oakslab/scripts.pory"
	call NicknamePartyMon
	return

oakslab_EventScript_CHARIZARD_5:
# 430 "data/maps/oakslab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/oakslab/scripts.pory"
	waitfanfare
# 432 "data/maps/oakslab/scripts.pory"
	msgbox oakslab_EventScript_CHARIZARD_Text_1
# 433 "data/maps/oakslab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 434 "data/maps/oakslab/scripts.pory"
	setvar VAR_UNUSED_0x8014, 1
# 435 "data/maps/oakslab/scripts.pory"
	removeobject 3
# 436 "data/maps/oakslab/scripts.pory"
	setflag starterball3
# 437 "data/maps/oakslab/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 453 "data/maps/oakslab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 454 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 455 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 456 "data/maps/oakslab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 457 "data/maps/oakslab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 464 "data/maps/oakslab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 465 "data/maps/oakslab/scripts.pory"
	hidemonpic
# 466 "data/maps/oakslab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 469 "data/maps/oakslab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 467 "data/maps/oakslab/scripts.pory"
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
# 137 "data/maps/oakslab/scripts.pory"
	.string "No More Room$"

oakslab_EventScript_Totodile_Text_0:
# 150 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Totodile?$"

oakslab_EventScript_Totodile_Text_1:
# 156 "data/maps/oakslab/scripts.pory"
	.string "Recieved Totodile$"

oakslab_EventScript_Squirtle_Text_0:
# 188 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

oakslab_EventScript_Squirtle_Text_1:
# 194 "data/maps/oakslab/scripts.pory"
	.string "Recieved Squirtle$"

oakslab_EventScript_Treecko_Text_0:
# 226 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Treecko?$"

oakslab_EventScript_Treecko_Text_1:
# 232 "data/maps/oakslab/scripts.pory"
	.string "Recieved Treecko$"

oakslab_EventScript_Chikorita_Text_0:
# 264 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

oakslab_EventScript_Chikorita_Text_1:
# 270 "data/maps/oakslab/scripts.pory"
	.string "Recieved Chikorita$"

oakslab_EventScript_Bulbasaur_Text_0:
# 302 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

oakslab_EventScript_Bulbasaur_Text_1:
# 308 "data/maps/oakslab/scripts.pory"
	.string "Recieved Bulbasaur$"

oakslab_EventScript_Torchic_Text_0:
# 340 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Torchic?$"

oakslab_EventScript_Torchic_Text_1:
# 346 "data/maps/oakslab/scripts.pory"
	.string "Recieved Torchic$"

oakslab_EventScript_Cyndaquil_Text_0:
# 378 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

oakslab_EventScript_Cyndaquil_Text_1:
# 384 "data/maps/oakslab/scripts.pory"
	.string "Recieved Cyndaquil$"

oakslab_EventScript_CHARIZARD_Text_0:
# 416 "data/maps/oakslab/scripts.pory"
	.string "Do you want to choose CHARIZARD?$"

oakslab_EventScript_CHARIZARD_Text_1:
# 422 "data/maps/oakslab/scripts.pory"
	.string "Recieved CHARIZARD$"

NicknamePartyMon_Text_0:
# 453 "data/maps/oakslab/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 469 "data/maps/oakslab/scripts.pory"
	.string "Transferred to PC$"

oakslab_NotChosen::
# 472 "data/maps/oakslab/scripts.pory"
	.string "You did not choose that Pokemon$"
