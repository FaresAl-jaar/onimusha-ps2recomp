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

// Function: sub_0033AC90
// Address: 0x33ac90 - 0x33acb8
void sub_0033AC90_0x33ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AC90_0x33ac90");
#endif

    ctx->pc = 0x33ac90u;

    // 0x33ac90: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33ac94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33ac98: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33ac9c: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x33ac9cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x33aca0: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33aca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33aca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aca8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x33aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33acac: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x33acacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33acb0: 0x80c9a00  j           func_326800
    ctx->pc = 0x33ACB0u;
    ctx->pc = 0x33ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACB0u;
    // 0x33acb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    sub_00326800_0x326800(rdram, ctx, runtime); return;
    ctx->pc = 0x33ACB8u;
}
