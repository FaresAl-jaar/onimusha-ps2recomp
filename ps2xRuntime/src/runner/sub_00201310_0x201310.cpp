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

// Function: sub_00201310
// Address: 0x201310 - 0x201334
void sub_00201310_0x201310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201310_0x201310");
#endif

    ctx->pc = 0x201310u;

    // 0x201310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201318: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x201318u;
    {
        const bool branch_taken_0x201318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201318u;
        // 0x20131c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201318) {
            ctx->pc = 0x201324u;
            goto label_201324;
        }
    }
    ctx->pc = 0x201320u;
    // 0x201320: 0x8c8203b4  lw          $v0, 0x3B4($a0)
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
label_201324:
    // 0x201324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20132c: 0x807d3d0  j           func_1F4F40
    ctx->pc = 0x20132Cu;
    ctx->pc = 0x201330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20132Cu;
    // 0x201330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F40u;
    sub_001F4F40_0x1f4f40(rdram, ctx, runtime); return;
    ctx->pc = 0x201334u;
}
