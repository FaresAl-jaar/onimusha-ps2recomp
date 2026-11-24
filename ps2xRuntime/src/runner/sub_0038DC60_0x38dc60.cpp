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

// Function: sub_0038DC60
// Address: 0x38dc60 - 0x38dd04
void sub_0038DC60_0x38dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DC60_0x38dc60");
#endif

    switch (ctx->pc) {
        case 0x38dc78u: goto label_38dc78;
        case 0x38dc94u: goto label_38dc94;
        case 0x38dcb4u: goto label_38dcb4;
        case 0x38dce0u: goto label_38dce0;
        default: break;
    }

    ctx->pc = 0x38dc60u;

    // 0x38dc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38dc64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38dc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38dc6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38dc70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38dc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38dc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38dc78:
    // 0x38dc78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38dc7c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x38dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x38dc80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38dc80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38dc84: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x38DC84u;
    {
        const bool branch_taken_0x38dc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC84u;
        // 0x38dc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc84) {
            ctx->pc = 0x38DCE0u;
            goto label_38dce0;
        }
    }
    ctx->pc = 0x38DC8Cu;
    // 0x38dc8c: 0xc0e36b0  jal         func_38DAC0
    ctx->pc = 0x38DC8Cu;
    SET_GPR_U32(ctx, 31, 0x38DC94u);
    ctx->pc = 0x38DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DAC0u, 0x38DC8Cu, 0x38DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DC94u;
label_38dc94:
    // 0x38dc94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38dc98: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38DC98u;
    {
        const bool branch_taken_0x38dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dc98) {
            ctx->pc = 0x38DCC0u;
            goto label_38dcc0;
        }
    }
    ctx->pc = 0x38DCA0u;
    // 0x38dca0: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x38dca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38dca4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x38dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x38dca8: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x38dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x38dcac: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x38DCACu;
    SET_GPR_U32(ctx, 31, 0x38DCB4u);
    ctx->pc = 0x38DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DCACu;
    // 0x38dcb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x38DCACu, 0x38DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DCB4u;
label_38dcb4:
    // 0x38dcb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38DCB4u;
    {
        const bool branch_taken_0x38dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCB4u;
        // 0x38dcb8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dcb4) {
            ctx->pc = 0x38DCE0u;
            goto label_38dce0;
        }
    }
    ctx->pc = 0x38DCBCu;
    // 0x38dcbc: 0x0  nop
    ctx->pc = 0x38dcbcu;
    // NOP
label_38dcc0:
    // 0x38dcc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38dcc4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38DCC4u;
    {
        const bool branch_taken_0x38dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dcc4) {
            ctx->pc = 0x38DCE0u;
            goto label_38dce0;
        }
    }
    ctx->pc = 0x38DCCCu;
    // 0x38dccc: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x38dcccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38dcd0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x38dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x38dcd4: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x38dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x38dcd8: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x38DCD8u;
    SET_GPR_U32(ctx, 31, 0x38DCE0u);
    ctx->pc = 0x38DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DCD8u;
    // 0x38dcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x38DCD8u, 0x38DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DCE0u;
label_38dce0:
    // 0x38dce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38dce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38dce4: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x38dce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38dce8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38DCE8u;
    {
        const bool branch_taken_0x38dce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCE8u;
        // 0x38dcec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dce8) {
            ctx->pc = 0x38DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dc78;
        }
    }
    ctx->pc = 0x38DCF0u;
    // 0x38dcf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38dcf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38dcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dcf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38dcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x38DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DCFCu;
        // 0x38dd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DD04u;
}
