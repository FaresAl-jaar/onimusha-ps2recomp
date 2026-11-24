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

// Function: sub_0020AC60
// Address: 0x20ac60 - 0x20ac7c
void sub_0020AC60_0x20ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC60_0x20ac60");
#endif

    ctx->pc = 0x20ac60u;

    // 0x20ac60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ac64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20ac64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ac6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ac74: 0x8082b20  j           func_20AC80
    ctx->pc = 0x20AC74u;
    ctx->pc = 0x20AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC74u;
    // 0x20ac78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC80u;
    sub_0020AC80_0x20ac80(rdram, ctx, runtime); return;
    ctx->pc = 0x20AC7Cu;
}
