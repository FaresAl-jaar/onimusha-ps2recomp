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

// Function: sub_00207530
// Address: 0x207530 - 0x207554
void sub_00207530_0x207530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207530_0x207530");
#endif

    ctx->pc = 0x207530u;

    // 0x207530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207538: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207538u;
    {
        const bool branch_taken_0x207538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207538u;
        // 0x20753c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207538) {
            ctx->pc = 0x207544u;
            goto label_207544;
        }
    }
    ctx->pc = 0x207540u;
    // 0x207540: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_207544:
    // 0x207544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20754c: 0x8087ea8  j           func_21FAA0
    ctx->pc = 0x20754Cu;
    ctx->pc = 0x207550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20754Cu;
    // 0x207550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FAA0u;
    sub_0021FAA0_0x21faa0(rdram, ctx, runtime); return;
    ctx->pc = 0x207554u;
}
