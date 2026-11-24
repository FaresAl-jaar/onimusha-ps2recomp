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

// Function: sub_002DC4E0
// Address: 0x2dc4e0 - 0x2dc810
void sub_002DC4E0_0x2dc4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC4E0_0x2dc4e0");
#endif

    switch (ctx->pc) {
        case 0x2dc53cu: goto label_2dc53c;
        case 0x2dc5a8u: goto label_2dc5a8;
        case 0x2dc5d4u: goto label_2dc5d4;
        case 0x2dc5f8u: goto label_2dc5f8;
        case 0x2dc610u: goto label_2dc610;
        case 0x2dc640u: goto label_2dc640;
        case 0x2dc688u: goto label_2dc688;
        case 0x2dc6c4u: goto label_2dc6c4;
        case 0x2dc760u: goto label_2dc760;
        case 0x2dc784u: goto label_2dc784;
        case 0x2dc7e0u: goto label_2dc7e0;
        default: break;
    }

    ctx->pc = 0x2dc4e0u;

    // 0x2dc4e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dc4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2dc4e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dc4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2dc4e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dc4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2dc4ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dc4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2dc4f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dc4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dc4f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dc4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dc4f8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2dc4f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dc500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dc504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dc508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc510: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2dc514: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x2dc514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2dc518: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC518u;
    {
        const bool branch_taken_0x2dc518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC518u;
        // 0x2dc51c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc518) {
            ctx->pc = 0x2DC548u;
            goto label_2dc548;
        }
    }
    ctx->pc = 0x2DC520u;
    // 0x2dc520: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2dc524: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DC524u;
    {
        const bool branch_taken_0x2dc524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc524) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC52Cu;
    // 0x2dc52c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2dc530: 0x80460005  lb          $a2, 0x5($v0)
    ctx->pc = 0x2dc530u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2dc534: 0xc0b7204  jal         func_2DC810
    ctx->pc = 0x2DC534u;
    SET_GPR_U32(ctx, 31, 0x2DC53Cu);
    ctx->pc = 0x2DC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC534u;
    // 0x2dc538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC810u, 0x2DC534u, 0x2DC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC53Cu;
label_2dc53c:
    // 0x2dc53c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DC53Cu;
    {
        const bool branch_taken_0x2dc53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc53c) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC544u;
    // 0x2dc544: 0x0  nop
    ctx->pc = 0x2dc544u;
    // NOP
label_2dc548:
    // 0x2dc548: 0x86c60054  lh          $a2, 0x54($s6)
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2dc54c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc550: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2dc550u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2dc554: 0x0  nop
    ctx->pc = 0x2dc554u;
    // NOP
    // 0x2dc558: 0x0  nop
    ctx->pc = 0x2dc558u;
    // NOP
    // 0x2dc55c: 0x1810  mfhi        $v1
    ctx->pc = 0x2dc55cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2dc560: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DC560u;
    {
        const bool branch_taken_0x2dc560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc560) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC568u;
    // 0x2dc568: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x2dc568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x2dc56c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2dc56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2dc570: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC570u;
    {
        const bool branch_taken_0x2dc570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc570) {
            ctx->pc = 0x2DC5B0u;
            goto label_2dc5b0;
        }
    }
    ctx->pc = 0x2DC578u;
    // 0x2dc578: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x2dc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2dc57c: 0x86c60080  lh          $a2, 0x80($s6)
    ctx->pc = 0x2dc57cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x2dc580: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x2dc580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x2dc584: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x2dc584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2dc588: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC588u;
    {
        const bool branch_taken_0x2dc588 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc588) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC590u;
    // 0x2dc590: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dc594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc598: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x2dc598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2dc59c: 0xa6c20080  sh          $v0, 0x80($s6)
    ctx->pc = 0x2dc59cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc5a0: 0xc0b7204  jal         func_2DC810
    ctx->pc = 0x2DC5A0u;
    SET_GPR_U32(ctx, 31, 0x2DC5A8u);
    ctx->pc = 0x2DC5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5A0u;
    // 0x2dc5a4: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC810u, 0x2DC5A0u, 0x2DC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5A8u;
label_2dc5a8:
    // 0x2dc5a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC5A8u;
    {
        const bool branch_taken_0x2dc5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5a8) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC5B0u;
label_2dc5b0:
    // 0x2dc5b0: 0x86c30080  lh          $v1, 0x80($s6)
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x2dc5b4: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC5B4u;
    {
        const bool branch_taken_0x2dc5b4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2dc5b4) {
            ctx->pc = 0x2DC5D8u;
            goto label_2dc5d8;
        }
    }
    ctx->pc = 0x2DC5BCu;
    // 0x2dc5bc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc5c0: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x2dc5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2dc5c4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2dc5c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2dc5c8: 0xa6c20080  sh          $v0, 0x80($s6)
    ctx->pc = 0x2dc5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc5cc: 0xc0b7204  jal         func_2DC810
    ctx->pc = 0x2DC5CCu;
    SET_GPR_U32(ctx, 31, 0x2DC5D4u);
    ctx->pc = 0x2DC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5CCu;
    // 0x2dc5d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC810u, 0x2DC5CCu, 0x2DC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5D4u;
