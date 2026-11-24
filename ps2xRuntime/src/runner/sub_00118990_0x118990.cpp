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

// Function: sub_00118990
// Address: 0x118990 - 0x1189a0
void sub_00118990_0x118990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118990_0x118990");
#endif

    ctx->pc = 0x118990u;

    // 0x118990: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118994: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x118994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x118998: 0x8046244  j           func_118910
    ctx->pc = 0x118998u;
    ctx->pc = 0x11899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118998u;
    // 0x11899c: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118910u;
    sub_00118910_0x118910(rdram, ctx, runtime); return;
    ctx->pc = 0x1189A0u;
}
