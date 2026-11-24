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

// Function: sub_002074D8
// Address: 0x2074d8 - 0x207504
void sub_002074D8_0x2074d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074D8_0x2074d8");
#endif

    ctx->pc = 0x2074d8u;

    // 0x2074d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2074dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2074dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2074e0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2074e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2074e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2074E4u;
    {
        const bool branch_taken_0x2074e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074E4u;
        // 0x2074e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e4) {
            ctx->pc = 0x2074F8u;
            goto label_2074f8;
        }
    }
    ctx->pc = 0x2074ECu;
    // 0x2074ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2074f0: 0x8087ed4  j           func_21FB50
    ctx->pc = 0x2074F0u;
    ctx->pc = 0x2074F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074F0u;
    // 0x2074f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB50u;
    sub_0021FB50_0x21fb50(rdram, ctx, runtime); return;
    ctx->pc = 0x2074F8u;
label_2074f8:
    // 0x2074f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2074fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2074FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074FCu;
        // 0x207500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207504u;
}
