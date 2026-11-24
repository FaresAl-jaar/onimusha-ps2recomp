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

// Function: sub_00272440
// Address: 0x272440 - 0x272468
void sub_00272440_0x272440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272440_0x272440");
#endif

    ctx->pc = 0x272440u;

    // 0x272440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272444: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x272448: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x272448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x27244c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x27244cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x272450: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x272450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x272454: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x272454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x272458: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x272458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x27245c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x27245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x272460: 0x80550b0  j           func_1542C0
    ctx->pc = 0x272460u;
    ctx->pc = 0x272464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272460u;
    // 0x272464: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    sub_001542C0_0x1542c0(rdram, ctx, runtime); return;
    ctx->pc = 0x272468u;
}