label_2dc5d4:
    // 0x2dc5d4: 0x0  nop
    ctx->pc = 0x2dc5d4u;
    // NOP
label_2dc5d8:
    // 0x2dc5d8: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x2dc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2dc5dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2dc5dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dc5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5e4: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2dc5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc5e8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dc5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc5ec: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x2DC5ECu;
    {
        const bool branch_taken_0x2dc5ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5ECu;
        // 0x2dc5f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5ec) {
            ctx->pc = 0x2DC728u;
            goto label_2dc728;
        }
    }
    ctx->pc = 0x2DC5F4u;
    // 0x2dc5f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dc5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc5f8:
    // 0x2dc5f8: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x2dc5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x2dc5fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dc5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc600: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dc600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc604: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dc604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc608: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DC608u;
    {
        const bool branch_taken_0x2dc608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC608u;
        // 0x2dc60c: 0x283f018  mult        $fp, $s4, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc608) {
            ctx->pc = 0x2DC710u;
            goto label_2dc710;
        }
    }
    ctx->pc = 0x2DC610u;
label_2dc610:
    // 0x2dc610: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x2dc614: 0x3d32821  addu        $a1, $fp, $s3
    ctx->pc = 0x2dc614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2dc618: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2dc618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc61c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2dc61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dc620: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2dc624: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2dc624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dc628: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x2dc628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dc62c: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x2dc62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc630: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DC630u;
    {
        const bool branch_taken_0x2dc630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC630u;
        // 0x2dc634: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc630) {
            ctx->pc = 0x2DC6F8u;
            goto label_2dc6f8;
        }
    }
    ctx->pc = 0x2DC638u;
    // 0x2dc638: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2DC638u;
    SET_GPR_U32(ctx, 31, 0x2DC640u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2DC638u, 0x2DC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC640u;
label_2dc640:
    // 0x2dc640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC640u;
    {
        const bool branch_taken_0x2dc640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC640u;
        // 0x2dc644: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc640) {
            ctx->pc = 0x2DC650u;
            goto label_2dc650;
        }
    }
    ctx->pc = 0x2DC648u;
    // 0x2dc648: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DC648u;
    {
        const bool branch_taken_0x2dc648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC648u;
        // 0x2dc64c: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc648) {
            ctx->pc = 0x2DC6F8u;
            goto label_2dc6f8;
        }
    }
    ctx->pc = 0x2DC650u;
label_2dc650:
    // 0x2dc650: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x2dc650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x2dc654: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2dc654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2dc658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dc658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dc65c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC65Cu;
    {
        const bool branch_taken_0x2dc65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc65c) {
            ctx->pc = 0x2DC6B0u;
            goto label_2dc6b0;
        }
    }
    ctx->pc = 0x2DC664u;
    // 0x2dc664: 0x86260026  lh          $a2, 0x26($s1)
    ctx->pc = 0x2dc664u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2dc668: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC668u;
    {
        const bool branch_taken_0x2dc668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC668u;
        // 0x2dc66c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc668) {
            ctx->pc = 0x2DC67Cu;
            goto label_2dc67c;
        }
    }
    ctx->pc = 0x2DC670u;
    // 0x2dc670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc674: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC674u;
    {
        const bool branch_taken_0x2dc674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC674u;
        // 0x2dc678: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc674) {
            ctx->pc = 0x2DC68Cu;
            goto label_2dc68c;
        }
    }
    ctx->pc = 0x2DC67Cu;
label_2dc67c:
    // 0x2dc67c: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x2dc67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc680: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x2DC680u;
    SET_GPR_U32(ctx, 31, 0x2DC688u);
    ctx->pc = 0x2DC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC680u;
    // 0x2dc684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x2DC680u, 0x2DC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC688u;
label_2dc688:
    // 0x2dc688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dc68c:
    // 0x2dc68c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2dc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2dc690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dc690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc694: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dc694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dc698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dc698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dc69c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2dc69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2dc6a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dc6a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dc6a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dc6a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dc6a8: 0x0  nop
    ctx->pc = 0x2dc6a8u;
    // NOP
    // 0x2dc6ac: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x2dc6acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
label_2dc6b0:
    // 0x2dc6b0: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x2dc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x2dc6b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dc6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6bc: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x2DC6BCu;
    SET_GPR_U32(ctx, 31, 0x2DC6C4u);
    ctx->pc = 0x2DC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6BCu;
    // 0x2dc6c0: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x2DC6BCu, 0x2DC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6C4u;
label_2dc6c4:
    // 0x2dc6c4: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x2dc6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc6c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dc6cc: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x2dc6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc6d0: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc6d4: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x2dc6d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2dc6d8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2dc6d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dc6dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC6DCu;
    {
        const bool branch_taken_0x2dc6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6DCu;
        // 0x2dc6e0: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6dc) {
            ctx->pc = 0x2DC6F0u;
            goto label_2dc6f0;
        }
    }
    ctx->pc = 0x2DC6E4u;
    // 0x2dc6e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC6E4u;
    {
        const bool branch_taken_0x2dc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6E4u;
        // 0x2dc6e8: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6e4) {
            ctx->pc = 0x2DC6F8u;
            goto label_2dc6f8;
        }
    }
    ctx->pc = 0x2DC6ECu;
    // 0x2dc6ec: 0x0  nop
    ctx->pc = 0x2dc6ecu;
    // NOP
