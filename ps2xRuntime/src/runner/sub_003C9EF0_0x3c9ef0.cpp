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

// Function: sub_003C9EF0
// Address: 0x3c9ef0 - 0x3c9f18
void sub_003C9EF0_0x3c9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9EF0_0x3c9ef0");
#endif

    ctx->pc = 0x3c9ef0u;

    // 0x3c9ef0: 0x8c8206ac  lw          $v0, 0x6AC($a0)
    ctx->pc = 0x3c9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x3c9ef4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c9ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c9ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9EF8u;
    {
        const bool branch_taken_0x3c9ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ef8) {
            ctx->pc = 0x3C9F10u;
            goto label_3c9f10;
        }
    }
    ctx->pc = 0x3C9F00u;
    // 0x3c9f00: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x3c9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3c9f04: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3c9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3c9f08: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x3c9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x3c9f0c: 0x0  nop
    ctx->pc = 0x3c9f0cu;
    // NOP
label_3c9f10:
    // 0x3c9f10: 0x80a6188  j           func_298620
    ctx->pc = 0x3C9F10u;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x3C9F18u;
}
