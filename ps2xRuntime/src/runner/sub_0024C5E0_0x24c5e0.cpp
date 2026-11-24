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

// Function: sub_0024C5E0
// Address: 0x24c5e0 - 0x24c5f4
void sub_0024C5E0_0x24c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C5E0_0x24c5e0");
#endif

    ctx->pc = 0x24c5e0u;

    // 0x24c5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c5e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c5ec: 0x8094bae  j           func_252EB8
    ctx->pc = 0x24C5ECu;
    ctx->pc = 0x24C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5ECu;
    // 0x24c5f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x24C5F4u;
}
