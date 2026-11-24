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

// Function: sub_00685D20
// Address: 0x685d20 - 0x685d40
void sub_00685D20_0x685d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685D20_0x685d20");
#endif

    ctx->pc = 0x685d20u;

    // 0x685d20: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x685d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x685d24: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x685d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x685d28: 0x24841550  addiu       $a0, $a0, 0x1550
    ctx->pc = 0x685d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5456));
    // 0x685d2c: 0x24a52e70  addiu       $a1, $a1, 0x2E70
    ctx->pc = 0x685d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11888));
    // 0x685d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x685d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685d34: 0x240714c0  addiu       $a3, $zero, 0x14C0
    ctx->pc = 0x685d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
    // 0x685d38: 0x80400fc  j           func_1003F0
    ctx->pc = 0x685D38u;
    ctx->pc = 0x685D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685D38u;
    // 0x685d3c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    sub_001003F0_0x1003f0(rdram, ctx, runtime); return;
    ctx->pc = 0x685D40u;
}
