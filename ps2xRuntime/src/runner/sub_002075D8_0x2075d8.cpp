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

// Function: sub_002075D8
// Address: 0x2075d8 - 0x2075f0
void sub_002075D8_0x2075d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002075D8_0x2075d8");
#endif

    ctx->pc = 0x2075d8u;

    // 0x2075d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2075dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2075dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2075e0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2075e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2075e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2075e8: 0x8083212  j           func_20C848
    ctx->pc = 0x2075E8u;
    ctx->pc = 0x2075ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2075E8u;
    // 0x2075ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C848u;
    sub_0020C848_0x20c848(rdram, ctx, runtime); return;
    ctx->pc = 0x2075F0u;
}
