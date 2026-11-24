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

// Function: sub_0020F4F0
// Address: 0x20f4f0 - 0x20f508
void sub_0020F4F0_0x20f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F4F0_0x20f4f0");
#endif

    ctx->pc = 0x20f4f0u;

    // 0x20f4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f500: 0x8083d48  j           func_20F520
    ctx->pc = 0x20F500u;
    ctx->pc = 0x20F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F500u;
    // 0x20f504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F520u;
    sub_0020F520_0x20f520(rdram, ctx, runtime); return;
    ctx->pc = 0x20F508u;
}
