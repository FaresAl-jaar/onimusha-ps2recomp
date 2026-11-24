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

// Function: sub_003225E0
// Address: 0x3225e0 - 0x32261c
void sub_003225E0_0x3225e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003225E0_0x3225e0");
#endif

    switch (ctx->pc) {
        case 0x322610u: goto label_322610;
        default: break;
    }

    ctx->pc = 0x3225e0u;

    // 0x3225e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3225e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3225e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3225e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3225e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3225e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3225ec: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3225ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x3225f0: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x3225f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3225f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3225f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3225f8: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x3225f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x3225fc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3225fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x322600: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x322600u;
    {
        const bool branch_taken_0x322600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x322600) {
            ctx->pc = 0x322610u;
            goto label_322610;
        }
    }
    ctx->pc = 0x322608u;
    // 0x322608: 0xc0c85d4  jal         func_321750
    ctx->pc = 0x322608u;
    SET_GPR_U32(ctx, 31, 0x322610u);
    ctx->pc = 0x321750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321750u, 0x322608u, 0x322610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322610u;
label_322610:
    // 0x322610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322614: 0x3e00008  jr          $ra
    ctx->pc = 0x322614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322614u;
        // 0x322618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32261Cu;
}
