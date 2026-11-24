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

// Function: sub_002EBBA0
// Address: 0x2ebba0 - 0x2ebbb8
void sub_002EBBA0_0x2ebba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBA0_0x2ebba0");
#endif

    ctx->pc = 0x2ebba0u;

    // 0x2ebba0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ebba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebba4: 0x248602e8  addiu       $a2, $a0, 0x2E8
    ctx->pc = 0x2ebba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    // 0x2ebba8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ebba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbac: 0x2408013c  addiu       $t0, $zero, 0x13C
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x2ebbb0: 0x80baef0  j           func_2EBBC0
    ctx->pc = 0x2EBBB0u;
    ctx->pc = 0x2EBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBB0u;
    // 0x2ebbb4: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBC0u;
    sub_002EBBC0_0x2ebbc0(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBBB8u;
}
