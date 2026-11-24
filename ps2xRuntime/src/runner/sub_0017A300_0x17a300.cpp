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

// Function: sub_0017A300
// Address: 0x17a300 - 0x17a320
void sub_0017A300_0x17a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A300_0x17a300");
#endif

    ctx->pc = 0x17a300u;

    // 0x17a300: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a304: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x17a308: 0xac266c4c  sw          $a2, 0x6C4C($at)
    ctx->pc = 0x17a308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E6C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C4Cu, _value); } while (0);
    // 0x17a30c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a310: 0xac256c48  sw          $a1, 0x6C48($at)
    ctx->pc = 0x17a310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x17a314: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a318: 0x8054738  j           func_151CE0
    ctx->pc = 0x17A318u;
    ctx->pc = 0x17A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A318u;
    // 0x17a31c: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    sub_00151CE0_0x151ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x17A320u;
}
