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

// Function: sub_002A9C30
// Address: 0x2a9c30 - 0x2a9c74
void sub_002A9C30_0x2a9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C30_0x2a9c30");
#endif

    switch (ctx->pc) {
        case 0x2a9c68u: goto label_2a9c68;
        default: break;
    }

    ctx->pc = 0x2a9c30u;

    // 0x2a9c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9c34: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a9c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a9c3c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2a9c3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c40: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9c44: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2a9c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9c4c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a9c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a9c50: 0x8d020190  lw          $v0, 0x190($t0)
    ctx->pc = 0x2a9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 400)));
    // 0x2a9c54: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2a9c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2a9c58: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2a9c58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9c5c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2a9c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2a9c60: 0xc0d6350  jal         func_358D40
    ctx->pc = 0x2A9C60u;
    SET_GPR_U32(ctx, 31, 0x2A9C68u);
    ctx->pc = 0x2A9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C60u;
    // 0x2a9c64: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358D40u, 0x2A9C60u, 0x2A9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C68u;
label_2a9c68:
    // 0x2a9c68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C6Cu;
        // 0x2a9c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C74u;
}
