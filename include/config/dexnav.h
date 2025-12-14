#ifndef GUARD_CONFIG_DEXNAV_H
#define GUARD_CONFIG_DEXNAV_H

#define DEXNAV_ENABLED                TRUE  // Whether or not DexNav is enabled. If TRUE, flags/vars below must all be non-zero
#define USE_DEXNAV_SEARCH_LEVELS      FALSE  /* WARNING: POSSIBLY EXCEEDS SAVEBLOCK SPACE! REQUIRES 1 BYTE PER SPECIES */

// Flag/var defines
#define DN_FLAG_SEARCHING             FLAG_DEXNAV_SEARCHING // Searching for mon
#define DN_FLAG_DEXNAV_GET            FLAG_ADDED_MATCH_CALL_TO_POKENAV // DexNav shows in start menu
#define DN_FLAG_DETECTOR_MODE         FLAG_ADDED_MATCH_CALL_TO_POKENAV // Allow player to find hidden mons
#define DN_VAR_SPECIES                VAR_DEXNAV_SPECIES // Registered DexNav species
#define DN_VAR_STEP_COUNTER           VAR_DEXNAV_STEPCOUNT // Steps for finding hidden pokemon

// Search parameters
#define DEXNAV_TIMEOUT                  45  // 15 seconds is the time out. Max of 1092 seconds allowed
#define SNEAKING_PROXIMITY              2   // Tile amount
#define CREEPING_PROXIMITY              1
#define MAX_PROXIMITY                   30

#define DEXNAV_CHAIN_MAX                100 // maximum chain value

// hidden pokemon options - an approximation of values due to lack of available data
#define HIDDEN_MON_STEP_COUNT       50  // Look for hidden pokemon every x steps
#define HIDDEN_MON_SEARCH_RATE      25   // x% chance of finding hidden pokemon every x steps
#define HIDDEN_MON_PROBABILTY       15   // x% chance of finding hidden mon compared to regular encounter data

//// SEARCH PROBABILITIES
// See https://bulbapedia.bulbagarden.net/wiki/DexNav#Benefits
// Chance of encountering egg move at search levels
#define SEARCHLEVEL0_MOVECHANCE         15
#define SEARCHLEVEL5_MOVECHANCE         15
#define SEARCHLEVEL10_MOVECHANCE        15
#define SEARCHLEVEL25_MOVECHANCE        15
#define SEARCHLEVEL50_MOVECHANCE        15
#define SEARCHLEVEL100_MOVECHANCE       15
// Chance of encountering Hidden Abilities at search levels
#define SEARCHLEVEL0_ABILITYCHANCE      15
#define SEARCHLEVEL5_ABILITYCHANCE      15
#define SEARCHLEVEL10_ABILITYCHANCE     15
#define SEARCHLEVEL25_ABILITYCHANCE     15
#define SEARCHLEVEL50_ABILITYCHANCE     15
#define SEARCHLEVEL100_ABILITYCHANCE    15
// Chance of encountering held item
#define SEARCHLEVEL0_ITEM               15
#define SEARCHLEVEL5_ITEM               15
#define SEARCHLEVEL10_ITEM              15
#define SEARCHLEVEL25_ITEM              15
#define SEARCHLEVEL50_ITEM              15
#define SEARCHLEVEL100_ITEM             15
// Chance of encountering one star potential
#define SEARCHLEVEL0_ONESTAR            4
#define SEARCHLEVEL5_ONESTAR            4
#define SEARCHLEVEL10_ONESTAR           4
#define SEARCHLEVEL25_ONESTAR           4
#define SEARCHLEVEL50_ONESTAR           4
#define SEARCHLEVEL100_ONESTAR          4
// Chance of encountering two star potential
#define SEARCHLEVEL0_TWOSTAR            5
#define SEARCHLEVEL5_TWOSTAR            5
#define SEARCHLEVEL10_TWOSTAR           5
#define SEARCHLEVEL25_TWOSTAR           5
#define SEARCHLEVEL50_TWOSTAR           5
#define SEARCHLEVEL100_TWOSTAR          5
// Chance of encountering three star potential
#define SEARCHLEVEL0_THREESTAR          1
#define SEARCHLEVEL5_THREESTAR          1
#define SEARCHLEVEL10_THREESTAR         1
#define SEARCHLEVEL25_THREESTAR         1
#define SEARCHLEVEL50_THREESTAR         1
#define SEARCHLEVEL100_THREESTAR        1

#endif // GUARD_CONFIG_DEXNAV_H
