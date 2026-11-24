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

// Function: sub_001318A0
// Address: 0x1318a0 - 0x1318d8
void sub_001318A0_0x1318a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001318A0_0x1318a0");
#endif

    ctx->pc = 0x1318a0u;

    // 0x1318a0: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x1318a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1318a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1318a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1318a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1318ac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1318b0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1318b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1318b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1318b8: 0xa0a30032  sb          $v1, 0x32($a1)
    ctx->pc = 0x1318b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x1318bc: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1318c0: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x1318c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x1318c4: 0xa0a20033  sb          $v0, 0x33($a1)
    ctx->pc = 0x1318c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x1318c8: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x1318c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1318cc: 0x90a50030  lbu         $a1, 0x30($a1)
    ctx->pc = 0x1318ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1318d0: 0x8049590  j           func_125640
    ctx->pc = 0x1318D0u;
    ctx->pc = 0x1318D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318D0u;
    // 0x1318d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x1318D8u;
}
