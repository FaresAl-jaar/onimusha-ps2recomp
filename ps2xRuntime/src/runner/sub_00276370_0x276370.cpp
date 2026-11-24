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

// Function: sub_00276370
// Address: 0x276370 - 0x2763b0
void sub_00276370_0x276370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276370_0x276370");
#endif

    ctx->pc = 0x276370u;

    // 0x276370: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x276370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x276374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x276374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x276378: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x276378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x27637c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x276380: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x276380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x276384: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x276384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x276388: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x276388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x27638c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27638cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x276390: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x276390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x276394: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x276394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x276398: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x276398u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x27639c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x27639cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2763a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2763a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2763a4: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x2763a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x2763a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2763A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2763ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763A8u;
        // 0x2763ac: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2763A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2763B0u;
}
