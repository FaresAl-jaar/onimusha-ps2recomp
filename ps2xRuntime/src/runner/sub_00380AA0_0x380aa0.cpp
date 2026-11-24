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

// Function: sub_00380AA0
// Address: 0x380aa0 - 0x380ac4
void sub_00380AA0_0x380aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380AA0_0x380aa0");
#endif

    ctx->pc = 0x380aa0u;

    // 0x380aa0: 0x90822b78  lbu         $v0, 0x2B78($a0)
    ctx->pc = 0x380aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11128)));
    // 0x380aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380aa8: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x380aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x380aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ab0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x380ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x380ab4: 0xa0822b78  sb          $v0, 0x2B78($a0)
    ctx->pc = 0x380ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x380ab8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x380ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x380abc: 0x8052214  j           func_148850
    ctx->pc = 0x380ABCu;
    ctx->pc = 0x380AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380ABCu;
    // 0x380ac0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    sub_00148850_0x148850(rdram, ctx, runtime); return;
    ctx->pc = 0x380AC4u;
}
