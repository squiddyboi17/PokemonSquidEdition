PewterPokeMart_MapScripts::
	.byte 0


Pewter_Mart_Employee1::
# 6 "data/maps/PewterPokeMart/scripts.pory"
	lock
# 7 "data/maps/PewterPokeMart/scripts.pory"
	faceplayer
# 8 "data/maps/PewterPokeMart/scripts.pory"
	message Pewter_Mart_Employee1_Text_0
# 9 "data/maps/PewterPokeMart/scripts.pory"
	waitmessage
# 10 "data/maps/PewterPokeMart/scripts.pory"
	pokemart Pewter_Mart1
# 11 "data/maps/PewterPokeMart/scripts.pory"
	msgbox Pewter_Mart_Employee1_Text_1
# 12 "data/maps/PewterPokeMart/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/PewterPokeMart/scripts.pory"
Pewter_Mart1:
# 17 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Pewter_Mart_Employee2::
# 25 "data/maps/PewterPokeMart/scripts.pory"
	lock
# 26 "data/maps/PewterPokeMart/scripts.pory"
	faceplayer
# 27 "data/maps/PewterPokeMart/scripts.pory"
	message Pewter_Mart_Employee2_Text_0
# 28 "data/maps/PewterPokeMart/scripts.pory"
	waitmessage
# 29 "data/maps/PewterPokeMart/scripts.pory"
	pokemart Pewter_Mart2
# 30 "data/maps/PewterPokeMart/scripts.pory"
	msgbox Pewter_Mart_Employee2_Text_1
# 31 "data/maps/PewterPokeMart/scripts.pory"
	release
	end


	.align 2
# 35 "data/maps/PewterPokeMart/scripts.pory"
Pewter_Mart2:
# 36 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_TM11
# 37 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_TM12
# 38 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_TM13
# 39 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_TM14
# 40 "data/maps/PewterPokeMart/scripts.pory"
	.2byte ITEM_TM15
	.2byte ITEM_NONE

Pewter_Mart_Employee1_Text_0:
# 8 "data/maps/PewterPokeMart/scripts.pory"
	.string "How may I serve you?$"

Pewter_Mart_Employee1_Text_1:
# 11 "data/maps/PewterPokeMart/scripts.pory"
	.string "Have a good day$"

Pewter_Mart_Employee2_Text_0:
# 27 "data/maps/PewterPokeMart/scripts.pory"
	.string "What are you buyin?$"

Pewter_Mart_Employee2_Text_1:
# 30 "data/maps/PewterPokeMart/scripts.pory"
	.string "Have a good one$"
