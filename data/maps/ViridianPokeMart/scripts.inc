ViridianPokeMart_MapScripts::
	.byte 0


Viridian_Mart_Employee1::
# 6 "data/maps/ViridianPokeMart/scripts.pory"
	lock
# 7 "data/maps/ViridianPokeMart/scripts.pory"
	faceplayer
# 8 "data/maps/ViridianPokeMart/scripts.pory"
	message Viridian_Mart_Employee1_Text_0
# 9 "data/maps/ViridianPokeMart/scripts.pory"
	waitmessage
# 10 "data/maps/ViridianPokeMart/scripts.pory"
	pokemart Viridian_Mart1
# 11 "data/maps/ViridianPokeMart/scripts.pory"
	msgbox Viridian_Mart_Employee1_Text_1
# 12 "data/maps/ViridianPokeMart/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/ViridianPokeMart/scripts.pory"
Viridian_Mart1:
# 17 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Viridian_Mart_Employee2::
# 25 "data/maps/ViridianPokeMart/scripts.pory"
	lock
# 26 "data/maps/ViridianPokeMart/scripts.pory"
	faceplayer
# 27 "data/maps/ViridianPokeMart/scripts.pory"
	message Viridian_Mart_Employee2_Text_0
# 28 "data/maps/ViridianPokeMart/scripts.pory"
	waitmessage
# 29 "data/maps/ViridianPokeMart/scripts.pory"
	pokemart Viridian_Mart2
# 30 "data/maps/ViridianPokeMart/scripts.pory"
	msgbox Viridian_Mart_Employee2_Text_1
# 31 "data/maps/ViridianPokeMart/scripts.pory"
	release
	end


	.align 2
# 35 "data/maps/ViridianPokeMart/scripts.pory"
Viridian_Mart2:
# 36 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_CUT
# 37 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_FLY
# 38 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_SURF
# 39 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_STRENGTH
# 40 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_FLASH
# 41 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_ROCK_SMASH
# 42 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_WATERFALL
# 43 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_HM_DIVE
# 44 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_TM06
# 45 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_TM07
# 46 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_TM08
# 47 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_TM09
# 48 "data/maps/ViridianPokeMart/scripts.pory"
	.2byte ITEM_TM10
	.2byte ITEM_NONE

Viridian_Mart_Employee1_Text_0:
# 8 "data/maps/ViridianPokeMart/scripts.pory"
	.string "Would you like something?$"

Viridian_Mart_Employee1_Text_1:
# 11 "data/maps/ViridianPokeMart/scripts.pory"
	.string "Okay bye...$"

Viridian_Mart_Employee2_Text_0:
# 27 "data/maps/ViridianPokeMart/scripts.pory"
	.string "What may I do for you?$"

Viridian_Mart_Employee2_Text_1:
# 30 "data/maps/ViridianPokeMart/scripts.pory"
	.string "Have a GREAT day!$"
