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

// Function: sub_003C7C40
// Address: 0x3c7c40 - 0x3c7ca8
void sub_003C7C40_0x3c7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7C40_0x3c7c40");
#endif

    switch (ctx->pc) {
        case 0x3c7c70u: goto label_3c7c70;
        case 0x3c7c88u: goto label_3c7c88;
        default: break;
    }

    ctx->pc = 0x3c7c40u;

    // 0x3c7c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c7c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c7c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c7c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c7c4c: 0x93838cbc  lbu         $v1, -0x7344($gp)
    ctx->pc = 0x3c7c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
    // 0x3c7c50: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C7C50u;
    {
        const bool branch_taken_0x3c7c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7c50) {
            ctx->pc = 0x3C7C98u;
            goto label_3c7c98;
        }
    }
    ctx->pc = 0x3C7C58u;
    // 0x3c7c58: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C7C58u;
    {
        const bool branch_taken_0x3c7c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7c58) {
            ctx->pc = 0x3C7C90u;
            goto label_3c7c90;
        }
    }
    ctx->pc = 0x3C7C60u;
    // 0x3c7c60: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x3c7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x3c7c64: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C7C64u;
    {
        const bool branch_taken_0x3c7c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7c64) {
            ctx->pc = 0x3C7C90u;
            goto label_3c7c90;
        }
    }
    ctx->pc = 0x3C7C6Cu;
    // 0x3c7c6c: 0x0  nop
    ctx->pc = 0x3c7c6cu;
    // NOP
label_3c7c70:
    // 0x3c7c70: 0x90a4053a  lbu         $a0, 0x53A($a1)
    ctx->pc = 0x3c7c70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1338)));
    // 0x3c7c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c7c78: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7C78u;
    {
        const bool branch_taken_0x3c7c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C78u;
        // 0x3c7c7c: 0x8cb005bc  lw          $s0, 0x5BC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c78) {
            ctx->pc = 0x3C7C88u;
            goto label_3c7c88;
        }
    }
    ctx->pc = 0x3C7C80u;
    // 0x3c7c80: 0xc0c0860  jal         func_302180
    ctx->pc = 0x3C7C80u;
    SET_GPR_U32(ctx, 31, 0x3C7C88u);
    ctx->pc = 0x3C7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C80u;
    // 0x3c7c84: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x3C7C80u, 0x3C7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C88u;
label_3c7c88:
    // 0x3c7c88: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C7C88u;
    {
        const bool branch_taken_0x3c7c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C88u;
        // 0x3c7c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c88) {
            ctx->pc = 0x3C7C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7c70;
        }
    }
    ctx->pc = 0x3C7C90u;
label_3c7c90:
    // 0x3c7c90: 0xa3808cbc  sb          $zero, -0x7344($gp)
    ctx->pc = 0x3c7c90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937788), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c7c94: 0x0  nop
    ctx->pc = 0x3c7c94u;
    // NOP
label_3c7c98:
    // 0x3c7c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c7c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7CA0u;
        // 0x3c7ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7CA8u;
}
