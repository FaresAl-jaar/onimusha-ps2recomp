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

// Function: sub_002E6AD0
// Address: 0x2e6ad0 - 0x2e6af0
void sub_002E6AD0_0x2e6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6AD0_0x2e6ad0");
#endif

    ctx->pc = 0x2e6ad0u;

    // 0x2e6ad0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e6ad4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2e6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2e6ad8: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x2e6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x2e6adc: 0xac8306c0  sw          $v1, 0x6C0($a0)
    ctx->pc = 0x2e6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1728), GPR_U32(ctx, 3));
    // 0x2e6ae0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2e6ae4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e6ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6ae8: 0x80a4d3c  j           func_2934F0
    ctx->pc = 0x2E6AE8u;
    ctx->pc = 0x2E6AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6AE8u;
    // 0x2e6aec: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    sub_002934F0_0x2934f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6AF0u;
}
