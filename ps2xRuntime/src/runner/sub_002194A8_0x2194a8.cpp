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

// Function: sub_002194A8
// Address: 0x2194a8 - 0x2194fc
void sub_002194A8_0x2194a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002194A8_0x2194a8");
#endif

    switch (ctx->pc) {
        case 0x2194d8u: goto label_2194d8;
        default: break;
    }

    ctx->pc = 0x2194a8u;

    // 0x2194a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2194a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2194ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2194b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2194b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2194b4: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2194b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2194b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2194bc: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x2194bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2194c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2194c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2194c4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2194c8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2194c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2194cc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2194ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2194d0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2194d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2194d4: 0x0  nop
    ctx->pc = 0x2194d4u;
    // NOP
label_2194d8:
    // 0x2194d8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2194d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2194dc: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x2194dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2194e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2194e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2194e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2194e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2194e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2194e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2194ec: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2194ECu;
    {
        const bool branch_taken_0x2194ec = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194ECu;
        // 0x2194f0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194ec) {
            ctx->pc = 0x2194D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2194d8;
        }
    }
    ctx->pc = 0x2194F4u;
    // 0x2194f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2194F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2194F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2194FCu;
}
