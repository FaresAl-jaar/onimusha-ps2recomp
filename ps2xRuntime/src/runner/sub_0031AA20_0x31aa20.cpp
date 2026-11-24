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

// Function: sub_0031AA20
// Address: 0x31aa20 - 0x31aa6c
void sub_0031AA20_0x31aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AA20_0x31aa20");
#endif

    ctx->pc = 0x31aa20u;

    // 0x31aa20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31aa24: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x31aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x31aa28: 0x8c27ceb8  lw          $a3, -0x3148($at)
    ctx->pc = 0x31aa28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x31aa2c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x31aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31aa30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa34: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x31aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x31aa38: 0x30e70020  andi        $a3, $a3, 0x20
    ctx->pc = 0x31aa38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x31aa3c: 0x67300a  movz        $a2, $v1, $a3
    ctx->pc = 0x31aa3cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x31aa40: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x31aa40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31aa44: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x31aa44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x31aa48: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x31aa48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa4c: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x31aa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa50: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x31aa50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa54: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x31aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa58: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x31aa58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa5c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x31aa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x31aa60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x31aa64: 0x80c6e60  j           func_31B980
    ctx->pc = 0x31AA64u;
    ctx->pc = 0x31AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA64u;
    // 0x31aa68: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B980u;
    sub_0031B980_0x31b980(rdram, ctx, runtime); return;
    ctx->pc = 0x31AA6Cu;
}
