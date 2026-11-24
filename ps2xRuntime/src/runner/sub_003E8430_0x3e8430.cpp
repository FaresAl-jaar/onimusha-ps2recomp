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

// Function: sub_003E8430
// Address: 0x3e8430 - 0x3e846c
void sub_003E8430_0x3e8430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8430_0x3e8430");
#endif

    ctx->pc = 0x3e8430u;

    // 0x3e8430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8434: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e8434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e8438: 0x8c25cee4  lw          $a1, -0x311C($at)
    ctx->pc = 0x3e8438u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x3e843c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x3e843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3e8440: 0x248465b0  addiu       $a0, $a0, 0x65B0
    ctx->pc = 0x3e8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    // 0x3e8444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8448: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x3e8448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x3e844c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3e844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3e8450: 0x5287e  dsrl32      $a1, $a1, 1
    ctx->pc = 0x3e8450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x3e8454: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e845c: 0xac25cee4  sw          $a1, -0x311C($at)
    ctx->pc = 0x3e845cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954724), GPR_U32(ctx, 5));
    // 0x3e8460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8464: 0x80fa0f8  j           func_3E83E0
    ctx->pc = 0x3E8464u;
    ctx->pc = 0x3E8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8464u;
    // 0x3e8468: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E83E0u;
    sub_003E83E0_0x3e83e0(rdram, ctx, runtime); return;
    ctx->pc = 0x3E846Cu;
}
