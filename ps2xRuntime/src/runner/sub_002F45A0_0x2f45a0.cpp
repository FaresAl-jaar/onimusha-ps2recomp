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

// Function: sub_002F45A0
// Address: 0x2f45a0 - 0x2f45c4
void sub_002F45A0_0x2f45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F45A0_0x2f45a0");
#endif

    ctx->pc = 0x2f45a0u;

    // 0x2f45a0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f45a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f45a4: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x2f45a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f45a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f45ac: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f45acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f45b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F45B0u;
    {
        const bool branch_taken_0x2f45b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B0u;
        // 0x2f45b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45b0) {
            ctx->pc = 0x2F45BCu;
            goto label_2f45bc;
        }
    }
    ctx->pc = 0x2F45B8u;
    // 0x2f45b8: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2f45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f45bc:
    // 0x2f45bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F45BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F45BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F45C4u;
}
