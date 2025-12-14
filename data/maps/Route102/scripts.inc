Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

TrainerScript_Tiana::
	trainerbattle_single TRAINER_TIANA, BattleText_Tiana_Intro, BattleText_Tiana_Loss
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerScript_Tiana_Rematch
	msgbox BattleText_Tiana_PostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Tiana_Rematch::
	cleartrainerflag TRAINER_TIANA_2,
	trainerbattle_single TRAINER_TIANA_2, BattleText_Tiana_Intro, BattleText_Tiana_Loss
	end

BattleText_Tiana_Intro:
	.string "I'm going to keep winning and aim\n"
	.string "to be the best trainer.\p"
	.string "Help me further my career!$"

BattleText_Tiana_Loss:
	.string "I ended up furthering your career…$"

BattleText_Tiana_PostBattle:
	.string "To keep winning my way up, I see that\n"
	.string "I have to catch more Moémon.$"

TrainerScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, BattleText_Calvin_Intro, BattleText_Calvin_Loss
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerScript_Calvin_Rematch
	msgbox BattleText_Calvin_PostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Calvin_Rematch::
	cleartrainerflag TRAINER_CALVIN_2,
	trainerbattle_single TRAINER_CALVIN_2, BattleText_Calvin_Intro, BattleText_Calvin_Loss
	end

BattleText_Calvin_Intro:
	.string "If you have Moémon with you, then\n"
	.string "you're an official Moémon Trainer!\l"
	.string "You can't say no to my challenge!$"

BattleText_Calvin_Loss:
	.string "Arrgh, I lost…\n"
	.string "I should have trained mine more…$"

BattleText_Calvin_PostBattle:
	.string "Listen, you. If you're strong,\n"
	.string "you should have told me before!$"

TrainerScript_Rick::
	trainerbattle_single TRAINER_RICK, BattleText_Rick_Intro, BattleText_Rick_Loss
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerScript_Rick_Rematch
	msgbox BattleText_Rick_PostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Rick_Rematch::
	cleartrainerflag TRAINER_RICK_2,
	trainerbattle_single TRAINER_RICK_2, BattleText_Rick_Intro, BattleText_Rick_Loss
	end

BattleText_Rick_Intro:
	.string "Hahah! Our eyes met!\n"
	.string "I'll take you on with my Bug Moémon!$"

BattleText_Rick_Loss:
	.string "Ow! Down and out!$"

BattleText_Rick_PostBattle:
	.string "If you lock eyes with a Trainer,\n"
	.string "you have to challenge! It's a rule!$"

TrainerScript_Allen::
	trainerbattle_single TRAINER_ALLEN, BattleText_Allen_Intro, BattleText_Allen_Loss
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerScript_Allen_Rematch
	msgbox BattleText_Allen_PostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Allen_Rematch::
	cleartrainerflag TRAINER_ALLEN_2,
	trainerbattle_single TRAINER_ALLEN_2, BattleText_Allen_Intro, BattleText_Rick_Loss
	end

BattleText_Allen_Intro:
	.string "Did you just become a Trainer?\n"
	.string "We're both beginners!$"

BattleText_Allen_Loss:
	.string "I called you because I thought\n"
	.string "I could beat you…$"

BattleText_Allen_PostBattle:
	.string "I haven't won once yet…\n"
	.string "I wish I would win soon…$"