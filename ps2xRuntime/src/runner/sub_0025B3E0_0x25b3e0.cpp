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

// Function: sub_0025B3E0
// Address: 0x25b3e0 - 0x25b40c
void sub_0025B3E0_0x25b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B3E0_0x25b3e0");
#endif

    switch (ctx->pc) {
        case 0x25b400u: goto label_25b400;
        default: break;
    }

    ctx->pc = 0x25b3e0u;

    // 0x25b3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b3e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x25b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25b3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b3ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x25b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b3f0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x25b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x25b3f4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x25b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b3f8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x25B3F8u;
    SET_GPR_U32(ctx, 31, 0x25B400u);
    ctx->pc = 0x25B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3F8u;
    // 0x25b3fc: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x25B3F8u, 0x25B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B400u;
label_25b400:
    // 0x25b400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b404: 0x3e00008  jr          $ra
    ctx->pc = 0x25B404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B404u;
        // 0x25b408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B40Cu;
}
