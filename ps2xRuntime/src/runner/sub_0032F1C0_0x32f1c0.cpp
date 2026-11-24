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

// Function: sub_0032F1C0
// Address: 0x32f1c0 - 0x32f1f4
void sub_0032F1C0_0x32f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F1C0_0x32f1c0");
#endif

    switch (ctx->pc) {
        case 0x32f1e0u: goto label_32f1e0;
        default: break;
    }

    ctx->pc = 0x32f1c0u;

    // 0x32f1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32f1cc: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x32f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x32f1d0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x32f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32f1d4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x32f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32f1d8: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x32F1D8u;
    SET_GPR_U32(ctx, 31, 0x32F1E0u);
    ctx->pc = 0x32F1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F1D8u;
    // 0x32f1dc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x32F1D8u, 0x32F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1E0u;
label_32f1e0:
    // 0x32f1e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x32F1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1ECu;
        // 0x32f1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F1F4u;
}
