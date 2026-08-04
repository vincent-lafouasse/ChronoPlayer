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
void dsp_tick(struct DSP_State dsp[static 1]);
