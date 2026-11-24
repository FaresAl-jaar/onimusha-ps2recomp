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

// Function: sub_003801C0
// Address: 0x3801c0 - 0x3801ec
void sub_003801C0_0x3801c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003801C0_0x3801c0");
#endif

    switch (ctx->pc) {
        case 0x3801d8u: goto label_3801d8;
        default: break;
    }

    ctx->pc = 0x3801c0u;

    // 0x3801c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3801c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3801c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3801c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3801c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3801c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3801cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3801ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3801d0: 0xc0c0860  jal         func_302180
    ctx->pc = 0x3801D0u;
    SET_GPR_U32(ctx, 31, 0x3801D8u);
    ctx->pc = 0x3801D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3801D0u;
    // 0x3801d4: 0x8c842b84  lw          $a0, 0x2B84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x3801D0u, 0x3801D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3801D8u;
label_3801d8:
    // 0x3801d8: 0xae002b84  sw          $zero, 0x2B84($s0)
    ctx->pc = 0x3801d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11140), GPR_U32(ctx, 0));
    // 0x3801dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3801dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3801e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3801e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3801e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3801E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3801E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801E4u;
        // 0x3801e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3801E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3801ECu;
}
