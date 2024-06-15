Route1_MapScripts::
	.byte 0


doublebattletest::
# 7 "data/maps/Route1/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_AQUA_HIDEOUT_5, doublebattleintro, doublebattleoutro, notenoughpokemon
# 8 "data/maps/Route1/scripts.pory"
	msgbox doublebattleidle, MSGBOX_AUTOCLOSE
	end


doublebattleintro::
# 12 "data/maps/Route1/scripts.pory"
	.string "Double Battle Intro!$"

doublebattleoutro::
# 16 "data/maps/Route1/scripts.pory"
	.string "Double Battle Outro!$"

notenoughpokemon::
# 19 "data/maps/Route1/scripts.pory"
	.string "Not enough Pokemon for a double battle$"

doublebattleidle::
# 23 "data/maps/Route1/scripts.pory"
	.string "Double Battle Idle Message$"
