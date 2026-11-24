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

// Function: sub_002347D8
// Address: 0x2347d8 - 0x2347ec
void sub_002347D8_0x2347d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002347D8_0x2347d8");
#endif

    ctx->pc = 0x2347d8u;

    // 0x2347d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2347d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2347dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2347dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2347e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2347e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2347e4: 0x8094ba8  j           func_252EA0
    ctx->pc = 0x2347E4u;
    ctx->pc = 0x2347E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347E4u;
    // 0x2347e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    sub_00252EA0_0x252ea0(rdram, ctx, runtime); return;
    ctx->pc = 0x2347ECu;
}
