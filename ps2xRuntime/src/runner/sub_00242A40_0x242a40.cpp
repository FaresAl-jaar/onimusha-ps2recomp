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

// Function: sub_00242A40
// Address: 0x242a40 - 0x242a9c
void sub_00242A40_0x242a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A40_0x242a40");
#endif

    switch (ctx->pc) {
        case 0x242a5cu: goto label_242a5c;
        default: break;
    }

    ctx->pc = 0x242a40u;

    // 0x242a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242a44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x242a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242a54: 0xc049590  jal         func_125640
    ctx->pc = 0x242A54u;
    SET_GPR_U32(ctx, 31, 0x242A5Cu);
    ctx->pc = 0x242A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A54u;
    // 0x242a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x242A54u, 0x242A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A5Cu;
label_242a5c:
    // 0x242a5c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x242a60: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x242a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x242a64: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x242a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x242a68: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x242a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x242a6c: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x242a70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x242a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a78: 0x8c83d704  lw          $v1, -0x28FC($a0)
    ctx->pc = 0x242a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CD704u));
    // 0x242a7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242a80: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x242a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x242a84: 0x8ca4d700  lw          $a0, -0x2900($a1)
    ctx->pc = 0x242a84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4CD700u));
    // 0x242a88: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x242a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x242a8c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x242a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x242a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242a94: 0x3e00008  jr          $ra
    ctx->pc = 0x242A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A94u;
        // 0x242a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A9Cu;
}
