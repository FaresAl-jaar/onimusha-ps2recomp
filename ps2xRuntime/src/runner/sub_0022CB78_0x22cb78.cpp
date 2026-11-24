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

// Function: sub_0022CB78
// Address: 0x22cb78 - 0x22cba0
void sub_0022CB78_0x22cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB78_0x22cb78");
#endif

    switch (ctx->pc) {
        case 0x22cb90u: goto label_22cb90;
        default: break;
    }

    ctx->pc = 0x22cb78u;

    // 0x22cb78: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22cb7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22cb80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22cb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cb88: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22CB88u;
    SET_GPR_U32(ctx, 31, 0x22CB90u);
    ctx->pc = 0x22CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB88u;
    // 0x22cb8c: 0x24a5a238  addiu       $a1, $a1, -0x5DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22CB88u, 0x22CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB90u;
label_22cb90:
    // 0x22cb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cb94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x22cb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB98u;
        // 0x22cb9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CBA0u;
}
