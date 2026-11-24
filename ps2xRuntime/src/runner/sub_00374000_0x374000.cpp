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

// Function: sub_00374000
// Address: 0x374000 - 0x374010
void sub_00374000_0x374000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374000_0x374000");
#endif

    ctx->pc = 0x374000u;

    // 0x374000: 0xa0802b24  sb          $zero, 0x2B24($a0)
    ctx->pc = 0x374000u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x374004: 0xa0802b27  sb          $zero, 0x2B27($a0)
    ctx->pc = 0x374004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11047), (uint8_t)GPR_U32(ctx, 0));
    // 0x374008: 0x80a4a1c  j           func_292870
    ctx->pc = 0x374008u;
    ctx->pc = 0x37400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374008u;
    // 0x37400c: 0xa08029d1  sb          $zero, 0x29D1($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x374010u;
}
