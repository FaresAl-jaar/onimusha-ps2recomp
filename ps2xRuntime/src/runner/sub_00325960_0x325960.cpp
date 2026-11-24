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

// Function: sub_00325960
// Address: 0x325960 - 0x3259a8
void sub_00325960_0x325960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325960_0x325960");
#endif

    switch (ctx->pc) {
        case 0x325978u: goto label_325978;
        default: break;
    }

    ctx->pc = 0x325960u;

    // 0x325960: 0x3c070083  lui         $a3, 0x83
    ctx->pc = 0x325960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)131 << 16));
    // 0x325964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325968: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32596c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32596cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325970: 0x24e7d200  addiu       $a3, $a3, -0x2E00
    ctx->pc = 0x325970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955520));
    // 0x325974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325978:
    // 0x325978: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x325978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x32597c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x32597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x325980: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x325980u;
    {
        const bool branch_taken_0x325980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x325984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325980u;
        // 0x325984: 0x1041814  dsllv       $v1, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325980) {
            ctx->pc = 0x325990u;
            goto label_325990;
        }
    }
    ctx->pc = 0x325988u;
    // 0x325988: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x325988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32598c: 0x0  nop
    ctx->pc = 0x32598cu;
    // NOP
label_325990:
    // 0x325990: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x325990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x325994: 0x24e70048  addiu       $a3, $a3, 0x48
    ctx->pc = 0x325994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
    // 0x325998: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x325998u;
    {
        const bool branch_taken_0x325998 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325998u;
        // 0x32599c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325998) {
            ctx->pc = 0x325978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325978;
        }
    }
    ctx->pc = 0x3259A0u;
    // 0x3259a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3259A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3259A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3259A8u;
}
