#pragma once

#include "musical_notes.h"

// Custom
#define ON_OFF_NOTE S__NOTE

#define LAYER_LOW_NOTE _A3
#define LAYER_HIGH_NOTE _A5
#define LAYER_ON_SONG ON_OFF_NOTE(LAYER_LOW_NOTE), ON_OFF_NOTE(LAYER_HIGH_NOTE)
#define LAYER_OFF_SONG ON_OFF_NOTE(LAYER_HIGH_NOTE), ON_OFF_NOTE(LAYER_LOW_NOTE)

#define MODIFIER_LOW_NOTE _G2
#define MODIFIER_HIGH_NOTE _G4
#define MODIFIER_ON_SONG ON_OFF_NOTE(MODIFIER_LOW_NOTE), ON_OFF_NOTE(MODIFIER_HIGH_NOTE)
#define MODIFIER_OFF_SONG ON_OFF_NOTE(MODIFIER_HIGH_NOTE), ON_OFF_NOTE(MODIFIER_LOW_NOTE)

// Nier
#define SONG_OF_THE_ANCIENTS \
  H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_C6), H__NOTE(_D6), \
  H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_G6), H__NOTE(_G5), \
  H__NOTE(_AF5), B__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), \
  B__NOTE(_EF6), WD_NOTE(_G5), WD_NOTE(_BF5), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), H__NOTE(_EF6), H__NOTE(_D6), \
  H__NOTE(_BF5), H__NOTE(_G5), BD_NOTE(_C6), WD_NOTE(_B5), WD_NOTE(_G5), WD_NOTE(_G6), W__NOTE(_G6), H__NOTE(_AF6), \
  W__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), H__NOTE(_EF6), B__NOTE(_EF6), \
  WD_NOTE(_E6), H__NOTE(_E6), H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), \
  H__NOTE(_BF6), H__NOTE(_AF6), W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), BD_NOTE(_G6), WD_NOTE(_B5), WD_NOTE(_G6), \
  W__NOTE(_G6), H__NOTE(_AF6), W__NOTE(_G6), H__NOTE(_AF6), H__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), H__NOTE(_D6), \
  H__NOTE(_EF6), B__NOTE(_EF6), WD_NOTE(_E6), H__NOTE(_E6), H__NOTE(_F6), H__NOTE(_G6), H__NOTE(_BF6), H__NOTE(_AF6), \
  W__NOTE(_AF6), H__NOTE(_C6), H__NOTE(_AF6), H__NOTE(_G6), W__NOTE(_G6), H__NOTE(_F6), H__NOTE(_D6), BD_NOTE(_EF6), \
  WD_NOTE(_F6), WD_NOTE(_G6), BD_NOTE(_C7),

#define NIER_AMUSEMENT_PARK \
  H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6), Q__NOTE(_EF6), WD_NOTE(_D6), \
  Q__NOTE(_G5), Q__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6), H__NOTE(_A6), W__NOTE(_BF6), W__NOTE(_EF7), \
  H__NOTE(_D5), E__NOTE(_G6), E__NOTE(_GF6), Q__NOTE(_F6), Q__NOTE(_E6), Q__NOTE(_EF6), Q__NOTE(_DF6), Q__NOTE(_EF6), \
  WD_NOTE(_D6), Q__NOTE(_G5), Q__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_D6), H__NOTE(_G6), H__NOTE(_A6), W__NOTE(_BF6), \
  H__NOTE(_EF7), H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5), \
  H__NOTE(_EF5), WD_NOTE(_D5), H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), WD_NOTE(_D5), W__NOTE(_D5), B__NOTE(_G5), \
  H__NOTE(_D5), HD_NOTE(_A5), HD_NOTE(_BF5), B__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_G5), HD_NOTE(_F5), H__NOTE(_EF5), \
  W__NOTE(_D5), W__NOTE(_C5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_D5), W__NOTE(_G5), B__NOTE(_D5), B__NOTE(_E5), \
  W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), \
  B__NOTE(_D5), B__NOTE(_BF4), W__NOTE(_EF5), QD_NOTE(_C5), QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), \
  H__NOTE(_EF5), H__NOTE(_F5), W__NOTE(_D5), W__NOTE(_BF5), W__NOTE(_G5), W__NOTE(_D5), W__NOTE(_EF5), QD_NOTE(_C5), \
  QD_NOTE(_D5), Q__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_F5), B__NOTE(_D5), B__NOTE(_BF4), \
  B__NOTE(_C5), H__NOTE(_C5), H__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_F5), WD_NOTE(_G5), H__NOTE(_C5), W__NOTE(_AF5), \
  WD_NOTE(_G5),

