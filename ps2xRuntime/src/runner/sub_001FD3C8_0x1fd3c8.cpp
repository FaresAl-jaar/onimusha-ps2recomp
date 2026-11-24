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

// Function: sub_001FD3C8
// Address: 0x1fd3c8 - 0x1fd440
void sub_001FD3C8_0x1fd3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD3C8_0x1fd3c8");
#endif

    switch (ctx->pc) {
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3d0u: goto label_1fd3d0;
        case 0x1fd3d4u: goto label_1fd3d4;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3dcu: goto label_1fd3dc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3e4u: goto label_1fd3e4;
        case 0x1fd3e8u: goto label_1fd3e8;
        case 0x1fd3ecu: goto label_1fd3ec;
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        default: break;
    }

    ctx->pc = 0x1fd3c8u;

label_1fd3c8:
    // 0x1fd3c8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1fd3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_1fd3cc:
    // 0x1fd3cc: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
label_1fd3d0:
    // 0x1fd3d0: 0x90c762e8  lbu         $a3, 0x62E8($a2)
    ctx->pc = 0x1fd3d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 25320)));
label_1fd3d4:
    // 0x1fd3d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fd3d8:
    // 0x1fd3d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1fd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1fd3dc:
    // 0x1fd3dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd3e0:
    // 0x1fd3e0: 0x24633f30  addiu       $v1, $v1, 0x3F30
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16176));
label_1fd3e4:
    // 0x1fd3e4: 0x24426298  addiu       $v0, $v0, 0x6298
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25240));
label_1fd3e8:
    // 0x1fd3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd3ec:
    // 0x1fd3ec: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
label_1fd3f0:
    if (ctx->pc == 0x1FD3F0u) {
        ctx->pc = 0x1FD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ECu;
        // 0x1fd3f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3F4u;
        goto label_1fd3f4;
    }
    ctx->pc = 0x1FD3ECu;
    {
        const bool branch_taken_0x1fd3ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ECu;
        // 0x1fd3f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3ec) {
            ctx->pc = 0x1FD410u;
            goto label_1fd410;
        }
    }
    ctx->pc = 0x1FD3F4u;
label_1fd3f4:
    // 0x1fd3f4: 0x0  nop
    ctx->pc = 0x1fd3f4u;
    // NOP
label_1fd3f8:
    // 0x1fd3f8: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x1fd3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fd3fc:
    // 0x1fd3fc: 0x20f809  jalr        $at
label_1fd400:
    if (ctx->pc == 0x1FD400u) {
        ctx->pc = 0x1FD404u;
        goto label_1fd404;
    }
    ctx->pc = 0x1FD3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1FD404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3FCu, 0x1FD404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD404u;
label_1fd404:
    // 0x1fd404: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_1fd408:
    if (ctx->pc == 0x1FD408u) {
        ctx->pc = 0x1FD40Cu;
        goto label_1fd40c;
    }
    ctx->pc = 0x1FD404u;
    {
        const bool branch_taken_0x1fd404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd404) {
            ctx->pc = 0x1FD3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd3f8;
        }
    }
    ctx->pc = 0x1FD40Cu;
label_1fd40c:
    // 0x1fd40c: 0x0  nop
    ctx->pc = 0x1fd40cu;
    // NOP
label_1fd410:
    // 0x1fd410: 0xc07f510  jal         func_1FD440
label_1fd414:
    if (ctx->pc == 0x1FD414u) {
        ctx->pc = 0x1FD418u;
        goto label_1fd418;
    }
    ctx->pc = 0x1FD410u;
    SET_GPR_U32(ctx, 31, 0x1FD418u);
    ctx->pc = 0x1FD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD440u, 0x1FD410u, 0x1FD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD418u;
label_1fd418:
    // 0x1fd418: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1fd41c:
    if (ctx->pc == 0x1FD41Cu) {
        ctx->pc = 0x1FD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD418u;
        // 0x1fd41c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD420u;
        goto label_1fd420;
    }
    ctx->pc = 0x1FD418u;
    {
        const bool branch_taken_0x1fd418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD418u;
        // 0x1fd41c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd418) {
            ctx->pc = 0x1FD438u;
            goto label_1fd438;
        }
    }
    ctx->pc = 0x1FD420u;
label_1fd420:
    // 0x1fd420: 0xc07ecb6  jal         func_1FB2D8
label_1fd424:
    if (ctx->pc == 0x1FD424u) {
        ctx->pc = 0x1FD428u;
        goto label_1fd428;
    }
    ctx->pc = 0x1FD420u;
    SET_GPR_U32(ctx, 31, 0x1FD428u);
    ctx->pc = 0x1FB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2D8u, 0x1FD420u, 0x1FD428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD428u;
label_1fd428:
    // 0x1fd428: 0xc07f45e  jal         func_1FD178
label_1fd42c:
    if (ctx->pc == 0x1FD42Cu) {
        ctx->pc = 0x1FD430u;
        goto label_1fd430;
    }
    ctx->pc = 0x1FD428u;
    SET_GPR_U32(ctx, 31, 0x1FD430u);
    ctx->pc = 0x1FD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD178u, 0x1FD428u, 0x1FD430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD430u;
label_1fd430:
    // 0x1fd430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd434:
    // 0x1fd434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd438:
    // 0x1fd438: 0x3e00008  jr          $ra
label_1fd43c:
    if (ctx->pc == 0x1FD43Cu) {
        ctx->pc = 0x1FD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD438u;
        // 0x1fd43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD440u;
        goto label_fallthrough_0x1fd438;
    }
    ctx->pc = 0x1FD438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD438u;
        // 0x1fd43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd438:
    ctx->pc = 0x1FD440u;
}
