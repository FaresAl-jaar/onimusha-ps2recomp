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

// Function: sub_002AA6C0
// Address: 0x2aa6c0 - 0x2aa704
void sub_002AA6C0_0x2aa6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA6C0_0x2aa6c0");
#endif

    switch (ctx->pc) {
        case 0x2aa6f8u: goto label_2aa6f8;
        default: break;
    }

    ctx->pc = 0x2aa6c0u;

    // 0x2aa6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa6c4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2aa6c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa6cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aa6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6d0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2aa6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2aa6d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aa6d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aa6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6dc: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2aa6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2aa6e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aa6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6e4: 0x3445d5bc  ori         $a1, $v0, 0xD5BC
    ctx->pc = 0x2aa6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54716);
    // 0x2aa6e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa6ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aa6ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6f0: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2AA6F0u;
    SET_GPR_U32(ctx, 31, 0x2AA6F8u);
    ctx->pc = 0x2AA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6F0u;
    // 0x2aa6f4: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2AA6F0u, 0x2AA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6F8u;
label_2aa6f8:
    // 0x2aa6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6FCu;
        // 0x2aa700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA704u;
}
