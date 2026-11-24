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

// Function: sub_00253AA0
// Address: 0x253aa0 - 0x253ae0
void sub_00253AA0_0x253aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253AA0_0x253aa0");
#endif

    switch (ctx->pc) {
        case 0x253ac4u: goto label_253ac4;
        default: break;
    }

    ctx->pc = 0x253aa0u;

    // 0x253aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253aa4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x253aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253aac: 0x2450070c  addiu       $s0, $v0, 0x70C
    ctx->pc = 0x253aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1804));
    // 0x253ab0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x253ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4E070Cu));
    // 0x253ab4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253AB4u;
    {
        const bool branch_taken_0x253ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AB4u;
        // 0x253ab8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ab4) {
            ctx->pc = 0x253AC4u;
            goto label_253ac4;
        }
    }
    ctx->pc = 0x253ABCu;
    // 0x253abc: 0xc094e7e  jal         func_2539F8
    ctx->pc = 0x253ABCu;
    SET_GPR_U32(ctx, 31, 0x253AC4u);
    ctx->pc = 0x2539F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539F8u, 0x253ABCu, 0x253AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AC4u;
label_253ac4:
    // 0x253ac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x253accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x253ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x253ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x253ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x253AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253AD8u;
        // 0x253adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253AE0u;
}
