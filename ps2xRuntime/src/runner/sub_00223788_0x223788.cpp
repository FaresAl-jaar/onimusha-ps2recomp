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

// Function: sub_00223788
// Address: 0x223788 - 0x2237cc
void sub_00223788_0x223788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223788_0x223788");
#endif

    ctx->pc = 0x223788u;

    // 0x223788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22378c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x22378cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x223790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223794: 0x24635a64  addiu       $v1, $v1, 0x5A64
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23140));
    // 0x223798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x223798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x885A64u));
    // 0x22379c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2237a0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2237A0u;
    {
        const bool branch_taken_0x2237a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2237A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237A0u;
        // 0x2237a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237a0) {
            ctx->pc = 0x2237C0u;
            goto label_2237c0;
        }
    }
    ctx->pc = 0x2237A8u;
    // 0x2237a8: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x2237a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x2237ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2237acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2237b0: 0x24845a58  addiu       $a0, $a0, 0x5A58
    ctx->pc = 0x2237b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23128));
    // 0x2237b4: 0x8088e32  j           func_2238C8
    ctx->pc = 0x2237B4u;
    ctx->pc = 0x2237B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237B4u;
    // 0x2237b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C8u;
    sub_002238C8_0x2238c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2237BCu;
    // 0x2237bc: 0x0  nop
    ctx->pc = 0x2237bcu;
    // NOP
label_2237c0:
    // 0x2237c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2237c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2237c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2237C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2237C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237C4u;
        // 0x2237c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2237C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2237CCu;
}
