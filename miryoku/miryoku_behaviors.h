// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP

// Home row mods: U_MT_L on the left hand, U_MT_R on the right hand. Where the mapping defines
// MIRYOKU_HOMEROWMODS_{LEFT,RIGHT}_POSITIONS, a held mod only becomes a modifier when the next
// key is on the opposite hand; otherwise they are the same as U_MT.
#if defined (MIRYOKU_HOMEROWMODS_LEFT_POSITIONS) && defined (MIRYOKU_HOMEROWMODS_RIGHT_POSITIONS)
  #define U_MT_L(MOD, TAP) &u_hm_l MOD TAP
  #define U_MT_R(MOD, TAP) &u_hm_r MOD TAP
#else
  #define U_MT_L(MOD, TAP) U_MT(MOD, TAP)
  #define U_MT_R(MOD, TAP) U_MT(MOD, TAP)
#endif
