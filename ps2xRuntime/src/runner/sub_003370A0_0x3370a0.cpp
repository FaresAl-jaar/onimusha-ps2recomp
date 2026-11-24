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

// Function: sub_003370A0
// Address: 0x3370a0 - 0x3370d0
void sub_003370A0_0x3370a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003370A0_0x3370a0");
#endif

    ctx->pc = 0x3370a0u;

    // 0x3370a0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3370a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3370a4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3370a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3370a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3370a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3370ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3370ACu;
    {
        const bool branch_taken_0x3370ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370ac) {
            ctx->pc = 0x3370C0u;
            goto label_3370c0;
        }
    }
    ctx->pc = 0x3370B4u;
    // 0x3370b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3370B4u;
    {
        const bool branch_taken_0x3370b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3370B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370B4u;
        // 0x3370b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370b4) {
            ctx->pc = 0x3370C8u;
            goto label_3370c8;
        }
    }
    ctx->pc = 0x3370BCu;
    // 0x3370bc: 0x0  nop
    ctx->pc = 0x3370bcu;
    // NOP
label_3370c0:
    // 0x3370c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3370c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3370c4: 0x0  nop
    ctx->pc = 0x3370c4u;
    // NOP
label_3370c8:
    // 0x3370c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3370C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3370C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3370D0u;
}
