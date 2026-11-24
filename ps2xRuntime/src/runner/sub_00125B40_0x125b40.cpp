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

// Function: sub_00125B40
// Address: 0x125b40 - 0x125bfc
void sub_00125B40_0x125b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125B40_0x125b40");
#endif

    switch (ctx->pc) {
        case 0x125b6cu: goto label_125b6c;
        case 0x125b7cu: goto label_125b7c;
        default: break;
    }

    ctx->pc = 0x125b40u;

    // 0x125b40: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x125b40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125b44: 0x31cf0007  andi        $t7, $t6, 0x7
    ctx->pc = 0x125b44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x125b48: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x125B48u;
    {
        const bool branch_taken_0x125b48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B48u;
        // 0x125b4c: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b48) {
            ctx->pc = 0x125B84u;
            goto label_125b84;
        }
    }
    ctx->pc = 0x125B50u;
    // 0x125b50: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x125B50u;
    {
        const bool branch_taken_0x125b50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B50u;
        // 0x125b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b50) {
            ctx->pc = 0x125B7Cu;
            goto label_125b7c;
        }
    }
    ctx->pc = 0x125B58u;
    // 0x125b58: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x125b58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x125b5c: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125B5Cu;
    {
        const bool branch_taken_0x125b5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B5Cu;
        // 0x125b60: 0xe7882  srl         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b5c) {
            ctx->pc = 0x125B74u;
            goto label_125b74;
        }
    }
    ctx->pc = 0x125B64u;
    // 0x125b64: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x125b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125b6c:
    // 0x125b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x125B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B6Cu;
        // 0x125b70: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125B74u;
label_125b74:
    // 0x125b74: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x125B74u;
    {
        const bool branch_taken_0x125b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B74u;
        // 0x125b78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b74) {
            ctx->pc = 0x125B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b6c;
        }
    }
    ctx->pc = 0x125B7Cu;
label_125b7c:
    // 0x125b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x125B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125B84u;
label_125b84:
    // 0x125b84: 0x31cfffff  andi        $t7, $t6, 0xFFFF
    ctx->pc = 0x125b84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x125b88: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x125B88u;
    {
        const bool branch_taken_0x125b88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B88u;
        // 0x125b8c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b88) {
            ctx->pc = 0x125B98u;
            goto label_125b98;
        }
    }
    ctx->pc = 0x125B90u;
    // 0x125b90: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x125b90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125b94: 0xe7402  srl         $t6, $t6, 16
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
label_125b98:
    // 0x125b98: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x125b98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x125b9c: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125B9Cu;
    {
        const bool branch_taken_0x125b9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B9Cu;
        // 0x125ba0: 0x31cf000f  andi        $t7, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b9c) {
            ctx->pc = 0x125BB0u;
            goto label_125bb0;
        }
    }
    ctx->pc = 0x125BA4u;
    // 0x125ba4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x125ba4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x125ba8: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x125bac: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x125bacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_125bb0:
    // 0x125bb0: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125BB0u;
    {
        const bool branch_taken_0x125bb0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BB0u;
        // 0x125bb4: 0x31cf0003  andi        $t7, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bb0) {
            ctx->pc = 0x125BC4u;
            goto label_125bc4;
        }
    }
    ctx->pc = 0x125BB8u;
    // 0x125bb8: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x125bbc: 0xe7102  srl         $t6, $t6, 4
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x125bc0: 0x31cf0003  andi        $t7, $t6, 0x3
    ctx->pc = 0x125bc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
label_125bc4:
    // 0x125bc4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x125BC4u;
    {
        const bool branch_taken_0x125bc4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BC4u;
        // 0x125bc8: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bc4) {
            ctx->pc = 0x125BD8u;
            goto label_125bd8;
        }
    }
    ctx->pc = 0x125BCCu;
    // 0x125bcc: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x125bd0: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x125bd4: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x125bd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_125bd8:
    // 0x125bd8: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x125BD8u;
    {
        const bool branch_taken_0x125bd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125bd8) {
            ctx->pc = 0x125BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125BD8u;
            // 0x125bdc: 0xac8e0000  sw          $t6, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125BF4u;
            goto label_125bf4;
        }
    }
    ctx->pc = 0x125BE0u;
    // 0x125be0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x125be4: 0xe7042  srl         $t6, $t6, 1
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x125be8: 0x11c0ffe4  beqz        $t6, . + 4 + (-0x1C << 2)
    ctx->pc = 0x125BE8u;
    {
        const bool branch_taken_0x125be8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BE8u;
        // 0x125bec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125be8) {
            ctx->pc = 0x125B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125b7c;
        }
    }
    ctx->pc = 0x125BF0u;
    // 0x125bf0: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x125bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_125bf4:
    // 0x125bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x125BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BF4u;
        // 0x125bf8: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125BFCu;
}
