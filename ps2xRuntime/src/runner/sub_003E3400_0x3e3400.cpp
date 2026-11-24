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

// Function: sub_003E3400
// Address: 0x3e3400 - 0x3e3448
void sub_003E3400_0x3e3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3400_0x3e3400");
#endif

    switch (ctx->pc) {
        case 0x3e3418u: goto label_3e3418;
        case 0x3e3420u: goto label_3e3420;
        case 0x3e3438u: goto label_3e3438;
        default: break;
    }

    ctx->pc = 0x3e3400u;

    // 0x3e3400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e340c: 0xa085005e  sb          $a1, 0x5E($a0)
    ctx->pc = 0x3e340cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e3410: 0xc0f8ea0  jal         func_3E3A80
    ctx->pc = 0x3E3410u;
    SET_GPR_U32(ctx, 31, 0x3E3418u);
    ctx->pc = 0x3E3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3410u;
    // 0x3e3414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3A80u, 0x3E3410u, 0x3E3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3418u;
label_3e3418:
    // 0x3e3418: 0xc0f8fac  jal         func_3E3EB0
    ctx->pc = 0x3E3418u;
    SET_GPR_U32(ctx, 31, 0x3E3420u);
    ctx->pc = 0x3E341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3418u;
    // 0x3e341c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3EB0u, 0x3E3418u, 0x3E3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3420u;
label_3e3420:
    // 0x3e3420: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e3420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3428: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3e3428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3e342c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e342cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3430: 0xc05e544  jal         func_179510
    ctx->pc = 0x3E3430u;
    SET_GPR_U32(ctx, 31, 0x3E3438u);
    ctx->pc = 0x3E3434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3430u;
    // 0x3e3434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179510u, 0x3E3430u, 0x3E3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3438u;
label_3e3438:
    // 0x3e3438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e343c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3440: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3440u;
        // 0x3e3444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3448u;
}
