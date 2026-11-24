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

// Function: sub_00167450
// Address: 0x167450 - 0x16745c
void sub_00167450_0x167450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167450_0x167450");
#endif

    ctx->pc = 0x167450u;

    // 0x167450: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x167450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x167454: 0x80a82b0  j           func_2A0AC0
    ctx->pc = 0x167454u;
    ctx->pc = 0x167458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167454u;
    // 0x167458: 0xac800154  sw          $zero, 0x154($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0AC0u;
    sub_002A0AC0_0x2a0ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x16745Cu;
}
