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

// Function: sub_003F73F0
// Address: 0x3f73f0 - 0x3f743c
void sub_003F73F0_0x3f73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F73F0_0x3f73f0");
#endif

    switch (ctx->pc) {
        case 0x3f7414u: goto label_3f7414;
        case 0x3f7424u: goto label_3f7424;
        default: break;
    }

    ctx->pc = 0x3f73f0u;

    // 0x3f73f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f73f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f73f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f73f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f73fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f7400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f7400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f7404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f7408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f7408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f740c: 0xc0fdcf4  jal         func_3F73D0
    ctx->pc = 0x3F740Cu;
    SET_GPR_U32(ctx, 31, 0x3F7414u);
    ctx->pc = 0x3F7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F740Cu;
    // 0x3f7410: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F73D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F73D0u, 0x3F740Cu, 0x3F7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7414u;
label_3f7414:
    // 0x3f7414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f741c: 0xc0caec4  jal         func_32BB10
    ctx->pc = 0x3F741Cu;
    SET_GPR_U32(ctx, 31, 0x3F7424u);
    ctx->pc = 0x3F7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F741Cu;
    // 0x3f7420: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB10u, 0x3F741Cu, 0x3F7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7424u;
label_3f7424:
    // 0x3f7424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f7424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f7428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f7428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f742c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f742cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f7430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f7430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f7434: 0x3e00008  jr          $ra
    ctx->pc = 0x3F7434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7434u;
        // 0x3f7438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F743Cu;
}
