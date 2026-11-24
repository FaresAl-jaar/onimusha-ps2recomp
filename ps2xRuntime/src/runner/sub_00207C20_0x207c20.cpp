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

// Function: sub_00207C20
// Address: 0x207c20 - 0x207c4c
void sub_00207C20_0x207c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207C20_0x207c20");
#endif

    ctx->pc = 0x207c20u;

    // 0x207c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207c24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x207c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c30: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207C30u;
    {
        const bool branch_taken_0x207c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C30u;
        // 0x207c34: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c30) {
            ctx->pc = 0x207C3Cu;
            goto label_207c3c;
        }
    }
    ctx->pc = 0x207C38u;
    // 0x207c38: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_207c3c:
    // 0x207c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c44: 0x80852ce  j           func_214B38
    ctx->pc = 0x207C44u;
    ctx->pc = 0x207C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C44u;
    // 0x207c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x207C4Cu;
}
