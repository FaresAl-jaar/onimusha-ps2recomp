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

// Function: sub_00217F98
// Address: 0x217f98 - 0x218110
void sub_00217F98_0x217f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F98_0x217f98");
#endif

    switch (ctx->pc) {
        case 0x217f98u: goto label_217f98;
        case 0x217f9cu: goto label_217f9c;
        case 0x217fa0u: goto label_217fa0;
        case 0x217fa4u: goto label_217fa4;
        case 0x217fa8u: goto label_217fa8;
        case 0x217facu: goto label_217fac;
        case 0x217fb0u: goto label_217fb0;
        case 0x217fb4u: goto label_217fb4;
        case 0x217fb8u: goto label_217fb8;
        case 0x217fbcu: goto label_217fbc;
        case 0x217fc0u: goto label_217fc0;
        case 0x217fc4u: goto label_217fc4;
        case 0x217fc8u: goto label_217fc8;
        case 0x217fccu: goto label_217fcc;
        case 0x217fd0u: goto label_217fd0;
        case 0x217fd4u: goto label_217fd4;
        case 0x217fd8u: goto label_217fd8;
        case 0x217fdcu: goto label_217fdc;
        case 0x217fe0u: goto label_217fe0;
        case 0x217fe4u: goto label_217fe4;
        case 0x217fe8u: goto label_217fe8;
        case 0x217fecu: goto label_217fec;
        case 0x217ff0u: goto label_217ff0;
        case 0x217ff4u: goto label_217ff4;
        case 0x217ff8u: goto label_217ff8;
        case 0x217ffcu: goto label_217ffc;
        case 0x218000u: goto label_218000;
        case 0x218004u: goto label_218004;
        case 0x218008u: goto label_218008;
        case 0x21800cu: goto label_21800c;
        case 0x218010u: goto label_218010;
        case 0x218014u: goto label_218014;
        case 0x218018u: goto label_218018;
        case 0x21801cu: goto label_21801c;
        case 0x218020u: goto label_218020;
        case 0x218024u: goto label_218024;
        case 0x218028u: goto label_218028;
        case 0x21802cu: goto label_21802c;
        case 0x218030u: goto label_218030;
        case 0x218034u: goto label_218034;
        case 0x218038u: goto label_218038;
        case 0x21803cu: goto label_21803c;
        case 0x218040u: goto label_218040;
        case 0x218044u: goto label_218044;
        case 0x218048u: goto label_218048;
        case 0x21804cu: goto label_21804c;
        case 0x218050u: goto label_218050;
        case 0x218054u: goto label_218054;
        case 0x218058u: goto label_218058;
        case 0x21805cu: goto label_21805c;
        case 0x218060u: goto label_218060;
        case 0x218064u: goto label_218064;
        case 0x218068u: goto label_218068;
        case 0x21806cu: goto label_21806c;
        case 0x218070u: goto label_218070;
        case 0x218074u: goto label_218074;
        case 0x218078u: goto label_218078;
        case 0x21807cu: goto label_21807c;
        case 0x218080u: goto label_218080;
        case 0x218084u: goto label_218084;
        case 0x218088u: goto label_218088;
        case 0x21808cu: goto label_21808c;
        case 0x218090u: goto label_218090;
        case 0x218094u: goto label_218094;
        case 0x218098u: goto label_218098;
        case 0x21809cu: goto label_21809c;
        case 0x2180a0u: goto label_2180a0;
        case 0x2180a4u: goto label_2180a4;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180acu: goto label_2180ac;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180b4u: goto label_2180b4;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180bcu: goto label_2180bc;
        case 0x2180c0u: goto label_2180c0;
        case 0x2180c4u: goto label_2180c4;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180ccu: goto label_2180cc;
        case 0x2180d0u: goto label_2180d0;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180dcu: goto label_2180dc;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180ecu: goto label_2180ec;
        case 0x2180f0u: goto label_2180f0;
        case 0x2180f4u: goto label_2180f4;
        case 0x2180f8u: goto label_2180f8;
        case 0x2180fcu: goto label_2180fc;
        case 0x218100u: goto label_218100;
        case 0x218104u: goto label_218104;
        case 0x218108u: goto label_218108;
        case 0x21810cu: goto label_21810c;
        default: break;
    }

    ctx->pc = 0x217f98u;

