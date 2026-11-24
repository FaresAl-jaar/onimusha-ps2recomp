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

// Function: sub_00229A50
// Address: 0x229a50 - 0x229a70
void sub_00229A50_0x229a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229A50_0x229a50");
#endif

    ctx->pc = 0x229a50u;

    // 0x229a50: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x229a54: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x229a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x229a58: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x229a58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x229a5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x229A5Cu;
    {
        const bool branch_taken_0x229a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a5c) {
            ctx->pc = 0x229A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229A5Cu;
            // 0x229a60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x229A64u;
            goto label_229a64;
        }
    }
    ctx->pc = 0x229A64u;
label_229a64:
    // 0x229a64: 0x1812  mflo        $v1
    ctx->pc = 0x229a64u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x229a68: 0x3e00008  jr          $ra
    ctx->pc = 0x229A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A68u;
        // 0x229a6c: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229A70u;
}
