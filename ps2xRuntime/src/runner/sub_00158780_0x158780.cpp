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

// Function: sub_00158780
// Address: 0x158780 - 0x1588d0
void sub_00158780_0x158780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158780_0x158780");
#endif

    switch (ctx->pc) {
        case 0x1587b0u: goto label_1587b0;
        case 0x1587d4u: goto label_1587d4;
        case 0x1587e0u: goto label_1587e0;
        case 0x158824u: goto label_158824;
        case 0x158830u: goto label_158830;
        default: break;
    }

    ctx->pc = 0x158780u;

    // 0x158780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x158784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x158788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15878c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158798: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x158798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x15879c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15879cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1587a0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1587A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587A0u;
        // 0x1587a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x1587F8u;
            goto label_1587f8;
        }
    }
    ctx->pc = 0x1587A8u;
    // 0x1587a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1587a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1587ac: 0x0  nop
    ctx->pc = 0x1587acu;
    // NOP
label_1587b0:
    // 0x1587b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1587b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1587b4: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x1587b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1587b8: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1587b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1587bc: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1587bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1587c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1587c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1587c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1587c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1587c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1587c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1587cc: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1587CCu;
    SET_GPR_U32(ctx, 31, 0x1587D4u);
    ctx->pc = 0x1587D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587CCu;
    // 0x1587d0: 0x244401a0  addiu       $a0, $v0, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1587CCu, 0x1587D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587D4u;
label_1587d4:
    // 0x1587d4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1587d8: 0xc059a04  jal         func_166810
    ctx->pc = 0x1587D8u;
    SET_GPR_U32(ctx, 31, 0x1587E0u);
    ctx->pc = 0x1587DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587D8u;
    // 0x1587dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166810u, 0x1587D8u, 0x1587E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587E0u;
label_1587e0:
    // 0x1587e0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1587e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1587e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1587e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1587e8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1587e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1587ec: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1587ECu;
    {
        const bool branch_taken_0x1587ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1587F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587ECu;
        // 0x1587f0: 0x261022b0  addiu       $s0, $s0, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587ec) {
            ctx->pc = 0x1587B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1587b0;
        }
    }
    ctx->pc = 0x1587F4u;
    // 0x1587f4: 0x0  nop
    ctx->pc = 0x1587f4u;
    // NOP
label_1587f8:
    // 0x1587f8: 0x86436838  lh          $v1, 0x6838($s2)
    ctx->pc = 0x1587f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26680)));
    // 0x1587fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1587FCu;
    {
        const bool branch_taken_0x1587fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587FCu;
        // 0x158800: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587fc) {
            ctx->pc = 0x158830u;
            goto label_158830;
        }
    }
    ctx->pc = 0x158804u;
    // 0x158804: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x158804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x158808: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x158808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x15880c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x15880cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x158810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158818: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x158818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15881c: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x15881Cu;
    SET_GPR_U32(ctx, 31, 0x158824u);
    ctx->pc = 0x158820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15881Cu;
    // 0x158820: 0x24444700  addiu       $a0, $v0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x15881Cu, 0x158824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158824u;
label_158824:
    // 0x158824: 0x26444580  addiu       $a0, $s2, 0x4580
    ctx->pc = 0x158824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17792));
    // 0x158828: 0xc059a04  jal         func_166810
    ctx->pc = 0x158828u;
    SET_GPR_U32(ctx, 31, 0x158830u);
    ctx->pc = 0x15882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158828u;
    // 0x15882c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166810u, 0x158828u, 0x158830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158830u;
label_158830:
    // 0x158830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158834: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x158834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158838: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x158838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x15883c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x15883Cu;
    {
        const bool branch_taken_0x15883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15883Cu;
        // 0x158840: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15883c) {
            ctx->pc = 0x1588B8u;
            goto label_1588b8;
        }
    }
    ctx->pc = 0x158844u;
    // 0x158844: 0x3c03b10f  lui         $v1, 0xB10F
    ctx->pc = 0x158844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45327 << 16));
    // 0x158848: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x158848u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x15884c: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x15884cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x158850: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x158854: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x158854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x158858: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15885c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x15885cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x158860: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x158860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x158864: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158868: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x158868u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x15886c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15886cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158870: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x158870u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x158874: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158878: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x158878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x15887c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158880: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x158884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158888: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x158888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x15888c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158890: 0xac27cec8  sw          $a3, -0x3138($at)
    ctx->pc = 0x158890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x158894: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158898: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x158898u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x15889c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x15889cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1588a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1588a4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1588a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1588a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1588a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1588ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1588acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1588b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1588b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1588b4: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x1588b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
label_1588b8:
    // 0x1588b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1588b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1588bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1588bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1588c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1588c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1588c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1588c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1588c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1588C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588C8u;
        // 0x1588cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588D0u;
}
