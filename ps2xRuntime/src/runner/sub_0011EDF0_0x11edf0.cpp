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

// Function: sub_0011EDF0
// Address: 0x11edf0 - 0x11ee04
void sub_0011EDF0_0x11edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EDF0_0x11edf0");
#endif

    ctx->pc = 0x11edf0u;

    // 0x11edf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11edf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11edf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11edfc: 0x8046aac  j           func_11AAB0
    ctx->pc = 0x11EDFCu;
    ctx->pc = 0x11EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDFCu;
    // 0x11ee00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AAB0u;
    sub_0011AAB0_0x11aab0(rdram, ctx, runtime); return;
    ctx->pc = 0x11EE04u;
}
