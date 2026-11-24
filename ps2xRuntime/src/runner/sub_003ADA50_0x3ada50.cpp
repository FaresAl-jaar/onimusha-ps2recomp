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

// Function: sub_003ADA50
// Address: 0x3ada50 - 0x3ada9c
void sub_003ADA50_0x3ada50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADA50_0x3ada50");
#endif

    switch (ctx->pc) {
        case 0x3ada7cu: goto label_3ada7c;
        case 0x3ada8cu: goto label_3ada8c;
        default: break;
    }

    ctx->pc = 0x3ada50u;

    // 0x3ada50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ada50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ada54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ada54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ada58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ada58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ada5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ada5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ada60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ada64: 0x24060660  addiu       $a2, $zero, 0x660
    ctx->pc = 0x3ada64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x3ada68: 0xa4820044  sh          $v0, 0x44($a0)
    ctx->pc = 0x3ada68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ada6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ada6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada70: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x3ada70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ada74: 0xc049590  jal         func_125640
    ctx->pc = 0x3ADA74u;
    SET_GPR_U32(ctx, 31, 0x3ADA7Cu);
    ctx->pc = 0x3ADA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA74u;
    // 0x3ada78: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3ADA74u, 0x3ADA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA7Cu;
label_3ada7c:
    // 0x3ada7c: 0x260407f0  addiu       $a0, $s0, 0x7F0
    ctx->pc = 0x3ada7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2032));
    // 0x3ada80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ada80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada84: 0xc049590  jal         func_125640
    ctx->pc = 0x3ADA84u;
    SET_GPR_U32(ctx, 31, 0x3ADA8Cu);
    ctx->pc = 0x3ADA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA84u;
    // 0x3ada88: 0x24065eb0  addiu       $a2, $zero, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3ADA84u, 0x3ADA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA8Cu;
label_3ada8c:
    // 0x3ada8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ada8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ada90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ada90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ada94: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA94u;
        // 0x3ada98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADA9Cu;
}
