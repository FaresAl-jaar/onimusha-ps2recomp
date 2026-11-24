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

// Function: sub_003C56F0
// Address: 0x3c56f0 - 0x3c5734
void sub_003C56F0_0x3c56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C56F0_0x3c56f0");
#endif

    switch (ctx->pc) {
        case 0x3c5724u: goto label_3c5724;
        default: break;
    }

    ctx->pc = 0x3c56f0u;

    // 0x3c56f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c56f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3c56f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3c56f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c56fc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3c56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3c5700: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3c5700u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3c5704: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c5704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c5708: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5708u;
    {
        const bool branch_taken_0x3c5708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5708u;
        // 0x3c570c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5708) {
            ctx->pc = 0x3C5728u;
            goto label_3c5728;
        }
    }
    ctx->pc = 0x3C5710u;
    // 0x3c5710: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c5710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c5714: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5714u;
    {
        const bool branch_taken_0x3c5714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5714) {
            ctx->pc = 0x3C5728u;
            goto label_3c5728;
        }
    }
    ctx->pc = 0x3C571Cu;
    // 0x3c571c: 0xc0f13bc  jal         func_3C4EF0
    ctx->pc = 0x3C571Cu;
    SET_GPR_U32(ctx, 31, 0x3C5724u);
    ctx->pc = 0x3C4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4EF0u, 0x3C571Cu, 0x3C5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5724u;
label_3c5724:
    // 0x3c5724: 0x0  nop
    ctx->pc = 0x3c5724u;
    // NOP
label_3c5728:
    // 0x3c5728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c572c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C572Cu;
        // 0x3c5730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C572Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5734u;
}
