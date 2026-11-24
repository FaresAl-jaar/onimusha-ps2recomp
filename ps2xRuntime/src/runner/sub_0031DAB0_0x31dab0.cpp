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

// Function: sub_0031DAB0
// Address: 0x31dab0 - 0x31dac4
void sub_0031DAB0_0x31dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DAB0_0x31dab0");
#endif

    ctx->pc = 0x31dab0u;

    // 0x31dab0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31dab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31dab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dab8: 0x2484e7d0  addiu       $a0, $a0, -0x1830
    ctx->pc = 0x31dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    // 0x31dabc: 0x80c74c8  j           func_31D320
    ctx->pc = 0x31DABCu;
    ctx->pc = 0x31DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DABCu;
    // 0x31dac0: 0xaf808b34  sw          $zero, -0x74CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D320u;
    sub_0031D320_0x31d320(rdram, ctx, runtime); return;
    ctx->pc = 0x31DAC4u;
}
