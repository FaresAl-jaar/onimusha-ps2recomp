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

// Function: sub_00325900
// Address: 0x325900 - 0x325958
void sub_00325900_0x325900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325900_0x325900");
#endif

    switch (ctx->pc) {
        case 0x325918u: goto label_325918;
        default: break;
    }

    ctx->pc = 0x325900u;

    // 0x325900: 0x5223c  dsll32      $a0, $a1, 8
    ctx->pc = 0x325900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 8));
    // 0x325904: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x325904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x325908: 0x3c050083  lui         $a1, 0x83
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)131 << 16));
    // 0x32590c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x32590cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x325910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325914: 0x24a5d200  addiu       $a1, $a1, -0x2E00
    ctx->pc = 0x325914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955520));
label_325918:
    // 0x325918: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x325918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x32591c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x32591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x325920: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x325920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x325924: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x325924u;
    {
        const bool branch_taken_0x325924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x325924) {
            ctx->pc = 0x325938u;
            goto label_325938;
        }
    }
    ctx->pc = 0x32592Cu;
    // 0x32592c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32592Cu;
    {
        const bool branch_taken_0x32592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32592c) {
            ctx->pc = 0x325950u;
            goto label_325950;
        }
    }
    ctx->pc = 0x325934u;
    // 0x325934: 0x0  nop
    ctx->pc = 0x325934u;
    // NOP
label_325938:
    // 0x325938: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x325938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x32593c: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x32593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x325940: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x325940u;
    {
        const bool branch_taken_0x325940 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x325944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325940u;
        // 0x325944: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325940) {
            ctx->pc = 0x325918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325918;
        }
    }
    ctx->pc = 0x325948u;
    // 0x325948: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x325948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32594c: 0x0  nop
    ctx->pc = 0x32594cu;
    // NOP
label_325950:
    // 0x325950: 0x3e00008  jr          $ra
    ctx->pc = 0x325950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325958u;
}
