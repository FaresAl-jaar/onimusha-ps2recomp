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

// Function: sub_00342C80
// Address: 0x342c80 - 0x342cb4
void sub_00342C80_0x342c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C80_0x342c80");
#endif

    switch (ctx->pc) {
        case 0x342ca4u: goto label_342ca4;
        default: break;
    }

    ctx->pc = 0x342c80u;

    // 0x342c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342c88: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x342c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342c8c: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x342C8Cu;
    {
        const bool branch_taken_0x342c8c = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x342c8c) {
            ctx->pc = 0x342CA8u;
            goto label_342ca8;
        }
    }
    ctx->pc = 0x342C94u;
    // 0x342c94: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x342c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x342c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c9c: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x342C9Cu;
    SET_GPR_U32(ctx, 31, 0x342CA4u);
    ctx->pc = 0x342CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342C9Cu;
    // 0x342ca0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x342C9Cu, 0x342CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342CA4u;
label_342ca4:
    // 0x342ca4: 0x0  nop
    ctx->pc = 0x342ca4u;
    // NOP
label_342ca8:
    // 0x342ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342cac: 0x3e00008  jr          $ra
    ctx->pc = 0x342CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CACu;
        // 0x342cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342CB4u;
}
