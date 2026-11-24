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

// Function: sub_0026B580
// Address: 0x26b580 - 0x26b5a8
void sub_0026B580_0x26b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B580_0x26b580");
#endif

    ctx->pc = 0x26b580u;

    // 0x26b580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b584: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26b584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26b588: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x26b588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b58c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x26b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b590: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x26b590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x26b594: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x26b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x26b598: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x26b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x26b59c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26b5a0: 0x80550b0  j           func_1542C0
    ctx->pc = 0x26B5A0u;
    ctx->pc = 0x26B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B5A0u;
    // 0x26b5a4: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    sub_001542C0_0x1542c0(rdram, ctx, runtime); return;
    ctx->pc = 0x26B5A8u;
}
