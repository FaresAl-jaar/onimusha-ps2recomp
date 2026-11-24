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

// Function: sub_001086D8
// Address: 0x1086d8 - 0x10870c
void sub_001086D8_0x1086d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001086D8_0x1086d8");
#endif

    ctx->pc = 0x1086d8u;

    // 0x1086d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1086dc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1086e0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1086e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1086e4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1086e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1086e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x1086ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1086ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1086f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1086f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1086f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1086F4u;
    {
        const bool branch_taken_0x1086f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1086f4) {
            ctx->pc = 0x108704u;
            goto label_108704;
        }
    }
    ctx->pc = 0x1086FCu;
    // 0x1086fc: 0x8042078  j           func_1081E0
    ctx->pc = 0x1086FCu;
    ctx->pc = 0x1081E0u;
    sub_001081E0_0x1081e0(rdram, ctx, runtime); return;
    ctx->pc = 0x108704u;
label_108704:
    // 0x108704: 0x3e00008  jr          $ra
    ctx->pc = 0x108704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10870Cu;
}
