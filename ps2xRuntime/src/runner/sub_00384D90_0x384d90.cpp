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

// Function: sub_00384D90
// Address: 0x384d90 - 0x384db4
void sub_00384D90_0x384d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384D90_0x384d90");
#endif

    ctx->pc = 0x384d90u;

    // 0x384d90: 0x8084002a  lb          $a0, 0x2A($a0)
    ctx->pc = 0x384d90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x384d94: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x384d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384d98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x384d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x384d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384da0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x384da0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x384da4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x384da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x384da8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x384da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x384dac: 0x80f0154  j           func_3C0550
    ctx->pc = 0x384DACu;
    ctx->pc = 0x384DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DACu;
    // 0x384db0: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    sub_003C0550_0x3c0550(rdram, ctx, runtime); return;
    ctx->pc = 0x384DB4u;
}
