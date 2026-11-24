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

// Function: sub_0011A070
// Address: 0x11a070 - 0x11a094
void sub_0011A070_0x11a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A070_0x11a070");
#endif

    ctx->pc = 0x11a070u;

    // 0x11a070: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11a070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11a074: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11a078: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11a07c: 0xac404168  sw          $zero, 0x4168($v0)
    ctx->pc = 0x11a07cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x404168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x404168u, _value); } while (0);
    // 0x11a080: 0xac60416c  sw          $zero, 0x416C($v1)
    ctx->pc = 0x11a080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40416Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40416Cu, _value); } while (0);
    // 0x11a084: 0x24843f48  addiu       $a0, $a0, 0x3F48
    ctx->pc = 0x11a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16200));
    // 0x11a088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a08c: 0x8049590  j           func_125640
    ctx->pc = 0x11A08Cu;
    ctx->pc = 0x11A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A08Cu;
    // 0x11a090: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x11A094u;
}
