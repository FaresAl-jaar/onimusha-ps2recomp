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

// Function: sub_00380AD0
// Address: 0x380ad0 - 0x380ae8
void sub_00380AD0_0x380ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380AD0_0x380ad0");
#endif

    ctx->pc = 0x380ad0u;

    // 0x380ad0: 0x90822b78  lbu         $v0, 0x2B78($a0)
    ctx->pc = 0x380ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11128)));
    // 0x380ad4: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x380ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x380ad8: 0xa0822b78  sb          $v0, 0x2B78($a0)
    ctx->pc = 0x380ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x380adc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x380adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x380ae0: 0x8052260  j           func_148980
    ctx->pc = 0x380AE0u;
    ctx->pc = 0x380AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380AE0u;
    // 0x380ae4: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    sub_00148980_0x148980(rdram, ctx, runtime); return;
    ctx->pc = 0x380AE8u;
}
