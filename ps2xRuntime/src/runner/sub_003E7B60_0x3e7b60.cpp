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

// Function: sub_003E7B60
// Address: 0x3e7b60 - 0x3e7c58
void sub_003E7B60_0x3e7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7B60_0x3e7b60");
#endif

    ctx->pc = 0x3e7b60u;

    // 0x3e7b60: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e7b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e7b64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3e7b68: 0x8c25ea28  lw          $a1, -0x15D8($at)
    ctx->pc = 0x3e7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e7b6c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3e7b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3e7b70: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3e7b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3e7b74: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E7B74u;
    {
        const bool branch_taken_0x3e7b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b74) {
            ctx->pc = 0x3E7BD8u;
            goto label_3e7bd8;
        }
    }
    ctx->pc = 0x3E7B7Cu;
    // 0x3e7b7c: 0x80830085  lb          $v1, 0x85($a0)
    ctx->pc = 0x3e7b7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x3e7b80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e7b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e7b88: 0x80650090  lb          $a1, 0x90($v1)
    ctx->pc = 0x3e7b88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3e7b8c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7B8Cu;
    {
        const bool branch_taken_0x3e7b8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B8Cu;
        // 0x3e7b90: 0x24660090  addiu       $a2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b8c) {
            ctx->pc = 0x3E7BA0u;
            goto label_3e7ba0;
        }
    }
    ctx->pc = 0x3E7B94u;
    // 0x3e7b94: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3e7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3e7b98: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3E7B98u;
    {
        const bool branch_taken_0x3e7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B98u;
        // 0x3e7b9c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b98) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7BA0u;
label_3e7ba0:
    // 0x3e7ba0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3e7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3e7ba4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7BA4u;
    {
        const bool branch_taken_0x3e7ba4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BA4u;
        // 0x3e7ba8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ba4) {
            ctx->pc = 0x3E7BB8u;
            goto label_3e7bb8;
        }
    }
    ctx->pc = 0x3E7BACu;
    // 0x3e7bac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3E7BACu;
    {
        const bool branch_taken_0x3e7bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BACu;
        // 0x3e7bb0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bac) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7BB4u;
    // 0x3e7bb4: 0x0  nop
    ctx->pc = 0x3e7bb4u;
    // NOP
label_3e7bb8:
    // 0x3e7bb8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3e7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3e7bbc: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7BBCu;
    {
        const bool branch_taken_0x3e7bbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BBCu;
        // 0x3e7bc0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bbc) {
            ctx->pc = 0x3E7BD0u;
            goto label_3e7bd0;
        }
    }
    ctx->pc = 0x3E7BC4u;
    // 0x3e7bc4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3E7BC4u;
    {
        const bool branch_taken_0x3e7bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC4u;
        // 0x3e7bc8: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bc4) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7BCCu;
    // 0x3e7bcc: 0x0  nop
    ctx->pc = 0x3e7bccu;
    // NOP
label_3e7bd0:
    // 0x3e7bd0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3e7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e7bd4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3e7bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e7bd8:
    // 0x3e7bd8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e7bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e7bdc: 0x8c25ea28  lw          $a1, -0x15D8($at)
    ctx->pc = 0x3e7bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e7be0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3e7be4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e7be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e7be8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3e7be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3e7bec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E7BECu;
    {
        const bool branch_taken_0x3e7bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7bec) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7BF4u;
    // 0x3e7bf4: 0x80830085  lb          $v1, 0x85($a0)
    ctx->pc = 0x3e7bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x3e7bf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3e7bfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e7c00: 0x80640090  lb          $a0, 0x90($v1)
    ctx->pc = 0x3e7c00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3e7c04: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7C04u;
    {
        const bool branch_taken_0x3e7c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C04u;
        // 0x3e7c08: 0x24650090  addiu       $a1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c04) {
            ctx->pc = 0x3E7C18u;
            goto label_3e7c18;
        }
    }
    ctx->pc = 0x3E7C0Cu;
    // 0x3e7c0c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3e7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3e7c10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E7C10u;
    {
        const bool branch_taken_0x3e7c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C10u;
        // 0x3e7c14: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c10) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7C18u;
label_3e7c18:
    // 0x3e7c18: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3e7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3e7c1c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7C1Cu;
    {
        const bool branch_taken_0x3e7c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C1Cu;
        // 0x3e7c20: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c1c) {
            ctx->pc = 0x3E7C30u;
            goto label_3e7c30;
        }
    }
    ctx->pc = 0x3E7C24u;
    // 0x3e7c24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3E7C24u;
    {
        const bool branch_taken_0x3e7c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C24u;
        // 0x3e7c28: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c24) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7C2Cu;
    // 0x3e7c2c: 0x0  nop
    ctx->pc = 0x3e7c2cu;
    // NOP
label_3e7c30:
    // 0x3e7c30: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3e7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3e7c34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7C34u;
    {
        const bool branch_taken_0x3e7c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C34u;
        // 0x3e7c38: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c34) {
            ctx->pc = 0x3E7C48u;
            goto label_3e7c48;
        }
    }
    ctx->pc = 0x3E7C3Cu;
    // 0x3e7c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7C3Cu;
    {
        const bool branch_taken_0x3e7c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C3Cu;
        // 0x3e7c40: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c3c) {
            ctx->pc = 0x3E7C50u;
            goto label_3e7c50;
        }
    }
    ctx->pc = 0x3E7C44u;
    // 0x3e7c44: 0x0  nop
    ctx->pc = 0x3e7c44u;
    // NOP
label_3e7c48:
    // 0x3e7c48: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3e7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e7c4c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e7c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e7c50:
    // 0x3e7c50: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7C58u;
}
