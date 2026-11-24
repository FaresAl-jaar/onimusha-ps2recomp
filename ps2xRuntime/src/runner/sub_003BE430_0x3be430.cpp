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

// Function: sub_003BE430
// Address: 0x3be430 - 0x3be4ac
void sub_003BE430_0x3be430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE430_0x3be430");
#endif

    switch (ctx->pc) {
        case 0x3be444u: goto label_3be444;
        case 0x3be450u: goto label_3be450;
        case 0x3be45cu: goto label_3be45c;
        case 0x3be468u: goto label_3be468;
        case 0x3be4a0u: goto label_3be4a0;
        default: break;
    }

    ctx->pc = 0x3be430u;

    // 0x3be430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3be430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3be434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3be434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3be438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3be43c: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE43Cu;
    SET_GPR_U32(ctx, 31, 0x3BE444u);
    ctx->pc = 0x3BE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE43Cu;
    // 0x3be440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE43Cu, 0x3BE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE444u;
label_3be444:
    // 0x3be444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3be444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be448: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE448u;
    SET_GPR_U32(ctx, 31, 0x3BE450u);
    ctx->pc = 0x3BE44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE448u;
    // 0x3be44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE448u, 0x3BE450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE450u;
label_3be450:
    // 0x3be450: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3be450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be454: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE454u;
    SET_GPR_U32(ctx, 31, 0x3BE45Cu);
    ctx->pc = 0x3BE458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE454u;
    // 0x3be458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE454u, 0x3BE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE45Cu;
label_3be45c:
    // 0x3be45c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3be45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be460: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE460u;
    SET_GPR_U32(ctx, 31, 0x3BE468u);
    ctx->pc = 0x3BE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE460u;
    // 0x3be464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE460u, 0x3BE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE468u;
label_3be468:
    // 0x3be468: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3be468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3be46c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3be46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3be470: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x3be470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x3be474: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3be474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3be478: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3be478u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65E160u));
    // 0x3be47c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x3be47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x3be480: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x3be480u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65E170u));
    // 0x3be484: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3be484u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E180u));
    // 0x3be488: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x3be488u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E190u));
    // 0x3be48c: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x3be48cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x3be490: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x3be490u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x3be494: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x3be494u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x3be498: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x3BE498u;
    SET_GPR_U32(ctx, 31, 0x3BE4A0u);
    ctx->pc = 0x3BE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE498u;
    // 0x3be49c: 0x7ca20030  sq          $v0, 0x30($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x3BE498u, 0x3BE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE4A0u;
label_3be4a0:
    // 0x3be4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3be4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4A4u;
        // 0x3be4a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE4ACu;
}
