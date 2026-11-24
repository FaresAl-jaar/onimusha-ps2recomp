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

// Function: sub_00245668
// Address: 0x245668 - 0x24571c
void sub_00245668_0x245668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245668_0x245668");
#endif

    switch (ctx->pc) {
        case 0x245668u: goto label_245668;
        case 0x24566cu: goto label_24566c;
        case 0x245670u: goto label_245670;
        case 0x245674u: goto label_245674;
        case 0x245678u: goto label_245678;
        case 0x24567cu: goto label_24567c;
        case 0x245680u: goto label_245680;
        case 0x245684u: goto label_245684;
        case 0x245688u: goto label_245688;
        case 0x24568cu: goto label_24568c;
        case 0x245690u: goto label_245690;
        case 0x245694u: goto label_245694;
        case 0x245698u: goto label_245698;
        case 0x24569cu: goto label_24569c;
        case 0x2456a0u: goto label_2456a0;
        case 0x2456a4u: goto label_2456a4;
        case 0x2456a8u: goto label_2456a8;
        case 0x2456acu: goto label_2456ac;
        case 0x2456b0u: goto label_2456b0;
        case 0x2456b4u: goto label_2456b4;
        case 0x2456b8u: goto label_2456b8;
        case 0x2456bcu: goto label_2456bc;
        case 0x2456c0u: goto label_2456c0;
        case 0x2456c4u: goto label_2456c4;
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        case 0x2456d8u: goto label_2456d8;
        case 0x2456dcu: goto label_2456dc;
        case 0x2456e0u: goto label_2456e0;
        case 0x2456e4u: goto label_2456e4;
        case 0x2456e8u: goto label_2456e8;
        case 0x2456ecu: goto label_2456ec;
        case 0x2456f0u: goto label_2456f0;
        case 0x2456f4u: goto label_2456f4;
        case 0x2456f8u: goto label_2456f8;
        case 0x2456fcu: goto label_2456fc;
        case 0x245700u: goto label_245700;
        case 0x245704u: goto label_245704;
        case 0x245708u: goto label_245708;
        case 0x24570cu: goto label_24570c;
        case 0x245710u: goto label_245710;
        case 0x245714u: goto label_245714;
        case 0x245718u: goto label_245718;
        default: break;
    }

    ctx->pc = 0x245668u;

label_245668:
    // 0x245668: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x245668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_24566c:
    // 0x24566c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x24566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_245670:
    // 0x245670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245674:
    // 0x245674: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x245674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_245678:
    // 0x245678: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x245678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24567c:
    // 0x24567c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245680:
    // 0x245680: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x245680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245684:
    // 0x245684: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x245684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245688:
    // 0x245688: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x245688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_24568c:
    // 0x24568c: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x24568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_245690:
    // 0x245690: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x245690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_245694:
    // 0x245694: 0xc090fbe  jal         func_243EF8
label_245698:
    if (ctx->pc == 0x245698u) {
        ctx->pc = 0x245698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245694u;
        // 0x245698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24569Cu;
        goto label_24569c;
    }
    ctx->pc = 0x245694u;
    SET_GPR_U32(ctx, 31, 0x24569Cu);
    ctx->pc = 0x245698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245694u;
    // 0x245698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x245694u, 0x24569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24569Cu;
label_24569c:
    // 0x24569c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2456a0:
    // 0x2456a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2456a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2456a4:
    // 0x2456a4: 0xc090f2c  jal         func_243CB0
label_2456a8:
    if (ctx->pc == 0x2456A8u) {
        ctx->pc = 0x2456A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456A4u;
        // 0x2456a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456ACu;
        goto label_2456ac;
    }
    ctx->pc = 0x2456A4u;
    SET_GPR_U32(ctx, 31, 0x2456ACu);
    ctx->pc = 0x2456A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2456A4u;
    // 0x2456a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x2456A4u, 0x2456ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2456ACu;
label_2456ac:
    // 0x2456ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2456acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2456b0:
    // 0x2456b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2456b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2456b4:
    // 0x2456b4: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x2456b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_2456b8:
    // 0x2456b8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2456b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2456bc:
    // 0x2456bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2456bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2456c0:
    // 0x2456c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2456c4:
    if (ctx->pc == 0x2456C4u) {
        ctx->pc = 0x2456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456C0u;
        // 0x2456c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456C8u;
        goto label_2456c8;
    }
    ctx->pc = 0x2456C0u;
    {
        const bool branch_taken_0x2456c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456C0u;
        // 0x2456c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456c0) {
            ctx->pc = 0x2456FCu;
            goto label_2456fc;
        }
    }
    ctx->pc = 0x2456C8u;
label_2456c8:
    // 0x2456c8: 0x40f809  jalr        $v0
label_2456cc:
    if (ctx->pc == 0x2456CCu) {
        ctx->pc = 0x2456D0u;
        goto label_2456d0;
    }
    ctx->pc = 0x2456C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2456D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456C8u, 0x2456D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2456D0u;
label_2456d0:
    // 0x2456d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2456d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2456d4:
    // 0x2456d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2456d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2456d8:
    // 0x2456d8: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2456dc:
    // 0x2456dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2456dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2456e0:
    // 0x2456e0: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x2456e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_2456e4:
    // 0x2456e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2456e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2456e8:
    // 0x2456e8: 0x40f809  jalr        $v0
label_2456ec:
    if (ctx->pc == 0x2456ECu) {
        ctx->pc = 0x2456ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E8u;
        // 0x2456ec: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456F0u;
        goto label_2456f0;
    }
    ctx->pc = 0x2456E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2456F0u);
        ctx->pc = 0x2456ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E8u;
        // 0x2456ec: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456E8u, 0x2456F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2456F0u;
label_2456f0:
    // 0x2456f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2456f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2456f4:
    // 0x2456f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2456f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2456f8:
    // 0x2456f8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2456f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2456fc:
    // 0x2456fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2456fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245700:
    // 0x245700: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x245700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_245704:
    // 0x245704: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x245704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_245708:
    // 0x245708: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x245708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_24570c:
    // 0x24570c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x24570cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_245710:
    // 0x245710: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x245710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_245714:
    // 0x245714: 0x3e00008  jr          $ra
label_245718:
    if (ctx->pc == 0x245718u) {
        ctx->pc = 0x245718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245714u;
        // 0x245718: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24571Cu;
        goto label_fallthrough_0x245714;
    }
    ctx->pc = 0x245714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245714u;
        // 0x245718: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245714:
    ctx->pc = 0x24571Cu;
}
