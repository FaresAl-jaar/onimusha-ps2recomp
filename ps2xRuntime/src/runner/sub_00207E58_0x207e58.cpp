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

// Function: sub_00207E58
// Address: 0x207e58 - 0x207ea0
void sub_00207E58_0x207e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207E58_0x207e58");
#endif

    ctx->pc = 0x207e58u;

    // 0x207e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x207e5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x207e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e60: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x207e60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207e6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207E6Cu;
    {
        const bool branch_taken_0x207e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E6Cu;
        // 0x207e70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e6c) {
            ctx->pc = 0x207E78u;
            goto label_207e78;
        }
    }
    ctx->pc = 0x207E74u;
    // 0x207e74: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x207e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_207e78:
    // 0x207e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207E7Cu;
    {
        const bool branch_taken_0x207e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E7Cu;
        // 0x207e80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e7c) {
            ctx->pc = 0x207E90u;
            goto label_207e90;
        }
    }
    ctx->pc = 0x207E84u;
    // 0x207e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e88: 0x80852ce  j           func_214B38
    ctx->pc = 0x207E88u;
    ctx->pc = 0x207E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E88u;
    // 0x207e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x207E90u;
label_207e90:
    // 0x207e90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e98: 0x80852ce  j           func_214B38
    ctx->pc = 0x207E98u;
    ctx->pc = 0x207E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E98u;
    // 0x207e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B38u;
    sub_00214B38_0x214b38(rdram, ctx, runtime); return;
    ctx->pc = 0x207EA0u;
}
