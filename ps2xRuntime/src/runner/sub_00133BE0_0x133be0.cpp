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

// Function: sub_00133BE0
// Address: 0x133be0 - 0x133c50
void sub_00133BE0_0x133be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133BE0_0x133be0");
#endif

    switch (ctx->pc) {
        case 0x133bf8u: goto label_133bf8;
        default: break;
    }

    ctx->pc = 0x133be0u;

    // 0x133be0: 0x8ca70034  lw          $a3, 0x34($a1)
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x133be4: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x133BE4u;
    {
        const bool branch_taken_0x133be4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x133be4) {
            ctx->pc = 0x133C48u;
            goto label_133c48;
        }
    }
    ctx->pc = 0x133BECu;
    // 0x133bec: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x133BECu;
    {
        const bool branch_taken_0x133bec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BECu;
        // 0x133bf0: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bec) {
            ctx->pc = 0x133C48u;
            goto label_133c48;
        }
    }
    ctx->pc = 0x133BF4u;
    // 0x133bf4: 0x0  nop
    ctx->pc = 0x133bf4u;
    // NOP
label_133bf8:
    // 0x133bf8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x133bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x133bfc: 0x1466000c  bne         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x133BFCu;
    {
        const bool branch_taken_0x133bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x133bfc) {
            ctx->pc = 0x133C30u;
            goto label_133c30;
        }
    }
    ctx->pc = 0x133C04u;
    // 0x133c04: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x133c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x133c08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x133c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x133c0c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x133c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x133c10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x133c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x133c14: 0x8c23cd90  lw          $v1, -0x3270($at)
    ctx->pc = 0x133c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954384)));
    // 0x133c18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x133c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x133c1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x133c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x133c20: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x133c24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133C24u;
    {
        const bool branch_taken_0x133c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C24u;
        // 0x133c28: 0xac27cd90  sw          $a3, -0x3270($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954384), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c24) {
            ctx->pc = 0x133C38u;
            goto label_133c38;
        }
    }
    ctx->pc = 0x133C2Cu;
    // 0x133c2c: 0x0  nop
    ctx->pc = 0x133c2cu;
    // NOP
label_133c30:
    // 0x133c30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x133c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c34: 0x0  nop
    ctx->pc = 0x133c34u;
    // NOP
label_133c38:
    // 0x133c38: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x133c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133c3c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x133C3Cu;
    {
        const bool branch_taken_0x133c3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c3c) {
            ctx->pc = 0x133BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133bf8;
        }
    }
    ctx->pc = 0x133C44u;
    // 0x133c44: 0x0  nop
    ctx->pc = 0x133c44u;
    // NOP
label_133c48:
    // 0x133c48: 0x3e00008  jr          $ra
    ctx->pc = 0x133C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133C50u;
}