label_217f98:
    // 0x217f98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_217f9c:
    // 0x217f9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x217f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_217fa0:
    // 0x217fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217fa4:
    // 0x217fa4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x217fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_217fa8:
    // 0x217fa8: 0x26110d30  addiu       $s1, $s0, 0xD30
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
label_217fac:
    // 0x217fac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x217facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_217fb0:
    // 0x217fb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x217fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_217fb4:
    // 0x217fb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x217fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_217fb8:
    // 0x217fb8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x217fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217fbc:
    // 0x217fbc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x217fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_217fc0:
    // 0x217fc0: 0x26030e48  addiu       $v1, $s0, 0xE48
    ctx->pc = 0x217fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
label_217fc4:
    // 0x217fc4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x217fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_217fc8:
    // 0x217fc8: 0x26060df0  addiu       $a2, $s0, 0xDF0
    ctx->pc = 0x217fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3568));
label_217fcc:
    // 0x217fcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x217fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_217fd0:
    // 0x217fd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x217fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_217fd4:
    // 0x217fd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_217fd8:
    if (ctx->pc == 0x217FD8u) {
        ctx->pc = 0x217FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FD4u;
        // 0x217fd8: 0x8e151fc0  lw          $s5, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FDCu;
        goto label_217fdc;
    }
    ctx->pc = 0x217FD4u;
    {
        const bool branch_taken_0x217fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FD4u;
        // 0x217fd8: 0x8e151fc0  lw          $s5, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fd4) {
            ctx->pc = 0x217FF0u;
            goto label_217ff0;
        }
    }
    ctx->pc = 0x217FDCu;
label_217fdc:
    // 0x217fdc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x217fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_217fe0:
    // 0x217fe0: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x217fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_217fe4:
    // 0x217fe4: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x217fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_217fe8:
    // 0x217fe8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x217fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_217fec:
    // 0x217fec: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_217ff0:
    // 0x217ff0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x217ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_217ff4:
    // 0x217ff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_217ff8:
    if (ctx->pc == 0x217FF8u) {
        ctx->pc = 0x217FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF4u;
        // 0x217ff8: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217FFCu;
        goto label_217ffc;
    }
    ctx->pc = 0x217FF4u;
    {
        const bool branch_taken_0x217ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FF4u;
        // 0x217ff8: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ff4) {
            ctx->pc = 0x218018u;
            goto label_218018;
        }
    }
    ctx->pc = 0x217FFCu;
label_217ffc:
    // 0x217ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218000:
    // 0x218000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218004:
    // 0x218004: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x218004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218008:
    // 0x218008: 0x40f809  jalr        $v0
label_21800c:
    if (ctx->pc == 0x21800Cu) {
        ctx->pc = 0x21800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218008u;
        // 0x21800c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218010u;
        goto label_218010;
    }
    ctx->pc = 0x218008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218010u);
        ctx->pc = 0x21800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218008u;
        // 0x21800c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218008u, 0x218010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218010u;
label_218010:
    // 0x218010: 0x10000037  b           . + 4 + (0x37 << 2)
label_218014:
    if (ctx->pc == 0x218014u) {
        ctx->pc = 0x218014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218010u;
        // 0x218014: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218018u;
        goto label_218018;
    }
    ctx->pc = 0x218010u;
    {
        const bool branch_taken_0x218010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218010u;
        // 0x218014: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218010) {
            ctx->pc = 0x2180F0u;
            goto label_2180f0;
        }
    }
    ctx->pc = 0x218018u;
label_218018:
    // 0x218018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21801c:
    // 0x21801c: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_218020:
    if (ctx->pc == 0x218020u) {
        ctx->pc = 0x218020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21801Cu;
        // 0x218020: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218024u;
        goto label_218024;
    }
    ctx->pc = 0x21801Cu;
    {
        const bool branch_taken_0x21801c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x21801c) {
            ctx->pc = 0x218020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21801Cu;
            // 0x218020: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218034u;
            goto label_218034;
        }
    }
    ctx->pc = 0x218024u;
