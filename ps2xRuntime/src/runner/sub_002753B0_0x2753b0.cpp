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

// Function: sub_002753B0
// Address: 0x2753b0 - 0x2753cc
void sub_002753B0_0x2753b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753B0_0x2753b0");
#endif

    ctx->pc = 0x2753b0u;

    // 0x2753b0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2753b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2753b4: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2753b8: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x2753b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2753bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2753bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753c0: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2753c4: 0x80a2964  j           func_28A590
    ctx->pc = 0x2753C4u;
    ctx->pc = 0x2753C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753C4u;
    // 0x2753c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    sub_0028A590_0x28a590(rdram, ctx, runtime); return;
    ctx->pc = 0x2753CCu;
}
