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

// Function: sub_0026B970
// Address: 0x26b970 - 0x26b988
void sub_0026B970_0x26b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B970_0x26b970");
#endif

    ctx->pc = 0x26b970u;

    // 0x26b970: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26b970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b974: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26b974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b978: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26b978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b97c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26b97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b980: 0x80a2a8c  j           func_28AA30
    ctx->pc = 0x26B980u;
    ctx->pc = 0x26B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B980u;
    // 0x26b984: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    sub_0028AA30_0x28aa30(rdram, ctx, runtime); return;
    ctx->pc = 0x26B988u;
}
