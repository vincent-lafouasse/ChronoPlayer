# ChronoPlayer Zig Linkage Tests

Minimal Zig tests for verifying C linkage with the SPC700 emulator.

## What This Does

- Imports all ChronoPlayer C code into `ChronoPlayer` namespace
- Instantiates `SPC_State` struct
- Calls `nop()` instruction function
- Verifies linkage works correctly

## Build and Run

```bash
# Run tests
zig build test

# Expected output:
# ✓ Linkage successful: nop() callable from Zig
# All 1 tests passed.
```

## Project Structure

```
test/zig-tests/
├── build.zig          # Build configuration (Zig 0.15.2)
├── build.zig.zon      # Package metadata
└── src/
    └── root.zig       # Test code with @cImport
```

## How It Works (Zig 0.15.2)

1. **C code compilation**: `build.zig` adds C sources to the module:
   ```zig
   mod.addCSourceFiles(.{ .files = &c_sources, .flags = &c_flags });
   mod.addIncludePath(b.path("../../src"));
   mod.link_libc = true;
   ```

2. **C header import**: `root.zig` uses `@cImport` to import headers:
   ```zig
   const ChronoPlayer = @cImport({
       @cInclude("state.h");
       @cInclude("instruction.h");
       @cInclude("instructions.gen.h");
   });
   ```

3. **Direct C calls**: No FFI layer, just call C functions:
   ```zig
   var state: ChronoPlayer.SPC_State = std.mem.zeroes(ChronoPlayer.SPC_State);
   _ = ChronoPlayer.nop(&state, 1);
   ```

## Why This Works

Zig's C interop is zero-friction:
- ✅ `@cImport()` translates headers at compile time (no bindgen)
- ✅ Direct C ABI compatibility (no FFI layer)
- ✅ Zig compiles C code directly
- ✅ All C types accessible as `ChronoPlayer.*`
