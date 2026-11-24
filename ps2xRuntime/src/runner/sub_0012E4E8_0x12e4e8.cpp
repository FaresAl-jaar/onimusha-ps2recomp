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

// Function: sub_0012E4E8
// Address: 0x12e4e8 - 0x12e514
void sub_0012E4E8_0x12e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E4E8_0x12e4e8");
#endif

    switch (ctx->pc) {
        case 0x12e508u: goto label_12e508;
        default: break;
    }

    ctx->pc = 0x12e4e8u;

    // 0x12e4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e4ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12e4f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e4f4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x12e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12e4f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4fc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12e500: 0xc04b8f6  jal         func_12E3D8
    ctx->pc = 0x12E500u;
    SET_GPR_U32(ctx, 31, 0x12E508u);
    ctx->pc = 0x12E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E500u;
    // 0x12e504: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E3D8u, 0x12E500u, 0x12E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E508u;
label_12e508:
    // 0x12e508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e50c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E50Cu;
        // 0x12e510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E514u;
}
