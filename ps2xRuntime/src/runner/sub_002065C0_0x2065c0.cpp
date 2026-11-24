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

// Function: sub_002065C0
// Address: 0x2065c0 - 0x2066f0
void sub_002065C0_0x2065c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065C0_0x2065c0");
#endif

    switch (ctx->pc) {
        case 0x2065e4u: goto label_2065e4;
        case 0x2065fcu: goto label_2065fc;
        case 0x206624u: goto label_206624;
        case 0x206644u: goto label_206644;
        case 0x20665cu: goto label_20665c;
        case 0x206670u: goto label_206670;
        case 0x20667cu: goto label_20667c;
        case 0x20668cu: goto label_20668c;
        case 0x2066b8u: goto label_2066b8;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066d0u: goto label_2066d0;
        default: break;
    }

    ctx->pc = 0x2065c0u;

    // 0x2065c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2065c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2065c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2065c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2065c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2065ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2065d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2065d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2065d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2065d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2065d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2065d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2065dc: 0xc081d84  jal         func_207610
    ctx->pc = 0x2065DCu;
    SET_GPR_U32(ctx, 31, 0x2065E4u);
    ctx->pc = 0x2065E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065DCu;
    // 0x2065e0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2065DCu, 0x2065E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065E4u;
label_2065e4:
    // 0x2065e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2065e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2065ec: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2065ECu;
    {
        const bool branch_taken_0x2065ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2065F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065ECu;
        // 0x2065f0: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065ec) {
            ctx->pc = 0x206608u;
            goto label_206608;
        }
    }
    ctx->pc = 0x2065F4u;
    // 0x2065f4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2065F4u;
    SET_GPR_U32(ctx, 31, 0x2065FCu);
    ctx->pc = 0x2065F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065F4u;
    // 0x2065f8: 0x24847400  addiu       $a0, $a0, 0x7400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2065F4u, 0x2065FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065FCu;
label_2065fc:
    // 0x2065fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2065FCu;
    {
        const bool branch_taken_0x2065fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065FCu;
        // 0x206600: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065fc) {
            ctx->pc = 0x2066D8u;
            goto label_2066d8;
        }
    }
    ctx->pc = 0x206604u;
    // 0x206604: 0x0  nop
    ctx->pc = 0x206604u;
    // NOP
label_206608:
    // 0x206608: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x206608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x20660c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20660Cu;
    {
        const bool branch_taken_0x20660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20660Cu;
        // 0x206610: 0x8e13003c  lw          $s3, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20660c) {
            ctx->pc = 0x20661Cu;
            goto label_20661c;
        }
    }
    ctx->pc = 0x206614u;
    // 0x206614: 0x52400030  beql        $s2, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x206614u;
    {
        const bool branch_taken_0x206614 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x206614) {
            ctx->pc = 0x206618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206614u;
            // 0x206618: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066D8u;
            goto label_2066d8;
        }
    }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0xc08161a  jal         func_205868
    ctx->pc = 0x20661Cu;
    SET_GPR_U32(ctx, 31, 0x206624u);
    ctx->pc = 0x205868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205868u, 0x20661Cu, 0x206624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206624u;
label_206624:
    // 0x206624: 0x14510013  bne         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x206624u;
    {
        const bool branch_taken_0x206624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x206628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206624u;
        // 0x206628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206624) {
            ctx->pc = 0x206674u;
            goto label_206674;
        }
    }
    ctx->pc = 0x20662Cu;
    // 0x20662c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x20662cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x206630: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x206630u;
    {
        const bool branch_taken_0x206630 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x206630) {
            ctx->pc = 0x206674u;
            goto label_206674;
        }
    }
    ctx->pc = 0x206638u;
    // 0x206638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20663c: 0xc087ea8  jal         func_21FAA0
    ctx->pc = 0x20663Cu;
    SET_GPR_U32(ctx, 31, 0x206644u);
    ctx->pc = 0x206640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20663Cu;
    // 0x206640: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FAA0u, 0x20663Cu, 0x206644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206644u;