label_218024:
    // 0x218024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_218028:
    // 0x218028: 0xc088076  jal         func_2201D8
label_21802c:
    if (ctx->pc == 0x21802Cu) {
        ctx->pc = 0x21802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218028u;
        // 0x21802c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218030u;
        goto label_218030;
    }
    ctx->pc = 0x218028u;
    SET_GPR_U32(ctx, 31, 0x218030u);
    ctx->pc = 0x21802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218028u;
    // 0x21802c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201D8u, 0x218028u, 0x218030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218030u;
label_218030:
    // 0x218030: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x218030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_218034:
    // 0x218034: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x218034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_218038:
    // 0x218038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21803c:
    if (ctx->pc == 0x21803Cu) {
        ctx->pc = 0x21803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218038u;
        // 0x21803c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218040u;
        goto label_218040;
    }
    ctx->pc = 0x218038u;
    {
        const bool branch_taken_0x218038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218038u;
        // 0x21803c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218038) {
            ctx->pc = 0x21804Cu;
            goto label_21804c;
        }
    }
    ctx->pc = 0x218040u;
label_218040:
    // 0x218040: 0xc08809e  jal         func_220278
label_218044:
    if (ctx->pc == 0x218044u) {
        ctx->pc = 0x218044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218040u;
        // 0x218044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218048u;
        goto label_218048;
    }
    ctx->pc = 0x218040u;
    SET_GPR_U32(ctx, 31, 0x218048u);
    ctx->pc = 0x218044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218040u;
    // 0x218044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220278u, 0x218040u, 0x218048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218048u;
label_218048:
    // 0x218048: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x218048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21804c:
    // 0x21804c: 0xc0886b6  jal         func_221AD8
label_218050:
    if (ctx->pc == 0x218050u) {
        ctx->pc = 0x218050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21804Cu;
        // 0x218050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218054u;
        goto label_218054;
    }
    ctx->pc = 0x21804Cu;
    SET_GPR_U32(ctx, 31, 0x218054u);
    ctx->pc = 0x218050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21804Cu;
    // 0x218050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AD8u, 0x21804Cu, 0x218054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218054u;
label_218054:
    // 0x218054: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x218054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_218058:
    // 0x218058: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21805c:
    if (ctx->pc == 0x21805Cu) {
        ctx->pc = 0x21805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218058u;
        // 0x21805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218060u;
        goto label_218060;
    }
    ctx->pc = 0x218058u;
    {
        const bool branch_taken_0x218058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218058u;
        // 0x21805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218058) {
            ctx->pc = 0x218078u;
            goto label_218078;
        }
    }
    ctx->pc = 0x218060u;
label_218060:
    // 0x218060: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_218064:
    // 0x218064: 0x8e040aa4  lw          $a0, 0xAA4($s0)
    ctx->pc = 0x218064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
label_218068:
    // 0x218068: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x218068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21806c:
    // 0x21806c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_218070:
    if (ctx->pc == 0x218070u) {
        ctx->pc = 0x218070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21806Cu;
        // 0x218070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218074u;
        goto label_218074;
    }
    ctx->pc = 0x21806Cu;
    {
        const bool branch_taken_0x21806c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21806Cu;
        // 0x218070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21806c) {
            ctx->pc = 0x2180ECu;
            goto label_2180ec;
        }
    }
    ctx->pc = 0x218074u;
label_218074:
    // 0x218074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218078:
    // 0x218078: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x218078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21807c:
    // 0x21807c: 0xc088228  jal         func_2208A0
label_218080:
    if (ctx->pc == 0x218080u) {
        ctx->pc = 0x218080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21807Cu;
        // 0x218080: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218084u;
        goto label_218084;
    }
    ctx->pc = 0x21807Cu;
    SET_GPR_U32(ctx, 31, 0x218084u);
    ctx->pc = 0x218080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21807Cu;
    // 0x218080: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x21807Cu, 0x218084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218084u;
label_218084:
    // 0x218084: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x218084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_218088:
    // 0x218088: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
