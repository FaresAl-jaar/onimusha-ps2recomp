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

// Function: sub_00205A30
// Address: 0x205a30 - 0x205a5c
void sub_00205A30_0x205a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A30_0x205a30");
#endif

    switch (ctx->pc) {
        case 0x205a44u: goto label_205a44;
        default: break;
    }

    ctx->pc = 0x205a30u;

    // 0x205a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205a38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205a3c: 0xc081544  jal         func_205510
    ctx->pc = 0x205A3Cu;
    SET_GPR_U32(ctx, 31, 0x205A44u);
    ctx->pc = 0x205A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A3Cu;
    // 0x205a40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205A3Cu, 0x205A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A44u;
label_205a44:
    // 0x205a44: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x205a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x205a48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x205a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a54: 0x3e00008  jr          $ra
    ctx->pc = 0x205A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A54u;
        // 0x205a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A5Cu;
}
