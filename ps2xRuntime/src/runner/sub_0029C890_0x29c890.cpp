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

// Function: sub_0029C890
// Address: 0x29c890 - 0x29c8c8
void sub_0029C890_0x29c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C890_0x29c890");
#endif

    switch (ctx->pc) {
        case 0x29c8a8u: goto label_29c8a8;
        case 0x29c8b8u: goto label_29c8b8;
        default: break;
    }

    ctx->pc = 0x29c890u;

    // 0x29c890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8a0: 0xc09d6d4  jal         func_275B50
    ctx->pc = 0x29C8A0u;
    SET_GPR_U32(ctx, 31, 0x29C8A8u);
    ctx->pc = 0x29C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8A0u;
    // 0x29c8a4: 0x260404e0  addiu       $a0, $s0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B50u, 0x29C8A0u, 0x29C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8A8u;
label_29c8a8:
    // 0x29c8a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x29c8ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8b0: 0xc051420  jal         func_145080
    ctx->pc = 0x29C8B0u;
    SET_GPR_U32(ctx, 31, 0x29C8B8u);
    ctx->pc = 0x29C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8B0u;
    // 0x29c8b4: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x29C8B0u, 0x29C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8B8u;
label_29c8b8:
    // 0x29c8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8C0u;
        // 0x29c8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8C8u;
}