label_2dc6f0:
    // 0x2dc6f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dc6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dc6f4: 0x0  nop
    ctx->pc = 0x2dc6f4u;
    // NOP
label_2dc6f8:
    // 0x2dc6f8: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x2dc6fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dc6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2dc700: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dc700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc704: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2dc704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc708: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2DC708u;
    {
        const bool branch_taken_0x2dc708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc708) {
            ctx->pc = 0x2DC610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc610;
        }
    }
    ctx->pc = 0x2DC710u;
label_2dc710:
    // 0x2dc710: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x2dc710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2dc714: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2dc714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dc718: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x2dc718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc71c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2dc71cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc720: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2DC720u;
    {
        const bool branch_taken_0x2dc720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC720u;
        // 0x2dc724: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc720) {
            ctx->pc = 0x2DC5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc5f8;
        }
    }
    ctx->pc = 0x2DC728u;
label_2dc728:
    // 0x2dc728: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x2dc728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x2dc72c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x2dc72cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2dc730: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2dc730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2dc734: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC734u;
    {
        const bool branch_taken_0x2dc734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC734u;
        // 0x2dc738: 0x2f2b821  addu        $s7, $s7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc734) {
            ctx->pc = 0x2DC768u;
            goto label_2dc768;
        }
    }
    ctx->pc = 0x2DC73Cu;
    // 0x2dc73c: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x2dc73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2dc740: 0x86c40080  lh          $a0, 0x80($s6)
    ctx->pc = 0x2dc740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x2dc744: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2dc744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dc748: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2DC748u;
    {
        const bool branch_taken_0x2dc748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc748) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC750u;
    // 0x2dc750: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2DC750u;
    {
        const bool branch_taken_0x2dc750 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC750u;
        // 0x2dc754: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc750) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC758u;
    // 0x2dc758: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DC758u;
    SET_GPR_U32(ctx, 31, 0x2DC760u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DC758u, 0x2DC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC760u;
label_2dc760:
    // 0x2dc760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC760u;
    {
        const bool branch_taken_0x2dc760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc760) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC768u;
label_2dc768:
    // 0x2dc768: 0x86c30080  lh          $v1, 0x80($s6)
    ctx->pc = 0x2dc768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x2dc76c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC76Cu;
    {
        const bool branch_taken_0x2dc76c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2dc76c) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC774u;
    // 0x2dc774: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC774u;
    {
        const bool branch_taken_0x2dc774 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC774u;
        // 0x2dc778: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc774) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC77Cu;
    // 0x2dc77c: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2DC77Cu;
    SET_GPR_U32(ctx, 31, 0x2DC784u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2DC77Cu, 0x2DC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC784u;
label_2dc784:
    // 0x2dc784: 0x0  nop
    ctx->pc = 0x2dc784u;
    // NOP
label_2dc788:
    // 0x2dc788: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x2dc788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x2dc78c: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x2dc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2dc790: 0x90840006  lbu         $a0, 0x6($a0)
    ctx->pc = 0x2dc790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2dc794: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2dc794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2dc798: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2dc798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2dc79c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dc7a0: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2dc7a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2dc7a4: 0x7ec30040  sq          $v1, 0x40($s6)
    ctx->pc = 0x2dc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 3));
    // 0x2dc7a8: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x2dc7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2dc7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dc7b0: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x2dc7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc7b4: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x2dc7b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2dc7b8: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x2dc7b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x2dc7bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC7BCu;
    {
        const bool branch_taken_0x2dc7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7BCu;
        // 0x2dc7c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7bc) {
            ctx->pc = 0x2DC7C8u;
            goto label_2dc7c8;
        }
    }
    ctx->pc = 0x2DC7C4u;
    // 0x2dc7c4: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x2dc7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
label_2dc7c8:
    // 0x2dc7c8: 0x92c30050  lbu         $v1, 0x50($s6)
    ctx->pc = 0x2dc7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2dc7cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2dc7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2dc7d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC7D0u;
    {
        const bool branch_taken_0x2dc7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7D0u;
        // 0x2dc7d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7d0) {
            ctx->pc = 0x2DC7E0u;
            goto label_2dc7e0;
        }
    }
    ctx->pc = 0x2DC7D8u;
    // 0x2dc7d8: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2DC7D8u;
    SET_GPR_U32(ctx, 31, 0x2DC7E0u);
    ctx->pc = 0x2DC7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC7D8u;
    // 0x2dc7dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2DC7D8u, 0x2DC7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7E0u;
label_2dc7e0:
    // 0x2dc7e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dc7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dc7e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dc7e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc7e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dc7e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc7ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dc7ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc7f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dc7f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc808: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC808u;
        // 0x2dc80c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC810u;
}
