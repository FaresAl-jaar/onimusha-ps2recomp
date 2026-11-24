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

// Function: sub_003CCB60
// Address: 0x3ccb60 - 0x3ccbb0
void sub_003CCB60_0x3ccb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCB60_0x3ccb60");
#endif

    switch (ctx->pc) {
        case 0x3ccb88u: goto label_3ccb88;
        default: break;
    }

    ctx->pc = 0x3ccb60u;

    // 0x3ccb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ccb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ccb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ccb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ccb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ccb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ccb6c: 0x8082032e  lb          $v0, 0x32E($a0)
    ctx->pc = 0x3ccb6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3ccb70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ccb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccb74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ccb78: 0x904501bd  lbu         $a1, 0x1BD($v0)
    ctx->pc = 0x3ccb78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x3ccb7c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3ccb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3ccb80: 0xc0bd0c0  jal         func_2F4300
    ctx->pc = 0x3CCB80u;
    SET_GPR_U32(ctx, 31, 0x3CCB88u);
    ctx->pc = 0x3CCB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCB80u;
    // 0x3ccb84: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4300u, 0x3CCB80u, 0x3CCB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCB88u;
label_3ccb88:
    // 0x3ccb88: 0x82030333  lb          $v1, 0x333($s0)
    ctx->pc = 0x3ccb88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
    // 0x3ccb8c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3ccb8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ccb90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CCB90u;
    {
        const bool branch_taken_0x3ccb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCB90u;
        // 0x3ccb94: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb90) {
            ctx->pc = 0x3CCBA0u;
            goto label_3ccba0;
        }
    }
    ctx->pc = 0x3CCB98u;
    // 0x3ccb98: 0xa2030333  sb          $v1, 0x333($s0)
    ctx->pc = 0x3ccb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 819), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ccb9c: 0x0  nop
    ctx->pc = 0x3ccb9cu;
    // NOP
label_3ccba0:
    // 0x3ccba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ccba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCBA8u;
        // 0x3ccbac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCBB0u;
}
