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

// Function: sub_0017A320
// Address: 0x17a320 - 0x17a340
void sub_0017A320_0x17a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A320_0x17a320");
#endif

    ctx->pc = 0x17a320u;

    // 0x17a320: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a324: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x17a328: 0xac266c4c  sw          $a2, 0x6C4C($at)
    ctx->pc = 0x17a328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7E6C4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C4Cu, _value); } while (0);
    // 0x17a32c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a330: 0xac256c48  sw          $a1, 0x6C48($at)
    ctx->pc = 0x17a330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x17a334: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a338: 0x8054704  j           func_151C10
    ctx->pc = 0x17A338u;
    ctx->pc = 0x17A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A338u;
    // 0x17a33c: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    sub_00151C10_0x151c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17A340u;
}
