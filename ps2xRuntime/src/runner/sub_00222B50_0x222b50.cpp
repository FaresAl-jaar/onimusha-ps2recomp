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

// Function: sub_00222B50
// Address: 0x222b50 - 0x222b9c
void sub_00222B50_0x222b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B50_0x222b50");
#endif

    switch (ctx->pc) {
        case 0x222b68u: goto label_222b68;
        default: break;
    }

    ctx->pc = 0x222b50u;

    // 0x222b50: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x222b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x222b54: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x222B54u;
    {
        const bool branch_taken_0x222b54 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x222B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B54u;
        // 0x222b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b54) {
            ctx->pc = 0x222B84u;
            goto label_222b84;
        }
    }
    ctx->pc = 0x222B5Cu;
    // 0x222b5c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x222b60: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x222b60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b64: 0x0  nop
    ctx->pc = 0x222b64u;
    // NOP
label_222b68:
    // 0x222b68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x222b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222b6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x222b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x222b70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x222b74: 0x0  nop
    ctx->pc = 0x222b74u;
    // NOP
    // 0x222b78: 0x0  nop
    ctx->pc = 0x222b78u;
    // NOP
    // 0x222b7c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x222B7Cu;
    {
        const bool branch_taken_0x222b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B7Cu;
        // 0x222b80: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b7c) {
            ctx->pc = 0x222B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222b68;
        }
    }
    ctx->pc = 0x222B84u;
label_222b84:
    // 0x222b84: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x222b84u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x222b88: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x222B88u;
    {
        const bool branch_taken_0x222b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b88) {
            ctx->pc = 0x222B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222B88u;
            // 0x222b8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x222B90u;
            goto label_222b90;
        }
    }
    ctx->pc = 0x222B90u;
label_222b90:
    // 0x222b90: 0x1012  mflo        $v0
    ctx->pc = 0x222b90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x222b94: 0x3e00008  jr          $ra
    ctx->pc = 0x222B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B9Cu;
}
