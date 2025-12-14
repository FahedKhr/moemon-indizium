RustboroSewers_MapScripts::
	.byte 0

RustboroSewers_MagmaGruntTrigger1::
	goto_if_unset FLAG_DEFEATED_SEWERS_GRUNT, RustboroSewers_MagmaGruntEncounter1
	end

RustboroSewers_MagmaGruntTrigger2::
	goto_if_unset FLAG_DEFEATED_SEWERS_GRUNT, RustboroSewers_MagmaGruntEncounter2
	end

RustboroSewers_MagmaGruntEncounter1:
	trainerbattle_single TRAINER_GRUNT_SEWERS, RustboroSewers_MagmaGrunt_Intro, RustboroSewers_MagmaGrunt_Loss, RustboroSewers_MagmaGruntEncounternNext1
	end

RustboroSewers_MagmaGruntEncounternNext1:
	msgbox RustboroSewers_MagmaGrunt_Post, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAGMAGRUNT_SEWERS, RustboroSewers_MagmaGruntLeave1
	waitmovement 0
	setflag FLAG_DEFEATED_SEWERS_GRUNT
	removeobject LOCALID_MAGMAGRUNT_SEWERS
	end

RustboroSewers_MagmaGruntEncounter2:
	trainerbattle_single TRAINER_GRUNT_SEWERS, RustboroSewers_MagmaGrunt_Intro, RustboroSewers_MagmaGrunt_Loss, RustboroSewers_MagmaGruntEncounternNext2
	end

RustboroSewers_MagmaGruntEncounternNext2:
	msgbox RustboroSewers_MagmaGrunt_Post, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAGMAGRUNT_SEWERS, RustboroSewers_MagmaGruntLeave2
	waitmovement 0
	setflag FLAG_DEFEATED_SEWERS_GRUNT
	removeobject LOCALID_MAGMAGRUNT_SEWERS
	end


RustboroSewers_MagmaGrunt_Intro:
	.string "Darn it. It's over for me isn't it.\p"
	.string "Do you seriously want to stop me after\n"
	.string "I had already done my job?\l"
	.string "And make me leave like a coward?\p"
	.string "How about I just beat you instead.$"

RustboroSewers_MagmaGrunt_Loss:
	.string "Team Aqua better not be behind this.$"

RustboroSewers_MagmaGrunt_Post:
	.string "Ngh... You're a tough one ehh?\n"
	.string "Alright alright.\p"
	.string "If I give them the package back,\n"
	.string "will you leave me alone?$"

RustboroSewers_MagmaGruntLeave1:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroSewers_MagmaGruntLeave2:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
