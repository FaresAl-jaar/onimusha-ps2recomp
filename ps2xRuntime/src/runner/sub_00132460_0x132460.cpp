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

// Function: sub_00132460
// Address: 0x132460 - 0x132498
void sub_00132460_0x132460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132460_0x132460");
#endif

    switch (ctx->pc) {
        case 0x132484u: goto label_132484;
        case 0x13248cu: goto label_13248c;
        default: break;
    }

    ctx->pc = 0x132460u;

    // 0x132460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13246c: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x13246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x132470: 0xa0450005  sb          $a1, 0x5($v0)
    ctx->pc = 0x132470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x132474: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x132478: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x132478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x13247c: 0xc043800  jal         func_10E000
    ctx->pc = 0x13247Cu;
    SET_GPR_U32(ctx, 31, 0x132484u);
    ctx->pc = 0x132480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13247Cu;
    // 0x132480: 0x8c84019c  lw          $a0, 0x19C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x13247Cu, 0x132484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132484u;
label_132484:
    // 0x132484: 0xc0437c0  jal         func_10DF00
    ctx->pc = 0x132484u;
    SET_GPR_U32(ctx, 31, 0x13248Cu);
    ctx->pc = 0x10DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF00u, 0x132484u, 0x13248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13248Cu;
label_13248c:
    // 0x13248c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132490: 0x3e00008  jr          $ra
    ctx->pc = 0x132490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132490u;
        // 0x132494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132498u;
}
