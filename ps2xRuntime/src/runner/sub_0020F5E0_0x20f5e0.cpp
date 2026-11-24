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

// Function: sub_0020F5E0
// Address: 0x20f5e0 - 0x20f5f8
void sub_0020F5E0_0x20f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F5E0_0x20f5e0");
#endif

    ctx->pc = 0x20f5e0u;

    // 0x20f5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f5e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20f5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f5f0: 0x8083d7e  j           func_20F5F8
    ctx->pc = 0x20F5F0u;
    ctx->pc = 0x20F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5F0u;
    // 0x20f5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F5F8u;
    sub_0020F5F8_0x20f5f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20F5F8u;
}
