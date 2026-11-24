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

// Function: sub_00338FB0
// Address: 0x338fb0 - 0x338fd8
void sub_00338FB0_0x338fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338FB0_0x338fb0");
#endif

    ctx->pc = 0x338fb0u;

    // 0x338fb0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338fb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338fb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x338fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338fc0: 0xa086000b  sb          $a2, 0xB($a0)
    ctx->pc = 0x338fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 6));
    // 0x338fc4: 0x46180a  movz        $v1, $v0, $a2
    ctx->pc = 0x338fc4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x338fc8: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x338fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x338fcc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x338fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338fd0: 0x808ee50  j           func_23B940
    ctx->pc = 0x338FD0u;
    ctx->pc = 0x338FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FD0u;
    // 0x338fd4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B940u;
    sub_0023B940_0x23b940(rdram, ctx, runtime); return;
    ctx->pc = 0x338FD8u;
}
