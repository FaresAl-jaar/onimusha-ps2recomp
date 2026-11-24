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

// Function: sub_0010E958
// Address: 0x10e958 - 0x10e96c
void sub_0010E958_0x10e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E958_0x10e958");
#endif

    ctx->pc = 0x10e958u;

    // 0x10e958: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10e95c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10e960: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10e960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10e964: 0x8043a0c  j           func_10E830
    ctx->pc = 0x10E964u;
    ctx->pc = 0x10E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E964u;
    // 0x10e968: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E830u;
    sub_0010E830_0x10e830(rdram, ctx, runtime); return;
    ctx->pc = 0x10E96Cu;
}
