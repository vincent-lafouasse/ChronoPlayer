#include "dsp.h"

#include <stdio.h>

#include "dsp_internals.h"

#define DEFINE_DUMMY_STEP(index)                               \
    void XXX_voice_step##index(struct DSP_State dsp[static 1], \
                               uint8_t voice_i)                \
    {                                                          \
        (void)dsp;                                             \
        (void)voice_i;                                         \
    }

DEFINE_DUMMY_STEP(3b)
DEFINE_DUMMY_STEP(3c)
DEFINE_DUMMY_STEP(4)
DEFINE_DUMMY_STEP(5)
DEFINE_DUMMY_STEP(6)
DEFINE_DUMMY_STEP(7)
DEFINE_DUMMY_STEP(8)
DEFINE_DUMMY_STEP(9)

// TODO: take care of timers and the such at some point
void dsp_tick(struct DSP_State dsp[static 1])
{
    switch (dsp->cycle) {
        case 0:
            XXX_voice_step5(dsp, 0);
            voice_step2(dsp, 1);
            break;
        case 1:
            XXX_voice_step6(dsp, 0);
            voice_step3(dsp, 1);
            break;
        case 2:
            XXX_voice_step7(dsp, 0);
            XXX_voice_step4(dsp, 1);
            voice_step1(dsp, 3);
            break;
        case 3:
            XXX_voice_step8(dsp, 0);
            XXX_voice_step5(dsp, 1);
            voice_step2(dsp, 2);
            break;
        case 4:
            XXX_voice_step9(dsp, 0);
            XXX_voice_step6(dsp, 1);
            voice_step3(dsp, 2);
            break;
        case 5:
            XXX_voice_step7(dsp, 1);
            XXX_voice_step4(dsp, 2);
            voice_step1(dsp, 4);
            break;
        case 6:
            XXX_voice_step8(dsp, 1);
            XXX_voice_step5(dsp, 2);
            voice_step2(dsp, 3);
            break;
        case 7:
            XXX_voice_step9(dsp, 1);
            XXX_voice_step6(dsp, 2);
            voice_step3(dsp, 3);
            break;
        case 8:
            XXX_voice_step7(dsp, 2);
            XXX_voice_step4(dsp, 3);
            voice_step1(dsp, 5);
            break;
        case 9:
            XXX_voice_step8(dsp, 2);
            XXX_voice_step5(dsp, 3);
            voice_step2(dsp, 4);
            break;
        case 10:
            XXX_voice_step9(dsp, 2);
            XXX_voice_step6(dsp, 3);
            voice_step3(dsp, 4);
            break;
        case 11:
            XXX_voice_step7(dsp, 3);
            XXX_voice_step4(dsp, 4);
            voice_step1(dsp, 6);
            break;
        case 12:
            XXX_voice_step8(dsp, 3);
            XXX_voice_step5(dsp, 4);
            voice_step2(dsp, 5);
            break;
        case 13:
            XXX_voice_step9(dsp, 3);
            XXX_voice_step6(dsp, 4);
            voice_step3(dsp, 5);
            break;
        case 14:
            XXX_voice_step7(dsp, 4);
            XXX_voice_step4(dsp, 5);
            voice_step1(dsp, 7);
            break;
        case 15:
            XXX_voice_step8(dsp, 4);
            XXX_voice_step5(dsp, 5);
            voice_step2(dsp, 6);
            break;
        case 16:
            XXX_voice_step9(dsp, 4);
            XXX_voice_step6(dsp, 5);
            voice_step3(dsp, 6);
            break;
        case 17:
            voice_step1(dsp, 0);
            XXX_voice_step7(dsp, 5);
            XXX_voice_step4(dsp, 6);
            break;
        case 18:
            XXX_voice_step8(dsp, 5);
            XXX_voice_step5(dsp, 6);
            voice_step2(dsp, 7);
            break;
        case 19:
            XXX_voice_step9(dsp, 5);
            XXX_voice_step6(dsp, 6);
            voice_step3(dsp, 7);
            break;
        case 20:
            voice_step1(dsp, 1);
            XXX_voice_step7(dsp, 6);
            XXX_voice_step4(dsp, 7);
            break;
        case 21:
            voice_step2(dsp, 0);
            XXX_voice_step8(dsp, 6);
            XXX_voice_step5(dsp, 7);
            break;
        case 22:
            voice_step3(dsp, 0);  // S3a
            XXX_voice_step9(dsp, 6);
            XXX_voice_step6(dsp, 7);
            break;
        case 23:
            XXX_voice_step7(dsp, 7);
            break;
        case 24:
            XXX_voice_step8(dsp, 7);
            break;
        case 25:
            XXX_voice_step3b(dsp, 0);
            XXX_voice_step9(dsp, 7);
            break;
        case 26:
            break;
        case 27:
            break;
        case 28:
            break;
        case 29:
            break;
        case 30:
            XXX_voice_step3c(dsp, 0);
            break;
        case 31:
            XXX_voice_step4(dsp, 0);
            voice_step1(dsp, 2);
            break;
        default:
            fprintf(stderr, "invalid dsp sub cycle: %i\n", dsp->cycle);
            UNREACHABLE();
    }

    dsp->cycle++;
    dsp->cycle %= 32;
}