label_206644:
    // 0x206644: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x206644u;
    {
        const bool branch_taken_0x206644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206644u;
        // 0x206648: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206644) {
            ctx->pc = 0x206668u;
            goto label_206668;
        }
    }
    ctx->pc = 0x20664Cu;
    // 0x20664c: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20664Cu;
    {
        const bool branch_taken_0x20664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x20664c) {
            ctx->pc = 0x206650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20664Cu;
            // 0x206650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206674u;
            goto label_206674;
        }
    }
    ctx->pc = 0x206654u;
    // 0x206654: 0xc08319c  jal         func_20C670
    ctx->pc = 0x206654u;
    SET_GPR_U32(ctx, 31, 0x20665Cu);
    ctx->pc = 0x206658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206654u;
    // 0x206658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C670u, 0x206654u, 0x20665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20665Cu;
label_20665c:
    // 0x20665c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20665Cu;
    {
        const bool branch_taken_0x20665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20665Cu;
        // 0x206660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20665c) {
            ctx->pc = 0x206674u;
            goto label_206674;
        }
    }
    ctx->pc = 0x206664u;
    // 0x206664: 0x0  nop
    ctx->pc = 0x206664u;
    // NOP
label_206668:
    // 0x206668: 0xc08319c  jal         func_20C670
    ctx->pc = 0x206668u;
    SET_GPR_U32(ctx, 31, 0x206670u);
    ctx->pc = 0x20666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206668u;
    // 0x20666c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C670u, 0x206668u, 0x206670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206670u;
label_206670:
    // 0x206670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x206670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206674:
    // 0x206674: 0xc086f82  jal         func_21BE08
    ctx->pc = 0x206674u;
    SET_GPR_U32(ctx, 31, 0x20667Cu);
    ctx->pc = 0x206678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206674u;
    // 0x206678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE08u, 0x206674u, 0x20667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20667Cu;
label_20667c:
    // 0x20667c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20667Cu;
    {
        const bool branch_taken_0x20667c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20667c) {
            ctx->pc = 0x206680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20667Cu;
            // 0x206680: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066BCu;
            goto label_2066bc;
        }
    }
    ctx->pc = 0x206684u;
    // 0x206684: 0xc08168c  jal         func_205A30
    ctx->pc = 0x206684u;
    SET_GPR_U32(ctx, 31, 0x20668Cu);
    ctx->pc = 0x206688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206684u;
    // 0x206688: 0x2404feca  addiu       $a0, $zero, -0x136 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966986));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x206684u, 0x20668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20668Cu;
label_20668c:
    // 0x20668c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x206690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206694: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206694u;
    {
        const bool branch_taken_0x206694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x206698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206694u;
        // 0x206698: 0x24647428  addiu       $a0, $v1, 0x7428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206694) {
            ctx->pc = 0x2066A8u;
            goto label_2066a8;
        }
    }
    ctx->pc = 0x20669Cu;
    // 0x20669c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2066a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2066A0u;
    {
        const bool branch_taken_0x2066a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066A0u;
        // 0x2066a4: 0x24457450  addiu       $a1, $v0, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066a0) {
            ctx->pc = 0x2066B0u;
            goto label_2066b0;
        }
    }
    ctx->pc = 0x2066A8u;
label_2066a8:
    // 0x2066a8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2066ac: 0x24457458  addiu       $a1, $v0, 0x7458
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29784));
label_2066b0:
    // 0x2066b0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2066B0u;
    SET_GPR_U32(ctx, 31, 0x2066B8u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2066B0u, 0x2066B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066B8u;
label_2066b8:
    // 0x2066b8: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x2066b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_2066bc:
    // 0x2066bc: 0xc082c2e  jal         func_20B0B8
    ctx->pc = 0x2066BCu;
    SET_GPR_U32(ctx, 31, 0x2066C4u);
    ctx->pc = 0x2066C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066BCu;
    // 0x2066c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x2066BCu, 0x2066C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066C4u;
label_2066c4:
    // 0x2066c4: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x2066c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x2066c8: 0xc082c2e  jal         func_20B0B8
    ctx->pc = 0x2066C8u;
    SET_GPR_U32(ctx, 31, 0x2066D0u);
    ctx->pc = 0x2066CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066C8u;
    // 0x2066cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x2066C8u, 0x2066D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D0u;
label_2066d0:
    // 0x2066d0: 0xa2120072  sb          $s2, 0x72($s0)
    ctx->pc = 0x2066d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 18));
    // 0x2066d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2066d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2066d8:
    // 0x2066d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2066dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2066dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2066e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2066e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2066e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2066e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2066e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2066E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2066E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2066F0u;
}
