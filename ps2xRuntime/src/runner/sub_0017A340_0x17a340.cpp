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

// Function: sub_0017A340
// Address: 0x17a340 - 0x17a360
void sub_0017A340_0x17a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A340_0x17a340");
#endif

    ctx->pc = 0x17a340u;

    // 0x17a340: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a344: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x17a344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x17a348: 0xac266c4c  sw          $a2, 0x6C4C($at)
    ctx->pc = 0x17a348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E6C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C4Cu, _value); } while (0);
    // 0x17a34c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a350: 0xac256c48  sw          $a1, 0x6C48($at)
    ctx->pc = 0x17a350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x17a354: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a358: 0x8054704  j           func_151C10
    ctx->pc = 0x17A358u;
    ctx->pc = 0x17A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A358u;
    // 0x17a35c: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    sub_00151C10_0x151c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17A360u;
}
