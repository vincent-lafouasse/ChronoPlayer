#include "dsp_internals.h"

void voice_step1(struct DSP_State dsp[static 1], uint8_t voice_i)
{
    const struct VoiceRegisters* const register_view =
        voice_registers(dsp, voice_i);
    struct Voice* const voice = dsp->voices + voice_i;

    // S1. Load VxSRCN register, if necessary.
    voice->srcn = register_view->srcn;
}

// S2. Load the sample pointer (using previously loaded DIR and VxSRCN) if
//      necessary.
//     Load VxPITCHL register.
//     Load VxADSR1 register.
// S3. a. Load VxPITCHH register.
//        Apply pitch modulation if applicable.
//     b. Load the BRR header byte (every time), and the first of the two BRR
//         bytes that will be decoded.
//     c. If applicable, replace the current sample with the noise sample.
//        Apply the volume envelope.
//         - This is the value used for modulating the next voice's pitch, if
//           applicable.
//        Check FLG bit 7 (NOT previously loaded).
//        Check BRR header 'e' and 'l' bits to determine if the voice ends.
//        Handle KOFF and KON using previously loaded values. If KON, ENDX.x
//        will
//         be cleared in step S7.
//        Load VxGAIN or VxADSR2 register depending on ADSR1.7.
//        Update the volume envelope, using previously loaded values.
// S4. Load and apply VxVOLL register.
//     If a new group of BRR samples is required, load the second BRR byte and
//      decode the group of 4 BRR samples. This is definitely not done when not
//      necessary. If necessary, adjust the BRR pointer to the next block, or
//      flag the loop address for loading next step S2 and set ENDX.x in step
//      S7. Note that this setting of ENDX.x will not override the clearing due
//      to KON in step S3c, if both occur during the same sample.
//     Increment interpolation sample position as specified by pitch values.
//     At any point from now until we next get to S3c, the next sample may be
//      calculated using the interpolation position and BRR buffer contents.
// S5. Load and apply VxVOLR register.
//     The new ENDX.x value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S6. The new VxOUTX value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S7. The new ENDX.x value may now be read.
//     The new VxENVX value is prepared, and can be overwritten. Reads will not
//      see it yet.
// S8. The new VxOUTX value may now be read.
// S9. The new VxENVX value may now be read.
