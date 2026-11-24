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

// Function: sub_00246990
// Address: 0x246990 - 0x2469e4
void sub_00246990_0x246990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246990_0x246990");
#endif

    ctx->pc = 0x246990u;

    // 0x246990: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x246990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246994: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x246994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x246998: 0x2463e9c4  addiu       $v1, $v1, -0x163C
    ctx->pc = 0x246998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961604));
    // 0x24699c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24699cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2469a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2469a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2469a4: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x2469a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x2469a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2469a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2469ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2469acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2469b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2469b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2469b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2469b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2469b8: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2469B8u;
    {
        const bool branch_taken_0x2469b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2469BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469B8u;
        // 0x2469bc: 0xacc2e9f4  sw          $v0, -0x160C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294961652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469b8) {
            ctx->pc = 0x2469D8u;
            goto label_2469d8;
        }
    }
    ctx->pc = 0x2469C0u;
    // 0x2469c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2469c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2469c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2469c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2469c8: 0x2484caf8  addiu       $a0, $a0, -0x3508
    ctx->pc = 0x2469c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953720));
    // 0x2469cc: 0x8044332  j           func_110CC8
    ctx->pc = 0x2469CCu;
    ctx->pc = 0x2469D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2469CCu;
    // 0x2469d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    sub_00110CC8_0x110cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x2469D4u;
    // 0x2469d4: 0x0  nop
    ctx->pc = 0x2469d4u;
    // NOP
label_2469d8:
    // 0x2469d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2469dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2469DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2469E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469DCu;
        // 0x2469e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2469DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2469E4u;
}
