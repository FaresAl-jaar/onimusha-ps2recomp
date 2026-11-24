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

// Function: sub_00361050
// Address: 0x361050 - 0x3610d0
void sub_00361050_0x361050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361050_0x361050");
#endif

    switch (ctx->pc) {
        case 0x361098u: goto label_361098;
        default: break;
    }

    ctx->pc = 0x361050u;

    // 0x361050: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x361050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x361054: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x361054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x361058: 0x24c6a340  addiu       $a2, $a2, -0x5CC0
    ctx->pc = 0x361058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943552));
    // 0x36105c: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x36105cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x361060: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x361060u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65A340u));
    // 0x361064: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x361064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x361068: 0x78c40010  lq          $a0, 0x10($a2)
    ctx->pc = 0x361068u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65A350u));
    // 0x36106c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36106cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361070: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x361070u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65A360u));
    // 0x361074: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x361074u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65A370u));
    // 0x361078: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x361078u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x36107c: 0x7ce40010  sq          $a0, 0x10($a3)
    ctx->pc = 0x36107cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 4));
    // 0x361080: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x361080u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x361084: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x361084u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x361088: 0xdcc20040  ld          $v0, 0x40($a2)
    ctx->pc = 0x361088u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x65A380u));
    // 0x36108c: 0xfce20040  sd          $v0, 0x40($a3)
    ctx->pc = 0x36108cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 64), GPR_U64(ctx, 2));
    // 0x361090: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x361090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x361094: 0x0  nop
    ctx->pc = 0x361094u;
    // NOP
label_361098:
    // 0x361098: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x361098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36109c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36109Cu;
    {
        const bool branch_taken_0x36109c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3610A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36109Cu;
        // 0x3610a0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36109c) {
            ctx->pc = 0x3610B0u;
            goto label_3610b0;
        }
    }
    ctx->pc = 0x3610A4u;
    // 0x3610a4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3610a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3610A8u;
    {
        const bool branch_taken_0x3610a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3610ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3610A8u;
        // 0x3610ac: 0x94420002  lhu         $v0, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3610a8) {
            ctx->pc = 0x3610C8u;
            goto label_3610c8;
        }
    }
    ctx->pc = 0x3610B0u;
label_3610b0:
    // 0x3610b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3610b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3610b4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3610b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3610b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3610B8u;
    {
        const bool branch_taken_0x3610b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3610B8u;
        // 0x3610bc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3610b8) {
            ctx->pc = 0x361098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361098;
        }
    }
    ctx->pc = 0x3610C0u;
    // 0x3610c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3610c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610c4: 0x0  nop
    ctx->pc = 0x3610c4u;
    // NOP
label_3610c8:
    // 0x3610c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3610C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3610C8u;
        // 0x3610cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3610C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3610D0u;
}
