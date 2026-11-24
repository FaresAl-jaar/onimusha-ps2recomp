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

// Function: sub_00274670
// Address: 0x274670 - 0x2746ac
void sub_00274670_0x274670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274670_0x274670");
#endif

    switch (ctx->pc) {
        case 0x274688u: goto label_274688;
        case 0x27469cu: goto label_27469c;
        default: break;
    }

    ctx->pc = 0x274670u;

    // 0x274670: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x274670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x274674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274678: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x27467c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274680: 0xc09d1bc  jal         func_2746F0
    ctx->pc = 0x274680u;
    SET_GPR_U32(ctx, 31, 0x274688u);
    ctx->pc = 0x274684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274680u;
    // 0x274684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2746F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2746F0u, 0x274680u, 0x274688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274688u;
label_274688:
    // 0x274688: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27468c: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x274690: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x274690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274694: 0xc09d158  jal         func_274560
    ctx->pc = 0x274694u;
    SET_GPR_U32(ctx, 31, 0x27469Cu);
    ctx->pc = 0x274698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274694u;
    // 0x274698: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274560u, 0x274694u, 0x27469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27469Cu;
label_27469c:
    // 0x27469c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2746a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2746a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2746a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2746A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2746A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A4u;
        // 0x2746a8: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2746ACu;
}
