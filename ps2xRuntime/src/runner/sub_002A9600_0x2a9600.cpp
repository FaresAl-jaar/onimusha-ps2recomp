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

// Function: sub_002A9600
// Address: 0x2a9600 - 0x2a9618
void sub_002A9600_0x2a9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9600_0x2a9600");
#endif

    ctx->pc = 0x2a9600u;

    // 0x2a9600: 0x8d090190  lw          $t1, 0x190($t0)
    ctx->pc = 0x2a9600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 400)));
    // 0x2a9604: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a9604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9608: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a9608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a960c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9610: 0x809c180  j           func_270600
    ctx->pc = 0x2A9610u;
    ctx->pc = 0x2A9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9610u;
    // 0x2a9614: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270600u;
    sub_00270600_0x270600(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9618u;
}
