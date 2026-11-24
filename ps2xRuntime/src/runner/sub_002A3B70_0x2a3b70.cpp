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

// Function: sub_002A3B70
// Address: 0x2a3b70 - 0x2a3c58
void sub_002A3B70_0x2a3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3B70_0x2a3b70");
#endif

    ctx->pc = 0x2a3b70u;

    // 0x2a3b70: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a3b70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a3b74: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a3b78: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x2a3b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a3b7c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A3B7Cu;
    {
        const bool branch_taken_0x2a3b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b7c) {
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3B84u;
    // 0x2a3b84: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x2a3b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a3b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3b8c: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3B8Cu;
    {
        const bool branch_taken_0x2a3b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3b8c) {
            ctx->pc = 0x2A3C08u;
            goto label_2a3c08;
        }
    }
    ctx->pc = 0x2A3B94u;
    // 0x2a3b94: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A3B94u;
    {
        const bool branch_taken_0x2a3b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B94u;
        // 0x2a3b98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b94) {
            ctx->pc = 0x2A3BE0u;
            goto label_2a3be0;
        }
    }
    ctx->pc = 0x2A3B9Cu;
    // 0x2a3b9c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3B9Cu;
    {
        const bool branch_taken_0x2a3b9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3b9c) {
            ctx->pc = 0x2A3BB0u;
            goto label_2a3bb0;
        }
    }
    ctx->pc = 0x2A3BA4u;
    // 0x2a3ba4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A3BA4u;
    {
        const bool branch_taken_0x2a3ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3ba4) {
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3BACu;
    // 0x2a3bac: 0x0  nop
    ctx->pc = 0x2a3bacu;
    // NOP
label_2a3bb0:
    // 0x2a3bb0: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a3bb4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2a3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2a3bb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a3bbc: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2a3bc0: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a3bc4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a3bc8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a3bcc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a3bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a3bd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a3bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a3bd4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3BD4u;
    {
        const bool branch_taken_0x2a3bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BD4u;
        // 0x2a3bd8: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bd4) {
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3BDCu;
    // 0x2a3bdc: 0x0  nop
    ctx->pc = 0x2a3bdcu;
    // NOP
label_2a3be0:
    // 0x2a3be0: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2a3be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a3be4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2a3be8: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x2a3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2a3bec: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2a3becu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a3bf0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a3bf4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2a3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a3bf8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a3bfc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a3bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a3c00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A3C00u;
    {
        const bool branch_taken_0x2a3c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C00u;
        // 0x2a3c04: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c00) {
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3C08u;
label_2a3c08:
    // 0x2a3c08: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2a3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a3c0c: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2a3c10: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2a3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a3c14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3c18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a3c1c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2a3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2a3c20: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a3c24: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a3c28: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2a3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2a3c2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3C2Cu;
    {
        const bool branch_taken_0x2a3c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C2Cu;
        // 0x2a3c30: 0x3c03f7ff  lui         $v1, 0xF7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c2c) {
            ctx->pc = 0x2A3C48u;
            goto label_2a3c48;
        }
    }
    ctx->pc = 0x2A3C34u;
    // 0x2a3c34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a3c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a3c38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2a3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a3c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3C3Cu;
    {
        const bool branch_taken_0x2a3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C3Cu;
        // 0x2a3c40: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c3c) {
            ctx->pc = 0x2A3C50u;
            goto label_2a3c50;
        }
    }
    ctx->pc = 0x2A3C44u;
    // 0x2a3c44: 0x0  nop
    ctx->pc = 0x2a3c44u;
    // NOP
label_2a3c48:
    // 0x2a3c48: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2a3c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a3c4c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a3c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2a3c50:
    // 0x2a3c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3C58u;
}
