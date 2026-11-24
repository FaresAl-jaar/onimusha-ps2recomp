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

// Function: sub_0020C9D8
// Address: 0x20c9d8 - 0x20c9ec
void sub_0020C9D8_0x20c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C9D8_0x20c9d8");
#endif

    ctx->pc = 0x20c9d8u;

    // 0x20c9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c9e4: 0x808dcc0  j           func_237300
    ctx->pc = 0x20C9E4u;
    ctx->pc = 0x20C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9E4u;
    // 0x20c9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237300u;
    sub_00237300_0x237300(rdram, ctx, runtime); return;
    ctx->pc = 0x20C9ECu;
}
