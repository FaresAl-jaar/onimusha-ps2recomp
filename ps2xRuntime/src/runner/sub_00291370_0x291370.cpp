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

// Function: sub_00291370
// Address: 0x291370 - 0x2913a8
void sub_00291370_0x291370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291370_0x291370");
#endif

    switch (ctx->pc) {
        case 0x291370u: goto label_291370;
        case 0x291374u: goto label_291374;
        case 0x291378u: goto label_291378;
        case 0x29137cu: goto label_29137c;
        case 0x291380u: goto label_291380;
        case 0x291384u: goto label_291384;
        case 0x291388u: goto label_291388;
        case 0x29138cu: goto label_29138c;
        case 0x291390u: goto label_291390;
        case 0x291394u: goto label_291394;
        case 0x291398u: goto label_291398;
        case 0x29139cu: goto label_29139c;
        case 0x2913a0u: goto label_2913a0;
        case 0x2913a4u: goto label_2913a4;
        default: break;
    }

    ctx->pc = 0x291370u;

label_291370:
    // 0x291370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291374:
    // 0x291374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291378:
    // 0x291378: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x291378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_29137c:
    // 0x29137c: 0xdf8281c8  ld          $v0, -0x7E38($gp)
    ctx->pc = 0x29137cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934984)));
label_291380:
    // 0x291380: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x291380u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_291384:
    // 0x291384: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x291384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
label_291388:
    // 0x291388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29138c:
    // 0x29138c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_291390:
    // 0x291390: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x291390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_291394:
    // 0x291394: 0x40f809  jalr        $v0
label_291398:
    if (ctx->pc == 0x291398u) {
        ctx->pc = 0x29139Cu;
        goto label_29139c;
    }
    ctx->pc = 0x291394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29139Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291394u, 0x29139Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29139Cu;
label_29139c:
    // 0x29139c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2913a0:
    // 0x2913a0: 0x3e00008  jr          $ra
label_2913a4:
    if (ctx->pc == 0x2913A4u) {
        ctx->pc = 0x2913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913A0u;
        // 0x2913a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2913A8u;
        goto label_fallthrough_0x2913a0;
    }
    ctx->pc = 0x2913A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913A0u;
        // 0x2913a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2913A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2913a0:
    ctx->pc = 0x2913A8u;
}
