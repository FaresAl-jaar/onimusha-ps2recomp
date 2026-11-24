#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F388
// Address: 0x20f388 - 0x20f428
void sub_0020F388_0x20f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F388_0x20f388");
#endif

    switch (ctx->pc) {
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3f4u: goto label_20f3f4;
        case 0x20f404u: goto label_20f404;
        case 0x20f40cu: goto label_20f40c;
        default: break;
    }

    ctx->pc = 0x20f388u;

    // 0x20f388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20f38c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20f390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f394: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20f398: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20f398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f39c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f3a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20f3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f3a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20f3ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20f3b0: 0xc084990  jal         func_212640
    ctx->pc = 0x20F3B0u;
    SET_GPR_U32(ctx, 31, 0x20F3B8u);
    ctx->pc = 0x20F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3B0u;
    // 0x20f3b4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x20F3B0u, 0x20F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3B8u;
label_20f3b8:
    // 0x20f3b8: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x20f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x20f3bc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x20f3c0: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x20f3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20f3c4: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x20f3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20f3c8: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x20f3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20f3cc: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x20f3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x20f3d0: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x20f3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20f3d4: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x20f3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x20f3d8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x20f3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3dc: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x20f3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3e0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x20f3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3e4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x20f3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3e8: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x20f3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20f3ec: 0xc083d0a  jal         func_20F428
    ctx->pc = 0x20F3ECu;
    SET_GPR_U32(ctx, 31, 0x20F3F4u);
    ctx->pc = 0x20F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3ECu;
    // 0x20f3f0: 0xb6050010  sdr         $a1, 0x10($s0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F428u, 0x20F3ECu, 0x20F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3F4u;
label_20f3f4:
    // 0x20f3f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20f3f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x20f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20f3fc: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x20F3FCu;
    SET_GPR_U32(ctx, 31, 0x20F404u);
    ctx->pc = 0x20F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3FCu;
    // 0x20f400: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x20F3FCu, 0x20F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F404u;
label_20f404:
    // 0x20f404: 0xc084996  jal         func_212658
    ctx->pc = 0x20F404u;
    SET_GPR_U32(ctx, 31, 0x20F40Cu);
    ctx->pc = 0x20F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F404u;
    // 0x20f408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x20F404u, 0x20F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F40Cu;
label_20f40c:
    // 0x20f40c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f410: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f414: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f418: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20f418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f41c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f420: 0x3e00008  jr          $ra
    ctx->pc = 0x20F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F420u;
        // 0x20f424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F428u;
}
