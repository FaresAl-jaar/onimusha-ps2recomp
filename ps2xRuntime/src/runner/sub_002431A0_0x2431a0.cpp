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

// Function: sub_002431A0
// Address: 0x2431a0 - 0x2431e0
void sub_002431A0_0x2431a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002431A0_0x2431a0");
#endif

    ctx->pc = 0x2431a0u;

    // 0x2431a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2431a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2431a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2431a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2431a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2431ac: 0x80830009  lb          $v1, 0x9($a0)
    ctx->pc = 0x2431acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2431b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2431B0u;
    {
        const bool branch_taken_0x2431b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2431B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431B0u;
        // 0x2431b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431b0) {
            ctx->pc = 0x2431C8u;
            goto label_2431c8;
        }
    }
    ctx->pc = 0x2431B8u;
    // 0x2431b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2431b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2431bc: 0x8090bd4  j           func_242F50
    ctx->pc = 0x2431BCu;
    ctx->pc = 0x2431C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431BCu;
    // 0x2431c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242F50u;
    sub_00242F50_0x242f50(rdram, ctx, runtime); return;
    ctx->pc = 0x2431C4u;
    // 0x2431c4: 0x0  nop
    ctx->pc = 0x2431c4u;
    // NOP
label_2431c8:
    // 0x2431c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2431C8u;
    {
        const bool branch_taken_0x2431c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2431CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431C8u;
        // 0x2431cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2431c8) {
            ctx->pc = 0x2431D8u;
            goto label_2431d8;
        }
    }
    ctx->pc = 0x2431D0u;
    // 0x2431d0: 0x8090bbc  j           func_242EF0
    ctx->pc = 0x2431D0u;
    ctx->pc = 0x2431D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2431D0u;
    // 0x2431d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242EF0u;
    sub_00242EF0_0x242ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x2431D8u;
label_2431d8:
    // 0x2431d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2431D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2431DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2431D8u;
        // 0x2431dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2431D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2431E0u;
}
