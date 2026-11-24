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

// Function: sub_002F1DE0
// Address: 0x2f1de0 - 0x2f1df0
void sub_002F1DE0_0x2f1de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1DE0_0x2f1de0");
#endif

    ctx->pc = 0x2f1de0u;

    // 0x2f1de0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1de4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2f1de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f1de8: 0x80e7ad0  j           func_39EB40
    ctx->pc = 0x2F1DE8u;
    ctx->pc = 0x2F1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DE8u;
    // 0x2f1dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB40u;
    sub_0039EB40_0x39eb40(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1DF0u;
}
