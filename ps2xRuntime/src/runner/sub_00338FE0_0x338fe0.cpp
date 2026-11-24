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

// Function: sub_00338FE0
// Address: 0x338fe0 - 0x338ff8
void sub_00338FE0_0x338fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338FE0_0x338fe0");
#endif

    ctx->pc = 0x338fe0u;

    // 0x338fe0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x338fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338fe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x338fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x338fe8: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x338fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x338fec: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x338fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x338ff0: 0x80ce3ec  j           func_338FB0
    ctx->pc = 0x338FF0u;
    ctx->pc = 0x338FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FF0u;
    // 0x338ff4: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FB0u;
    sub_00338FB0_0x338fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x338FF8u;
}
