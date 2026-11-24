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

// Function: sub_00208680
// Address: 0x208680 - 0x2086a8
void sub_00208680_0x208680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208680_0x208680");
#endif

    switch (ctx->pc) {
        case 0x208698u: goto label_208698;
        default: break;
    }

    ctx->pc = 0x208680u;

    // 0x208680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208688: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x208688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x20868c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208690: 0xc087ea8  jal         func_21FAA0
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 31, 0x208698u);
    ctx->pc = 0x208694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208690u;
    // 0x208694: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FAA0u, 0x208690u, 0x208698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208698u;
label_208698:
    // 0x208698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20869c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2086a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2086A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2086A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A0u;
        // 0x2086a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2086A8u;
}
