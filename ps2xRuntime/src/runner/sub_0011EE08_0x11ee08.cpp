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

// Function: sub_0011EE08
// Address: 0x11ee08 - 0x11ee1c
void sub_0011EE08_0x11ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EE08_0x11ee08");
#endif

    ctx->pc = 0x11ee08u;

    // 0x11ee08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ee0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ee10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ee14: 0x8046bb0  j           func_11AEC0
    ctx->pc = 0x11EE14u;
    ctx->pc = 0x11EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE14u;
    // 0x11ee18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AEC0u;
    sub_0011AEC0_0x11aec0(rdram, ctx, runtime); return;
    ctx->pc = 0x11EE1Cu;
}
