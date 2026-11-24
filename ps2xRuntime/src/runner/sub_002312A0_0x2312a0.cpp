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

// Function: sub_002312A0
// Address: 0x2312a0 - 0x2312d8
void sub_002312A0_0x2312a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002312A0_0x2312a0");
#endif

    switch (ctx->pc) {
        case 0x2312b4u: goto label_2312b4;
        case 0x2312bcu: goto label_2312bc;
        case 0x2312c4u: goto label_2312c4;
        default: break;
    }

    ctx->pc = 0x2312a0u;

    // 0x2312a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2312a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2312a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2312a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2312a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2312ac: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2312ACu;
    SET_GPR_U32(ctx, 31, 0x2312B4u);
    ctx->pc = 0x2312B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312ACu;
    // 0x2312b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2312ACu, 0x2312B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312B4u;
label_2312b4:
    // 0x2312b4: 0xc08c4b6  jal         func_2312D8
    ctx->pc = 0x2312B4u;
    SET_GPR_U32(ctx, 31, 0x2312BCu);
    ctx->pc = 0x2312B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312B4u;
    // 0x2312b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2312D8u, 0x2312B4u, 0x2312BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312BCu;
label_2312bc:
    // 0x2312bc: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2312BCu;
    SET_GPR_U32(ctx, 31, 0x2312C4u);
    ctx->pc = 0x2312C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312BCu;
    // 0x2312c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2312BCu, 0x2312C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312C4u;
label_2312c4:
    // 0x2312c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2312c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2312c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2312c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2312ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2312d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2312D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312D0u;
        // 0x2312d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312D8u;
}
