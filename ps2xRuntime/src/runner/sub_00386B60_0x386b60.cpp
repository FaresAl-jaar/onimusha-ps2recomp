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

// Function: sub_00386B60
// Address: 0x386b60 - 0x386c50
void sub_00386B60_0x386b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386B60_0x386b60");
#endif

    switch (ctx->pc) {
        case 0x386bd0u: goto label_386bd0;
        case 0x386bf8u: goto label_386bf8;
        case 0x386c04u: goto label_386c04;
        default: break;
    }

    ctx->pc = 0x386b60u;

    // 0x386b60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x386b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x386b64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x386b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x386b68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x386b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x386b6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x386b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x386b70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x386b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x386b74: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x386b74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x386b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x386b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x386b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x386b84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x386b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x386b8c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x386b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386b90: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x386B90u;
    {
        const bool branch_taken_0x386b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x386B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B90u;
        // 0x386b94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b90) {
            ctx->pc = 0x386BB8u;
            goto label_386bb8;
        }
    }
    ctx->pc = 0x386B98u;
    // 0x386b98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x386b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x386b9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x386B9Cu;
    {
        const bool branch_taken_0x386b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386b9c) {
            ctx->pc = 0x386BB0u;
            goto label_386bb0;
        }
    }
    ctx->pc = 0x386BA4u;
    // 0x386ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386BA4u;
    {
        const bool branch_taken_0x386ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BA4u;
        // 0x386ba8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ba4) {
            ctx->pc = 0x386BB8u;
            goto label_386bb8;
        }
    }
    ctx->pc = 0x386BACu;
    // 0x386bac: 0x0  nop
    ctx->pc = 0x386bacu;
    // NOP
label_386bb0:
    // 0x386bb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x386bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386bb4: 0x0  nop
    ctx->pc = 0x386bb4u;
    // NOP
label_386bb8:
    // 0x386bb8: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x386bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x386bbc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x386BBCu;
    {
        const bool branch_taken_0x386bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BBCu;
        // 0x386bc0: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bbc) {
            ctx->pc = 0x386C28u;
            goto label_386c28;
        }
    }
    ctx->pc = 0x386BC4u;
    // 0x386bc4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x386bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x386bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x386bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x386bcc: 0x2c38021  addu        $s0, $s6, $v1
    ctx->pc = 0x386bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_386bd0:
    // 0x386bd0: 0xa2000121  sb          $zero, 0x121($s0)
    ctx->pc = 0x386bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x386bd4: 0xa200012b  sb          $zero, 0x12B($s0)
    ctx->pc = 0x386bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 299), (uint8_t)GPR_U32(ctx, 0));
    // 0x386bd8: 0x26150120  addiu       $s5, $s0, 0x120
    ctx->pc = 0x386bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x386bdc: 0xa2000125  sb          $zero, 0x125($s0)
    ctx->pc = 0x386bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 293), (uint8_t)GPR_U32(ctx, 0));
    // 0x386be0: 0xa2000124  sb          $zero, 0x124($s0)
    ctx->pc = 0x386be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x386be4: 0x8203012a  lb          $v1, 0x12A($s0)
    ctx->pc = 0x386be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 298)));
    // 0x386be8: 0x8e14012c  lw          $s4, 0x12C($s0)
    ctx->pc = 0x386be8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x386bec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x386becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386bf0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x386BF0u;
    {
        const bool branch_taken_0x386bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x386BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386BF0u;
        // 0x386bf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386bf0) {
            ctx->pc = 0x386C18u;
            goto label_386c18;
        }
    }
    ctx->pc = 0x386BF8u;
label_386bf8:
    // 0x386bf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x386bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386bfc: 0xc0e1c0c  jal         func_387030
    ctx->pc = 0x386BFCu;
    SET_GPR_U32(ctx, 31, 0x386C04u);
    ctx->pc = 0x386C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386BFCu;
    // 0x386c00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387030u, 0x386BFCu, 0x386C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C04u;
label_386c04:
    // 0x386c04: 0x82a3000a  lb          $v1, 0xA($s5)
    ctx->pc = 0x386c04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x386c08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x386c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x386c0c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x386c0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386c10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x386C10u;
    {
        const bool branch_taken_0x386c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C10u;
        // 0x386c14: 0x26940006  addiu       $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c10) {
            ctx->pc = 0x386BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386bf8;
        }
    }
    ctx->pc = 0x386C18u;
label_386c18:
    // 0x386c18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x386c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x386c1c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x386c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x386c20: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x386C20u;
    {
        const bool branch_taken_0x386c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C20u;
        // 0x386c24: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c20) {
            ctx->pc = 0x386BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386bd0;
        }
    }
    ctx->pc = 0x386C28u;
label_386c28:
    // 0x386c28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x386c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x386c2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x386c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x386c30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x386c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x386c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x386c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x386c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x386c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386c48: 0x3e00008  jr          $ra
    ctx->pc = 0x386C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C48u;
        // 0x386c4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386C50u;
}
