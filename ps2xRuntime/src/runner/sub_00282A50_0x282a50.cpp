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

// Function: sub_00282A50
// Address: 0x282a50 - 0x282aa4
void sub_00282A50_0x282a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282A50_0x282a50");
#endif

    switch (ctx->pc) {
        case 0x282a94u: goto label_282a94;
        default: break;
    }

    ctx->pc = 0x282a50u;

    // 0x282a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282a5c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x282a5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x282a60: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x282A60u;
    {
        const bool branch_taken_0x282a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x282a60) {
            ctx->pc = 0x282A80u;
            goto label_282a80;
        }
    }
    ctx->pc = 0x282A68u;
    // 0x282a68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282A68u;
    {
        const bool branch_taken_0x282a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a68) {
            ctx->pc = 0x282A78u;
            goto label_282a78;
        }
    }
    ctx->pc = 0x282A70u;
    // 0x282a70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282A70u;
    {
        const bool branch_taken_0x282a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a70) {
            ctx->pc = 0x282A98u;
            goto label_282a98;
        }
    }
    ctx->pc = 0x282A78u;
label_282a78:
    // 0x282a78: 0xa0830821  sb          $v1, 0x821($a0)
    ctx->pc = 0x282a78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x282a7c: 0x0  nop
    ctx->pc = 0x282a7cu;
    // NOP
label_282a80:
    // 0x282a80: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x282a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x282a84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282A84u;
    {
        const bool branch_taken_0x282a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a84) {
            ctx->pc = 0x282A98u;
            goto label_282a98;
        }
    }
    ctx->pc = 0x282A8Cu;
    // 0x282a8c: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x282A8Cu;
    SET_GPR_U32(ctx, 31, 0x282A94u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x282A8Cu, 0x282A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A94u;
label_282a94:
    // 0x282a94: 0x0  nop
    ctx->pc = 0x282a94u;
    // NOP
label_282a98:
    // 0x282a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x282A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A9Cu;
        // 0x282aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282AA4u;
}
