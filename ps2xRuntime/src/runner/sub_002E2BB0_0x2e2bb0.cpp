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

// Function: sub_002E2BB0
// Address: 0x2e2bb0 - 0x2e2c58
void sub_002E2BB0_0x2e2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2BB0_0x2e2bb0");
#endif

    switch (ctx->pc) {
        case 0x2e2be0u: goto label_2e2be0;
        case 0x2e2c08u: goto label_2e2c08;
        default: break;
    }

    ctx->pc = 0x2e2bb0u;

    // 0x2e2bb0: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x2e2bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2e2bb4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E2BB4u;
    {
        const bool branch_taken_0x2e2bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bb4) {
            ctx->pc = 0x2E2C50u;
            goto label_2e2c50;
        }
    }
    ctx->pc = 0x2E2BBCu;
    // 0x2e2bbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e2bc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2bc4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2e2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2e2bc8: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2e2bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2bcc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e2bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2bd0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2BD0u;
    {
        const bool branch_taken_0x2e2bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BD0u;
        // 0x2e2bd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bd0) {
            ctx->pc = 0x2E2C48u;
            goto label_2e2c48;
        }
    }
    ctx->pc = 0x2E2BD8u;
    // 0x2e2bd8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e2bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2bdc: 0x0  nop
    ctx->pc = 0x2e2bdcu;
    // NOP
label_2e2be0:
    // 0x2e2be0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2e2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2e2be4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2be8: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x2e2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x2e2bec: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2e2becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2e2bf0: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2e2bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2e2bf4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e2bf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2bf8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2BF8u;
    {
        const bool branch_taken_0x2e2bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BF8u;
        // 0x2e2bfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bf8) {
            ctx->pc = 0x2E2C30u;
            goto label_2e2c30;
        }
    }
    ctx->pc = 0x2E2C00u;
    // 0x2e2c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c04: 0x0  nop
    ctx->pc = 0x2e2c04u;
    // NOP
label_2e2c08:
    // 0x2e2c08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e2c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e2c0c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2e2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2e2c10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2e2c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2e2c14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2c18: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x2e2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x2e2c1c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2e2c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2e2c20: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2e2c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2e2c24: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2e2c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2c28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E2C28u;
    {
        const bool branch_taken_0x2e2c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C28u;
        // 0x2e2c2c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c28) {
            ctx->pc = 0x2E2C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2c08;
        }
    }
    ctx->pc = 0x2E2C30u;
label_2e2c30:
    // 0x2e2c30: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2e2c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2c34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e2c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e2c38: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2e2c38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2c3c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E2C3Cu;
    {
        const bool branch_taken_0x2e2c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C3Cu;
        // 0x2e2c40: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c3c) {
            ctx->pc = 0x2E2BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2be0;
        }
    }
    ctx->pc = 0x2E2C44u;
    // 0x2e2c44: 0x0  nop
    ctx->pc = 0x2e2c44u;
    // NOP
label_2e2c48:
    // 0x2e2c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2c4c: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x2e2c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
label_2e2c50:
    // 0x2e2c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2C58u;
}
