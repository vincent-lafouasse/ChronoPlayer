#include "dsp_internals.h"

// note: all comments that start with //__ are verbatim from Anomie

void voice_step1(struct DSP_State dsp[static 1], uint8_t voice_i)
{
    const struct VoiceRegisters* const register_view =
        voice_registers(dsp, voice_i);
    struct Voice* const voice = dsp->voices + voice_i;

    //__ S1. Load VxSRCN register, if necessary.
    voice->srcn = register_view->srcn;
}

void voice_step2(struct DSP_State dsp[static 1], uint8_t voice_i)
{
    const struct VoiceRegisters* const register_view =
        voice_registers(dsp, voice_i);
    struct Voice* const voice = dsp->voices + voice_i;

    //__ S2. Load the sample pointer (using previously loaded DIR and VxSRCN) if
    //__      necessary.
    //__     Load VxPITCHL register.
    //__     Load VxADSR1 register.
    const uint16_t sample_table = AS_U16(dsp->dir) << 8;
    const uint16_t sample_location_offset = 4 * AS_U16(register_view->srcn);
    voice->brr_pointer = sample_table + sample_location_offset;

    voice->pitch_low = register_view->pitch_low;
    voice->adsr1 = register_view->adsr1;
}

void voice_step3(struct DSP_State dsp[static 1], uint8_t voice_i)
{
    const struct VoiceRegisters* const register_view =
        voice_registers(dsp, voice_i);
    struct Voice* const voice = dsp->voices + voice_i;

    //__ S3. a. Load VxPITCHH register.
    //__        Apply pitch modulation if applicable.
    //__     b. Load the BRR header byte (every time), and the first of the two
    //__     BRR
    //__         bytes that will be decoded.
    //__     c. If applicable, replace the current sample with the noise sample.
    //__        Apply the volume envelope.
    //__         - This is the value used for modulating the next voice's pitch,
    //__         if
    //__           applicable.
    //__        Check FLG bit 7 (NOT previously loaded).
    //__        Check BRR header 'e' and 'l' bits to determine if the voice
    //ends.
    //__        Handle KOFF and KON using previously loaded values. If KON,
    //ENDX.x
    //__        will
    //__         be cleared in step S7.
    //__        Load VxGAIN or VxADSR2 register depending on ADSR1.7.
    //__        Update the volume envelope, using previously loaded values.
    voice->pitch_high = register_view->pitch_high;
    //__ TODO: check how pitch modulation happens
}

//__ S4. Load and apply VxVOLL register.
//__     If a new group of BRR samples is required, load the second BRR byte and
//__      decode the group of 4 BRR samples. This is definitely not done when
//not
//__      necessary. If necessary, adjust the BRR pointer to the next block, or
//__      flag the loop address for loading next step S2 and set ENDX.x in step
//__      S7. Note that this setting of ENDX.x will not override the clearing
//due
//__      to KON in step S3c, if both occur during the same sample.
//__     Increment interpolation sample position as specified by pitch values.
//__     At any point from now until we next get to S3c, the next sample may be
//__      calculated using the interpolation position and BRR buffer contents.
//__ S5. Load and apply VxVOLR register.
//__     The new ENDX.x value is prepared, and can be overwritten. Reads will
//not
//__      see it yet.
//__ S6. The new VxOUTX value is prepared, and can be overwritten. Reads will
//not
//__      see it yet.
//__ S7. The new ENDX.x value may now be read.
//__     The new VxENVX value is prepared, and can be overwritten. Reads will
//not
//__      see it yet.
//__ S8. The new VxOUTX value may now be read.
//__ S9. The new VxENVX value may now be read.
