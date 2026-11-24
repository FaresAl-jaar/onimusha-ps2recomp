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

// Function: sub_0024A540
// Address: 0x24a540 - 0x24a598
void sub_0024A540_0x24a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A540_0x24a540");
#endif

    switch (ctx->pc) {
        case 0x24a560u: goto label_24a560;
        case 0x24a584u: goto label_24a584;
        default: break;
    }

    ctx->pc = 0x24a540u;

    // 0x24a540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a544: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a548: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24a54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24a558: 0xc049590  jal         func_125640
    ctx->pc = 0x24A558u;
    SET_GPR_U32(ctx, 31, 0x24A560u);
    ctx->pc = 0x24A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A558u;
    // 0x24a55c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24A558u, 0x24A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A560u;
label_24a560:
    // 0x24a560: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x24a560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24a564: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x24a564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24a568: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x24a568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24a56c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24a570: 0x24a5d578  addiu       $a1, $a1, -0x2A88
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956408));
    // 0x24a574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a578: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x24a578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24a57c: 0xc049e80  jal         func_127A00
    ctx->pc = 0x24A57Cu;
    SET_GPR_U32(ctx, 31, 0x24A584u);
    ctx->pc = 0x24A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A57Cu;
    // 0x24a580: 0xa3a00005  sb          $zero, 0x5($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x24A57Cu, 0x24A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A584u;
label_24a584:
    // 0x24a584: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a588: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x24a588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24a58c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a590: 0x3e00008  jr          $ra
    ctx->pc = 0x24A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A590u;
        // 0x24a594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A598u;
}
