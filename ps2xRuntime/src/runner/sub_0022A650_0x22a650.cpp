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

// Function: sub_0022A650
// Address: 0x22a650 - 0x22a678
void sub_0022A650_0x22a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A650_0x22a650");
#endif

    ctx->pc = 0x22a650u;

    // 0x22a650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a65c: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22a660: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A660u;
    {
        const bool branch_taken_0x22a660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A660u;
        // 0x22a664: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a660) {
            ctx->pc = 0x22A670u;
            goto label_22a670;
        }
    }
    ctx->pc = 0x22A668u;
    // 0x22a668: 0x808a934  j           func_22A4D0
    ctx->pc = 0x22A668u;
    ctx->pc = 0x22A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A668u;
    // 0x22a66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A4D0u;
    sub_0022A4D0_0x22a4d0(rdram, ctx, runtime); return;
    ctx->pc = 0x22A670u;
label_22a670:
    // 0x22a670: 0x808a8c6  j           func_22A318
    ctx->pc = 0x22A670u;
    ctx->pc = 0x22A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A670u;
    // 0x22a674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A318u;
    sub_0022A318_0x22a318(rdram, ctx, runtime); return;
    ctx->pc = 0x22A678u;
}
