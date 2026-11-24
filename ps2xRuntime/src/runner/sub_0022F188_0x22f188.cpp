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

// Function: sub_0022F188
// Address: 0x22f188 - 0x22f1f0
void sub_0022F188_0x22f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F188_0x22f188");
#endif

    switch (ctx->pc) {
        case 0x22f1b4u: goto label_22f1b4;
        case 0x22f1c8u: goto label_22f1c8;
        case 0x22f1d0u: goto label_22f1d0;
        default: break;
    }

    ctx->pc = 0x22f188u;

    // 0x22f188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f198: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f1a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f1a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f1ac: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F1ACu;
    SET_GPR_U32(ctx, 31, 0x22F1B4u);
    ctx->pc = 0x22F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1ACu;
    // 0x22f1b0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F1ACu, 0x22F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1B4u;
label_22f1b4:
    // 0x22f1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1c0: 0xc08bc7c  jal         func_22F1F0
    ctx->pc = 0x22F1C0u;
    SET_GPR_U32(ctx, 31, 0x22F1C8u);
    ctx->pc = 0x22F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1C0u;
    // 0x22f1c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F1F0u, 0x22F1C0u, 0x22F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1C8u;
label_22f1c8:
    // 0x22f1c8: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F1C8u;
    SET_GPR_U32(ctx, 31, 0x22F1D0u);
    ctx->pc = 0x22F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1C8u;
    // 0x22f1cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F1C8u, 0x22F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1D0u;
label_22f1d0:
    // 0x22f1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f1d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f1d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f1d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f1e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f1e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x22F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1E8u;
        // 0x22f1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F1F0u;
}
