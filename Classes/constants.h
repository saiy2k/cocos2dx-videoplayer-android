//
//  constants.h
//  WildlifeCrossing
//
//  Created by saiy2k on 04/06/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef WildlifeCrossing_constants_h
#define WildlifeCrossing_constants_h

#include "cocos2d.h"

using namespace cocos2d;

#define IDHOLDACTION                1000
#define IDTOUCHACTION               1001
#define HOLDDELAY                   0.2
#define DROPSPEED                   500

enum TermiteState {
    TermiteStateApproaching,
    TermiteStateBiting,
    TermiteStateFleeing
};

enum BeeType {
    BeeTypeButterFly,
    BeeTypeBumbleBee,
    BeeTypeSquirrel
};

enum ObjectType {
    ObjectTypeSeed,
    ObjectTypeWater,
    ObjectTypeFertiliser,
    ObjectTypeNone,
};

enum TreeState {
    TreeState0,
    TreeState1,
    TreeState2,
    TreeState3
};

#define TREESTOSAVE                 6

// LEVEL 1 SETTINGS
// ****************

#define L1DURATION                  120
#define L1BEESPAWNTIME              3
#define L1TERMITESPAWNTIME          0

static CCPoint L1HolePoints[3]  =   { ccp(0.3, 0.2), ccp(0.6, 0.25), ccp(0.8, 0.15) };



// LEVEL 2 SETTINGS
// ****************

#define L2DURATION                  120
#define L2BEESPAWNTIME              2.5
#define L2TERMITESPAWNTIME          15

static CCPoint L2HolePoints[3]  =   { ccp(0.3, 0.3), ccp(0.6, 0.25), ccp(0.8, 0.35) };



// LEVEL 3 SETTINGS
// ****************

#define L3DURATION                  120
#define L3BEESPAWNTIME              2
#define L3TERMITESPAWNTIME          7.5

static CCPoint L3HolePoints[3]  =   { ccp(0.3, 0.3), ccp(0.6, 0.25), ccp(0.8, 0.35) };



// ASSET NAMES - VIDEO

#define TUTORIAL_VIDEO_NAME         "sampleVideo"
#define TUTORIAL_VIDEO_LENGTH       16

// ASSET NAMES - SPRITE SHEET

#define FILE_FARMER_SHEET_PNG       "farmerSheet.png"
#define FILE_FARMER_SHEET_PLIST     "farmerSheet.plist"

// ASSET NAMES - AUDIO

#define FILE_MUSIC_BG_WAV           "backgroundMusic.mp3"
#define FILE_SOUND_MENU_BUTTON1     "menuEffect1.mp3"
#define FILE_SOUND_MENU_BUTTON2     "menuEffect2.mp3"
#define FILE_SOUND_DROP             "objectDrop.wav"
#define FILE_SOUND_WATER_DROP       "waterDrop.wav"
#define FILE_SOUND_TREE_GROW1       "treeGrow1.wav"
#define FILE_SOUND_TREE_GROW2       "treeGrow2.wav"
#define FILE_SOUND_TREE_SHRINK      "treeShrink.wav"
#define FILE_SOUND_WIN              "soundWin.mp3"
#define FILE_SOUND_LOSE             "soundLose.mp3"

#endif
