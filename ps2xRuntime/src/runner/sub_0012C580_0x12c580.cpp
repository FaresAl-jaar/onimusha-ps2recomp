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

// Function: sub_0012C580
// Address: 0x12c580 - 0x12c688
void sub_0012C580_0x12c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C580_0x12c580");
#endif

    switch (ctx->pc) {
        case 0x12c598u: goto label_12c598;
        case 0x12c5a8u: goto label_12c5a8;
        case 0x12c5c4u: goto label_12c5c4;
        case 0x12c5ccu: goto label_12c5cc;
        case 0x12c5ecu: goto label_12c5ec;
        case 0x12c5f0u: goto label_12c5f0;
        case 0x12c5f8u: goto label_12c5f8;
        case 0x12c60cu: goto label_12c60c;
        case 0x12c620u: goto label_12c620;
        case 0x12c628u: goto label_12c628;
        case 0x12c634u: goto label_12c634;
        case 0x12c65cu: goto label_12c65c;
        case 0x12c674u: goto label_12c674;
        case 0x12c680u: goto label_12c680;
        default: break;
    }

    ctx->pc = 0x12c580u;

    // 0x12c580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c588: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c590: 0xc04b946  jal         func_12E518
    ctx->pc = 0x12C590u;
    SET_GPR_U32(ctx, 31, 0x12C598u);
    ctx->pc = 0x12C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C590u;
    // 0x12c594: 0xffb20010  sd          $s2, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x12C590u, 0x12C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C598u;
label_12c598:
    // 0x12c598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5a0: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12C5A0u;
    SET_GPR_U32(ctx, 31, 0x12C5A8u);
    ctx->pc = 0x12C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5A0u;
    // 0x12c5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12C5A0u, 0x12C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5A8u;
label_12c5a8:
    // 0x12c5a8: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x12c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x12c5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5b0: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x12c5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x12c5b4: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12C5B4u;
    {
        const bool branch_taken_0x12c5b4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5B4u;
        // 0x12c5b8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5b4) {
            ctx->pc = 0x12C638u;
            goto label_12c638;
        }
    }
    ctx->pc = 0x12C5BCu;
    // 0x12c5bc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C5BCu;
    SET_GPR_U32(ctx, 31, 0x12C5C4u);
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C5BCu, 0x12C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C4u;
label_12c5c4:
    // 0x12c5c4: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C5C4u;
    SET_GPR_U32(ctx, 31, 0x12C5CCu);
    ctx->pc = 0x12C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5C4u;
    // 0x12c5c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C5C4u, 0x12C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5CCu;
label_12c5cc:
    // 0x12c5cc: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x12c5ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c5d0: 0x12787a  dsrl        $t7, $s2, 1
    ctx->pc = 0x12c5d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) >> 1);
    // 0x12c5d4: 0x324e0001  andi        $t6, $s2, 0x1
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12c5d8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x12c5d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12c5dc: 0x6400023  bltz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x12C5DCu;
    {
        const bool branch_taken_0x12c5dc = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x12C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5DCu;
        // 0x12c5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5dc) {
            ctx->pc = 0x12C66Cu;
            goto label_12c66c;
        }
    }
    ctx->pc = 0x12C5E4u;
    // 0x12c5e4: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x12C5E4u;
    SET_GPR_U32(ctx, 31, 0x12C5ECu);
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x12C5E4u, 0x12C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5ECu;
label_12c5ec:
    // 0x12c5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c5f0:
    // 0x12c5f0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12C5F0u;
    SET_GPR_U32(ctx, 31, 0x12C5F8u);
    ctx->pc = 0x12C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5F0u;
    // 0x12c5f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12C5F0u, 0x12C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5F8u;
label_12c5f8:
    // 0x12c5f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c604: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12C604u;
    SET_GPR_U32(ctx, 31, 0x12C60Cu);
    ctx->pc = 0x12C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C604u;
    // 0x12c608: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12C604u, 0x12C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C60Cu;
label_12c60c:
    // 0x12c60c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c610: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12C610u;
    {
        const bool branch_taken_0x12c610 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C610u;
        // 0x12c614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c610) {
            ctx->pc = 0x12C654u;
            goto label_12c654;
        }
    }
    ctx->pc = 0x12C618u;
    // 0x12c618: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12C618u;
    SET_GPR_U32(ctx, 31, 0x12C620u);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12C618u, 0x12C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C620u;
label_12c620:
    // 0x12c620: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C620u;
    SET_GPR_U32(ctx, 31, 0x12C628u);
    ctx->pc = 0x12C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C620u;
    // 0x12c624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C620u, 0x12C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C628u;
label_12c628:
    // 0x12c628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c62c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c630: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x12c630u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_12c634:
    // 0x12c634: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x12c634u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c638:
    // 0x12c638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c63c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12c63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C64Cu;
        // 0x12c650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C654u;
label_12c654:
    // 0x12c654: 0xc04bc18  jal         func_12F060
    ctx->pc = 0x12C654u;
    SET_GPR_U32(ctx, 31, 0x12C65Cu);
    ctx->pc = 0x12C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C654u;
    // 0x12c658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F060u, 0x12C654u, 0x12C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C65Cu;
label_12c65c:
    // 0x12c65c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c660: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c664: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x12C664u;
    {
        const bool branch_taken_0x12c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C664u;
        // 0x12c668: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c664) {
            ctx->pc = 0x12C634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c634;
        }
    }
    ctx->pc = 0x12C66Cu;
label_12c66c:
    // 0x12c66c: 0xc04b0ac  jal         func_12C2B0
    ctx->pc = 0x12C66Cu;
    SET_GPR_U32(ctx, 31, 0x12C674u);
    ctx->pc = 0x12C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C66Cu;
    // 0x12c670: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C2B0u, 0x12C66Cu, 0x12C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C674u;
label_12c674:
    // 0x12c674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c678: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C678u;
    SET_GPR_U32(ctx, 31, 0x12C680u);
    ctx->pc = 0x12C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C678u;
    // 0x12c67c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C678u, 0x12C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C680u;
label_12c680:
    // 0x12c680: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C680u;
        // 0x12c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c5f0;
        }
    }
    ctx->pc = 0x12C688u;
}
