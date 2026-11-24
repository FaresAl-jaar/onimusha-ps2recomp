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

// Function: sub_00398CA0
// Address: 0x398ca0 - 0x398ce4
void sub_00398CA0_0x398ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398CA0_0x398ca0");
#endif

    switch (ctx->pc) {
        case 0x398cbcu: goto label_398cbc;
        case 0x398cc8u: goto label_398cc8;
        case 0x398cd4u: goto label_398cd4;
        default: break;
    }

    ctx->pc = 0x398ca0u;

    // 0x398ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398ca4: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x398ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x398ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398cac: 0x2406014a  addiu       $a2, $zero, 0x14A
    ctx->pc = 0x398cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x398cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398cb4: 0xc0dbfd4  jal         func_36FF50
    ctx->pc = 0x398CB4u;
    SET_GPR_U32(ctx, 31, 0x398CBCu);
    ctx->pc = 0x398CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CB4u;
    // 0x398cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FF50u, 0x398CB4u, 0x398CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CBCu;
label_398cbc:
    // 0x398cbc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398cc0: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x398CC0u;
    SET_GPR_U32(ctx, 31, 0x398CC8u);
    ctx->pc = 0x398CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CC0u;
    // 0x398cc4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x398CC0u, 0x398CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CC8u;
label_398cc8:
    // 0x398cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ccc: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x398CCCu;
    SET_GPR_U32(ctx, 31, 0x398CD4u);
    ctx->pc = 0x398CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398CCCu;
    // 0x398cd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x398CCCu, 0x398CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398CD4u;
label_398cd4:
    // 0x398cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x398CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398CDCu;
        // 0x398ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398CE4u;
}
