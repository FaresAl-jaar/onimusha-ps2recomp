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

// Function: sub_00143C00
// Address: 0x143c00 - 0x143cb8
void sub_00143C00_0x143c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C00_0x143c00");
#endif

    switch (ctx->pc) {
        case 0x143c30u: goto label_143c30;
        default: break;
    }

    ctx->pc = 0x143c00u;

    // 0x143c00: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C00u;
    {
        const bool branch_taken_0x143c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x143C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C00u;
        // 0x143c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c00) {
            ctx->pc = 0x143C10u;
            goto label_143c10;
        }
    }
    ctx->pc = 0x143C08u;
    // 0x143c08: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x143C08u;
    {
        const bool branch_taken_0x143c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c08) {
            ctx->pc = 0x143CB0u;
            goto label_143cb0;
        }
    }
    ctx->pc = 0x143C10u;
label_143c10:
    // 0x143c10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x143c14: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x143C14u;
    {
        const bool branch_taken_0x143c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C14u;
        // 0x143c18: 0x30ca00ff  andi        $t2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c14) {
            ctx->pc = 0x143CA8u;
            goto label_143ca8;
        }
    }
    ctx->pc = 0x143C1Cu;
    // 0x143c1c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x143c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x143c20: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x143c20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x143c24: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x143c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x143c28: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x143c2c: 0x0  nop
    ctx->pc = 0x143c2cu;
    // NOP
label_143c30:
    // 0x143c30: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x143c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x143c34: 0x146a0018  bne         $v1, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x143C34u;
    {
        const bool branch_taken_0x143c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x143c34) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C3Cu;
    // 0x143c3c: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x143c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x143c40: 0x10670005  beq         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x143C40u;
    {
        const bool branch_taken_0x143c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x143c40) {
            ctx->pc = 0x143C58u;
            goto label_143c58;
        }
    }
    ctx->pc = 0x143C48u;
    // 0x143c48: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C48u;
    {
        const bool branch_taken_0x143c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x143c48) {
            ctx->pc = 0x143C58u;
            goto label_143c58;
        }
    }
    ctx->pc = 0x143C50u;
    // 0x143c50: 0x14e40011  bne         $a3, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143C50u;
    {
        const bool branch_taken_0x143c50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x143c50) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C58u;
label_143c58:
    // 0x143c58: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x143c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x143c5c: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x143C5Cu;
    {
        const bool branch_taken_0x143c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x143c5c) {
            ctx->pc = 0x143C78u;
            goto label_143c78;
        }
    }
    ctx->pc = 0x143C64u;
    // 0x143c64: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C64u;
    {
        const bool branch_taken_0x143c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x143c64) {
            ctx->pc = 0x143C78u;
            goto label_143c78;
        }
    }
    ctx->pc = 0x143C6Cu;
    // 0x143c6c: 0x14c4000a  bne         $a2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x143C6Cu;
    {
        const bool branch_taken_0x143c6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x143c6c) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C74u;
    // 0x143c74: 0x0  nop
    ctx->pc = 0x143c74u;
    // NOP
label_143c78:
    // 0x143c78: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x143c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x143c7c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C7Cu;
    {
        const bool branch_taken_0x143c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x143c7c) {
            ctx->pc = 0x143C90u;
            goto label_143c90;
        }
    }
    ctx->pc = 0x143C84u;
    // 0x143c84: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C84u;
    {
        const bool branch_taken_0x143c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x143c84) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C8Cu;
    // 0x143c8c: 0x0  nop
    ctx->pc = 0x143c8cu;
    // NOP
label_143c90:
    // 0x143c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143C90u;
    {
        const bool branch_taken_0x143c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c90) {
            ctx->pc = 0x143CB0u;
            goto label_143cb0;
        }
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143c9c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x143C9Cu;
    {
        const bool branch_taken_0x143c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143c9c) {
            ctx->pc = 0x143C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143c30;
        }
    }
    ctx->pc = 0x143CA4u;
    // 0x143ca4: 0x0  nop
    ctx->pc = 0x143ca4u;
    // NOP
label_143ca8:
    // 0x143ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cac: 0x0  nop
    ctx->pc = 0x143cacu;
    // NOP
label_143cb0:
    // 0x143cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x143CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143CB8u;
}
