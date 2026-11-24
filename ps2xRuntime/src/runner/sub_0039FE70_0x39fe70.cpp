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

// Function: sub_0039FE70
// Address: 0x39fe70 - 0x39fe80
void sub_0039FE70_0x39fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FE70_0x39fe70");
#endif

    ctx->pc = 0x39fe70u;

    // 0x39fe70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39fe70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe74: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x39fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x39fe78: 0x80e7fb8  j           func_39FEE0
    ctx->pc = 0x39FE78u;
    ctx->pc = 0x39FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE78u;
    // 0x39fe7c: 0x24843320  addiu       $a0, $a0, 0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FEE0u;
    sub_0039FEE0_0x39fee0(rdram, ctx, runtime); return;
    ctx->pc = 0x39FE80u;
}
