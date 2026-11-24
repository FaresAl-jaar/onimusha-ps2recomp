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

// Function: sub_002F24E0
// Address: 0x2f24e0 - 0x2f250c
void sub_002F24E0_0x2f24e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F24E0_0x2f24e0");
#endif

    ctx->pc = 0x2f24e0u;

    // 0x2f24e0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2f24e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f24e4: 0x7c820870  sq          $v0, 0x870($a0)
    ctx->pc = 0x2f24e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 2));
    // 0x2f24e8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2f24e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f24ec: 0x7c820880  sq          $v0, 0x880($a0)
    ctx->pc = 0x2f24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2176), GPR_VEC(ctx, 2));
    // 0x2f24f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2f24f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f24f4: 0x7c820890  sq          $v0, 0x890($a0)
    ctx->pc = 0x2f24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 2));
    // 0x2f24f8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2f24f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f24fc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2f24fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2f2500: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2f2500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f2504: 0x80bc8e0  j           func_2F2380
    ctx->pc = 0x2F2504u;
    ctx->pc = 0x2F2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2504u;
    // 0x2f2508: 0x7c820080  sq          $v0, 0x80($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2380u;
    sub_002F2380_0x2f2380(rdram, ctx, runtime); return;
    ctx->pc = 0x2F250Cu;
}
