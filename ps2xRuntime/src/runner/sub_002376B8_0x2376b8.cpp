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

// Function: sub_002376B8
// Address: 0x2376b8 - 0x2376f0
void sub_002376B8_0x2376b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002376B8_0x2376b8");
#endif

    switch (ctx->pc) {
        case 0x2376ccu: goto label_2376cc;
        case 0x2376d4u: goto label_2376d4;
        case 0x2376dcu: goto label_2376dc;
        default: break;
    }

    ctx->pc = 0x2376b8u;

    // 0x2376b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2376b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2376bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2376bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2376c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2376c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2376c4: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2376C4u;
    SET_GPR_U32(ctx, 31, 0x2376CCu);
    ctx->pc = 0x2376C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376C4u;
    // 0x2376c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2376C4u, 0x2376CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376CCu;
label_2376cc:
    // 0x2376cc: 0xc08ddbc  jal         func_2376F0
    ctx->pc = 0x2376CCu;
    SET_GPR_U32(ctx, 31, 0x2376D4u);
    ctx->pc = 0x2376D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376CCu;
    // 0x2376d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376F0u, 0x2376CCu, 0x2376D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376D4u;
label_2376d4:
    // 0x2376d4: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x2376D4u;
    SET_GPR_U32(ctx, 31, 0x2376DCu);
    ctx->pc = 0x2376D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376D4u;
    // 0x2376d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x2376D4u, 0x2376DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376DCu;
label_2376dc:
    // 0x2376dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2376dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2376e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2376e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2376e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2376e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2376E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376E8u;
        // 0x2376ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2376F0u;
}
