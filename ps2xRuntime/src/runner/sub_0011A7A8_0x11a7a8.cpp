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

// Function: sub_0011A7A8
// Address: 0x11a7a8 - 0x11aab0
void sub_0011A7A8_0x11a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A7A8_0x11a7a8");
#endif

    switch (ctx->pc) {
        case 0x11a7f0u: goto label_11a7f0;
        case 0x11a7fcu: goto label_11a7fc;
        case 0x11a800u: goto label_11a800;
        case 0x11a850u: goto label_11a850;
        case 0x11a860u: goto label_11a860;
        case 0x11a86cu: goto label_11a86c;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a958u: goto label_11a958;
        case 0x11a990u: goto label_11a990;
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa30u: goto label_11aa30;
        case 0x11aa88u: goto label_11aa88;
        default: break;
    }

    ctx->pc = 0x11a7a8u;

    // 0x11a7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a7ac: 0x3c0d7ff0  lui         $t5, 0x7FF0
    ctx->pc = 0x11a7acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32752 << 16));
    // 0x11a7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a7b4: 0x4603f  dsra32      $t4, $a0, 0
    ctx->pc = 0x11a7b4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11a7b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a7bc: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x11a7bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11a7c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11a7c4: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x11a7c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11a7cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11a7d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11a7d8: 0x18d7824  and         $t7, $t4, $t5
    ctx->pc = 0x11a7d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x11a7dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a7e0: 0x15ed000f  bne         $t7, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x11A7E0u;
    {
        const bool branch_taken_0x11a7e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x11A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7E0u;
        // 0x11a7e4: 0xb583f  dsra32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7e0) {
            ctx->pc = 0x11A820u;
            goto label_11a820;
        }
    }
    ctx->pc = 0x11A7E8u;
    // 0x11a7e8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A7E8u;
    SET_GPR_U32(ctx, 31, 0x11A7F0u);
    ctx->pc = 0x11A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7E8u;
    // 0x11a7ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A7E8u, 0x11A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7F0u;
label_11a7f0:
    // 0x11a7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7f4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A7F4u;
    SET_GPR_U32(ctx, 31, 0x11A7FCu);
    ctx->pc = 0x11A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7F4u;
    // 0x11a7f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A7F4u, 0x11A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7FCu;
label_11a7fc:
    // 0x11a7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a800:
    // 0x11a800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a804: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11a804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a808: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11a808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a80c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11a80cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a810: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11a814: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a818: 0x3e00008  jr          $ra
    ctx->pc = 0x11A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A818u;
        // 0x11a81c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A820u;
label_11a820:
    // 0x11a820: 0x1d800014  bgtz        $t4, . + 4 + (0x14 << 2)
    ctx->pc = 0x11A820u;
    {
        const bool branch_taken_0x11a820 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x11A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A820u;
        // 0x11a824: 0xc9503  sra         $s2, $t4, 20 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 12), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a820) {
            ctx->pc = 0x11A874u;
            goto label_11a874;
        }
    }
    ctx->pc = 0x11A828u;
    // 0x11a828: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11a82c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a82cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a830: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11a830u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11a834: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x11a834u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x11a838: 0x11e0fff0  beqz        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11A838u;
    {
        const bool branch_taken_0x11a838 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A838u;
        // 0x11a83c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a838) {
            ctx->pc = 0x11A7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a7fc;
        }
    }
    ctx->pc = 0x11A840u;
    // 0x11a840: 0x581000c  bgez        $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x11A840u;
    {
        const bool branch_taken_0x11a840 = (GPR_S64(ctx, 12) >= 0);
        if (branch_taken_0x11a840) {
            ctx->pc = 0x11A874u;
            goto label_11a874;
        }
    }
    ctx->pc = 0x11A848u;
    // 0x11a848: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A848u;
    SET_GPR_U32(ctx, 31, 0x11A850u);
    ctx->pc = 0x11A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A848u;
    // 0x11a84c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A848u, 0x11A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A850u;
label_11a850:
    // 0x11a850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a858: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A858u;
    SET_GPR_U32(ctx, 31, 0x11A860u);
    ctx->pc = 0x11A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A858u;
    // 0x11a85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A858u, 0x11A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A860u;
label_11a860:
    // 0x11a860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a864: 0xc04bafa  jal         func_12EBE8
    ctx->pc = 0x11A864u;
    SET_GPR_U32(ctx, 31, 0x11A86Cu);
    ctx->pc = 0x11A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A864u;
    // 0x11a868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBE8u, 0x11A864u, 0x11A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A86Cu;
label_11a86c:
    // 0x11a86c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x11A86Cu;
    {
        const bool branch_taken_0x11a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A86Cu;
        // 0x11a870: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a86c) {
            ctx->pc = 0x11A800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a800;
        }
    }
    ctx->pc = 0x11A874u;
