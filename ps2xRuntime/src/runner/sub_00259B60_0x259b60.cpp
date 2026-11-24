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

// Function: sub_00259B60
// Address: 0x259b60 - 0x259be8
void sub_00259B60_0x259b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259B60_0x259b60");
#endif

    switch (ctx->pc) {
        case 0x259b98u: goto label_259b98;
        default: break;
    }

    ctx->pc = 0x259b60u;

    // 0x259b60: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x259b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x259b64: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x259b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x259b68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259b6c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x259b70: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x259b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x259b74: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x259B74u;
    {
        const bool branch_taken_0x259b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B74u;
        // 0x259b78: 0x6082a  slt         $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b74) {
            ctx->pc = 0x259BE0u;
            goto label_259be0;
        }
    }
    ctx->pc = 0x259B7Cu;
    // 0x259b7c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x259B7Cu;
    {
        const bool branch_taken_0x259b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B7Cu;
        // 0x259b80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b7c) {
            ctx->pc = 0x259BB8u;
            goto label_259bb8;
        }
    }
    ctx->pc = 0x259B84u;
    // 0x259b84: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x259b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x259b88: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x259b88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x259b8c: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x259b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x259b90: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x259b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x259b94: 0x0  nop
    ctx->pc = 0x259b94u;
    // NOP
label_259b98:
    // 0x259b98: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x259b98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x259b9c: 0x11230010  beq         $t1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x259B9Cu;
    {
        const bool branch_taken_0x259b9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x259b9c) {
            ctx->pc = 0x259BE0u;
            goto label_259be0;
        }
    }
    ctx->pc = 0x259BA4u;
    // 0x259ba4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x259ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x259ba8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x259ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x259bac: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x259bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x259bb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x259BB0u;
    {
        const bool branch_taken_0x259bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BB0u;
        // 0x259bb4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259bb0) {
            ctx->pc = 0x259B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259b98;
        }
    }
    ctx->pc = 0x259BB8u;
label_259bb8:
    // 0x259bb8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x259bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x259bbc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x259bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x259bc0: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x259bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x259bc4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x259bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x259bc8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259bcc: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x259bd0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x259bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x259bd4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x259bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x259bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x259bdc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x259bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_259be0:
    // 0x259be0: 0x3e00008  jr          $ra
    ctx->pc = 0x259BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259BE8u;
}
