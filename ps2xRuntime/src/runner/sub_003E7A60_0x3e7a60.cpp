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

// Function: sub_003E7A60
// Address: 0x3e7a60 - 0x3e7b58
void sub_003E7A60_0x3e7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7A60_0x3e7a60");
#endif

    switch (ctx->pc) {
        case 0x3e7a90u: goto label_3e7a90;
        case 0x3e7b08u: goto label_3e7b08;
        default: break;
    }

    ctx->pc = 0x3e7a60u;

    // 0x3e7a60: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e7a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e7a64: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3e7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3e7a68: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3e7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e7a6c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e7a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3e7a70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e7a74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E7A74u;
    {
        const bool branch_taken_0x3e7a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A74u;
        // 0x3e7a78: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a74) {
            ctx->pc = 0x3E7AD8u;
            goto label_3e7ad8;
        }
    }
    ctx->pc = 0x3E7A7Cu;
    // 0x3e7a7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e7a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7a80: 0x2449000f  addiu       $t1, $v0, 0xF
    ctx->pc = 0x3e7a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3e7a84: 0x2448000a  addiu       $t0, $v0, 0xA
    ctx->pc = 0x3e7a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3e7a88: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3e7a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7a90:
    // 0x3e7a90: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3e7a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e7a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e7a98: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x3e7a98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7a9c: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3e7a9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e7aa0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7AA0u;
    {
        const bool branch_taken_0x3e7aa0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3e7aa0) {
            ctx->pc = 0x3E7AB0u;
            goto label_3e7ab0;
        }
    }
    ctx->pc = 0x3E7AA8u;
    // 0x3e7aa8: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x3e7aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e7aac: 0x0  nop
    ctx->pc = 0x3e7aacu;
    // NOP
label_3e7ab0:
    // 0x3e7ab0: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3e7ab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e7ab4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x3e7ab4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e7ab8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e7abc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3e7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3e7ac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7AC0u;
    {
        const bool branch_taken_0x3e7ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ac0) {
            ctx->pc = 0x3E7AD8u;
            goto label_3e7ad8;
        }
    }
    ctx->pc = 0x3E7AC8u;
    // 0x3e7ac8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3e7ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3e7acc: 0x29420004  slti        $v0, $t2, 0x4
    ctx->pc = 0x3e7accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e7ad0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3E7AD0u;
    {
        const bool branch_taken_0x3e7ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ad0) {
            ctx->pc = 0x3E7A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7a90;
        }
    }
    ctx->pc = 0x3E7AD8u;
label_3e7ad8:
    // 0x3e7ad8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e7ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e7adc: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3e7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e7ae0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3e7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3e7ae4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3e7ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3e7ae8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e7ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e7aec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E7AECu;
    {
        const bool branch_taken_0x3e7aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AECu;
        // 0x3e7af0: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7aec) {
            ctx->pc = 0x3E7B50u;
            goto label_3e7b50;
        }
    }
    ctx->pc = 0x3E7AF4u;
    // 0x3e7af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7af8: 0x2447000f  addiu       $a3, $v0, 0xF
    ctx->pc = 0x3e7af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3e7afc: 0x2446000a  addiu       $a2, $v0, 0xA
    ctx->pc = 0x3e7afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3e7b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7b04: 0x0  nop
    ctx->pc = 0x3e7b04u;
    // NOP
label_3e7b08:
    // 0x3e7b08: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x3e7b08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e7b0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e7b10: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3e7b10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e7b14: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x3e7b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e7b18: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3e7b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e7b1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E7B1Cu;
    {
        const bool branch_taken_0x3e7b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b1c) {
            ctx->pc = 0x3E7B28u;
            goto label_3e7b28;
        }
    }
    ctx->pc = 0x3E7B24u;
    // 0x3e7b24: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3e7b24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_3e7b28:
    // 0x3e7b28: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x3e7b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e7b2c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x3e7b2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e7b30: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3e7b34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3e7b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3e7b38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7B38u;
    {
        const bool branch_taken_0x3e7b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b38) {
            ctx->pc = 0x3E7B50u;
            goto label_3e7b50;
        }
    }
    ctx->pc = 0x3E7B40u;
    // 0x3e7b40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e7b44: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3e7b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e7b48: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3E7B48u;
    {
        const bool branch_taken_0x3e7b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b48) {
            ctx->pc = 0x3E7B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7b08;
        }
    }
    ctx->pc = 0x3E7B50u;
label_3e7b50:
    // 0x3e7b50: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B50u;
        // 0x3e7b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7B58u;
}
