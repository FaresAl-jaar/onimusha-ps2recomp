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

// Function: sub_0018FBF0
// Address: 0x18fbf0 - 0x18fc20
void sub_0018FBF0_0x18fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FBF0_0x18fbf0");
#endif

    ctx->pc = 0x18fbf0u;

    // 0x18fbf0: 0xaf8586f0  sw          $a1, -0x7910($gp)
    ctx->pc = 0x18fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U32(ctx, 5));
    // 0x18fbf4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fbf8: 0xaf8086ec  sw          $zero, -0x7914($gp)
    ctx->pc = 0x18fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936300), GPR_U32(ctx, 0));
    // 0x18fbfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fc00: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x18fc00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18fc04: 0x7c253040  sq          $a1, 0x3040($at)
    ctx->pc = 0x18fc04u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x843040u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x843040u, _value); } while (0);
    // 0x18fc08: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x18fc08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18fc0c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18fc10: 0x7c253050  sq          $a1, 0x3050($at)
    ctx->pc = 0x18fc10u;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x843050u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x843050u, _value); } while (0);
    // 0x18fc14: 0xaf8486e4  sw          $a0, -0x791C($gp)
    ctx->pc = 0x18fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 4));
    // 0x18fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC18u;
        // 0x18fc1c: 0xa3838c88  sb          $v1, -0x7378($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC20u;
}
