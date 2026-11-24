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

// Function: sub_0035F540
// Address: 0x35f540 - 0x35f9b8
void sub_0035F540_0x35f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F540_0x35f540");
#endif

    switch (ctx->pc) {
        case 0x35f584u: goto label_35f584;
        case 0x35f598u: goto label_35f598;
        case 0x35f5a4u: goto label_35f5a4;
        case 0x35f654u: goto label_35f654;
        case 0x35f664u: goto label_35f664;
        case 0x35f674u: goto label_35f674;
        case 0x35f684u: goto label_35f684;
        case 0x35f690u: goto label_35f690;
        case 0x35f698u: goto label_35f698;
        case 0x35f6b0u: goto label_35f6b0;
        case 0x35f6c0u: goto label_35f6c0;
        case 0x35f6e4u: goto label_35f6e4;
        case 0x35f6ecu: goto label_35f6ec;
        case 0x35f6f8u: goto label_35f6f8;
        case 0x35f708u: goto label_35f708;
        case 0x35f710u: goto label_35f710;
        case 0x35f750u: goto label_35f750;
        case 0x35f758u: goto label_35f758;
        case 0x35f760u: goto label_35f760;
        case 0x35f770u: goto label_35f770;
        case 0x35f778u: goto label_35f778;
        case 0x35f8d8u: goto label_35f8d8;
        case 0x35f8f4u: goto label_35f8f4;
        case 0x35f908u: goto label_35f908;
        case 0x35f91cu: goto label_35f91c;
        case 0x35f950u: goto label_35f950;
        case 0x35f970u: goto label_35f970;
        case 0x35f98cu: goto label_35f98c;
        case 0x35f9a8u: goto label_35f9a8;
        default: break;
    }

    ctx->pc = 0x35f540u;

    // 0x35f540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f54c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35f550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f554: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x35f554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x35f558: 0x10830109  beq         $a0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x35F558u;
    {
        const bool branch_taken_0x35f558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F558u;
        // 0x35f55c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f558) {
            ctx->pc = 0x35F980u;
            goto label_35f980;
        }
    }
    ctx->pc = 0x35F560u;
    // 0x35f560: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x35F560u;
    {
        const bool branch_taken_0x35f560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35f560) {
            ctx->pc = 0x35F6A8u;
            goto label_35f6a8;
        }
    }
    ctx->pc = 0x35F568u;
    // 0x35f568: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F568u;
    {
        const bool branch_taken_0x35f568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f568) {
            ctx->pc = 0x35F578u;
            goto label_35f578;
        }
    }
    ctx->pc = 0x35F570u;
    // 0x35f570: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x35F570u;
    {
        const bool branch_taken_0x35f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f570) {
            ctx->pc = 0x35F9A8u;
            goto label_35f9a8;
        }
    }
    ctx->pc = 0x35F578u;
label_35f578:
    // 0x35f578: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35f578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35f57c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x35F57Cu;
    SET_GPR_U32(ctx, 31, 0x35F584u);
    ctx->pc = 0x35F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F57Cu;
    // 0x35f580: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x35F57Cu, 0x35F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F584u;
label_35f584:
    // 0x35f584: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x35F584u;
    {
        const bool branch_taken_0x35f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F584u;
        // 0x35f588: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f584) {
            ctx->pc = 0x35F9A8u;
            goto label_35f9a8;
        }
    }
    ctx->pc = 0x35F58Cu;
    // 0x35f58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f590: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x35F590u;
    SET_GPR_U32(ctx, 31, 0x35F598u);
    ctx->pc = 0x35F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F590u;
    // 0x35f594: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x35F590u, 0x35F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F598u;
label_35f598:
    // 0x35f598: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x35f598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x35f59c: 0xc052260  jal         func_148980
    ctx->pc = 0x35F59Cu;
    SET_GPR_U32(ctx, 31, 0x35F5A4u);
    ctx->pc = 0x35F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F59Cu;
    // 0x35f5a0: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x35F59Cu, 0x35F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5A4u;
