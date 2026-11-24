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

// Function: sub_00232FE0
// Address: 0x232fe0 - 0x233018
void sub_00232FE0_0x232fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232FE0_0x232fe0");
#endif

    switch (ctx->pc) {
        case 0x232ff8u: goto label_232ff8;
        default: break;
    }

    ctx->pc = 0x232fe0u;

    // 0x232fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232fe4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232FE4u;
    {
        const bool branch_taken_0x232fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FE4u;
        // 0x232fe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fe4) {
            ctx->pc = 0x233008u;
            goto label_233008;
        }
    }
    ctx->pc = 0x232FECu;
    // 0x232fec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232ff0: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x232FF0u;
    SET_GPR_U32(ctx, 31, 0x232FF8u);
    ctx->pc = 0x232FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FF0u;
    // 0x232ff4: 0x2484ad18  addiu       $a0, $a0, -0x52E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x232FF0u, 0x232FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FF8u;
label_232ff8:
    // 0x232ff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233000: 0x3e00008  jr          $ra
    ctx->pc = 0x233000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233000u;
        // 0x233004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233008u;
label_233008:
    // 0x233008: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x23300c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233010: 0x8092e78  j           func_24B9E0
    ctx->pc = 0x233010u;
    ctx->pc = 0x233014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233010u;
    // 0x233014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9E0u;
    sub_0024B9E0_0x24b9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x233018u;
}
