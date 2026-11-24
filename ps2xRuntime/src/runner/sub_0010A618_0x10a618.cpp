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

// Function: sub_0010A618
// Address: 0x10a618 - 0x10a624
void sub_0010A618_0x10a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A618_0x10a618");
#endif

    ctx->pc = 0x10a618u;

    // 0x10a618: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10a61c: 0x8043536  j           func_10D4D8
    ctx->pc = 0x10A61Cu;
    ctx->pc = 0x10A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A61Cu;
    // 0x10a620: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    sub_0010D4D8_0x10d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x10A624u;
}
