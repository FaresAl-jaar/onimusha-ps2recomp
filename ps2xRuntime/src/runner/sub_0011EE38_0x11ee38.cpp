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

// Function: sub_0011EE38
// Address: 0x11ee38 - 0x11ee4c
void sub_0011EE38_0x11ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EE38_0x11ee38");
#endif

    ctx->pc = 0x11ee38u;

    // 0x11ee38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ee3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ee40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ee40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ee44: 0x8046d08  j           func_11B420
    ctx->pc = 0x11EE44u;
    ctx->pc = 0x11EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE44u;
    // 0x11ee48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B420u;
    sub_0011B420_0x11b420(rdram, ctx, runtime); return;
    ctx->pc = 0x11EE4Cu;
}
