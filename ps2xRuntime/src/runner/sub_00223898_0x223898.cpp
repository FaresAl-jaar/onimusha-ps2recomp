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

// Function: sub_00223898
// Address: 0x223898 - 0x2238c8
void sub_00223898_0x223898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223898_0x223898");
#endif

    switch (ctx->pc) {
        case 0x2238a8u: goto label_2238a8;
        default: break;
    }

    ctx->pc = 0x223898u;

    // 0x223898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22389c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2238a0: 0xc088e3a  jal         func_2238E8
    ctx->pc = 0x2238A0u;
    SET_GPR_U32(ctx, 31, 0x2238A8u);
    ctx->pc = 0x2238E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E8u, 0x2238A0u, 0x2238A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238A8u;
label_2238a8:
    // 0x2238a8: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x2238ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2238acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2238b0: 0x24635a58  addiu       $v1, $v1, 0x5A58
    ctx->pc = 0x2238b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23128));
    // 0x2238b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2238b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x885A5Cu));
    // 0x2238b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2238b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2238bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2238bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885A5Cu, _value); } while (0);
    // 0x2238c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2238C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238C0u;
        // 0x2238c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2238C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2238C8u;
}
