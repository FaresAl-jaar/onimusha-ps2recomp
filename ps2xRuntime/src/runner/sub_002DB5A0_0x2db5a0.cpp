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

// Function: sub_002DB5A0
// Address: 0x2db5a0 - 0x2db838
void sub_002DB5A0_0x2db5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB5A0_0x2db5a0");
#endif

    switch (ctx->pc) {
        case 0x2db608u: goto label_2db608;
        case 0x2db624u: goto label_2db624;
        case 0x2db62cu: goto label_2db62c;
        case 0x2db640u: goto label_2db640;
        case 0x2db650u: goto label_2db650;
        case 0x2db678u: goto label_2db678;
        case 0x2db69cu: goto label_2db69c;
        case 0x2db6c4u: goto label_2db6c4;
        case 0x2db7d8u: goto label_2db7d8;
        case 0x2db800u: goto label_2db800;
        default: break;
    }

    ctx->pc = 0x2db5a0u;

    // 0x2db5a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2db5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2db5a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2db5a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2db5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2db5ac: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2db5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2db5b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2db5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2db5b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2db5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2db5b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2db5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2db5bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2db5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2db5c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2db5c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2db5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2db5c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2db5c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2db5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2db5d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2db5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db5d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2db5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db5e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2db5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5e8: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x2db5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2db5ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2db5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2db5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db5fc: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2db5fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db600: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DB600u;
    SET_GPR_U32(ctx, 31, 0x2DB608u);
    ctx->pc = 0x2DB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB600u;
    // 0x2db604: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DB600u, 0x2DB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB608u;
label_2db608:
    // 0x2db608: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x2db608u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2db60c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db610: 0x92660005  lbu         $a2, 0x5($s3)
    ctx->pc = 0x2db610u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x2db614: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2db614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2db618: 0x92680011  lbu         $t0, 0x11($s3)
    ctx->pc = 0x2db618u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x2db61c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2DB61Cu;
    SET_GPR_U32(ctx, 31, 0x2DB624u);
    ctx->pc = 0x2DB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB61Cu;
    // 0x2db620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2DB61Cu, 0x2DB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB624u;
label_2db624:
    // 0x2db624: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2DB624u;
    SET_GPR_U32(ctx, 31, 0x2DB62Cu);
    ctx->pc = 0x2DB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB624u;
    // 0x2db628: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2DB624u, 0x2DB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB62Cu;
label_2db62c:
    // 0x2db62c: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x2db62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2db630: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2db634: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2db634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2db638: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DB638u;
    SET_GPR_U32(ctx, 31, 0x2DB640u);
    ctx->pc = 0x2DB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB638u;
    // 0x2db63c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DB638u, 0x2DB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB640u;
label_2db640:
    // 0x2db640: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x2db640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db644: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x2db644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2db648: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2DB648u;
    SET_GPR_U32(ctx, 31, 0x2DB650u);
    ctx->pc = 0x2DB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB648u;
    // 0x2db64c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2DB648u, 0x2DB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB650u;
label_2db650:
    // 0x2db650: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2db650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2db654: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2db654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db658: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2db658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db65c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2DB65Cu;
    {
        const bool branch_taken_0x2db65c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB65Cu;
        // 0x2db660: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db65c) {
            ctx->pc = 0x2DB7F8u;
            goto label_2db7f8;
        }
    }
    ctx->pc = 0x2DB664u;
    // 0x2db664: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2db664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2db668: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2db668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db66c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2db66cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2db670: 0x27be00a4  addiu       $fp, $sp, 0xA4
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2db674: 0x27b700ec  addiu       $s7, $sp, 0xEC
    ctx->pc = 0x2db674u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_2db678:
    // 0x2db678: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2db67c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2db67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db680: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2DB680u;
    {
        const bool branch_taken_0x2db680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db680) {
            ctx->pc = 0x2DB7D8u;
            goto label_2db7d8;
        }
    }
    ctx->pc = 0x2DB688u;
    // 0x2db688: 0x92860024  lbu         $a2, 0x24($s4)
    ctx->pc = 0x2db688u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2db68c: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB68Cu;
    {
        const bool branch_taken_0x2db68c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB68Cu;
        // 0x2db690: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db68c) {
            ctx->pc = 0x2DB6B8u;
            goto label_2db6b8;
        }
    }
    ctx->pc = 0x2DB694u;
    // 0x2db694: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2DB694u;
    SET_GPR_U32(ctx, 31, 0x2DB69Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2DB694u, 0x2DB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB69Cu;
label_2db69c:
    // 0x2db69c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x2db69cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db6a0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2db6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db6a4: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x2db6a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2db6a8: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2db6ac: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2db6b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB6B0u;
    {
        const bool branch_taken_0x2db6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6B0u;
        // 0x2db6b4: 0xc34021  addu        $t0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6b0) {
            ctx->pc = 0x2DB6E0u;
            goto label_2db6e0;
        }
    }
    ctx->pc = 0x2DB6B8u;
label_2db6b8:
    // 0x2db6b8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2db6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2db6bc: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x2DB6BCu;
    SET_GPR_U32(ctx, 31, 0x2DB6C4u);
    ctx->pc = 0x2DB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6BCu;
    // 0x2db6c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x2DB6BCu, 0x2DB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6C4u;