label_11a874:
    // 0x11a874: 0x16400021  bnez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x11A874u;
    {
        const bool branch_taken_0x11a874 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A874u;
        // 0x11a878: 0x3c0f000f  lui         $t7, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a874) {
            ctx->pc = 0x11A8FCu;
            goto label_11a8fc;
        }
    }
    ctx->pc = 0x11A87Cu;
    // 0x11a87c: 0x1580000d  bnez        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x11A87Cu;
    {
        const bool branch_taken_0x11a87c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A87Cu;
        // 0x11a880: 0x3c0f0010  lui         $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a87c) {
            ctx->pc = 0x11A8B4u;
            goto label_11a8b4;
        }
    }
    ctx->pc = 0x11A884u;
    // 0x11a884: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x11a884u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a888: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x11a888u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a88c:
    // 0x11a88c: 0xe7ac2  srl         $t7, $t6, 11
    ctx->pc = 0x11a88cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 11));
    // 0x11a890: 0x25adffeb  addiu       $t5, $t5, -0x15
    ctx->pc = 0x11a890u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967275));
    // 0x11a894: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11a894u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11a898: 0x0  nop
    ctx->pc = 0x11a898u;
    // NOP
    // 0x11a89c: 0x0  nop
    ctx->pc = 0x11a89cu;
    // NOP
    // 0x11a8a0: 0x1180fffa  beqz        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A8A0u;
    {
        const bool branch_taken_0x11a8a0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8A0u;
        // 0x11a8a4: 0xe7540  sll         $t6, $t6, 21 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8a0) {
            ctx->pc = 0x11A88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a88c;
        }
    }
    ctx->pc = 0x11A8A8u;
    // 0x11a8a8: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8ac: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x11a8acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8b0: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
label_11a8b4:
    // 0x11a8b4: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11a8b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11a8b8: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A8B8u;
    {
        const bool branch_taken_0x11a8b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8B8u;
        // 0x11a8bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8b8) {
            ctx->pc = 0x11A8E0u;
            goto label_11a8e0;
        }
    }
    ctx->pc = 0x11A8C0u;
    // 0x11a8c0: 0x3c0e0010  lui         $t6, 0x10
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16 << 16));
label_11a8c4:
    // 0x11a8c4: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x11a8c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x11a8c8: 0x18e7824  and         $t7, $t4, $t6
    ctx->pc = 0x11a8c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11a8cc: 0x0  nop
    ctx->pc = 0x11a8ccu;
    // NOP
    // 0x11a8d0: 0x0  nop
    ctx->pc = 0x11a8d0u;
    // NOP
    // 0x11a8d4: 0x0  nop
    ctx->pc = 0x11a8d4u;
    // NOP
    // 0x11a8d8: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A8D8u;
    {
        const bool branch_taken_0x11a8d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D8u;
        // 0x11a8dc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d8) {
            ctx->pc = 0x11A8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a8c4;
        }
    }
    ctx->pc = 0x11A8E0u;
label_11a8e0:
    // 0x11a8e0: 0xa7823  negu        $t7, $t2
    ctx->pc = 0x11a8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x11a8e4: 0x24a7023  subu        $t6, $s2, $t2
    ctx->pc = 0x11a8e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x11a8e8: 0x1eb7806  srlv        $t7, $t3, $t7
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 15) & 0x1F));
    // 0x11a8ec: 0x25d20001  addiu       $s2, $t6, 0x1
    ctx->pc = 0x11a8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x11a8f0: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11a8f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11a8f4: 0x14b5804  sllv        $t3, $t3, $t2
    ctx->pc = 0x11a8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x11a8f8: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x11a8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
label_11a8fc:
    // 0x11a8fc: 0x2652fc01  addiu       $s2, $s2, -0x3FF
    ctx->pc = 0x11a8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x11a900: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a900u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a904: 0x3c0e0010  lui         $t6, 0x10
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16 << 16));
    // 0x11a908: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11a908u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11a90c: 0x324d0001  andi        $t5, $s2, 0x1
    ctx->pc = 0x11a90cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x11a910: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A910u;
    {
        const bool branch_taken_0x11a910 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A910u;
        // 0x11a914: 0x1ee6025  or          $t4, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a910) {
            ctx->pc = 0x11A92Cu;
            goto label_11a92c;
        }
    }
    ctx->pc = 0x11A918u;
    // 0x11a918: 0x1707824  and         $t7, $t3, $s0
    ctx->pc = 0x11a918u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x11a91c: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a91cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a920: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x11a920u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x11a924: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11a928: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_11a92c:
    // 0x11a92c: 0x1707824  and         $t7, $t3, $s0
    ctx->pc = 0x11a92cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x11a930: 0x129043  sra         $s2, $s2, 1
    ctx->pc = 0x11a930u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x11a934: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a938: 0xb7040  sll         $t6, $t3, 1
    ctx->pc = 0x11a938u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x11a93c: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11a93cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11a940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a944: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11a944u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11a948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a94c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11a94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11a950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a954: 0x3c0a0020  lui         $t2, 0x20
    ctx->pc = 0x11a954u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32 << 16));
