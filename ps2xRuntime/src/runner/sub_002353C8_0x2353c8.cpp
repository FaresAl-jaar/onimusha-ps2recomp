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

// Function: sub_002353C8
// Address: 0x2353c8 - 0x2353e0
void sub_002353C8_0x2353c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002353C8_0x2353c8");
#endif

    ctx->pc = 0x2353c8u;

    // 0x2353c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2353c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2353cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2353ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2353d0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2353d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2353d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2353d8: 0x8093a02  j           func_24E808
    ctx->pc = 0x2353D8u;
    ctx->pc = 0x2353DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353D8u;
    // 0x2353dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E808u;
    sub_0024E808_0x24e808(rdram, ctx, runtime); return;
    ctx->pc = 0x2353E0u;
}
