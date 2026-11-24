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

// Function: sub_002728F0
// Address: 0x2728f0 - 0x2728fc
void sub_002728F0_0x2728f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728F0_0x2728f0");
#endif

    ctx->pc = 0x2728f0u;

    // 0x2728f0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2728f4: 0x809ca68  j           func_2729A0
    ctx->pc = 0x2728F4u;
    ctx->pc = 0x2728F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728F4u;
    // 0x2728f8: 0x24840810  addiu       $a0, $a0, 0x810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729A0u;
    sub_002729A0_0x2729a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2728FCu;
}