label_35f5a4:
    // 0x35f5a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f5a8: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x35f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x35f5ac: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x35f5acu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f5b0: 0x3c0b0ff0  lui         $t3, 0xFF0
    ctx->pc = 0x35f5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4080 << 16));
    // 0x35f5b4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f5b8: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x35f5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x35f5bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35f5c0: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x35f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x35f5c4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x35f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x35f5c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35f5cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f5d0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x35f5d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x35f5d4: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x35f5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f5d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f5dc: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x35f5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x35f5e0: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x35f5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x35f5e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f5e8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x35f5e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x35f5ec: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x35f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35f5f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f5f4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x35f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x35f5f8: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x35f5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f5fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f600: 0xac29cec0  sw          $t1, -0x3140($at)
    ctx->pc = 0x35f600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f604: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f608: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x35f608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x35f60c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f610: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x35f610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35f614: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f618: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x35f618u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35f61c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f620: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x35f620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x35f624: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x35f624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x35f628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f62c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f630: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x35f630u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
    // 0x35f634: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f638: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x35f638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x35f63c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f640: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x35f640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35f644: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x35f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x35f648: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f64c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x35F64Cu;
    SET_GPR_U32(ctx, 31, 0x35F654u);
    ctx->pc = 0x35F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F64Cu;
    // 0x35f650: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x35F64Cu, 0x35F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F654u;
label_35f654:
    // 0x35f654: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f658: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35f658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35f65c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x35F65Cu;
    SET_GPR_U32(ctx, 31, 0x35F664u);
    ctx->pc = 0x35F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F65Cu;
    // 0x35f660: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x35F65Cu, 0x35F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F664u;
label_35f664:
    // 0x35f664: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f668: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x35f668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35f66c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x35F66Cu;
    SET_GPR_U32(ctx, 31, 0x35F674u);
    ctx->pc = 0x35F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F66Cu;
    // 0x35f670: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x35F66Cu, 0x35F674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F674u;
label_35f674:
    // 0x35f674: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f678: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x35f678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35f67c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x35F67Cu;
    SET_GPR_U32(ctx, 31, 0x35F684u);
    ctx->pc = 0x35F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F67Cu;
    // 0x35f680: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x35F67Cu, 0x35F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F684u;
label_35f684:
    // 0x35f684: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x35f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x35f688: 0xc054d98  jal         func_153660
    ctx->pc = 0x35F688u;
    SET_GPR_U32(ctx, 31, 0x35F690u);
    ctx->pc = 0x35F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F688u;
    // 0x35f68c: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x35F688u, 0x35F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F690u;
label_35f690:
    // 0x35f690: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x35F690u;
    SET_GPR_U32(ctx, 31, 0x35F698u);
    ctx->pc = 0x35F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F690u;
    // 0x35f694: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x35F690u, 0x35F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F698u;
label_35f698:
    // 0x35f698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f69c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x35F69Cu;
    {
        const bool branch_taken_0x35f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F69Cu;
        // 0x35f6a0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f69c) {
            ctx->pc = 0x35F9A8u;
            goto label_35f9a8;
        }
    }
    ctx->pc = 0x35F6A4u;
    // 0x35f6a4: 0x0  nop
    ctx->pc = 0x35f6a4u;
    // NOP
label_35f6a8:
    // 0x35f6a8: 0xc05551c  jal         func_155470
    ctx->pc = 0x35F6A8u;
    SET_GPR_U32(ctx, 31, 0x35F6B0u);
    ctx->pc = 0x35F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6A8u;
    // 0x35f6ac: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x35F6A8u, 0x35F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6B0u;
label_35f6b0:
    // 0x35f6b0: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x35F6B0u;
    {
        const bool branch_taken_0x35f6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6B0u;
        // 0x35f6b4: 0x3c040093  lui         $a0, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6b0) {
            ctx->pc = 0x35F9A8u;
            goto label_35f9a8;
        }
    }
    ctx->pc = 0x35F6B8u;
    // 0x35f6b8: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x35F6B8u;
    SET_GPR_U32(ctx, 31, 0x35F6C0u);
    ctx->pc = 0x35F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6B8u;
    // 0x35f6bc: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x35F6B8u, 0x35F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6C0u;
label_35f6c0:
    // 0x35f6c0: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x35f6c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35f6c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35f6c8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x35f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x35f6cc: 0x2442a140  addiu       $v0, $v0, -0x5EC0
    ctx->pc = 0x35f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943040));
    // 0x35f6d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x35f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35f6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f6d8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x35f6d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35f6dc: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x35F6DCu;
    SET_GPR_U32(ctx, 31, 0x35F6E4u);
    ctx->pc = 0x35F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6DCu;
    // 0x35f6e0: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x35F6DCu, 0x35F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6E4u;
