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

// Function: sub_0025E400
// Address: 0x25e400 - 0x25e410
void sub_0025E400_0x25e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E400_0x25e400");
#endif

    ctx->pc = 0x25e400u;

    // 0x25e400: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e404: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x25e404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x25e408: 0x80c0cb8  j           func_3032E0
    ctx->pc = 0x25E408u;
    ctx->pc = 0x25E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E408u;
    // 0x25e40c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    sub_003032E0_0x3032e0(rdram, ctx, runtime); return;
    ctx->pc = 0x25E410u;
}
