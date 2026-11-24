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

// Function: sub_00266310
// Address: 0x266310 - 0x266354
void sub_00266310_0x266310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266310_0x266310");
#endif

    ctx->pc = 0x266310u;

    // 0x266310: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x266314: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x266314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x266318: 0xa020f7c0  sb          $zero, -0x840($at)
    ctx->pc = 0x266318u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7C0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF7C0u, _value); } while (0);
    // 0x26631c: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x26631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x266320: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x266324: 0xa020f7f0  sb          $zero, -0x810($at)
    ctx->pc = 0x266324u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8BF7F0u, _value); } while (0);
    // 0x266328: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26632c: 0xac23f7d0  sw          $v1, -0x830($at)
    ctx->pc = 0x26632cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8BF7D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF7D0u, _value); } while (0);
    // 0x266330: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x266334: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x266338: 0x2463f7c0  addiu       $v1, $v1, -0x840
    ctx->pc = 0x266338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965184));
    // 0x26633c: 0xac23f804  sw          $v1, -0x7FC($at)
    ctx->pc = 0x26633cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8BF804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF804u, _value); } while (0);
    // 0x266340: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x266344: 0xac20f7d4  sw          $zero, -0x82C($at)
    ctx->pc = 0x266344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8BF7D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF7D4u, _value); } while (0);
    // 0x266348: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26634c: 0x3e00008  jr          $ra
    ctx->pc = 0x26634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26634Cu;
        // 0x266350: 0xac20f800  sw          $zero, -0x800($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266354u;
}
