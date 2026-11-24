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

// Function: sub_0015AFE0
// Address: 0x15afe0 - 0x15aff0
void sub_0015AFE0_0x15afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AFE0_0x15afe0");
#endif

    ctx->pc = 0x15afe0u;

    // 0x15afe0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afe4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x15afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x15afe8: 0x8041442  j           func_105108
    ctx->pc = 0x15AFE8u;
    ctx->pc = 0x15AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFE8u;
    // 0x15afec: 0x24a5adb0  addiu       $a1, $a1, -0x5250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    sub_00105108_0x105108(rdram, ctx, runtime); return;
    ctx->pc = 0x15AFF0u;
}
