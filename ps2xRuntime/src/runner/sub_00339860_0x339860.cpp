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

// Function: sub_00339860
// Address: 0x339860 - 0x339890
void sub_00339860_0x339860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339860_0x339860");
#endif

    ctx->pc = 0x339860u;

    // 0x339860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x339860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x339864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339868: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x339868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x33986c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33986Cu;
    {
        const bool branch_taken_0x33986c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x339870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33986Cu;
        // 0x339870: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33986c) {
            ctx->pc = 0x339878u;
            goto label_339878;
        }
    }
    ctx->pc = 0x339874u;
    // 0x339874: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x339874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_339878:
    // 0x339878: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x339878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x33987c: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x33987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x339880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339884: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339888: 0x80ce400  j           func_339000
    ctx->pc = 0x339888u;
    ctx->pc = 0x33988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339888u;
    // 0x33988c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    sub_00339000_0x339000(rdram, ctx, runtime); return;
    ctx->pc = 0x339890u;
}
