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

// Function: sub_0025B250
// Address: 0x25b250 - 0x25b268
void sub_0025B250_0x25b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B250_0x25b250");
#endif

    ctx->pc = 0x25b250u;

    // 0x25b250: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25b250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b254: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25b254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b258: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x25b25c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b260: 0x80742f0  j           func_1D0BC0
    ctx->pc = 0x25B260u;
    ctx->pc = 0x25B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B260u;
    // 0x25b264: 0x2484cff0  addiu       $a0, $a0, -0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BC0u;
    sub_001D0BC0_0x1d0bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x25B268u;
}
