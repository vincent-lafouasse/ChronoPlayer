const std = @import("std");

const ChronoPlayer = @cImport({
    @cInclude("state.h");
    @cInclude("instruction.h");
    @cInclude("instructions.gen.h");
});

test "Dummy linkage test" {
    var state: ChronoPlayer.SPC_State = std.mem.zeroes(ChronoPlayer.SPC_State);
    _ = ChronoPlayer.nop(&state, 1);
    std.debug.print("Successful linkage with ChronoPlayer C code\n", .{});
}
