# ChronoPlayer - a SNES .spc player

A cycle-accurate SPC700 CPU emulator and S-DSP implementation written in C11, capable of loading and playing `.spc` files from SNES games.
The SPC700 is the audio co-processor designed by Sony for the SNES, running its own isolated RAM and instruction set entirely separate from the main 65816 CPU.

The CPU core passes all 254 implemented opcodes against [SingleStepTests](https://github.com/SingleStepTests/spc700), a behavioural test suite derived from hardware captures.
The DSP implementation is in progress.

I love Chrono Trigger

## dedication

This project is dedicated to Near/byuu (1983 – 2021). Their work on the `bsnes` emulator and `higan` collection set a standard for accuracy and i greatly appreciate their efforts to preserve the SNES.

This is for them.

## huge thanks

**None of this would have been possible without them.** While my name is on the repository, the logic, the soul, and the data within this player belong to their decades of hard work and brilliance and i want to extend a huge thank you:

- to Anomie the absolute goat for providing a lot of documentation on an otherwise undocumented platform
- to blargg for the legendary amount of research and time spent reverse-engineering the SNES APU/DSP to give us an authoritative source on how the system actually behaves
- to Yasunori Mitsuda for composing the soul of Chrono Trigger. This project exists because your music remains just as haunting and beautiful decades later. May your music live on through the ages like Crono, all the way to the End of Time
- to The Dream Team: Hironobu Sakaguchi, Yuji Horii, Akira Toriyama, Kazuhiko Aoki, and Masato Kato. Thank you for creating a masterpiece that transcends time, perhaps my favorite game

May Chrono Trigger and the SNES live on forever

## references

- [SNES Development Manual (Nintendo)](http://nuclear.mutantstargoat.com/articles/snes_notes/refs/snes_dev_manual1.pdf)
    - especially Book I Section 3: SNES Sound
    - and Book I Appendix C: SPC700 Commands
- [S-SMP section of sneslab.net](https://sneslab.net/wiki/S-SMP)
- [SPC700 Reference from the SFC Dev. wiki](https://wiki.superfamicom.org/spc700-reference)
