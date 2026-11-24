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

// Function: sub_0022B0B8
// Address: 0x22b0b8 - 0x22b0f8
void sub_0022B0B8_0x22b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B0B8_0x22b0b8");
#endif

    ctx->pc = 0x22b0b8u;

    // 0x22b0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b0c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b0c4: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x22b0c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22b0c8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B0C8u;
    {
        const bool branch_taken_0x22b0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0C8u;
        // 0x22b0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0c8) {
            ctx->pc = 0x22B0E0u;
            goto label_22b0e0;
        }
    }
    ctx->pc = 0x22B0D0u;
    // 0x22b0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b0d4: 0x808abc4  j           func_22AF10
    ctx->pc = 0x22B0D4u;
    ctx->pc = 0x22B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0D4u;
    // 0x22b0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF10u;
    sub_0022AF10_0x22af10(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0DCu;
    // 0x22b0dc: 0x0  nop
    ctx->pc = 0x22b0dcu;
    // NOP
label_22b0e0:
    // 0x22b0e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B0E0u;
    {
        const bool branch_taken_0x22b0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0E0u;
        // 0x22b0e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0e0) {
            ctx->pc = 0x22B0F0u;
            goto label_22b0f0;
        }
    }
    ctx->pc = 0x22B0E8u;
    // 0x22b0e8: 0x808ab64  j           func_22AD90
    ctx->pc = 0x22B0E8u;
    ctx->pc = 0x22B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0E8u;
    // 0x22b0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD90u;
    sub_0022AD90_0x22ad90(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0F0u;
label_22b0f0:
    // 0x22b0f0: 0x808aafe  j           func_22ABF8
    ctx->pc = 0x22B0F0u;
    ctx->pc = 0x22B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0F0u;
    // 0x22b0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ABF8u;
    sub_0022ABF8_0x22abf8(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0F8u;
}
