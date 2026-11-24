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

// Function: sub_0033D0A0
// Address: 0x33d0a0 - 0x33d0d0
void sub_0033D0A0_0x33d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D0A0_0x33d0a0");
#endif

    ctx->pc = 0x33d0a0u;

    // 0x33d0a0: 0x8c8706ac  lw          $a3, 0x6AC($a0)
    ctx->pc = 0x33d0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x33d0a4: 0x240300e2  addiu       $v1, $zero, 0xE2
    ctx->pc = 0x33d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x33d0a8: 0x34e70040  ori         $a3, $a3, 0x40
    ctx->pc = 0x33d0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x33d0ac: 0xac8706ac  sw          $a3, 0x6AC($a0)
    ctx->pc = 0x33d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 7));
    // 0x33d0b0: 0x8c8706b4  lw          $a3, 0x6B4($a0)
    ctx->pc = 0x33d0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x33d0b4: 0x34e70040  ori         $a3, $a3, 0x40
    ctx->pc = 0x33d0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x33d0b8: 0xac8706b4  sw          $a3, 0x6B4($a0)
    ctx->pc = 0x33d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 7));
    // 0x33d0bc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x33d0bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d0c0: 0x7c850890  sq          $a1, 0x890($a0)
    ctx->pc = 0x33d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 5));
    // 0x33d0c4: 0xac8608c8  sw          $a2, 0x8C8($a0)
    ctx->pc = 0x33d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2248), GPR_U32(ctx, 6));
    // 0x33d0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0C8u;
        // 0x33d0cc: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D0D0u;
}
