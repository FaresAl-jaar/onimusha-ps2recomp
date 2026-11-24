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

// Function: sub_00232FA8
// Address: 0x232fa8 - 0x232fe0
void sub_00232FA8_0x232fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232FA8_0x232fa8");
#endif

    switch (ctx->pc) {
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fccu: goto label_232fcc;
        default: break;
    }

    ctx->pc = 0x232fa8u;

    // 0x232fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232fb4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232FB4u;
    SET_GPR_U32(ctx, 31, 0x232FBCu);
    ctx->pc = 0x232FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FB4u;
    // 0x232fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232FB4u, 0x232FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FBCu;
label_232fbc:
    // 0x232fbc: 0xc08cbf8  jal         func_232FE0
    ctx->pc = 0x232FBCu;
    SET_GPR_U32(ctx, 31, 0x232FC4u);
    ctx->pc = 0x232FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FBCu;
    // 0x232fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FE0u, 0x232FBCu, 0x232FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FC4u;
label_232fc4:
    // 0x232fc4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x232FC4u;
    SET_GPR_U32(ctx, 31, 0x232FCCu);
    ctx->pc = 0x232FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FC4u;
    // 0x232fc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x232FC4u, 0x232FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FCCu;
label_232fcc:
    // 0x232fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x232fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x232FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FD8u;
        // 0x232fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232FE0u;
}