label_35f6e4:
    // 0x35f6e4: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x35F6E4u;
    SET_GPR_U32(ctx, 31, 0x35F6ECu);
    ctx->pc = 0x35F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6E4u;
    // 0x35f6e8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x35F6E4u, 0x35F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6ECu;
label_35f6ec:
    // 0x35f6ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35F6ECu;
    {
        const bool branch_taken_0x35f6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6ec) {
            ctx->pc = 0x35F718u;
            goto label_35f718;
        }
    }
    ctx->pc = 0x35F6F4u;
    // 0x35f6f4: 0x0  nop
    ctx->pc = 0x35f6f4u;
    // NOP
label_35f6f8:
    // 0x35f6f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f6fc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x35f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x35f700: 0xc04c918  jal         func_132460
    ctx->pc = 0x35F700u;
    SET_GPR_U32(ctx, 31, 0x35F708u);
    ctx->pc = 0x35F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F700u;
    // 0x35f704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x35F700u, 0x35F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F708u;
label_35f708:
    // 0x35f708: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x35F708u;
    SET_GPR_U32(ctx, 31, 0x35F710u);
    ctx->pc = 0x35F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F708u;
    // 0x35f70c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x35F708u, 0x35F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F710u;
label_35f710:
    // 0x35f710: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35F710u;
    {
        const bool branch_taken_0x35f710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f710) {
            ctx->pc = 0x35F6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f6f8;
        }
    }
    ctx->pc = 0x35F718u;
label_35f718:
    // 0x35f718: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f71c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x35f71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x35f720: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35f724: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x35f724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x35f728: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x35f728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x35f72c: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x35f730: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x35f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x35f734: 0x24c6bb80  addiu       $a2, $a2, -0x4480
    ctx->pc = 0x35f734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949760));
    // 0x35f738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35f73c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x35f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35f740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f744: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x35f744u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35f748: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x35F748u;
    SET_GPR_U32(ctx, 31, 0x35F750u);
    ctx->pc = 0x35F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F748u;
    // 0x35f74c: 0x24e7bb60  addiu       $a3, $a3, -0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x35F748u, 0x35F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F750u;
label_35f750:
    // 0x35f750: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x35F750u;
    SET_GPR_U32(ctx, 31, 0x35F758u);
    ctx->pc = 0x35F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F750u;
    // 0x35f754: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x35F750u, 0x35F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F758u;
label_35f758:
    // 0x35f758: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F758u;
    {
        const bool branch_taken_0x35f758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f758) {
            ctx->pc = 0x35F780u;
            goto label_35f780;
        }
    }
    ctx->pc = 0x35F760u;
label_35f760:
    // 0x35f760: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f764: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x35f764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x35f768: 0xc04c918  jal         func_132460
    ctx->pc = 0x35F768u;
    SET_GPR_U32(ctx, 31, 0x35F770u);
    ctx->pc = 0x35F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F768u;
    // 0x35f76c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x35F768u, 0x35F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F770u;
label_35f770:
    // 0x35f770: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x35F770u;
    SET_GPR_U32(ctx, 31, 0x35F778u);
    ctx->pc = 0x35F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F770u;
    // 0x35f774: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x35F770u, 0x35F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F778u;
label_35f778:
    // 0x35f778: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35F778u;
    {
        const bool branch_taken_0x35f778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f778) {
            ctx->pc = 0x35F760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f760;
        }
    }
    ctx->pc = 0x35F780u;
