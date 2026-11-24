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

// Function: sub_002057F8
// Address: 0x2057f8 - 0x205820
void sub_002057F8_0x2057f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002057F8_0x2057f8");
#endif

    switch (ctx->pc) {
        case 0x20580cu: goto label_20580c;
        default: break;
    }

    ctx->pc = 0x2057f8u;

    // 0x2057f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2057f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2057fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2057fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205804: 0xc081544  jal         func_205510
    ctx->pc = 0x205804u;
    SET_GPR_U32(ctx, 31, 0x20580Cu);
    ctx->pc = 0x205808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205804u;
    // 0x205808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205804u, 0x20580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20580Cu;
label_20580c:
    // 0x20580c: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x20580cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x205810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205818: 0x3e00008  jr          $ra
    ctx->pc = 0x205818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205818u;
        // 0x20581c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205820u;
}
