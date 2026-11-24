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

// Function: sub_002916F0
// Address: 0x2916f0 - 0x291728
void sub_002916F0_0x2916f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002916F0_0x2916f0");
#endif

    switch (ctx->pc) {
        case 0x2916f0u: goto label_2916f0;
        case 0x2916f4u: goto label_2916f4;
        case 0x2916f8u: goto label_2916f8;
        case 0x2916fcu: goto label_2916fc;
        case 0x291700u: goto label_291700;
        case 0x291704u: goto label_291704;
        case 0x291708u: goto label_291708;
        case 0x29170cu: goto label_29170c;
        case 0x291710u: goto label_291710;
        case 0x291714u: goto label_291714;
        case 0x291718u: goto label_291718;
        case 0x29171cu: goto label_29171c;
        case 0x291720u: goto label_291720;
        case 0x291724u: goto label_291724;
        default: break;
    }

    ctx->pc = 0x2916f0u;

label_2916f0:
    // 0x2916f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2916f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2916f4:
    // 0x2916f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2916f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2916f8:
    // 0x2916f8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2916fc:
    // 0x2916fc: 0xdf8281e8  ld          $v0, -0x7E18($gp)
    ctx->pc = 0x2916fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935016)));
label_291700:
    // 0x291700: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x291700u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_291704:
    // 0x291704: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x291704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_291708:
    // 0x291708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29170c:
    // 0x29170c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_291710:
    // 0x291710: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x291710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_291714:
    // 0x291714: 0x40f809  jalr        $v0
label_291718:
    if (ctx->pc == 0x291718u) {
        ctx->pc = 0x29171Cu;
        goto label_29171c;
    }
    ctx->pc = 0x291714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29171Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291714u, 0x29171Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29171Cu;
label_29171c:
    // 0x29171c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291720:
    // 0x291720: 0x3e00008  jr          $ra
label_291724:
    if (ctx->pc == 0x291724u) {
        ctx->pc = 0x291724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291720u;
        // 0x291724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291728u;
        goto label_fallthrough_0x291720;
    }
    ctx->pc = 0x291720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291720u;
        // 0x291724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291720:
    ctx->pc = 0x291728u;
}
