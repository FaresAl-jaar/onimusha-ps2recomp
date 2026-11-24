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

// Function: sub_00335BD0
// Address: 0x335bd0 - 0x335bec
void sub_00335BD0_0x335bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335BD0_0x335bd0");
#endif

    ctx->pc = 0x335bd0u;

    // 0x335bd0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x335bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x335bd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x335bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335bd8: 0x2484ce30  addiu       $a0, $a0, -0x31D0
    ctx->pc = 0x335bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954544));
    // 0x335bdc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x335bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335be4: 0x809aea8  j           func_26BAA0
    ctx->pc = 0x335BE4u;
    ctx->pc = 0x335BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BE4u;
    // 0x335be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAA0u;
    sub_0026BAA0_0x26baa0(rdram, ctx, runtime); return;
    ctx->pc = 0x335BECu;
}
