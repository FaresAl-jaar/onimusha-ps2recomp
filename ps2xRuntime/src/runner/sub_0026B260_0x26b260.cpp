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

// Function: sub_0026B260
// Address: 0x26b260 - 0x26b270
void sub_0026B260_0x26b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B260_0x26b260");
#endif

    ctx->pc = 0x26b260u;

    // 0x26b260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b264: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x26b268: 0x809aca0  j           func_26B280
    ctx->pc = 0x26B268u;
    ctx->pc = 0x26B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B268u;
    // 0x26b26c: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B280u;
    sub_0026B280_0x26b280(rdram, ctx, runtime); return;
    ctx->pc = 0x26B270u;
}