#define COPIED_CITY \
  Q__NOTE(_F6), Q__NOTE(_BF5), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_G6), Q__NOTE(_AF6), Q__NOTE(_EF6), Q__NOTE(_BF5), \
  Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_D6), Q__NOTE(_C6), \
  Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_EF5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_BF4), H__NOTE(_C5), \
  Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_G6), Q__NOTE(_EF6), Q__NOTE(_BF6), \
  Q__NOTE(_AF6), Q__NOTE(_EF6), Q__NOTE(_BF5), Q__NOTE(_F6), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF6), Q__NOTE(_BF5), \
  Q__NOTE(_B6), Q__NOTE(_DF6), Q__NOTE(_EF6), Q__NOTE(_F6), Q__NOTE(_AF6), Q__NOTE(_EF7), Q__NOTE(_F6), Q__NOTE(_C6), \
  Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_EF6), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), \
  Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_C5), Q__NOTE(_BF4), Q__NOTE(_G4), \
  Q__NOTE(_F4), Q__NOTE(_G4), H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), Q__NOTE(_EF5), \
  Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_EF5), Q__NOTE(_F5), Q__NOTE(_C5), \
  Q__NOTE(_AF4), Q__NOTE(_F5), Q__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_F5), Q__NOTE(_EF5), Q__NOTE(_F5), \
  Q__NOTE(_G5), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_G6), Q__NOTE(_EF6), WD_NOTE(_F7),

#define VAGUE_HOPE_COLD_RAIN \
  HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_CS6), HD_NOTE(_D6), HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_D6), WD_NOTE(_A6), \
  HD_NOTE(_FS6), HD_NOTE(_G6), HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), Q__NOTE(_D5), Q__NOTE(_CS5), Q__NOTE(_A4), \
  W__NOTE(_FS4), H__NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), HD_NOTE(_CS6), HD_NOTE(_E6), HD_NOTE(_D6), Q__NOTE(_CS6), \
  Q__NOTE(_D6), Q__NOTE(_E6), W__NOTE(_FS6), H__NOTE(_CS6), WD_NOTE(_D6), HD_NOTE(_D6), Q__NOTE(_D6), H__NOTE(_E6), \
  WD_NOTE(_CS6), HD_NOTE(_AS5), HD_NOTE(_B5), HD_NOTE(_B5), Q__NOTE(_B4), Q__NOTE(_CS5), Q__NOTE(_D5), HD_NOTE(_A5), \
  Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_D5), Q__NOTE(_CS5), Q__NOTE(_A4), H__NOTE(_FS4), \
  HD_NOTE(_FS6), HD_NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_FS6), Q__NOTE(_CS5), Q__NOTE(_D5), Q__NOTE(_A5), \
  HD_NOTE(_FS5), Q__NOTE(_FS6), Q__NOTE(_FS6), Q__NOTE(_GS6), HD_NOTE(_A6), Q__NOTE(_B6), H__NOTE(_A6), H__NOTE(_GS6), \
  H__NOTE(_FS6), H__NOTE(_E6), H__NOTE(_CS6), H__NOTE(_FS6), E__NOTE(_FS5), E__NOTE(_CS5), Q__NOTE(_B4), H__NOTE(_AS4), \
  W__NOTE(_FS5), HD_NOTE(_FS6), HD_NOTE(_B5), H__NOTE(_D6), H__NOTE(_CS6), H__NOTE(_E6), HD_NOTE(_A6), HD_NOTE(_E6), \
  W__NOTE(_D6), Q__NOTE(_CS6), Q__NOTE(_D6), HD_NOTE(_E6), HD_NOTE(_FS6), WD_NOTE(_B6), HD_NOTE(_E6), HD_NOTE(_FS6), \
  HD_NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_B5), Q__NOTE(_CS6), H__NOTE(_D6), H__NOTE(_E6), H__NOTE(_FS6), HD_NOTE(_E6), \
  HD_NOTE(_CS6), H__NOTE(_FS6), H__NOTE(_A6), H__NOTE(_B6), W__NOTE(_A6), H__NOTE(_FS6), BD_NOTE(_B6),

#define KAINE_SALVATION \
  BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_F5), BD_NOTE(_D5), BD_NOTE(_BF4), BD_NOTE(_C5), W__NOTE(_BF4), W__NOTE(_C5), \
  W__NOTE(_D5), BD_NOTE(_C5), BD_NOTE(_F4), BD_NOTE(_D5), W__NOTE(_BF4), W__NOTE(_C5), W__NOTE(_F5), BD_NOTE(_D5), \
  BD_NOTE(_BF4), WD_NOTE(_EF5), WD_NOTE(_BF4), W__NOTE(_A4), W__NOTE(_BF4), W__NOTE(_C5), B__NOTE(_C5), H__NOTE(_B4), \
  H__NOTE(_C5), BD_NOTE(_D5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), \
  H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), \
  H__NOTE(_A5), WD_NOTE(_G5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), \
  H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_B5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_FS5), \
  BD_NOTE(_E5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), \
  H__NOTE(_G5), H__NOTE(_FS5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_B5), H__NOTE(_A5), \
  WD_NOTE(_G5), WD_NOTE(_G5), W__NOTE(_G5), H__NOTE(_FS5), H__NOTE(_G5), H__NOTE(_A5), H__NOTE(_B5), H__NOTE(_A5), \
  H__NOTE(_G5), H__NOTE(_FS5), W__NOTE(_G5), H__NOTE(_D6), WD_NOTE(_D6), W__NOTE(_F5), H__NOTE(_C6), H__NOTE(_C6), \
  H__NOTE(_BF5), H__NOTE(_A5), WD_NOTE(_G5), WD_NOTE(_F5), WD_NOTE(_G5), WD_NOTE(_A5), BD_NOTE(_G5),

