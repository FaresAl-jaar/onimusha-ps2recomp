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

// Function: sub_0017D160
// Address: 0x17d160 - 0x17d16c
void sub_0017D160_0x17d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D160_0x17d160");
#endif

    ctx->pc = 0x17d160u;

    // 0x17d160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d164: 0x80a82b0  j           func_2A0AC0
    ctx->pc = 0x17D164u;
    ctx->pc = 0x17D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D164u;
    // 0x17d168: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0AC0u;
    sub_002A0AC0_0x2a0ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D16Cu;
}
