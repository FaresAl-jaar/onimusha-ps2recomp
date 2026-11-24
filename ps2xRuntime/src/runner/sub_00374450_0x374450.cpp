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

// Function: sub_00374450
// Address: 0x374450 - 0x374460
void sub_00374450_0x374450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374450_0x374450");
#endif

    ctx->pc = 0x374450u;

    // 0x374450: 0xa0802b60  sb          $zero, 0x2B60($a0)
    ctx->pc = 0x374450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11104), (uint8_t)GPR_U32(ctx, 0));
    // 0x374454: 0xa0802b61  sb          $zero, 0x2B61($a0)
    ctx->pc = 0x374454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11105), (uint8_t)GPR_U32(ctx, 0));
    // 0x374458: 0x80a4a1c  j           func_292870
    ctx->pc = 0x374458u;
    ctx->pc = 0x37445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374458u;
    // 0x37445c: 0xa08029d1  sb          $zero, 0x29D1($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x374460u;
}
