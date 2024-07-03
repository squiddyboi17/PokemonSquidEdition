TESTINGMAP_MapScripts::
	.byte 0


TESTMAPMART::
# 7 "data/maps/TESTINGMAP/scripts.pory"
	lock
# 8 "data/maps/TESTINGMAP/scripts.pory"
	faceplayer
# 9 "data/maps/TESTINGMAP/scripts.pory"
	message TESTMAPMART_Text_0
# 10 "data/maps/TESTINGMAP/scripts.pory"
	waitmessage
# 11 "data/maps/TESTINGMAP/scripts.pory"
	pokemart Testmap_MART
# 12 "data/maps/TESTINGMAP/scripts.pory"
	msgbox TESTMAPMART_Text_1
# 13 "data/maps/TESTINGMAP/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/TESTINGMAP/scripts.pory"
Testmap_MART:
# 18 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_ACRO_BIKE
# 20 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_CUT
# 21 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_FLY
# 22 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_SURF
# 23 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_STRENGTH
# 24 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_FLASH
# 25 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_ROCK_SMASH
# 26 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_WATERFALL
# 27 "data/maps/TESTINGMAP/scripts.pory"
	.2byte ITEM_HM_DIVE
	.2byte ITEM_NONE

TESTMAPMART_Text_0:
# 9 "data/maps/TESTINGMAP/scripts.pory"
	.string "Testing some HM's huh?$"

TESTMAPMART_Text_1:
# 12 "data/maps/TESTINGMAP/scripts.pory"
	.string "Hope it works out!$"