label_21808c:
    if (ctx->pc == 0x21808Cu) {
        ctx->pc = 0x21808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218088u;
        // 0x21808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218090u;
        goto label_218090;
    }
    ctx->pc = 0x218088u;
    {
        const bool branch_taken_0x218088 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x21808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218088u;
        // 0x21808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218088) {
            ctx->pc = 0x2180ECu;
            goto label_2180ec;
        }
    }
    ctx->pc = 0x218090u;
label_218090:
    // 0x218090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218094:
    // 0x218094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x218094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218098:
    // 0x218098: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_21809c:
    // 0x21809c: 0xc086044  jal         func_218110
label_2180a0:
    if (ctx->pc == 0x2180A0u) {
        ctx->pc = 0x2180A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21809Cu;
        // 0x2180a0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180A4u;
        goto label_2180a4;
    }
    ctx->pc = 0x21809Cu;
    SET_GPR_U32(ctx, 31, 0x2180A4u);
    ctx->pc = 0x2180A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21809Cu;
    // 0x2180a0: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218110u, 0x21809Cu, 0x2180A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180A4u;
label_2180a4:
    // 0x2180a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2180a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2180a8:
    // 0x2180a8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2180ac:
    // 0x2180ac: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2180acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2180b0:
    // 0x2180b0: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x2180b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2180b4:
    // 0x2180b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2180b8:
    if (ctx->pc == 0x2180B8u) {
        ctx->pc = 0x2180B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180B4u;
        // 0x2180b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180BCu;
        goto label_2180bc;
    }
    ctx->pc = 0x2180B4u;
    {
        const bool branch_taken_0x2180b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2180b4) {
            ctx->pc = 0x2180B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2180B4u;
            // 0x2180b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2180BCu;
            goto label_2180bc;
        }
    }
    ctx->pc = 0x2180BCu;
label_2180bc:
    // 0x2180bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2180bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2180c0:
    // 0x2180c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2180c4:
    // 0x2180c4: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2180c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2180c8:
    // 0x2180c8: 0x3012  mflo        $a2
    ctx->pc = 0x2180c8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2180cc:
    // 0x2180cc: 0xc07d36e  jal         func_1F4DB8
label_2180d0:
    if (ctx->pc == 0x2180D0u) {
        ctx->pc = 0x2180D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180CCu;
        // 0x2180d0: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180D4u;
        goto label_2180d4;
    }
    ctx->pc = 0x2180CCu;
    SET_GPR_U32(ctx, 31, 0x2180D4u);
    ctx->pc = 0x2180D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180CCu;
    // 0x2180d0: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DB8u, 0x2180CCu, 0x2180D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180D4u;
label_2180d4:
    // 0x2180d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2180d8:
    if (ctx->pc == 0x2180D8u) {
        ctx->pc = 0x2180D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180D4u;
        // 0x2180d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180DCu;
        goto label_2180dc;
    }
    ctx->pc = 0x2180D4u;
    {
        const bool branch_taken_0x2180d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2180D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180D4u;
        // 0x2180d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180d4) {
            ctx->pc = 0x2180ECu;
            goto label_2180ec;
        }
    }
    ctx->pc = 0x2180DCu;
label_2180dc:
    // 0x2180dc: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x2180dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_2180e0:
    // 0x2180e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2180e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2180e4:
    // 0x2180e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2180e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2180e8:
    // 0x2180e8: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x2180e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_2180ec:
    // 0x2180ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2180ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2180f0:
    // 0x2180f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2180f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2180f4:
    // 0x2180f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2180f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2180f8:
    // 0x2180f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2180f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2180fc:
    // 0x2180fc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2180fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_218100:
    // 0x218100: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x218100u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_218104:
    // 0x218104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x218104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_218108:
    // 0x218108: 0x3e00008  jr          $ra
label_21810c:
    if (ctx->pc == 0x21810Cu) {
        ctx->pc = 0x21810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218108u;
        // 0x21810c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218110u;
        goto label_fallthrough_0x218108;
    }
    ctx->pc = 0x218108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218108u;
        // 0x21810c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x218108:
    ctx->pc = 0x218110u;
}
