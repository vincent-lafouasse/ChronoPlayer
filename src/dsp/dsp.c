#include "dsp.h"

#include "dsp_internals.h"

#define DEFINE_DUMMY_STEP(index)                               \
    void XXX_voice_step##index(struct DSP_State dsp[static 1], \
                               uint8_t voice_i)                \
    {                                                          \
        (void)dsp;                                             \
        (void)voice_i;                                         \
    }

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
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        case 18:
            break;
        case 19:
            break;
        case 20:
            break;
        case 21:
            break;
        case 22:
            break;
        case 23:
            break;
        case 24:
            break;
        case 25:
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
            break;
        case 31:
            break;
        default:
            fprintf(stderr, "invalid dsp sub cycle: %i\n", dsp->cycle);
            UNREACHABLE();
    }
    dsp->cycle++;
    dsp->cycle %= 32;
}
