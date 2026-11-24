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

// Function: sub_00252EB8
// Address: 0x252eb8 - 0x252ed0
void sub_00252EB8_0x252eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252EB8_0x252eb8");
#endif

    ctx->pc = 0x252eb8u;

    // 0x252eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252ebc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ec8: 0x8094b84  j           func_252E10
    ctx->pc = 0x252EC8u;
    ctx->pc = 0x252ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252EC8u;
    // 0x252ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252E10u;
    sub_00252E10_0x252e10(rdram, ctx, runtime); return;
    ctx->pc = 0x252ED0u;
}
