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

// Function: sub_002B9A40
// Address: 0x2b9a40 - 0x2b9b60
void sub_002B9A40_0x2b9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9A40_0x2b9a40");
#endif

    switch (ctx->pc) {
        case 0x2b9a58u: goto label_2b9a58;
        default: break;
    }

    ctx->pc = 0x2b9a40u;

    // 0x2b9a40: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2b9a44: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b9a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b9a48: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x2b9a48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2b9a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b9a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a50: 0x24c674c0  addiu       $a2, $a2, 0x74C0
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29888));
    // 0x2b9a54: 0x0  nop
    ctx->pc = 0x2b9a54u;
    // NOP
label_2b9a58:
    // 0x2b9a58: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2b9a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b9a5c: 0x14a20038  bne         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2B9A5Cu;
    {
        const bool branch_taken_0x2b9a5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9a5c) {
            ctx->pc = 0x2B9B40u;
            goto label_2b9b40;
        }
    }
    ctx->pc = 0x2B9A64u;
    // 0x2b9a64: 0x908314b5  lbu         $v1, 0x14B5($a0)
    ctx->pc = 0x2b9a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5301)));
    // 0x2b9a68: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2b9a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2b9a6c: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2B9A6Cu;
    {
        const bool branch_taken_0x2b9a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9a6c) {
            ctx->pc = 0x2B9B40u;
            goto label_2b9b40;
        }
    }
    ctx->pc = 0x2B9A74u;
    // 0x2b9a74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2b9a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b9a78: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2b9a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2b9a7c: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2B9A7Cu;
    {
        const bool branch_taken_0x2b9a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9a7c) {
            ctx->pc = 0x2B9B40u;
            goto label_2b9b40;
        }
    }
    ctx->pc = 0x2B9A84u;
    // 0x2b9a84: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x2b9a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9a88: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2b9a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b9a8c: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x2b9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b9a90: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b9a94: 0x24c674c4  addiu       $a2, $a2, 0x74C4
    ctx->pc = 0x2b9a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29892));
    // 0x2b9a98: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b9a9c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2b9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2b9aa0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2b9aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b9aa4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2b9aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b9aa8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2b9aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9ab0: 0x8d08007c  lw          $t0, 0x7C($t0)
    ctx->pc = 0x2b9ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x2b9ab4: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x2b9ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2b9ab8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b9ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b9abc: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x2b9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x2b9ac0: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x2b9ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9ac4: 0x8ce8007c  lw          $t0, 0x7C($a3)
    ctx->pc = 0x2b9ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b9ac8: 0x8d073a24  lw          $a3, 0x3A24($t0)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14884)));
    // 0x2b9acc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b9accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b9ad0: 0xad073a24  sw          $a3, 0x3A24($t0)
    ctx->pc = 0x2b9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 14884), GPR_U32(ctx, 7));
    // 0x2b9ad4: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x2b9ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9ad8: 0x8ce8007c  lw          $t0, 0x7C($a3)
    ctx->pc = 0x2b9ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b9adc: 0x8d073c14  lw          $a3, 0x3C14($t0)
    ctx->pc = 0x2b9adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15380)));
    // 0x2b9ae0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b9ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b9ae4: 0xad073c14  sw          $a3, 0x3C14($t0)
    ctx->pc = 0x2b9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15380), GPR_U32(ctx, 7));
    // 0x2b9ae8: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x2b9ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9aec: 0x8ce8007c  lw          $t0, 0x7C($a3)
    ctx->pc = 0x2b9aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b9af0: 0x8d073e04  lw          $a3, 0x3E04($t0)
    ctx->pc = 0x2b9af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15876)));
    // 0x2b9af4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2b9af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b9af8: 0xad073e04  sw          $a3, 0x3E04($t0)
    ctx->pc = 0x2b9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15876), GPR_U32(ctx, 7));
    // 0x2b9afc: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x2b9afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9b00: 0x8ce8007c  lw          $t0, 0x7C($a3)
    ctx->pc = 0x2b9b00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x2b9b04: 0x8d073ff4  lw          $a3, 0x3FF4($t0)
    ctx->pc = 0x2b9b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16372)));
    // 0x2b9b08: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2b9b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2b9b0c: 0xad033ff4  sw          $v1, 0x3FF4($t0)
    ctx->pc = 0x2b9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16372), GPR_U32(ctx, 3));
    // 0x2b9b10: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2b9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9b14: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2b9b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b9b18: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x2b9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b9b1c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2b9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b9b20: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b9b24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b9b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b9b28: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2b9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b9b2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b9b30: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b9b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b9b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9B34u;
    {
        const bool branch_taken_0x2b9b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B34u;
        // 0x2b9b38: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b34) {
            ctx->pc = 0x2B9B58u;
            goto label_2b9b58;
        }
    }
    ctx->pc = 0x2B9B3Cu;
    // 0x2b9b3c: 0x0  nop
    ctx->pc = 0x2b9b3cu;
    // NOP
label_2b9b40:
    // 0x2b9b40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b9b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b9b44: 0x2ce20033  sltiu       $v0, $a3, 0x33
    ctx->pc = 0x2b9b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x2b9b48: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2B9B48u;
    {
        const bool branch_taken_0x2b9b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B48u;
        // 0x2b9b4c: 0x24c60006  addiu       $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b48) {
            ctx->pc = 0x2B9A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9a58;
        }
    }
    ctx->pc = 0x2B9B50u;
    // 0x2b9b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9b54: 0x0  nop
    ctx->pc = 0x2b9b54u;
    // NOP
label_2b9b58:
    // 0x2b9b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B60u;
}
