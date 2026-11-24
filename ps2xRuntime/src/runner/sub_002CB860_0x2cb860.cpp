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

// Function: sub_002CB860
// Address: 0x2cb860 - 0x2cb8c8
void sub_002CB860_0x2cb860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB860_0x2cb860");
#endif

    ctx->pc = 0x2cb860u;

    // 0x2cb860: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb864: 0xa3808a38  sb          $zero, -0x75C8($gp)
    ctx->pc = 0x2cb864u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937144), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb868: 0xac206be0  sw          $zero, 0x6BE0($at)
    ctx->pc = 0x2cb868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BE0u, _value); } while (0);
    // 0x2cb86c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb870: 0xa3808a39  sb          $zero, -0x75C7($gp)
    ctx->pc = 0x2cb870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937145), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb874: 0xac206be4  sw          $zero, 0x6BE4($at)
    ctx->pc = 0x2cb874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BE4u, _value); } while (0);
    // 0x2cb878: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb87c: 0xa3808a3a  sb          $zero, -0x75C6($gp)
    ctx->pc = 0x2cb87cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937146), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb880: 0xac206be8  sw          $zero, 0x6BE8($at)
    ctx->pc = 0x2cb880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BE8u, _value); } while (0);
    // 0x2cb884: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb888: 0xa3808a3b  sb          $zero, -0x75C5($gp)
    ctx->pc = 0x2cb888u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937147), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb88c: 0xac206bec  sw          $zero, 0x6BEC($at)
    ctx->pc = 0x2cb88cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BECu, _value); } while (0);
    // 0x2cb890: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb894: 0xa3808a3c  sb          $zero, -0x75C4($gp)
    ctx->pc = 0x2cb894u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937148), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb898: 0xac206bf0  sw          $zero, 0x6BF0($at)
    ctx->pc = 0x2cb898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BF0u, _value); } while (0);
    // 0x2cb89c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb8a0: 0xa3808a3d  sb          $zero, -0x75C3($gp)
    ctx->pc = 0x2cb8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937149), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb8a4: 0xac206bf4  sw          $zero, 0x6BF4($at)
    ctx->pc = 0x2cb8a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BF4u, _value); } while (0);
    // 0x2cb8a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb8ac: 0xa3808a3e  sb          $zero, -0x75C2($gp)
    ctx->pc = 0x2cb8acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937150), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb8b0: 0xac206bf8  sw          $zero, 0x6BF8($at)
    ctx->pc = 0x2cb8b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BF8u, _value); } while (0);
    // 0x2cb8b4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb8b8: 0xa3808a3f  sb          $zero, -0x75C1($gp)
    ctx->pc = 0x2cb8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937151), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb8bc: 0xac206bfc  sw          $zero, 0x6BFC($at)
    ctx->pc = 0x2cb8bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6BFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6BFCu, _value); } while (0);
    // 0x2cb8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB8C0u;
        // 0x2cb8c4: 0xa3808a40  sb          $zero, -0x75C0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937152), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB8C8u;
}
