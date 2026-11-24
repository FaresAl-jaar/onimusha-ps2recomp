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

// Function: sub_00167460
// Address: 0x167460 - 0x167474
void sub_00167460_0x167460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167460_0x167460");
#endif

    ctx->pc = 0x167460u;

    // 0x167460: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x167460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167464: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x167464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167468: 0x8c45012c  lw          $a1, 0x12C($v0)
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x16746c: 0x805e480  j           func_179200
    ctx->pc = 0x16746Cu;
    ctx->pc = 0x167470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16746Cu;
    // 0x167470: 0x8c460130  lw          $a2, 0x130($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    sub_00179200_0x179200(rdram, ctx, runtime); return;
    ctx->pc = 0x167474u;
}
