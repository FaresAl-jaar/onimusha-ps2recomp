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

// Function: sub_0026FD50
// Address: 0x26fd50 - 0x26fd8c
void sub_0026FD50_0x26fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FD50_0x26fd50");
#endif

    switch (ctx->pc) {
        case 0x26fd7cu: goto label_26fd7c;
        default: break;
    }

    ctx->pc = 0x26fd50u;

    // 0x26fd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fd54: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x26fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x26fd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fd5c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fd60: 0x8c2305e4  lw          $v1, 0x5E4($at)
    ctx->pc = 0x26fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8C05E4u));
    // 0x26fd64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FD64u;
    {
        const bool branch_taken_0x26fd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD64u;
        // 0x26fd68: 0x248405e0  addiu       $a0, $a0, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd64) {
            ctx->pc = 0x26FD80u;
            goto label_26fd80;
        }
    }
    ctx->pc = 0x26FD6Cu;
    // 0x26fd6c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x26fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26fd70: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x26fd74: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x26FD74u;
    SET_GPR_U32(ctx, 31, 0x26FD7Cu);
    ctx->pc = 0x26FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD74u;
    // 0x26fd78: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x26FD74u, 0x26FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD7Cu;
label_26fd7c:
    // 0x26fd7c: 0x0  nop
    ctx->pc = 0x26fd7cu;
    // NOP
label_26fd80:
    // 0x26fd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD84u;
        // 0x26fd88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FD8Cu;
}
