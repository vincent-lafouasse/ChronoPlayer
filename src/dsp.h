#pragma once

#include "state.h"

#define DSP_V_VOLL(voice) ((voice) << 4 | 0x0)
#define DSP_V_VOLR(voice) ((voice) << 4 | 0x1)
#define DSP_V_PITCHL(voice) ((voice) << 4 | 0x2)
#define DSP_V_PITCHH(voice) ((voice) << 4 | 0x3)
#define DSP_V_SRCN(voice) ((voice) << 4 | 0x4)
#define DSP_V_ADSR1(voice) ((voice) << 4 | 0x5)
#define DSP_V_ADSR2(voice) ((voice) << 4 | 0x6)
#define DSP_V_GAIN(voice) ((voice) << 4 | 0x7)
#define DSP_V_ENVX(voice) ((voice) << 4 | 0x8)
#define DSP_V_OUTX(voice) ((voice) << 4 | 0x9)

#define DSP_MVOLL (0x0c)
#define DSP_MVOLR (0x1c)
#define DSP_EVOLL (0x2c)
#define DSP_EVOLR (0x3c)
#define DSP_KON (0x4c)
#define DSP_KOFF (0x5c)
#define DSP_FLG (0x6c)
#define DSP_ENDX (0x7c)

#define DSP_EFB (0x0d)
#define DSP_PMON (0x2d)
#define DSP_NON (0x3d)
#define DSP_EON (0x4d)
#define DSP_DIR (0x5d)
#define DSP_ESA (0x6d)
#define DSP_EDL (0x7d)

#define DSP_FFC(i) ((i) << 4 | 0xf)
