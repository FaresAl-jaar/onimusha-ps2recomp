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

// Function: sub_00275770
// Address: 0x275770 - 0x2758a0
void sub_00275770_0x275770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275770_0x275770");
#endif

    switch (ctx->pc) {
        case 0x27579cu: goto label_27579c;
        case 0x2757acu: goto label_2757ac;
        case 0x2757c0u: goto label_2757c0;
        case 0x2757d8u: goto label_2757d8;
        case 0x2757ecu: goto label_2757ec;
        case 0x2757fcu: goto label_2757fc;
        case 0x27580cu: goto label_27580c;
        case 0x27584cu: goto label_27584c;
        case 0x27586cu: goto label_27586c;
        case 0x27587cu: goto label_27587c;
        default: break;
    }

    ctx->pc = 0x275770u;

    // 0x275770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x275770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x275774: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x275774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x275778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x275778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27577c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275780: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x275780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275788: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x275788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27578c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275790: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x275790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x275794: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x275794u;
    SET_GPR_U32(ctx, 31, 0x27579Cu);
    ctx->pc = 0x275798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275794u;
    // 0x275798: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x275794u, 0x27579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27579Cu;
label_27579c:
    // 0x27579c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x27579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2757a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2757a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2757a4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2757A4u;
    SET_GPR_U32(ctx, 31, 0x2757ACu);
    ctx->pc = 0x2757A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757A4u;
    // 0x2757a8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2757A4u, 0x2757ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757ACu;
label_2757ac:
    // 0x2757ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2757acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757b0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2757B0u;
    {
        const bool branch_taken_0x2757b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2757B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757B0u;
        // 0x2757b4: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757b0) {
            ctx->pc = 0x2757C8u;
            goto label_2757c8;
        }
    }
    ctx->pc = 0x2757B8u;
    // 0x2757b8: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2757B8u;
    SET_GPR_U32(ctx, 31, 0x2757C0u);
    ctx->pc = 0x2757BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757B8u;
    // 0x2757bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2757B8u, 0x2757C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757C0u;
label_2757c0:
    // 0x2757c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2757C0u;
    {
        const bool branch_taken_0x2757c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2757C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757C0u;
        // 0x2757c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757c0) {
            ctx->pc = 0x275880u;
            goto label_275880;
        }
    }
    ctx->pc = 0x2757C8u;
label_2757c8:
    // 0x2757c8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2757c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2757cc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2757ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2757d0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2757D0u;
    SET_GPR_U32(ctx, 31, 0x2757D8u);
    ctx->pc = 0x2757D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757D0u;
    // 0x2757d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2757D0u, 0x2757D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757D8u;
label_2757d8:
    // 0x2757d8: 0x8e450190  lw          $a1, 0x190($s2)
    ctx->pc = 0x2757d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x2757dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2757dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757e0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2757e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2757e4: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2757E4u;
    SET_GPR_U32(ctx, 31, 0x2757ECu);
    ctx->pc = 0x2757E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757E4u;
    // 0x2757e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2757E4u, 0x2757ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757ECu;
label_2757ec:
    // 0x2757ec: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x2757ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2757f0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2757f4: 0xc09d524  jal         func_275490
    ctx->pc = 0x2757F4u;
    SET_GPR_U32(ctx, 31, 0x2757FCu);
    ctx->pc = 0x2757F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757F4u;
    // 0x2757f8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2757F4u, 0x2757FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757FCu;
label_2757fc:
    // 0x2757fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2757FCu;
    {
        const bool branch_taken_0x2757fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757FCu;
        // 0x275800: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757fc) {
            ctx->pc = 0x275818u;
            goto label_275818;
        }
    }
    ctx->pc = 0x275804u;
    // 0x275804: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x275804u;
    SET_GPR_U32(ctx, 31, 0x27580Cu);
    ctx->pc = 0x275808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275804u;
    // 0x275808: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x275804u, 0x27580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27580Cu;
label_27580c:
    // 0x27580c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27580Cu;
    {
        const bool branch_taken_0x27580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27580Cu;
        // 0x275810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27580c) {
            ctx->pc = 0x275880u;
            goto label_275880;
        }
    }
    ctx->pc = 0x275814u;
    // 0x275814: 0x0  nop
    ctx->pc = 0x275814u;
    // NOP
label_275818:
    // 0x275818: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x275818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x27581c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275820: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x275820u;
    {
        const bool branch_taken_0x275820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x275820) {
            ctx->pc = 0x275858u;
            goto label_275858;
        }
    }
    ctx->pc = 0x275828u;
    // 0x275828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275828u;
    {
        const bool branch_taken_0x275828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275828) {
            ctx->pc = 0x275838u;
            goto label_275838;
        }
    }
    ctx->pc = 0x275830u;
    // 0x275830: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275830u;
    {
        const bool branch_taken_0x275830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275830) {
            ctx->pc = 0x275870u;
            goto label_275870;
        }
    }
    ctx->pc = 0x275838u;
label_275838:
    // 0x275838: 0x9284000d  lbu         $a0, 0xD($s4)
    ctx->pc = 0x275838u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x27583c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275840: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x275840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275844: 0xc0aa580  jal         func_2A9600
    ctx->pc = 0x275844u;
    SET_GPR_U32(ctx, 31, 0x27584Cu);
    ctx->pc = 0x275848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275844u;
    // 0x275848: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9600u, 0x275844u, 0x27584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27584Cu;
label_27584c:
    // 0x27584c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27584Cu;
    {
        const bool branch_taken_0x27584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27584Cu;
        // 0x275850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27584c) {
            ctx->pc = 0x275870u;
            goto label_275870;
        }
    }
    ctx->pc = 0x275854u;
    // 0x275854: 0x0  nop
    ctx->pc = 0x275854u;
    // NOP
label_275858:
    // 0x275858: 0x9284000d  lbu         $a0, 0xD($s4)
    ctx->pc = 0x275858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x27585c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27585cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275860: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x275860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275864: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x275864u;
    SET_GPR_U32(ctx, 31, 0x27586Cu);
    ctx->pc = 0x275868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275864u;
    // 0x275868: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x275864u, 0x27586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27586Cu;
label_27586c:
    // 0x27586c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27586cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275870:
    // 0x275870: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x275874: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x275874u;
    SET_GPR_U32(ctx, 31, 0x27587Cu);
    ctx->pc = 0x275878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275874u;
    // 0x275878: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x275874u, 0x27587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27587Cu;
label_27587c:
    // 0x27587c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27587cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275880:
    // 0x275880: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x275880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27588c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27588cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275898: 0x3e00008  jr          $ra
    ctx->pc = 0x275898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275898u;
        // 0x27589c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2758A0u;
}
