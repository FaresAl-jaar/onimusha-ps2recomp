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

// Function: sub_003E0E90
// Address: 0x3e0e90 - 0x3e0ecc
void sub_003E0E90_0x3e0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0E90_0x3e0e90");
#endif

    switch (ctx->pc) {
        case 0x3e0ea8u: goto label_3e0ea8;
        case 0x3e0ebcu: goto label_3e0ebc;
        default: break;
    }

    ctx->pc = 0x3e0e90u;

    // 0x3e0e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e0e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ea0: 0xc07bd78  jal         func_1EF5E0
    ctx->pc = 0x3E0EA0u;
    SET_GPR_U32(ctx, 31, 0x3E0EA8u);
    ctx->pc = 0x3E0EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0EA0u;
    // 0x3e0ea4: 0x8c8400b0  lw          $a0, 0xB0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5E0u, 0x3E0EA0u, 0x3E0EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0EA8u;
label_3e0ea8:
    // 0x3e0ea8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3e0ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3e0eac: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x3e0eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x3e0eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e0eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0eb4: 0xc07bbc8  jal         func_1EEF20
    ctx->pc = 0x3E0EB4u;
    SET_GPR_U32(ctx, 31, 0x3E0EBCu);
    ctx->pc = 0x3E0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0EB4u;
    // 0x3e0eb8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF20u, 0x3E0EB4u, 0x3E0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0EBCu;
label_3e0ebc:
    // 0x3e0ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e0ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC4u;
        // 0x3e0ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0ECCu;
}
