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

// Function: sub_0022F3B0
// Address: 0x22f3b0 - 0x22f418
void sub_0022F3B0_0x22f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F3B0_0x22f3b0");
#endif

    switch (ctx->pc) {
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f8u: goto label_22f3f8;
        default: break;
    }

    ctx->pc = 0x22f3b0u;

    // 0x22f3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f3c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f3c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f3d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f3d4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F3D4u, 0x22F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f3e8: 0xc08bd06  jal         func_22F418
    ctx->pc = 0x22F3E8u;
    SET_GPR_U32(ctx, 31, 0x22F3F0u);
    ctx->pc = 0x22F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3E8u;
    // 0x22f3ec: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F418u, 0x22F3E8u, 0x22F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3F0u;
label_22f3f0:
    // 0x22f3f0: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F3F0u;
    SET_GPR_U32(ctx, 31, 0x22F3F8u);
    ctx->pc = 0x22F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3F0u;
    // 0x22f3f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F3F0u, 0x22F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3F8u;
label_22f3f8:
    // 0x22f3f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f3fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f408: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f40c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f410: 0x3e00008  jr          $ra
    ctx->pc = 0x22F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F410u;
        // 0x22f414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F418u;
}
