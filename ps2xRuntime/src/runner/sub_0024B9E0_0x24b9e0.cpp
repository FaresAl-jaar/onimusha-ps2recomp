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

// Function: sub_0024B9E0
// Address: 0x24b9e0 - 0x24ba18
void sub_0024B9E0_0x24b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B9E0_0x24b9e0");
#endif

    switch (ctx->pc) {
        case 0x24b9f4u: goto label_24b9f4;
        case 0x24b9fcu: goto label_24b9fc;
        case 0x24ba04u: goto label_24ba04;
        default: break;
    }

    ctx->pc = 0x24b9e0u;

    // 0x24b9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b9e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b9ec: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B9ECu;
    SET_GPR_U32(ctx, 31, 0x24B9F4u);
    ctx->pc = 0x24B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9ECu;
    // 0x24b9f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B9ECu, 0x24B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9F4u;
label_24b9f4:
    // 0x24b9f4: 0xc092e86  jal         func_24BA18
    ctx->pc = 0x24B9F4u;
    SET_GPR_U32(ctx, 31, 0x24B9FCu);
    ctx->pc = 0x24B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9F4u;
    // 0x24b9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA18u, 0x24B9F4u, 0x24B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9FCu;
label_24b9fc:
    // 0x24b9fc: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24B9FCu;
    SET_GPR_U32(ctx, 31, 0x24BA04u);
    ctx->pc = 0x24BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9FCu;
    // 0x24ba00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24B9FCu, 0x24BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA04u;
label_24ba04:
    // 0x24ba04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ba08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ba08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ba0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba10: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA10u;
        // 0x24ba14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA18u;
}
