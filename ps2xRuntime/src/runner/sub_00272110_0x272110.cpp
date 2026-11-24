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

// Function: sub_00272110
// Address: 0x272110 - 0x272128
void sub_00272110_0x272110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272110_0x272110");
#endif

    ctx->pc = 0x272110u;

    // 0x272110: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272110u;
    {
        const bool branch_taken_0x272110 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x272114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272110u;
        // 0x272114: 0x91043  sra         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272110) {
            ctx->pc = 0x272120u;
            goto label_272120;
        }
    }
    ctx->pc = 0x272118u;
    // 0x272118: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x272118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x27211c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27211cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_272120:
    // 0x272120: 0x809c720  j           func_271C80
    ctx->pc = 0x272120u;
    ctx->pc = 0x272124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272120u;
    // 0x272124: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    sub_00271C80_0x271c80(rdram, ctx, runtime); return;
    ctx->pc = 0x272128u;
}