label_11a958:
    // 0x11a958: 0xca5821  addu        $t3, $a2, $t2
    ctx->pc = 0x11a958u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x11a95c: 0x18b782a  slt         $t7, $t4, $t3
    ctx->pc = 0x11a95cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11a960: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A960u;
    {
        const bool branch_taken_0x11a960 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A960u;
        // 0x11a964: 0x1d07824  and         $t7, $t6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a960) {
            ctx->pc = 0x11A974u;
            goto label_11a974;
        }
    }
    ctx->pc = 0x11A968u;
    // 0x11a968: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x11a96c: 0x16a3021  addu        $a2, $t3, $t2
    ctx->pc = 0x11a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x11a970: 0x22a8821  addu        $s1, $s1, $t2
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_11a974:
    // 0x11a974: 0xa5042  srl         $t2, $t2, 1
    ctx->pc = 0x11a974u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11a978: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a978u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a97c: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x11a980: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11a980u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11a984: 0x1540fff4  bnez        $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11A984u;
    {
        const bool branch_taken_0x11a984 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A984u;
        // 0x11a988: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a984) {
            ctx->pc = 0x11A958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a958;
        }
    }
    ctx->pc = 0x11A98Cu;
    // 0x11a98c: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x11a98cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_11a990:
    // 0x11a990: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x11a990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x11a994: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x11a994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a998: 0x1cd482b  sltu        $t1, $t6, $t5
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x11a99c: 0xcc782a  slt         $t7, $a2, $t4
    ctx->pc = 0x11a99cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11a9a0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A9A0u;
    {
        const bool branch_taken_0x11a9a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9A0u;
        // 0x11a9a4: 0x1b04024  and         $t0, $t5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9a0) {
            ctx->pc = 0x11A9B8u;
            goto label_11a9b8;
        }
    }
    ctx->pc = 0x11A9A8u;
    // 0x11a9a8: 0x14cc000d  bne         $a2, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x11A9A8u;
    {
        const bool branch_taken_0x11a9a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x11A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9A8u;
        // 0x11a9ac: 0x1d07824  and         $t7, $t6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9a8) {
            ctx->pc = 0x11A9E0u;
            goto label_11a9e0;
        }
    }
    ctx->pc = 0x11A9B0u;
    // 0x11a9b0: 0x5520000c  bnel        $t1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11A9B0u;
    {
        const bool branch_taken_0x11a9b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a9b0) {
            ctx->pc = 0x11A9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A9B0u;
            // 0x11a9b4: 0xa5042  srl         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A9E4u;
            goto label_11a9e4;
        }
    }
    ctx->pc = 0x11A9B8u;
label_11a9b8:
    // 0x11a9b8: 0x1aa2821  addu        $a1, $t5, $t2
    ctx->pc = 0x11a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x11a9bc: 0x15100003  bne         $t0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A9BCu;
    {
        const bool branch_taken_0x11a9bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 16));
        ctx->pc = 0x11A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9BCu;
        // 0x11a9c0: 0xb03824  and         $a3, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9bc) {
            ctx->pc = 0x11A9CCu;
            goto label_11a9cc;
        }
    }
    ctx->pc = 0x11A9C4u;
    // 0x11a9c4: 0x24cf0001  addiu       $t7, $a2, 0x1
    ctx->pc = 0x11a9c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11a9c8: 0x1e7300a  movz        $a2, $t7, $a3
    ctx->pc = 0x11a9c8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 15));
label_11a9cc:
    // 0x11a9cc: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x11a9ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x11a9d0: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x11a9d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x11a9d4: 0x26a9821  addu        $s3, $s3, $t2
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x11a9d8: 0x1896023  subu        $t4, $t4, $t1
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x11a9dc: 0x1d07824  and         $t7, $t6, $s0
    ctx->pc = 0x11a9dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 16));
