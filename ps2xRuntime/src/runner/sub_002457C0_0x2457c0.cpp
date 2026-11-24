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

// Function: sub_002457C0
// Address: 0x2457c0 - 0x245880
void sub_002457C0_0x2457c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002457C0_0x2457c0");
#endif

    switch (ctx->pc) {
        case 0x2457c0u: goto label_2457c0;
        case 0x2457c4u: goto label_2457c4;
        case 0x2457c8u: goto label_2457c8;
        case 0x2457ccu: goto label_2457cc;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457d4u: goto label_2457d4;
        case 0x2457d8u: goto label_2457d8;
        case 0x2457dcu: goto label_2457dc;
        case 0x2457e0u: goto label_2457e0;
        case 0x2457e4u: goto label_2457e4;
        case 0x2457e8u: goto label_2457e8;
        case 0x2457ecu: goto label_2457ec;
        case 0x2457f0u: goto label_2457f0;
        case 0x2457f4u: goto label_2457f4;
        case 0x2457f8u: goto label_2457f8;
        case 0x2457fcu: goto label_2457fc;
        case 0x245800u: goto label_245800;
        case 0x245804u: goto label_245804;
        case 0x245808u: goto label_245808;
        case 0x24580cu: goto label_24580c;
        case 0x245810u: goto label_245810;
        case 0x245814u: goto label_245814;
        case 0x245818u: goto label_245818;
        case 0x24581cu: goto label_24581c;
        case 0x245820u: goto label_245820;
        case 0x245824u: goto label_245824;
        case 0x245828u: goto label_245828;
        case 0x24582cu: goto label_24582c;
        case 0x245830u: goto label_245830;
        case 0x245834u: goto label_245834;
        case 0x245838u: goto label_245838;
        case 0x24583cu: goto label_24583c;
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        default: break;
    }

    ctx->pc = 0x2457c0u;

label_2457c0:
    // 0x2457c0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2457c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_2457c4:
    // 0x2457c4: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x2457c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_2457c8:
    // 0x2457c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2457c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2457cc:
    // 0x2457cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2457ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2457d0:
    // 0x2457d0: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x2457d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_2457d4:
    // 0x2457d4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x2457d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_2457d8:
    // 0x2457d8: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x2457d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_2457dc:
    // 0x2457dc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x2457dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_2457e0:
    // 0x2457e0: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x2457e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_2457e4:
    // 0x2457e4: 0xc090e62  jal         func_243988
label_2457e8:
    if (ctx->pc == 0x2457E8u) {
        ctx->pc = 0x2457E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457E4u;
        // 0x2457e8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457ECu;
        goto label_2457ec;
    }
    ctx->pc = 0x2457E4u;
    SET_GPR_U32(ctx, 31, 0x2457ECu);
    ctx->pc = 0x2457E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2457E4u;
    // 0x2457e8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2457E4u, 0x2457ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2457ECu;
label_2457ec:
    // 0x2457ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2457ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2457f0:
    // 0x2457f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2457f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2457f4:
    // 0x2457f4: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x2457f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2457f8:
    // 0x2457f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2457f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2457fc:
    // 0x2457fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2457fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245800:
    // 0x245800: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_245804:
    if (ctx->pc == 0x245804u) {
        ctx->pc = 0x245804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245800u;
        // 0x245804: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245808u;
        goto label_245808;
    }
    ctx->pc = 0x245800u;
    {
        const bool branch_taken_0x245800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x245804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245800u;
        // 0x245804: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245800) {
            ctx->pc = 0x245860u;
            goto label_245860;
        }
    }
    ctx->pc = 0x245808u;
label_245808:
    // 0x245808: 0xc090fbe  jal         func_243EF8
label_24580c:
    if (ctx->pc == 0x24580Cu) {
        ctx->pc = 0x245810u;
        goto label_245810;
    }
    ctx->pc = 0x245808u;
    SET_GPR_U32(ctx, 31, 0x245810u);
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x245808u, 0x245810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245810u;
label_245810:
    // 0x245810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245814:
    // 0x245814: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x245814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_245818:
    // 0x245818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24581c:
    // 0x24581c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24581cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_245820:
    // 0x245820: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x245820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_245824:
    // 0x245824: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_245828:
    if (ctx->pc == 0x245828u) {
        ctx->pc = 0x245828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245824u;
        // 0x245828: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24582Cu;
        goto label_24582c;
    }
    ctx->pc = 0x245824u;
    {
        const bool branch_taken_0x245824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245824u;
        // 0x245828: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245824) {
            ctx->pc = 0x245860u;
            goto label_245860;
        }
    }
    ctx->pc = 0x24582Cu;
label_24582c:
    // 0x24582c: 0x60f809  jalr        $v1
label_245830:
    if (ctx->pc == 0x245830u) {
        ctx->pc = 0x245834u;
        goto label_245834;
    }
    ctx->pc = 0x24582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24582Cu, 0x245834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245834u;
label_245834:
    // 0x245834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245838:
    // 0x245838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24583c:
    // 0x24583c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x24583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_245840:
    // 0x245840: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x245840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245844:
    // 0x245844: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x245844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_245848:
    // 0x245848: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_24584c:
    // 0x24584c: 0x40f809  jalr        $v0
label_245850:
    if (ctx->pc == 0x245850u) {
        ctx->pc = 0x245850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24584Cu;
        // 0x245850: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245854u;
        goto label_245854;
    }
    ctx->pc = 0x24584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245854u);
        ctx->pc = 0x245850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24584Cu;
        // 0x245850: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24584Cu, 0x245854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245854u;
label_245854:
    // 0x245854: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x245854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_245858:
    // 0x245858: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x245858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_24585c:
    // 0x24585c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x24585cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_245860:
    // 0x245860: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x245860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_245864:
    // 0x245864: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x245864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_245868:
    // 0x245868: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x245868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_24586c:
    // 0x24586c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x24586cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_245870:
    // 0x245870: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x245870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_245874:
    // 0x245874: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x245874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_245878:
    // 0x245878: 0x3e00008  jr          $ra
label_24587c:
    if (ctx->pc == 0x24587Cu) {
        ctx->pc = 0x24587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245878u;
        // 0x24587c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245880u;
        goto label_fallthrough_0x245878;
    }
    ctx->pc = 0x245878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245878u;
        // 0x24587c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245878:
    ctx->pc = 0x245880u;
}
