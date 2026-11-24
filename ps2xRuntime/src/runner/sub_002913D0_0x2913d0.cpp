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

// Function: sub_002913D0
// Address: 0x2913d0 - 0x291408
void sub_002913D0_0x2913d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002913D0_0x2913d0");
#endif

    switch (ctx->pc) {
        case 0x2913d0u: goto label_2913d0;
        case 0x2913d4u: goto label_2913d4;
        case 0x2913d8u: goto label_2913d8;
        case 0x2913dcu: goto label_2913dc;
        case 0x2913e0u: goto label_2913e0;
        case 0x2913e4u: goto label_2913e4;
        case 0x2913e8u: goto label_2913e8;
        case 0x2913ecu: goto label_2913ec;
        case 0x2913f0u: goto label_2913f0;
        case 0x2913f4u: goto label_2913f4;
        case 0x2913f8u: goto label_2913f8;
        case 0x2913fcu: goto label_2913fc;
        case 0x291400u: goto label_291400;
        case 0x291404u: goto label_291404;
        default: break;
    }

    ctx->pc = 0x2913d0u;

label_2913d0:
    // 0x2913d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2913d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2913d4:
    // 0x2913d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2913d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2913d8:
    // 0x2913d8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2913d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2913dc:
    // 0x2913dc: 0xdf8281d0  ld          $v0, -0x7E30($gp)
    ctx->pc = 0x2913dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_2913e0:
    // 0x2913e0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2913e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2913e4:
    // 0x2913e4: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x2913e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_2913e8:
    // 0x2913e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2913e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2913ec:
    // 0x2913ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2913ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2913f0:
    // 0x2913f0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2913f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2913f4:
    // 0x2913f4: 0x40f809  jalr        $v0
label_2913f8:
    if (ctx->pc == 0x2913F8u) {
        ctx->pc = 0x2913FCu;
        goto label_2913fc;
    }
    ctx->pc = 0x2913F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2913FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2913F4u, 0x2913FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2913FCu;
label_2913fc:
    // 0x2913fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2913fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291400:
    // 0x291400: 0x3e00008  jr          $ra
label_291404:
    if (ctx->pc == 0x291404u) {
        ctx->pc = 0x291404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291400u;
        // 0x291404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291408u;
        goto label_fallthrough_0x291400;
    }
    ctx->pc = 0x291400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291400u;
        // 0x291404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291400:
    ctx->pc = 0x291408u;
}
