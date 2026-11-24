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

// Function: sub_00323690
// Address: 0x323690 - 0x3236ec
void sub_00323690_0x323690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323690_0x323690");
#endif

    switch (ctx->pc) {
        case 0x3236d0u: goto label_3236d0;
        case 0x3236e0u: goto label_3236e0;
        default: break;
    }

    ctx->pc = 0x323690u;

    // 0x323690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323694: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x323694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x323698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32369c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x32369cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3236a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3236A0u;
    {
        const bool branch_taken_0x3236a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A0u;
        // 0x3236a4: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a0) {
            ctx->pc = 0x3236C8u;
            goto label_3236c8;
        }
    }
    ctx->pc = 0x3236A8u;
    // 0x3236a8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3236A8u;
    {
        const bool branch_taken_0x3236a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3236a8) {
            ctx->pc = 0x3236C8u;
            goto label_3236c8;
        }
    }
    ctx->pc = 0x3236B0u;
    // 0x3236b0: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x3236b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x3236b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3236B4u;
    {
        const bool branch_taken_0x3236b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3236b4) {
            ctx->pc = 0x3236C8u;
            goto label_3236c8;
        }
    }
    ctx->pc = 0x3236BCu;
    // 0x3236bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3236BCu;
    {
        const bool branch_taken_0x3236bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236bc) {
            ctx->pc = 0x3236D8u;
            goto label_3236d8;
        }
    }
    ctx->pc = 0x3236C4u;
    // 0x3236c4: 0x0  nop
    ctx->pc = 0x3236c4u;
    // NOP
label_3236c8:
    // 0x3236c8: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3236C8u;
    SET_GPR_U32(ctx, 31, 0x3236D0u);
    ctx->pc = 0x3236CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236C8u;
    // 0x3236cc: 0xa0800839  sb          $zero, 0x839($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 2105), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3236C8u, 0x3236D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236D0u;
label_3236d0:
    // 0x3236d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3236D0u;
    {
        const bool branch_taken_0x3236d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236d0) {
            ctx->pc = 0x3236E0u;
            goto label_3236e0;
        }
    }
    ctx->pc = 0x3236D8u;
label_3236d8:
    // 0x3236d8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3236D8u;
    SET_GPR_U32(ctx, 31, 0x3236E0u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3236D8u, 0x3236E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236E0u;
label_3236e0:
    // 0x3236e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3236e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3236E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236E4u;
        // 0x3236e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3236ECu;
}
