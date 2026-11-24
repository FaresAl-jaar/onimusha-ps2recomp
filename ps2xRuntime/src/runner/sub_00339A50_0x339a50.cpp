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

// Function: sub_00339A50
// Address: 0x339a50 - 0x339a84
void sub_00339A50_0x339a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A50_0x339a50");
#endif

    switch (ctx->pc) {
        case 0x339a78u: goto label_339a78;
        default: break;
    }

    ctx->pc = 0x339a50u;

    // 0x339a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339a54: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339A54u;
    {
        const bool branch_taken_0x339a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A54u;
        // 0x339a58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a54) {
            ctx->pc = 0x339A70u;
            goto label_339a70;
        }
    }
    ctx->pc = 0x339A5Cu;
    // 0x339a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339a60: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x339a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x339a64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x339A64u;
    {
        const bool branch_taken_0x339a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A64u;
        // 0x339a68: 0xa0850041  sb          $a1, 0x41($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a64) {
            ctx->pc = 0x339A78u;
            goto label_339a78;
        }
    }
    ctx->pc = 0x339A6Cu;
    // 0x339a6c: 0x0  nop
    ctx->pc = 0x339a6cu;
    // NOP
label_339a70:
    // 0x339a70: 0xc0ce6a4  jal         func_339A90
    ctx->pc = 0x339A70u;
    SET_GPR_U32(ctx, 31, 0x339A78u);
    ctx->pc = 0x339A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A90u, 0x339A70u, 0x339A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A78u;
label_339a78:
    // 0x339a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x339A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A7Cu;
        // 0x339a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A84u;
}