label_11a9e0:
    // 0x11a9e0: 0xa5042  srl         $t2, $t2, 1
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_11a9e4:
    // 0x11a9e4: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11a9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11a9e8: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x11a9e8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x11a9ec: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x11a9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11a9f0: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11A9F0u;
    {
        const bool branch_taken_0x11a9f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9F0u;
        // 0x11a9f4: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f0) {
            ctx->pc = 0x11A990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a990;
        }
    }
    ctx->pc = 0x11A9F8u;
    // 0x11a9f8: 0x18e7825  or          $t7, $t4, $t6
    ctx->pc = 0x11a9f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
    // 0x11a9fc: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11A9FCu;
    {
        const bool branch_taken_0x11a9fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9FCu;
        // 0x11aa00: 0x241403ff  addiu       $s4, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9fc) {
            ctx->pc = 0x11AA30u;
            goto label_11aa30;
        }
    }
    ctx->pc = 0x11AA04u;
    // 0x11aa04: 0x14a53c  dsll32      $s4, $s4, 20
    ctx->pc = 0x11aa04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 20));
    // 0x11aa08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11aa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa0c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11AA0Cu;
    SET_GPR_U32(ctx, 31, 0x11AA14u);
    ctx->pc = 0x11AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA0Cu;
    // 0x11aa10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11AA0Cu, 0x11AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA14u;
label_11aa14:
    // 0x11aa14: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AA14u;
    {
        const bool branch_taken_0x11aa14 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA14u;
        // 0x11aa18: 0x117043  sra         $t6, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa14) {
            ctx->pc = 0x11AA34u;
            goto label_11aa34;
        }
    }
    ctx->pc = 0x11AA1Cu;
    // 0x11aa1c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x11aa1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11aa20: 0x166f0017  bne         $s3, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x11AA20u;
    {
        const bool branch_taken_0x11aa20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x11AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA20u;
        // 0x11aa24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa20) {
            ctx->pc = 0x11AA80u;
            goto label_11aa80;
        }
    }
    ctx->pc = 0x11AA28u;
    // 0x11aa28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11aa28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11aa2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11aa30:
    // 0x11aa30: 0x117043  sra         $t6, $s1, 1
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 17), 1));
label_11aa34:
    // 0x11aa34: 0x3c0f3fe0  lui         $t7, 0x3FE0
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16352 << 16));
    // 0x11aa38: 0x1cf6021  addu        $t4, $t6, $t7
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11aa3c: 0x135842  srl         $t3, $s3, 1
    ctx->pc = 0x11aa3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x11aa40: 0x127500  sll         $t6, $s2, 20
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x11aa44: 0x1707825  or          $t7, $t3, $s0
    ctx->pc = 0x11aa44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x11aa48: 0x322d0001  andi        $t5, $s1, 0x1
    ctx->pc = 0x11aa48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x11aa4c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x11aa50: 0x1ed580b  movn        $t3, $t7, $t5
    ctx->pc = 0x11aa50u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
    // 0x11aa54: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x11aa54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x11aa58: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x11aa58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x11aa5c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x11aa5cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x11aa60: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11aa64: 0xb703c  dsll32      $t6, $t3, 0
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11aa68: 0x2aca825  or          $s5, $s5, $t4
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 12));
    // 0x11aa6c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11aa6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11aa70: 0x2afa824  and         $s5, $s5, $t7
    ctx->pc = 0x11aa70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x11aa74: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11aa74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11aa78: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x11AA78u;
    {
        const bool branch_taken_0x11aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA78u;
        // 0x11aa7c: 0x2ae1025  or          $v0, $s5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa78) {
            ctx->pc = 0x11A7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a7fc;
        }
    }
    ctx->pc = 0x11AA80u;
label_11aa80:
    // 0x11aa80: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11AA80u;
    SET_GPR_U32(ctx, 31, 0x11AA88u);
    ctx->pc = 0x11AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA80u;
    // 0x11aa84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11AA80u, 0x11AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA88u;
label_11aa88:
    // 0x11aa88: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AA88u;
    {
        const bool branch_taken_0x11aa88 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA88u;
        // 0x11aa8c: 0x326f0001  andi        $t7, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa88) {
            ctx->pc = 0x11AAA8u;
            goto label_11aaa8;
        }
    }
    ctx->pc = 0x11AA90u;
    // 0x11aa90: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x11aa90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11aa94: 0x262e0001  addiu       $t6, $s1, 0x1
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11aa98: 0x26f7826  xor         $t7, $s3, $t7
    ctx->pc = 0x11aa98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x11aa9c: 0x1cf880a  movz        $s1, $t6, $t7
    ctx->pc = 0x11aa9cu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 14));
    // 0x11aaa0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11AAA0u;
    {
        const bool branch_taken_0x11aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAA0u;
        // 0x11aaa4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa0) {
            ctx->pc = 0x11AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aa30;
        }
    }
    ctx->pc = 0x11AAA8u;
label_11aaa8:
    // 0x11aaa8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x11AAA8u;
    {
        const bool branch_taken_0x11aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAA8u;
        // 0x11aaac: 0x26f9821  addu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa8) {
            ctx->pc = 0x11AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aa30;
        }
    }
    ctx->pc = 0x11AAB0u;
}