label_2db6c4:
    // 0x2db6c4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2db6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2db6c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2db6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2db6cc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2db6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db6d0: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2db6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2db6d4: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x2db6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2db6d8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db6dc: 0x0  nop
    ctx->pc = 0x2db6dcu;
    // NOP
label_2db6e0:
    // 0x2db6e0: 0x7a640020  lq          $a0, 0x20($s3)
    ctx->pc = 0x2db6e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2db6e4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2db6e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2db6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db6ec: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x2db6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
    // 0x2db6f0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2db6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2db6f4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x2db6f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db6f8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2db6f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2db6fc: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2db6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2db700: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2db704: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2db704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2db708: 0x94690012  lhu         $t1, 0x12($v1)
    ctx->pc = 0x2db708u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2db70c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB70Cu;
    {
        const bool branch_taken_0x2db70c = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB70Cu;
        // 0x2db710: 0x92042  srl         $a0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db70c) {
            ctx->pc = 0x2DB720u;
            goto label_2db720;
        }
    }
    ctx->pc = 0x2DB714u;
    // 0x2db714: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2db714u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB718u;
    {
        const bool branch_taken_0x2db718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB718u;
        // 0x2db71c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db718) {
            ctx->pc = 0x2DB738u;
            goto label_2db738;
        }
    }
    ctx->pc = 0x2DB720u;
label_2db720:
    // 0x2db720: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x2db720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2db724: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2db724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2db728: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2db728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db72c: 0x0  nop
    ctx->pc = 0x2db72cu;
    // NOP
    // 0x2db730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db734: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2db734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2db738:
    // 0x2db738: 0x844d0008  lh          $t5, 0x8($v0)
    ctx->pc = 0x2db738u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db73c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2db73cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2db740: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x2db740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2db744: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2db744u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2db748: 0x844c000a  lh          $t4, 0xA($v0)
    ctx->pc = 0x2db748u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2db74c: 0x3c093d80  lui         $t1, 0x3D80
    ctx->pc = 0x2db74cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15744 << 16));
    // 0x2db750: 0x844b0000  lh          $t3, 0x0($v0)
    ctx->pc = 0x2db750u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db754: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2db758: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2db758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db75c: 0x448a3800  mtc1        $t2, $f7
    ctx->pc = 0x2db75cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2db760: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x2db760u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db764: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x2db764u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2db768: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2db768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2db76c: 0x468009a0  cvt.s.w     $f6, $f1
    ctx->pc = 0x2db76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2db770: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2db770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2db774: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2db774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2db778: 0x46063943  div.s       $f5, $f7, $f6
    ctx->pc = 0x2db778u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[7], ctx->f[6]); }
    // 0x2db77c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x2db77cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db780: 0xc6710018  lwc1        $f17, 0x18($s3)
    ctx->pc = 0x2db780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2db784: 0x46801220  cvt.s.w     $f8, $f2
    ctx->pc = 0x2db784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2db788: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x2db788u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2db78c: 0x46056342  mul.s       $f13, $f12, $f5
    ctx->pc = 0x2db78cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2db790: 0x46061942  mul.s       $f5, $f3, $f6
    ctx->pc = 0x2db790u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2db794: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2db794u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2db798: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x2db798u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db79c: 0x46053943  div.s       $f5, $f7, $f5
    ctx->pc = 0x2db79cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[7], ctx->f[5]); }
    // 0x2db7a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2db7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db7a4: 0x46026102  mul.s       $f4, $f12, $f2
    ctx->pc = 0x2db7a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2db7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db7ac: 0x460338c3  div.s       $f3, $f7, $f3
    ctx->pc = 0x2db7acu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
    // 0x2db7b0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2db7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db7b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2db7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2db7b8: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x2db7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2db7bc: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2db7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db7c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2db7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2db7c4: 0x46042b82  mul.s       $f14, $f5, $f4
    ctx->pc = 0x2db7c4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2db7c8: 0x46021bc2  mul.s       $f15, $f3, $f2
    ctx->pc = 0x2db7c8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2db7cc: 0x46010402  mul.s       $f16, $f0, $f1
    ctx->pc = 0x2db7ccu;
    ctx->f[16] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2db7d0: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2DB7D0u;
    SET_GPR_U32(ctx, 31, 0x2DB7D8u);
    ctx->pc = 0x2DB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7D0u;
    // 0x2db7d4: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2DB7D0u, 0x2DB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7D8u;
label_2db7d8:
    // 0x2db7d8: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x2db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x2db7dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2db7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2db7e0: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2db7e4: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2db7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db7e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2db7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db7ec: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2DB7ECu;
    {
        const bool branch_taken_0x2db7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7ECu;
        // 0x2db7f0: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7ec) {
            ctx->pc = 0x2DB678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db678;
        }
    }
    ctx->pc = 0x2DB7F4u;
    // 0x2db7f4: 0x0  nop
    ctx->pc = 0x2db7f4u;
    // NOP
label_2db7f8:
    // 0x2db7f8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x2DB7F8u;
    SET_GPR_U32(ctx, 31, 0x2DB800u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x2DB7F8u, 0x2DB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB800u;
label_2db800:
    // 0x2db800: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x2db800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db804: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2db804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2db808: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2db808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db80c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2db80cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2db810: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2db810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db814: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2db814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db818: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2db818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db81c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2db81cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2db820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db830: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB830u;
        // 0x2db834: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB838u;
}
