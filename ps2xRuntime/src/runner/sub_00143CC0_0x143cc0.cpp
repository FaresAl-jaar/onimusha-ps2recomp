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

// Function: sub_00143CC0
// Address: 0x143cc0 - 0x143d54
void sub_00143CC0_0x143cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143CC0_0x143cc0");
#endif

    switch (ctx->pc) {
        case 0x143ce8u: goto label_143ce8;
        case 0x143d28u: goto label_143d28;
        default: break;
    }

    ctx->pc = 0x143cc0u;

    // 0x143cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143cc8: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143ccc: 0x1180001c  beqz        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x143CCCu;
    {
        const bool branch_taken_0x143ccc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CCCu;
        // 0x143cd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ccc) {
            ctx->pc = 0x143D40u;
            goto label_143d40;
        }
    }
    ctx->pc = 0x143CD4u;
    // 0x143cd4: 0x30aa00ff  andi        $t2, $a1, 0xFF
    ctx->pc = 0x143cd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x143cd8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x143cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x143cdc: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x143cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x143ce0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x143ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x143ce4: 0x0  nop
    ctx->pc = 0x143ce4u;
    // NOP
label_143ce8:
    // 0x143ce8: 0x91820020  lbu         $v0, 0x20($t4)
    ctx->pc = 0x143ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x143cec: 0x144a0010  bne         $v0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x143CECu;
    {
        const bool branch_taken_0x143cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x143cec) {
            ctx->pc = 0x143D30u;
            goto label_143d30;
        }
    }
    ctx->pc = 0x143CF4u;
    // 0x143cf4: 0x91820021  lbu         $v0, 0x21($t4)
    ctx->pc = 0x143cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 33)));
    // 0x143cf8: 0x1446000d  bne         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x143CF8u;
    {
        const bool branch_taken_0x143cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x143cf8) {
            ctx->pc = 0x143D30u;
            goto label_143d30;
        }
    }
    ctx->pc = 0x143D00u;
    // 0x143d00: 0x91820022  lbu         $v0, 0x22($t4)
    ctx->pc = 0x143d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 34)));
    // 0x143d04: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x143D04u;
    {
        const bool branch_taken_0x143d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x143d04) {
            ctx->pc = 0x143D30u;
            goto label_143d30;
        }
    }
    ctx->pc = 0x143D0Cu;
    // 0x143d0c: 0x91820023  lbu         $v0, 0x23($t4)
    ctx->pc = 0x143d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 35)));
    // 0x143d10: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143D10u;
    {
        const bool branch_taken_0x143d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x143d10) {
            ctx->pc = 0x143D30u;
            goto label_143d30;
        }
    }
    ctx->pc = 0x143D18u;
    // 0x143d18: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x143d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d1c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x143d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d20: 0xc050f58  jal         func_143D60
    ctx->pc = 0x143D20u;
    SET_GPR_U32(ctx, 31, 0x143D28u);
    ctx->pc = 0x143D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D20u;
    // 0x143d24: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D60u, 0x143D20u, 0x143D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D28u;
label_143d28:
    // 0x143d28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143D28u;
    {
        const bool branch_taken_0x143d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D28u;
        // 0x143d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d28) {
            ctx->pc = 0x143D48u;
            goto label_143d48;
        }
    }
    ctx->pc = 0x143D30u;
label_143d30:
    // 0x143d30: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d34: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x143d34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x143d38: 0x1580ffeb  bnez        $t4, . + 4 + (-0x15 << 2)
    ctx->pc = 0x143D38u;
    {
        const bool branch_taken_0x143d38 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x143d38) {
            ctx->pc = 0x143CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143ce8;
        }
    }
    ctx->pc = 0x143D40u;
label_143d40:
    // 0x143d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d44: 0x0  nop
    ctx->pc = 0x143d44u;
    // NOP
label_143d48:
    // 0x143d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x143D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D4Cu;
        // 0x143d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D54u;
}
