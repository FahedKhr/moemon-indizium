IthanPassage_MapScripts::
	.byte 0

IthanPassage_ArkovTrigger::
	lock
	applymovement LOCALID_ARKOV_ITHAN, IthanPassage_Arkov_Notice
	msgbox IthanPassage_Arkov_Talk1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_EVENT_ARKOV1, IthanPassage_Arkov_Defeated
	msgbox IthanPassage_Arkov_Talk2, MSGBOX_DEFAULT
	applymovement LOCALID_ARKOV_ITHAN, IthanPassage_Arkov_Leave
	removeobject LOCALID_ARKOV_ITHAN
	setflag FLAG_ARKOV_ITHAN_DEFEATED
	waitmovement
	release
	end

IthanPassage_Arkov_Defeated:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

IthanPassage_Arkov_Talk1:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

IthanPassage_Arkov_Talk2:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

IthanPassage_Arkov_Notice:
	walk_in_place_faster_up
	step_end

IthanPassage_Arkov_Leave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
