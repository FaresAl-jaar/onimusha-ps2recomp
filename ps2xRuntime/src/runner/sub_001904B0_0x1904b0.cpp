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

// Function: sub_001904B0
// Address: 0x1904b0 - 0x1904f8
void sub_001904B0_0x1904b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001904B0_0x1904b0");
#endif

    ctx->pc = 0x1904b0u;

    // 0x1904b0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1904b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1904b8: 0xac2030c4  sw          $zero, 0x30C4($at)
    ctx->pc = 0x1904b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8430C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C4u, _value); } while (0);
    // 0x1904bc: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x1904bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x1904c0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1904c4: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x1904c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x1904c8: 0xac2030c8  sw          $zero, 0x30C8($at)
    ctx->pc = 0x1904c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8430C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C8u, _value); } while (0);
    // 0x1904cc: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x1904ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x1904d0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1904d4: 0xac2330c0  sw          $v1, 0x30C0($at)
    ctx->pc = 0x1904d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8430C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430C0u, _value); } while (0);
    // 0x1904d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1904dc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x1904e0: 0xaf808714  sw          $zero, -0x78EC($gp)
    ctx->pc = 0x1904e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 0));
    // 0x1904e4: 0xa3838718  sb          $v1, -0x78E8($gp)
    ctx->pc = 0x1904e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936344), (uint8_t)GPR_U32(ctx, 3));
    // 0x1904e8: 0xac2030cc  sw          $zero, 0x30CC($at)
    ctx->pc = 0x1904e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8430CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8430CCu, _value); } while (0);
    // 0x1904ec: 0xaf808734  sw          $zero, -0x78CC($gp)
    ctx->pc = 0x1904ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 0));
    // 0x1904f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1904F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1904F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904F0u;
        // 0x1904f4: 0xaf808738  sw          $zero, -0x78C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1904F8u;
}
