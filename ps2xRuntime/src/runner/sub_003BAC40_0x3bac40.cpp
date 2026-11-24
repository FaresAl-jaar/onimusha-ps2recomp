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

// Function: sub_003BAC40
// Address: 0x3bac40 - 0x3bacd0
void sub_003BAC40_0x3bac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAC40_0x3bac40");
#endif

    switch (ctx->pc) {
        case 0x3bac68u: goto label_3bac68;
        default: break;
    }

    ctx->pc = 0x3bac40u;

    // 0x3bac40: 0x90820208  lbu         $v0, 0x208($a0)
    ctx->pc = 0x3bac40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x3bac44: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3bac44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bac48: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3bac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3bac4c: 0x8c4901c4  lw          $t1, 0x1C4($v0)
    ctx->pc = 0x3bac4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x3bac50: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3BAC50u;
    {
        const bool branch_taken_0x3bac50 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC50u;
        // 0x3bac54: 0x30a800ff  andi        $t0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac50) {
            ctx->pc = 0x3BACC0u;
            goto label_3bacc0;
        }
    }
    ctx->pc = 0x3BAC58u;
    // 0x3bac58: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x3bac58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3bac5c: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x3bac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x3bac60: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x3bac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x3bac64: 0x0  nop
    ctx->pc = 0x3bac64u;
    // NOP
label_3bac68:
    // 0x3bac68: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3bac68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bac6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bac70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BAC70u;
    {
        const bool branch_taken_0x3bac70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bac70) {
            ctx->pc = 0x3BACB0u;
            goto label_3bacb0;
        }
    }
    ctx->pc = 0x3BAC78u;
    // 0x3bac78: 0x91240002  lbu         $a0, 0x2($t1)
    ctx->pc = 0x3bac78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3bac7c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3bac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bac80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bac84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bac84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bac88: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3bac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3bac8c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x3bac8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3bac90: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BAC90u;
    {
        const bool branch_taken_0x3bac90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bac90) {
            ctx->pc = 0x3BACB0u;
            goto label_3bacb0;
        }
    }
    ctx->pc = 0x3BAC98u;
    // 0x3bac98: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3bac98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bac9c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAC9Cu;
    {
        const bool branch_taken_0x3bac9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC9Cu;
        // 0x3baca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac9c) {
            ctx->pc = 0x3BACB0u;
            goto label_3bacb0;
        }
    }
    ctx->pc = 0x3BACA4u;
    // 0x3baca4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BACA4u;
    {
        const bool branch_taken_0x3baca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baca4) {
            ctx->pc = 0x3BACC8u;
            goto label_3bacc8;
        }
    }
    ctx->pc = 0x3BACACu;
    // 0x3bacac: 0x0  nop
    ctx->pc = 0x3bacacu;
    // NOP
label_3bacb0:
    // 0x3bacb0: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x3bacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3bacb4: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x3bacb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3bacb8: 0x1520ffeb  bnez        $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3BACB8u;
    {
        const bool branch_taken_0x3bacb8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bacb8) {
            ctx->pc = 0x3BAC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bac68;
        }
    }
    ctx->pc = 0x3BACC0u;
label_3bacc0:
    // 0x3bacc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bacc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bacc4: 0x0  nop
    ctx->pc = 0x3bacc4u;
    // NOP
label_3bacc8:
    // 0x3bacc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BACD0u;
}
