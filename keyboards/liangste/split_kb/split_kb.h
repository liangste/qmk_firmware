#pragma once

#include "quantum.h"

#define LAYOUT( \
    L00, L01, L02, L03,   L04, L05, L06, L07, L08, L09, L06A,      R01, R02, R03, R04, R05, R06, R07, R08, \
    L10, L11, L12, L13,   L14, L15, L16, L17, L18, L19, L0B,        R9, R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22,        L23, L24, L25, L26, L27, L28,       R17, R18, R19, R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33,   L34, L35, L36, L37, L38, L39,            R26, R27, R28, R29, R30, R31, R32, R33, \
    L40, L41, L42,        L43, L44, L45, L46, L47, L48,            R34, R35, R36, R37, R38, R39, R41, R42, \
    L50,      L51, L52,   L53, L54, L55, L56, L57,                           R43, R44, R45, R46, R47, R48  \
) { \
    { L00, L01, L02, L03, L04, L05, L06, L07, L08, L09  }, \
    { L10, L11, L12, L13, L14, L15, L16, L17, L18, L19  }, \
    { L20, L21, L22, L33, L23, L24, L25, L26, L27, L28  }, \
    { L30, L31, L32, L52, L34, L35, L36, L37, L38, L39  }, \
    { L40, L41, L42, L43, L44, L45, L46, L47, L48, L06A }, \
    { L50, KC_NO, L51, L53, L54, L55, L56, L57, L0B, KC_NO  }, \
    { R01, R02, R03, R04, R05, R06, R07, R08, KC_NO, KC_NO  }, \
    { R9,  R10, R11, R12, R13, R14, R15, R16, KC_NO, KC_NO  }, \
    { R17, R18, R19, R20, R21, R22, R23, R24, KC_NO, KC_NO  }, \
    { R26, R27, R28, R29, R30, R31, R32, R33, KC_NO, KC_NO  }, \
    { R34, R35, R36, R37, R38, R39, R41, R42, KC_NO, KC_NO  }, \
    { R43, R44, R45, R46, R47, R48, R25, KC_NO, KC_NO, KC_NO  }  \
}
