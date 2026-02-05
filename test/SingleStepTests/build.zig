const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const c_sources = [_][]const u8{
        "../../src/cpu.c",
        "../../src/bus_io.c",
        "../../src/instructions.gen.c",
        "../../src/instruction_table.gen.c",
    };

    const c_flags = [_][]const u8{
        "-std=c11",
        "-Wall",
        "-Wextra",
        "-Wpedantic",
    };

    const mod = b.addModule("zig_tests", .{
        .root_source_file = b.path("src/root.zig"),
        .target = target,
        .optimize = optimize,
    });

    mod.addCSourceFiles(.{
        .files = &c_sources,
        .flags = &c_flags,
    });
    mod.addIncludePath(b.path("../../src"));
    mod.link_libc = true;

    const mod_tests = b.addTest(.{
        .root_module = mod,
    });

    const run_mod_tests = b.addRunArtifact(mod_tests);
    run_mod_tests.has_side_effects = true; // Always run, show output

    // Top level test step
    const test_step = b.step("test", "Run ChronoPlayer tests");
    test_step.dependOn(&run_mod_tests.step);
}