#define WEIGHT_OF_THE_WORLD \
  H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), WD_NOTE(_G6), H__NOTE(_B5), Q__NOTE(_C6), \
  Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), H__NOTE(_G6), Q__NOTE(_A6), W__NOTE(_G6), Q__NOTE(_C6), \
  Q__NOTE(_D6), H__NOTE(_E6), Q__NOTE(_F6), H__NOTE(_E6), H__NOTE(_F6), HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), \
  H__NOTE(_D6), WD_NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5), WD_NOTE(_B5), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), \
  Q__NOTE(_B5), H__NOTE(_C6), H__NOTE(_G6), WD_NOTE(_G6), H__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_C6), Q__NOTE(_B5), \
  H__NOTE(_C6), H__NOTE(_G6), H__NOTE(_G6), Q__NOTE(_A6), W__NOTE(_G6), Q__NOTE(_C6), Q__NOTE(_D6), H__NOTE(_E6), \
  Q__NOTE(_F6), H__NOTE(_E6), H__NOTE(_F6), HD_NOTE(_E6), H__NOTE(_D6), H__NOTE(_C6), H__NOTE(_D6), BD_NOTE(_D6), \
  Q__NOTE(_E6), Q__NOTE(_D6), Q__NOTE(_C6), Q__NOTE(_B5), H__NOTE(_C6), Q__NOTE(_C6), H__NOTE(_C6), HD_NOTE(_C6), \
  H__NOTE(_B5), H__NOTE(_C6), H__NOTE(_E6), H__NOTE(_G6), WD_NOTE(_G6), Q__NOTE(_C6), B__NOTE(_C6), H__NOTE(_B6), \
  Q__NOTE(_C7), BD_NOTE(_C7),

#define COIN_SOUND \
    E__NOTE(_A5  ),      \
    HD_NOTE(_E6  ),

#define ZELDA_PUZZLE \
    Q__NOTE(_G5),     \
    Q__NOTE(_FS5),    \
    Q__NOTE(_DS5),     \
    Q__NOTE(_A4),    \
    Q__NOTE(_GS4),     \
    Q__NOTE(_E5),     \
    Q__NOTE(_GS5),     \
    HD_NOTE(_C6),

#define ZELDA_TREASURE \
    Q__NOTE(_A4 ), \
    Q__NOTE(_AS4), \
    Q__NOTE(_B4 ), \
    HD_NOTE(_C5 ),

#define MARIO_THEME \
    Q__NOTE(_E5), \
    H__NOTE(_E5), \
    H__NOTE(_E5), \
    Q__NOTE(_C5), \
    H__NOTE(_E5), \
    W__NOTE(_G5), \
    Q__NOTE(_G4),

#define MARIO_THEME2 \
    WD_NOTE(_E5), \
    Q__NOTE(_C5), \
    H__NOTE(_E5), \
    W__NOTE(_G5), \
    Q__NOTE(_G4),

#define MARIO_GAMEOVER \
    HD_NOTE(_C5 ), \
    HD_NOTE(_G4 ), \
    H__NOTE(_E4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_B4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_AF4), \
    H__NOTE(_BF4), \
    H__NOTE(_AF4), \
    WD_NOTE(_G4 ),

#define MARIO_MUSHROOM \
    S__NOTE(_C5 ), \
    S__NOTE(_G4 ), \
    S__NOTE(_C5 ), \
    S__NOTE(_E5 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_C6 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_GS4), \
    S__NOTE(_C5 ), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_C6 ), \
    S__NOTE(_DS6), \
    S__NOTE(_GS6), \
    S__NOTE(_DS6), \
    S__NOTE(_AS4), \
    S__NOTE(_D5 ), \
    S__NOTE(_F5 ), \
    S__NOTE(_AS5), \
    S__NOTE(_D6 ), \
    S__NOTE(_F6 ), \
    S__NOTE(_AS6), \
    S__NOTE(_F6 )

#define MEGALOVANIA \
  Q__NOTE(_D4), Q__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), \
  H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), \
  Q__NOTE(_B3), Q__NOTE(_B3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), \
  HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), \
  Q__NOTE(_G4),

#define MEGALOVANIA2 \
  H__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), H__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), \
  H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), \
  Q__NOTE(_B3), Q__NOTE(_B3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), \
  HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), \
  Q__NOTE(_G4),

#define MEGALOVANIA2_SHORT \
  H__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
  Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4),
