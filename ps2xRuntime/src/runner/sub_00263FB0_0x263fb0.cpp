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

// Function: sub_00263FB0
// Address: 0x263fb0 - 0x263fe4
void sub_00263FB0_0x263fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263FB0_0x263fb0");
#endif

    switch (ctx->pc) {
        case 0x263fc4u: goto label_263fc4;
        case 0x263fd4u: goto label_263fd4;
        default: break;
    }

    ctx->pc = 0x263fb0u;

    // 0x263fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263fbc: 0xc0a52d0  jal         func_294B40
    ctx->pc = 0x263FBCu;
    SET_GPR_U32(ctx, 31, 0x263FC4u);
    ctx->pc = 0x263FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FBCu;
    // 0x263fc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B40u, 0x263FBCu, 0x263FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FC4u;
label_263fc4:
    // 0x263fc4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x263fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fcc: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x263FCCu;
    SET_GPR_U32(ctx, 31, 0x263FD4u);
    ctx->pc = 0x263FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263FCCu;
    // 0x263fd0: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x263FCCu, 0x263FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FD4u;
label_263fd4:
    // 0x263fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x263FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FDCu;
        // 0x263fe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263FE4u;
}
