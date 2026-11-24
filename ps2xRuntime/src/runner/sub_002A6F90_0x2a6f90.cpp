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

// Function: sub_002A6F90
// Address: 0x2a6f90 - 0x2a6fb0
void sub_002A6F90_0x2a6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6F90_0x2a6f90");
#endif

    ctx->pc = 0x2a6f90u;

    // 0x2a6f90: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2a6f90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f94: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a6f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6f98: 0x8f888128  lw          $t0, -0x7ED8($gp)
    ctx->pc = 0x2a6f98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x2a6f9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a6f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fa0: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2a6fa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6fa4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6fa8: 0x80bfb28  j           func_2FECA0
    ctx->pc = 0x2A6FA8u;
    ctx->pc = 0x2A6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6FA8u;
    // 0x2a6fac: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FECA0u;
    sub_002FECA0_0x2feca0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6FB0u;
}
