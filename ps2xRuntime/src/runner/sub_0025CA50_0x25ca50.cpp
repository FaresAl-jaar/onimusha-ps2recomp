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

// Function: sub_0025CA50
// Address: 0x25ca50 - 0x25cae8
void sub_0025CA50_0x25ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CA50_0x25ca50");
#endif

    switch (ctx->pc) {
        case 0x25ca68u: goto label_25ca68;
        default: break;
    }

    ctx->pc = 0x25ca50u;

    // 0x25ca50: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x25ca50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25ca54: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x25CA54u;
    {
        const bool branch_taken_0x25ca54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca54) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25CA5Cu;
    // 0x25ca5c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x25ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x25ca60: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x25ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25ca64: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x25ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_25ca68:
    // 0x25ca68: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x25ca68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25ca6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25ca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25ca70: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25CA70u;
    {
        const bool branch_taken_0x25ca70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca70) {
            ctx->pc = 0x25CAC8u;
            goto label_25cac8;
        }
    }
    ctx->pc = 0x25CA78u;
    // 0x25ca78: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x25ca78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x25ca7c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25ca80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x25ca84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25ca88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ca8c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x25ca8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ca90: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x25CA90u;
    {
        const bool branch_taken_0x25ca90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca90) {
            ctx->pc = 0x25CAC8u;
            goto label_25cac8;
        }
    }
    ctx->pc = 0x25CA98u;
    // 0x25ca98: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x25ca98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25ca9c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x25CA9Cu;
    {
        const bool branch_taken_0x25ca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25ca9c) {
            ctx->pc = 0x25CAC8u;
            goto label_25cac8;
        }
    }
    ctx->pc = 0x25CAA4u;
    // 0x25caa4: 0x90e2052c  lbu         $v0, 0x52C($a3)
    ctx->pc = 0x25caa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1324)));
    // 0x25caa8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CAA8u;
    {
        const bool branch_taken_0x25caa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25caa8) {
            ctx->pc = 0x25CAC8u;
            goto label_25cac8;
        }
    }
    ctx->pc = 0x25CAB0u;
    // 0x25cab0: 0x90e2052d  lbu         $v0, 0x52D($a3)
    ctx->pc = 0x25cab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1325)));
    // 0x25cab4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CAB4u;
    {
        const bool branch_taken_0x25cab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x25CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAB4u;
        // 0x25cab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cab4) {
            ctx->pc = 0x25CAC8u;
            goto label_25cac8;
        }
    }
    ctx->pc = 0x25CABCu;
    // 0x25cabc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CABCu;
    {
        const bool branch_taken_0x25cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cabc) {
            ctx->pc = 0x25CAE0u;
            goto label_25cae0;
        }
    }
    ctx->pc = 0x25CAC4u;
    // 0x25cac4: 0x0  nop
    ctx->pc = 0x25cac4u;
    // NOP
label_25cac8:
    // 0x25cac8: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x25cac8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x25cacc: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x25CACCu;
    {
        const bool branch_taken_0x25cacc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cacc) {
            ctx->pc = 0x25CA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ca68;
        }
    }
    ctx->pc = 0x25CAD4u;
    // 0x25cad4: 0x0  nop
    ctx->pc = 0x25cad4u;
    // NOP
label_25cad8:
    // 0x25cad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25cad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cadc: 0x0  nop
    ctx->pc = 0x25cadcu;
    // NOP
label_25cae0:
    // 0x25cae0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CAE8u;
}
