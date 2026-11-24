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

// Function: sub_00211788
// Address: 0x211788 - 0x2117b4
void sub_00211788_0x211788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211788_0x211788");
#endif

    ctx->pc = 0x211788u;

    // 0x211788: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21178c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x21178cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x211790: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x211794: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x211794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x211798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x211798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21179c: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x21179cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2117a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2117a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2117a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2117a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2117a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2117ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2117ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117ACu;
        // 0x2117b0: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2117B4u;
}
