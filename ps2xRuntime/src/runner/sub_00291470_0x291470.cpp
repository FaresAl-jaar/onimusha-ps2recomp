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

// Function: sub_00291470
// Address: 0x291470 - 0x2914a8
void sub_00291470_0x291470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291470_0x291470");
#endif

    switch (ctx->pc) {
        case 0x291470u: goto label_291470;
        case 0x291474u: goto label_291474;
        case 0x291478u: goto label_291478;
        case 0x29147cu: goto label_29147c;
        case 0x291480u: goto label_291480;
        case 0x291484u: goto label_291484;
        case 0x291488u: goto label_291488;
        case 0x29148cu: goto label_29148c;
        case 0x291490u: goto label_291490;
        case 0x291494u: goto label_291494;
        case 0x291498u: goto label_291498;
        case 0x29149cu: goto label_29149c;
        case 0x2914a0u: goto label_2914a0;
        case 0x2914a4u: goto label_2914a4;
        default: break;
    }

    ctx->pc = 0x291470u;

label_291470:
    // 0x291470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291474:
    // 0x291474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291478:
    // 0x291478: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_29147c:
    // 0x29147c: 0xdf8281d8  ld          $v0, -0x7E28($gp)
    ctx->pc = 0x29147cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935000)));
label_291480:
    // 0x291480: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x291480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_291484:
    // 0x291484: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x291484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_291488:
    // 0x291488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29148c:
    // 0x29148c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_291490:
    // 0x291490: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_291494:
    // 0x291494: 0x40f809  jalr        $v0
label_291498:
    if (ctx->pc == 0x291498u) {
        ctx->pc = 0x29149Cu;
        goto label_29149c;
    }
    ctx->pc = 0x291494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29149Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291494u, 0x29149Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29149Cu;
label_29149c:
    // 0x29149c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2914a0:
    // 0x2914a0: 0x3e00008  jr          $ra
label_2914a4:
    if (ctx->pc == 0x2914A4u) {
        ctx->pc = 0x2914A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914A0u;
        // 0x2914a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914A8u;
        goto label_fallthrough_0x2914a0;
    }
    ctx->pc = 0x2914A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2914A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914A0u;
        // 0x2914a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2914A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2914a0:
    ctx->pc = 0x2914A8u;
}
