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

// Function: sub_003EDC50
// Address: 0x3edc50 - 0x3edc90
void sub_003EDC50_0x3edc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDC50_0x3edc50");
#endif

    switch (ctx->pc) {
        case 0x3edc74u: goto label_3edc74;
        case 0x3edc7cu: goto label_3edc7c;
        default: break;
    }

    ctx->pc = 0x3edc50u;

    // 0x3edc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3edc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3edc54: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3edc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3edc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3edc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3edc5c: 0x24a55920  addiu       $a1, $a1, 0x5920
    ctx->pc = 0x3edc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22816));
    // 0x3edc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3edc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3edc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3edc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3edc6c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EDC6Cu;
    SET_GPR_U32(ctx, 31, 0x3EDC74u);
    ctx->pc = 0x3EDC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC6Cu;
    // 0x3edc70: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EDC6Cu, 0x3EDC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC74u;
label_3edc74:
    // 0x3edc74: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EDC74u;
    SET_GPR_U32(ctx, 31, 0x3EDC7Cu);
    ctx->pc = 0x3EDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC74u;
    // 0x3edc78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EDC74u, 0x3EDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC7Cu;
label_3edc7c:
    // 0x3edc7c: 0xa6022b50  sh          $v0, 0x2B50($s0)
    ctx->pc = 0x3edc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11088), (uint16_t)GPR_U32(ctx, 2));
    // 0x3edc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3edc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3edc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edc88: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC88u;
        // 0x3edc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDC90u;
}
