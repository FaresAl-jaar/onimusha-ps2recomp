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

// Function: sub_003B5D30
// Address: 0x3b5d30 - 0x3b5d4c
void sub_003B5D30_0x3b5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5D30_0x3b5d30");
#endif

    ctx->pc = 0x3b5d30u;

    // 0x3b5d30: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3b5d30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b5d34: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x3b5d34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b5d38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b5d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d3c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3b5d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d40: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3b5d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5d44: 0x80ed754  j           func_3B5D50
    ctx->pc = 0x3B5D44u;
    ctx->pc = 0x3B5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5D44u;
    // 0x3b5d48: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D50u;
    sub_003B5D50_0x3b5d50(rdram, ctx, runtime); return;
    ctx->pc = 0x3B5D4Cu;
}
