pokesupercenter2_MapScripts::
	.byte 0


Littleroot_Mart_Employee::
# 6 "data/maps/pokesupercenter2/scripts.pory"
	lock
# 7 "data/maps/pokesupercenter2/scripts.pory"
	faceplayer
# 8 "data/maps/pokesupercenter2/scripts.pory"
	message Littleroot_Mart_Employee_Text_0
# 9 "data/maps/pokesupercenter2/scripts.pory"
	waitmessage
# 10 "data/maps/pokesupercenter2/scripts.pory"
	pokemart Littleroot_Mart
# 11 "data/maps/pokesupercenter2/scripts.pory"
	msgbox Littleroot_Mart_Employee_Text_1
# 12 "data/maps/pokesupercenter2/scripts.pory"
	release
	end


	.align 2
# 16 "data/maps/pokesupercenter2/scripts.pory"
Littleroot_Mart:
# 17 "data/maps/pokesupercenter2/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/pokesupercenter2/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/pokesupercenter2/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/pokesupercenter2/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/pokesupercenter2/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Littleroot_Mart_Employee_Text_0:
# 8 "data/maps/pokesupercenter2/scripts.pory"
	.string "What do you want?$"

Littleroot_Mart_Employee_Text_1:
# 11 "data/maps/pokesupercenter2/scripts.pory"
	.string "Okay bye...$"