label_35f780:
    // 0x35f780: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f784: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x35f784u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x35f788: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x35f788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x35f78c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x35f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x35f790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f794: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f798: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x35f798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x35f79c: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x35f79cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35f7a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7a4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x35f7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x35f7a8: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f7ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7b0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x35f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x35f7b4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f7b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7bc: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x35f7bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x35f7c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7c4: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x35f7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35f7c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7cc: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f7ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f7d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7d4: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f7dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7e0: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f7e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f7e4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x35f7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x35f7e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7ec: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f7ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f7f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7f4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f7f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f7fc: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f804: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f808: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f80c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x35f80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x35f810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f814: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f818: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f81c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f820: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f824: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f828: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f82c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f830: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f834: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x35f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x35f838: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f83c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f83cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f840: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f844: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f848: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f84c: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f850: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f854: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f858: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f85c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x35f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35f860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f864: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f868: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f86c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f870: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f874: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f878: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f87c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f880: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f884: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x35f884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x35f888: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f88c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f88cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f894: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f89c: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35f8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f8a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f8a8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x35f8a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x35f8ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35f8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35f8b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f8b4: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x35f8b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x35f8b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f8bc: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x35f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x35f8c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f8c4: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x35f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x35f8c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35f8cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35f8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35f8d0: 0xc0d839c  jal         func_360E70
    ctx->pc = 0x35F8D0u;
    SET_GPR_U32(ctx, 31, 0x35F8D8u);
    ctx->pc = 0x35F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8D0u;
    // 0x35f8d4: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360E70u, 0x35F8D0u, 0x35F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8D8u;
label_35f8d8:
    // 0x35f8d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f8dc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x35f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x35f8e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35f8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x35f8e4: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x35f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x35f8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8ec: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x35F8ECu;
    SET_GPR_U32(ctx, 31, 0x35F8F4u);
    ctx->pc = 0x35F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8ECu;
    // 0x35f8f0: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x35F8ECu, 0x35F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8F4u;
label_35f8f4:
    // 0x35f8f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x35f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x35f8f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35f8fc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x35f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x35f900: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x35F900u;
    SET_GPR_U32(ctx, 31, 0x35F908u);
    ctx->pc = 0x35F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F900u;
    // 0x35f904: 0x24060e0e  addiu       $a2, $zero, 0xE0E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x35F900u, 0x35F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F908u;
label_35f908:
    // 0x35f908: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35f908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35f90c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x35f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35f910: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x35f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x35f914: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x35F914u;
    SET_GPR_U32(ctx, 31, 0x35F91Cu);
    ctx->pc = 0x35F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F914u;
    // 0x35f918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x35F914u, 0x35F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F91Cu;
label_35f91c:
    // 0x35f91c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f920: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35f920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35f924: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x35f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x35f928: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x35f928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x35f92c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x35f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x35f930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f934: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x35f934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x35f938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35f938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f93c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35f93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35f940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f944: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x35f944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f948: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x35F948u;
    SET_GPR_U32(ctx, 31, 0x35F950u);
    ctx->pc = 0x35F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F948u;
    // 0x35f94c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x35F948u, 0x35F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F950u;
label_35f950:
    // 0x35f950: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35f950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35f954: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x35f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35f958: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x35f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x35f95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35f960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35f964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f968: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x35F968u;
    SET_GPR_U32(ctx, 31, 0x35F970u);
    ctx->pc = 0x35F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F968u;
    // 0x35f96c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x35F968u, 0x35F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F970u;
label_35f970:
    // 0x35f970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35F974u;
    {
        const bool branch_taken_0x35f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F974u;
        // 0x35f978: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f974) {
            ctx->pc = 0x35F9A8u;
            goto label_35f9a8;
        }
    }
    ctx->pc = 0x35F97Cu;
    // 0x35f97c: 0x0  nop
    ctx->pc = 0x35f97cu;
    // NOP
label_35f980:
    // 0x35f980: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x35f980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35f984: 0xc063d48  jal         func_18F520
    ctx->pc = 0x35F984u;
    SET_GPR_U32(ctx, 31, 0x35F98Cu);
    ctx->pc = 0x35F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F984u;
    // 0x35f988: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x35F984u, 0x35F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F98Cu;
label_35f98c:
    // 0x35f98c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35F98Cu;
    {
        const bool branch_taken_0x35f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f98c) {
            ctx->pc = 0x35F9A0u;
            goto label_35f9a0;
        }
    }
    ctx->pc = 0x35F994u;
    // 0x35f994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f998: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x35f998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f99c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x35f99cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_35f9a0:
    // 0x35f9a0: 0xc0d8028  jal         func_3600A0
    ctx->pc = 0x35F9A0u;
    SET_GPR_U32(ctx, 31, 0x35F9A8u);
    ctx->pc = 0x35F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9A0u;
    // 0x35f9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3600A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3600A0u, 0x35F9A0u, 0x35F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9A8u;
label_35f9a8:
    // 0x35f9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f9ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35f9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9B0u;
        // 0x35f9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F9B8u;
}
