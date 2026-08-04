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
            dsp->cycle++;
            break;
        case 1:
            dsp->cycle++;
            break;
        case 2:
            dsp->cycle++;
            break;
        case 3:
            dsp->cycle++;
            break;
        case 4:
            dsp->cycle++;
            break;
        case 5:
            dsp->cycle++;
            break;
        case 6:
            dsp->cycle++;
            break;
        case 7:
            dsp->cycle++;
            break;
        case 8:
            dsp->cycle++;
            break;
        case 9:
            dsp->cycle++;
            break;
        case 10:
            dsp->cycle++;
            break;
        case 11:
            dsp->cycle++;
            break;
        case 12:
            dsp->cycle++;
            break;
        case 13:
            dsp->cycle++;
            break;
        case 14:
            dsp->cycle++;
            break;
        case 15:
            dsp->cycle++;
            break;
        case 16:
            dsp->cycle++;
            break;
        case 17:
            dsp->cycle++;
            break;
        case 18:
            dsp->cycle++;
            break;
        case 19:
            dsp->cycle++;
            break;
        case 20:
            dsp->cycle++;
            break;
        case 21:
            dsp->cycle++;
            break;
        case 22:
            dsp->cycle++;
            break;
        case 23:
            dsp->cycle++;
            break;
        case 24:
            dsp->cycle++;
            break;
        case 25:
            dsp->cycle++;
            break;
        case 26:
            dsp->cycle++;
            break;
        case 27:
            dsp->cycle++;
            break;
        case 28:
            dsp->cycle++;
            break;
        case 29:
            dsp->cycle++;
            break;
        case 30:
            dsp->cycle++;
            break;
        case 31:
            dsp->cycle = 0;
            break;
        default:
            fprintf(stderr, "invalid dsp sub cycle: %i\n", dsp->cycle);
            UNREACHABLE();
    }
}
