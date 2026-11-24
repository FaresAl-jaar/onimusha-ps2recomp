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

// Function: sub_00291760
// Address: 0x291760 - 0x291798
void sub_00291760_0x291760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291760_0x291760");
#endif

    switch (ctx->pc) {
        case 0x291760u: goto label_291760;
        case 0x291764u: goto label_291764;
        case 0x291768u: goto label_291768;
        case 0x29176cu: goto label_29176c;
        case 0x291770u: goto label_291770;
        case 0x291774u: goto label_291774;
        case 0x291778u: goto label_291778;
        case 0x29177cu: goto label_29177c;
        case 0x291780u: goto label_291780;
        case 0x291784u: goto label_291784;
        case 0x291788u: goto label_291788;
        case 0x29178cu: goto label_29178c;
        case 0x291790u: goto label_291790;
        case 0x291794u: goto label_291794;
        default: break;
    }

    ctx->pc = 0x291760u;

label_291760:
    // 0x291760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291764:
    // 0x291764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291768:
    // 0x291768: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x291768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_29176c:
    // 0x29176c: 0xdf8281f0  ld          $v0, -0x7E10($gp)
    ctx->pc = 0x29176cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935024)));
label_291770:
    // 0x291770: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x291770u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_291774:
    // 0x291774: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x291774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_291778:
    // 0x291778: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29177c:
    // 0x29177c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29177cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_291780:
    // 0x291780: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x291780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_291784:
    // 0x291784: 0x40f809  jalr        $v0
label_291788:
    if (ctx->pc == 0x291788u) {
        ctx->pc = 0x29178Cu;
        goto label_29178c;
    }
    ctx->pc = 0x291784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29178Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291784u, 0x29178Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29178Cu;
label_29178c:
    // 0x29178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291790:
    // 0x291790: 0x3e00008  jr          $ra
label_291794:
    if (ctx->pc == 0x291794u) {
        ctx->pc = 0x291794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291790u;
        // 0x291794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291798u;
        goto label_fallthrough_0x291790;
    }
    ctx->pc = 0x291790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291790u;
        // 0x291794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291790:
    ctx->pc = 0x291798u;
}
