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

// Function: sub_0023A448
// Address: 0x23a448 - 0x23a494
void sub_0023A448_0x23a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A448_0x23a448");
#endif

    switch (ctx->pc) {
        case 0x23a460u: goto label_23a460;
        default: break;
    }

    ctx->pc = 0x23a448u;

    // 0x23a448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a44c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A44Cu;
    {
        const bool branch_taken_0x23a44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A44Cu;
        // 0x23a450: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a44c) {
            ctx->pc = 0x23A468u;
            goto label_23a468;
        }
    }
    ctx->pc = 0x23A454u;
    // 0x23a454: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a458: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A458u;
    SET_GPR_U32(ctx, 31, 0x23A460u);
    ctx->pc = 0x23A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A458u;
    // 0x23a45c: 0x2484b0f8  addiu       $a0, $a0, -0x4F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A458u, 0x23A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A460u;
label_23a460:
    // 0x23a460: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A460u;
    {
        const bool branch_taken_0x23a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A460u;
        // 0x23a464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a460) {
            ctx->pc = 0x23A488u;
            goto label_23a488;
        }
    }
    ctx->pc = 0x23A468u;
label_23a468:
    // 0x23a468: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23a46c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23a46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a470: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A470u;
    {
        const bool branch_taken_0x23a470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a470) {
            ctx->pc = 0x23A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A470u;
            // 0x23a474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A488u;
            goto label_23a488;
        }
    }
    ctx->pc = 0x23A478u;
    // 0x23a478: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23a478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a480: 0x808db20  j           func_236C80
    ctx->pc = 0x23A480u;
    ctx->pc = 0x23A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A480u;
    // 0x23a484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    sub_00236C80_0x236c80(rdram, ctx, runtime); return;
    ctx->pc = 0x23A488u;
label_23a488:
    // 0x23a488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A48Cu;
        // 0x23a490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A494u;
}
