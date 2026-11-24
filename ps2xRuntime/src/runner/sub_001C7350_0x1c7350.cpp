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

// Function: sub_001C7350
// Address: 0x1c7350 - 0x1c796c
void sub_001C7350_0x1c7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7350_0x1c7350");
#endif

    switch (ctx->pc) {
        case 0x1c73b4u: goto label_1c73b4;
        case 0x1c73bcu: goto label_1c73bc;
        case 0x1c73c8u: goto label_1c73c8;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c749cu: goto label_1c749c;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75e8u: goto label_1c75e8;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c7868u: goto label_1c7868;
        case 0x1c78a8u: goto label_1c78a8;
        case 0x1c78b4u: goto label_1c78b4;
        case 0x1c78c4u: goto label_1c78c4;
        case 0x1c78d0u: goto label_1c78d0;
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c7900u: goto label_1c7900;
        case 0x1c7910u: goto label_1c7910;
        case 0x1c7918u: goto label_1c7918;
        default: break;
    }

    ctx->pc = 0x1c7350u;

    // 0x1c7350: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c7354: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c7358: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c735c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7360: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c7360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c7364: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c7364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c7368: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c7368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c736c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c7370: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c7374: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c7378: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c737c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c7380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7384: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c7384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c7388: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c7388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c738c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c738cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c7390: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1c7394: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c7394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c7398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c7398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c739c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c73a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c73a4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c73a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1c73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c73ac: 0xc041290  jal         func_104A40
    ctx->pc = 0x1C73ACu;
    SET_GPR_U32(ctx, 31, 0x1C73B4u);
    ctx->pc = 0x1C73B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73ACu;
    // 0x1c73b0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1C73ACu, 0x1C73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73B4u;
label_1c73b4:
    // 0x1c73b4: 0xc041294  jal         func_104A50
    ctx->pc = 0x1C73B4u;
    SET_GPR_U32(ctx, 31, 0x1C73BCu);
    ctx->pc = 0x1C73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73B4u;
    // 0x1c73b8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1C73B4u, 0x1C73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73BCu;
label_1c73bc:
    // 0x1c73bc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c73c0: 0xc041322  jal         func_104C88
    ctx->pc = 0x1C73C0u;
    SET_GPR_U32(ctx, 31, 0x1C73C8u);
    ctx->pc = 0x1C73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73C0u;
    // 0x1c73c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x1C73C0u, 0x1C73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C8u;
label_1c73c8:
    // 0x1c73c8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c73cc: 0xc041386  jal         func_104E18
    ctx->pc = 0x1C73CCu;
    SET_GPR_U32(ctx, 31, 0x1C73D4u);
    ctx->pc = 0x1C73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73CCu;
    // 0x1c73d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x1C73CCu, 0x1C73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D4u;
label_1c73d4:
    // 0x1c73d4: 0x97a500f0  lhu         $a1, 0xF0($sp)
    ctx->pc = 0x1c73d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c73d8: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1c73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1c73dc: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c73e0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c73e4: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1c73e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1c73e8: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x1c73e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1c73ec: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c73f0: 0x27b300f1  addiu       $s3, $sp, 0xF1
    ctx->pc = 0x1c73f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 241));
    // 0x1c73f4: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1c73f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1c73f8: 0x640c0080  daddiu      $t4, $zero, 0x80
    ctx->pc = 0x1c73f8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1c73fc: 0x27b200f5  addiu       $s2, $sp, 0xF5
    ctx->pc = 0x1c73fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 245));
    // 0x1c7400: 0x2409ffbf  addiu       $t1, $zero, -0x41
    ctx->pc = 0x1c7400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c7404: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c7404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c7408: 0x27b100f7  addiu       $s1, $sp, 0xF7
    ctx->pc = 0x1c7408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 247));
    // 0x1c740c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1c740cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c7410: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1c7410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c7414: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1c7414u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c7418: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x1c7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1c741c: 0x926d0000  lbu         $t5, 0x0($s3)
    ctx->pc = 0x1c741cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c7420: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x1c7420u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1c7424: 0x27b000f8  addiu       $s0, $sp, 0xF8
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1c7428: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c742c: 0x6403000e  daddiu      $v1, $zero, 0xE
    ctx->pc = 0x1c742cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1c7430: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1c7430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1c7434: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c7434u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1c7438: 0xa26b0000  sb          $t3, 0x0($s3)
    ctx->pc = 0x1c7438u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1c743c: 0x924b0000  lbu         $t3, 0x0($s2)
    ctx->pc = 0x1c743cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7440: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1c7440u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1c7444: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1c7444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1c7448: 0xa2490000  sb          $t1, 0x0($s2)
    ctx->pc = 0x1c7448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c744c: 0x92290000  lbu         $t1, 0x0($s1)
    ctx->pc = 0x1c744cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7450: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1c7450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1c7454: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1c7454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1c7458: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x1c7458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c745c: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x1c745cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7460: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1c7460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1c7464: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1c7464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1c7468: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x1c7468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c746c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1c746cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7470: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c7470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c7474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7478: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c7478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c747c: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1c747cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7480: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1C7480u;
    SET_GPR_U32(ctx, 31, 0x1C7488u);
    ctx->pc = 0x1C7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7480u;
    // 0x1c7484: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1C7480u, 0x1C7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7488u;
label_1c7488:
    // 0x1c7488: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1c748c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7490: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1c7490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1c7494: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x1C7494u;
    SET_GPR_U32(ctx, 31, 0x1C749Cu);
    ctx->pc = 0x1C7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7494u;
    // 0x1c7498: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x1C7494u, 0x1C749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C749Cu;
label_1c749c:
    // 0x1c749c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C749Cu;
    {
        const bool branch_taken_0x1c749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c749c) {
            ctx->pc = 0x1C74B8u;
            goto label_1c74b8;
        }
    }
    ctx->pc = 0x1C74A4u;
    // 0x1c74a4: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1c74a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c74a8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c74ac: 0xc041418  jal         func_105060
    ctx->pc = 0x1C74ACu;
    SET_GPR_U32(ctx, 31, 0x1C74B4u);
    ctx->pc = 0x1C74B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74ACu;
    // 0x1c74b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C74ACu, 0x1C74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B4u;
label_1c74b4:
    // 0x1c74b4: 0x0  nop
    ctx->pc = 0x1c74b4u;
    // NOP
label_1c74b8:
    // 0x1c74b8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c74bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c74bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c74c0: 0xc041418  jal         func_105060
    ctx->pc = 0x1C74C0u;
    SET_GPR_U32(ctx, 31, 0x1C74C8u);
    ctx->pc = 0x1C74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74C0u;
    // 0x1c74c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C74C0u, 0x1C74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74C8u;
label_1c74c8:
    // 0x1c74c8: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1C74C8u;
    SET_GPR_U32(ctx, 31, 0x1C74D0u);
    ctx->pc = 0x1C74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74C8u;
    // 0x1c74cc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1C74C8u, 0x1C74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74D0u;
label_1c74d0:
    // 0x1c74d0: 0x97ab00f0  lhu         $t3, 0xF0($sp)
    ctx->pc = 0x1c74d0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c74d4: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c74d8: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x1c74dc: 0x64020014  daddiu      $v0, $zero, 0x14
    ctx->pc = 0x1c74dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
    // 0x1c74e0: 0x34887fff  ori         $t0, $a0, 0x7FFF
    ctx->pc = 0x1c74e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x1c74e4: 0x300a7fff  andi        $t2, $zero, 0x7FFF
    ctx->pc = 0x1c74e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1c74e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1c74e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c74ec: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1c74ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1c74f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1c74f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1c74f4: 0x64070080  daddiu      $a3, $zero, 0x80
    ctx->pc = 0x1c74f4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1c74f8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1c74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c74fc: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x1c74fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1c7500: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1c7500u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1c7504: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1c7504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1c7508: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1c7508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1c750c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c750cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c7510: 0xa7a900f0  sh          $t1, 0xF0($sp)
    ctx->pc = 0x1c7510u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 9));
    // 0x1c7514: 0x88a025  or          $s4, $a0, $t0
    ctx->pc = 0x1c7514u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1c7518: 0x92750000  lbu         $s5, 0x0($s3)
    ctx->pc = 0x1c7518u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c751c: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x1c751cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1c7520: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c7520u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7524: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1c7524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1c7528: 0x240efff3  addiu       $t6, $zero, -0xD
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c752c: 0x240cff0f  addiu       $t4, $zero, -0xF1
    ctx->pc = 0x1c752cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1c7530: 0x640d0030  daddiu      $t5, $zero, 0x30
    ctx->pc = 0x1c7530u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x1c7534: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x1c7534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7538: 0x640b0002  daddiu      $t3, $zero, 0x2
    ctx->pc = 0x1c7538u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1c753c: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x1c753cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1c7540: 0x64080005  daddiu      $t0, $zero, 0x5
    ctx->pc = 0x1c7540u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x1c7544: 0x2a63024  and         $a2, $s5, $a2
    ctx->pc = 0x1c7544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & GPR_U64(ctx, 6));
    // 0x1c7548: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1c754c: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x1c754cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c7550: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x1c7550u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7554: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1c7554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c7558: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c7558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c755c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1c755cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7560: 0xdfa300f0  ld          $v1, 0xF0($sp)
    ctx->pc = 0x1c7560u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7564: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1c7568: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c756c: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1c756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1c7570: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c7570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7574: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1c7574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1c7578: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1c7578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1c757c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c757cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7580: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c7580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7584: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1c7584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1c7588: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x1c7588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x1c758c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c758cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7590: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c7590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7594: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c7594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c7598: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x1c7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x1c759c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c759cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c75a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c75a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c75a4: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1c75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1c75a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1c75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1c75ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c75acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c75b0: 0x93a200f9  lbu         $v0, 0xF9($sp)
    ctx->pc = 0x1c75b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 249)));
    // 0x1c75b4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c75b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c75b8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1c75b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1c75bc: 0xa3a200f9  sb          $v0, 0xF9($sp)
    ctx->pc = 0x1c75bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 249), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c75c0: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1c75c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c75c4: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1C75C4u;
    SET_GPR_U32(ctx, 31, 0x1C75CCu);
    ctx->pc = 0x1C75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75C4u;
    // 0x1c75c8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1C75C4u, 0x1C75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75CCu;
label_1c75cc:
    // 0x1c75cc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c75ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75d0: 0x27b500d4  addiu       $s5, $sp, 0xD4
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1c75d4: 0x27b400d8  addiu       $s4, $sp, 0xD8
    ctx->pc = 0x1c75d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1c75d8: 0x27b300dc  addiu       $s3, $sp, 0xDC
    ctx->pc = 0x1c75d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1c75dc: 0x27b600c4  addiu       $s6, $sp, 0xC4
    ctx->pc = 0x1c75dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1c75e0: 0x27b700c8  addiu       $s7, $sp, 0xC8
    ctx->pc = 0x1c75e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1c75e4: 0x27b200ec  addiu       $s2, $sp, 0xEC
    ctx->pc = 0x1c75e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1c75e8:
    // 0x1c75e8: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c75ec: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c75f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c75f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c75f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c75f8: 0x7c00004  bltz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C75F8u;
    {
        const bool branch_taken_0x1c75f8 = (GPR_S64(ctx, 30) < 0);
        ctx->pc = 0x1C75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75F8u;
        // 0x1c75fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75f8) {
            ctx->pc = 0x1C760Cu;
            goto label_1c760c;
        }
    }
    ctx->pc = 0x1C7600u;
    // 0x1c7600: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1c7600u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7604: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7604u;
    {
        const bool branch_taken_0x1c7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7604u;
        // 0x1c7608: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7604) {
            ctx->pc = 0x1C7628u;
            goto label_1c7628;
        }
    }
    ctx->pc = 0x1C760Cu;
label_1c760c:
    // 0x1c760c: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
    // 0x1c7610: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1c7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x1c7614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c761c: 0x0  nop
    ctx->pc = 0x1c761cu;
    // NOP
    // 0x1c7620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7624: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c7624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c7628:
    // 0x1c7628: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c762c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C762Cu;
    {
        const bool branch_taken_0x1c762c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C762Cu;
        // 0x1c7630: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c762c) {
            ctx->pc = 0x1C7640u;
            goto label_1c7640;
        }
    }
    ctx->pc = 0x1C7634u;
    // 0x1c7634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7638: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7638u;
        // 0x1c763c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C765Cu;
            goto label_1c765c;
        }
    }
    ctx->pc = 0x1C7640u;
label_1c7640:
    // 0x1c7640: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c7644: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c7648: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c764c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c764cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7650: 0x0  nop
    ctx->pc = 0x1c7650u;
    // NOP
    // 0x1c7654: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c7654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7658: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c7658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c765c:
    // 0x1c765c: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c7660: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c7660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c7664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7668: 0x0  nop
    ctx->pc = 0x1c7668u;
    // NOP
    // 0x1c766c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1c766cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7670:
    // 0x1c7670: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c7674: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c7678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c767c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C767Cu;
    {
        const bool branch_taken_0x1c767c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1C7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C767Cu;
        // 0x1c7680: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c767c) {
            ctx->pc = 0x1C7690u;
            goto label_1c7690;
        }
    }
    ctx->pc = 0x1C7684u;
    // 0x1c7684: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c7684u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7688: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7688u;
    {
        const bool branch_taken_0x1c7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7688u;
        // 0x1c768c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7688) {
            ctx->pc = 0x1C76A8u;
            goto label_1c76a8;
        }
    }
    ctx->pc = 0x1C7690u;
label_1c7690:
    // 0x1c7690: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c7690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c7694: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c769c: 0x0  nop
    ctx->pc = 0x1c769cu;
    // NOP
    // 0x1c76a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c76a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c76a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c76a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c76a8:
    // 0x1c76a8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c76ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c76acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c76b0: 0xc422fa30  lwc1        $f2, -0x5D0($at)
    ctx->pc = 0x1c76b0u;
    { uint32_t bits = FAST_READ32(0x40FA30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c76b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c76b8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1c76b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c76bc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c76c0: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1c76c4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c76c8: 0xc421fa40  lwc1        $f1, -0x5C0($at)
    ctx->pc = 0x1c76c8u;
    { uint32_t bits = FAST_READ32(0x40FA40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c76cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c76ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c76d0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c76d4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c76d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c76d8: 0xc420fa34  lwc1        $f0, -0x5CC($at)
    ctx->pc = 0x1c76d8u;
    { uint32_t bits = FAST_READ32(0x40FA34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c76dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c76e0: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1c76e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c76e4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c76e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1c76e8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c76ec: 0xc421fa38  lwc1        $f1, -0x5C8($at)
    ctx->pc = 0x1c76ecu;
    { uint32_t bits = FAST_READ32(0x40FA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c76f0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c76f4: 0xc420fa58  lwc1        $f0, -0x5A8($at)
    ctx->pc = 0x1c76f4u;
    { uint32_t bits = FAST_READ32(0x40FA58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c76f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c76fc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7700: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1c7700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1c7704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7708: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1c770c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c770cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c7710: 0xc422fa70  lwc1        $f2, -0x590($at)
    ctx->pc = 0x1c7710u;
    { uint32_t bits = FAST_READ32(0x40FA70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7714: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7718: 0xc421fa80  lwc1        $f1, -0x580($at)
    ctx->pc = 0x1c7718u;
    { uint32_t bits = FAST_READ32(0x40FA80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c771c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c771cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7720: 0xc423fa74  lwc1        $f3, -0x58C($at)
    ctx->pc = 0x1c7720u;
    { uint32_t bits = FAST_READ32(0x40FA74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7724: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c7728: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c772c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c772cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7730: 0xc420fa94  lwc1        $f0, -0x56C($at)
    ctx->pc = 0x1c7730u;
    { uint32_t bits = FAST_READ32(0x40FA94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7734: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7738: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1c7738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c773c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c773cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c7740: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1c7740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1c7744: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c7744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c7748: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1c774c: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1C774Cu;
    SET_GPR_U32(ctx, 31, 0x1C7754u);
    ctx->pc = 0x1C7750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C774Cu;
    // 0x1c7750: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1C774Cu, 0x1C7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7754u;
label_1c7754:
    // 0x1c7754: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7758: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c7758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c775c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c775cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7760: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7764: 0x32230007  andi        $v1, $s1, 0x7
    ctx->pc = 0x1c7764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1c7768: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7768u;
    {
        const bool branch_taken_0x1c7768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7768) {
            ctx->pc = 0x1C7780u;
            goto label_1c7780;
        }
    }
    ctx->pc = 0x1C7770u;
    // 0x1c7770: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c7774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7774u;
    {
        const bool branch_taken_0x1c7774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7774u;
        // 0x1c7778: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7774) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C777Cu;
    // 0x1c777c: 0x0  nop
    ctx->pc = 0x1c777cu;
    // NOP
label_1c7780:
    // 0x1c7780: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c7780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c7784: 0x0  nop
    ctx->pc = 0x1c7784u;
    // NOP
label_1c7788:
    // 0x1c7788: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c778c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1c778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7790: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7790u;
    SET_GPR_U32(ctx, 31, 0x1C7798u);
    ctx->pc = 0x1C7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7790u;
    // 0x1c7794: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7790u, 0x1C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7798u;
label_1c7798:
    // 0x1c7798: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1c7798u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c779c: 0xc041404  jal         func_105010
    ctx->pc = 0x1C779Cu;
    SET_GPR_U32(ctx, 31, 0x1C77A4u);
    ctx->pc = 0x1C77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C779Cu;
    // 0x1c77a0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C779Cu, 0x1C77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A4u;
label_1c77a4:
    // 0x1c77a4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c77a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c77a8: 0x7825fab0  lq          $a1, -0x550($at)
    ctx->pc = 0x1c77a8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40FAB0u));
    // 0x1c77ac: 0xc041404  jal         func_105010
    ctx->pc = 0x1C77ACu;
    SET_GPR_U32(ctx, 31, 0x1C77B4u);
    ctx->pc = 0x1C77B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77ACu;
    // 0x1c77b0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C77ACu, 0x1C77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77B4u;
label_1c77b4:
    // 0x1c77b4: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1c77b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c77b8: 0xc041404  jal         func_105010
    ctx->pc = 0x1C77B8u;
    SET_GPR_U32(ctx, 31, 0x1C77C0u);
    ctx->pc = 0x1C77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77B8u;
    // 0x1c77bc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C77B8u, 0x1C77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77C0u;
label_1c77c0:
    // 0x1c77c0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c77c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c77c8: 0xc422fa30  lwc1        $f2, -0x5D0($at)
    ctx->pc = 0x1c77c8u;
    { uint32_t bits = FAST_READ32(0x40FA30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c77cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c77d0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c77d4: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1c77d8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c77d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c77dc: 0xc421fa40  lwc1        $f1, -0x5C0($at)
    ctx->pc = 0x1c77dcu;
    { uint32_t bits = FAST_READ32(0x40FA40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c77e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c77e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c77e4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c77e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c77e8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c77e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c77ec: 0xc420fa34  lwc1        $f0, -0x5CC($at)
    ctx->pc = 0x1c77ecu;
    { uint32_t bits = FAST_READ32(0x40FA34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c77f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c77f4: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1c77f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c77f8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c77f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1c77fc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c77fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7800: 0xc421fa38  lwc1        $f1, -0x5C8($at)
    ctx->pc = 0x1c7800u;
    { uint32_t bits = FAST_READ32(0x40FA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7804: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7808: 0xc420fa58  lwc1        $f0, -0x5A8($at)
    ctx->pc = 0x1c7808u;
    { uint32_t bits = FAST_READ32(0x40FA58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c780c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c780cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c7810: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7814: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c7814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1c7818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c781c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c781cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1c7820: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c7820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c7824: 0xc422fa70  lwc1        $f2, -0x590($at)
    ctx->pc = 0x1c7824u;
    { uint32_t bits = FAST_READ32(0x40FA70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7828: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c782c: 0xc421fa80  lwc1        $f1, -0x580($at)
    ctx->pc = 0x1c782cu;
    { uint32_t bits = FAST_READ32(0x40FA80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7830: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7834: 0xc423fa74  lwc1        $f3, -0x58C($at)
    ctx->pc = 0x1c7834u;
    { uint32_t bits = FAST_READ32(0x40FA74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7838: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c783c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c783cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7840: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7844: 0xc420fa94  lwc1        $f0, -0x56C($at)
    ctx->pc = 0x1c7844u;
    { uint32_t bits = FAST_READ32(0x40FA94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7848: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c784c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1c784cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c7850: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c7850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c7854: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c7854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1c7858: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c7858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c785c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1c7860: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1C7860u;
    SET_GPR_U32(ctx, 31, 0x1C7868u);
    ctx->pc = 0x1C7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7860u;
    // 0x1c7864: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1C7860u, 0x1C7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7868u;
label_1c7868:
    // 0x1c7868: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c7868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c786c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c786cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c7870: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c7870u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7874: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7878: 0x32230007  andi        $v1, $s1, 0x7
    ctx->pc = 0x1c7878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1c787c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C787Cu;
    {
        const bool branch_taken_0x1c787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c787c) {
            ctx->pc = 0x1C7890u;
            goto label_1c7890;
        }
    }
    ctx->pc = 0x1C7884u;
    // 0x1c7884: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c7884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c7888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7888u;
    {
        const bool branch_taken_0x1c7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7888u;
        // 0x1c788c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7888) {
            ctx->pc = 0x1C7898u;
            goto label_1c7898;
        }
    }
    ctx->pc = 0x1C7890u;
label_1c7890:
    // 0x1c7890: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c7890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c7894: 0x0  nop
    ctx->pc = 0x1c7894u;
    // NOP
label_1c7898:
    // 0x1c7898: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c789c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1c789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c78a0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C78A0u;
    SET_GPR_U32(ctx, 31, 0x1C78A8u);
    ctx->pc = 0x1C78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78A0u;
    // 0x1c78a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C78A0u, 0x1C78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78A8u;
label_1c78a8:
    // 0x1c78a8: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1c78a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c78ac: 0xc041404  jal         func_105010
    ctx->pc = 0x1C78ACu;
    SET_GPR_U32(ctx, 31, 0x1C78B4u);
    ctx->pc = 0x1C78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78ACu;
    // 0x1c78b0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C78ACu, 0x1C78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78B4u;
label_1c78b4:
    // 0x1c78b4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c78b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c78b8: 0x7825fab0  lq          $a1, -0x550($at)
    ctx->pc = 0x1c78b8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40FAB0u));
    // 0x1c78bc: 0xc041404  jal         func_105010
    ctx->pc = 0x1C78BCu;
    SET_GPR_U32(ctx, 31, 0x1C78C4u);
    ctx->pc = 0x1C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78BCu;
    // 0x1c78c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C78BCu, 0x1C78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78C4u;
label_1c78c4:
    // 0x1c78c4: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1c78c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c78c8: 0xc041404  jal         func_105010
    ctx->pc = 0x1C78C8u;
    SET_GPR_U32(ctx, 31, 0x1C78D0u);
    ctx->pc = 0x1C78CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78C8u;
    // 0x1c78cc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C78C8u, 0x1C78D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78D0u;
label_1c78d0:
    // 0x1c78d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c78d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c78d4: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1c78d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c78d8: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x1C78D8u;
    {
        const bool branch_taken_0x1c78d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c78d8) {
            ctx->pc = 0x1C7670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7670;
        }
    }
    ctx->pc = 0x1C78E0u;
    // 0x1c78e0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c78e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c78e4: 0x2fc20008  sltiu       $v0, $fp, 0x8
    ctx->pc = 0x1c78e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c78e8: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1C78E8u;
    {
        const bool branch_taken_0x1c78e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78E8u;
        // 0x1c78ec: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78e8) {
            ctx->pc = 0x1C75E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c75e8;
        }
    }
    ctx->pc = 0x1C78F0u;
    // 0x1c78f0: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1C78F0u;
    SET_GPR_U32(ctx, 31, 0x1C78F8u);
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1C78F0u, 0x1C78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78F8u;
label_1c78f8:
    // 0x1c78f8: 0xc04139c  jal         func_104E70
    ctx->pc = 0x1C78F8u;
    SET_GPR_U32(ctx, 31, 0x1C7900u);
    ctx->pc = 0x1C78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78F8u;
    // 0x1c78fc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x1C78F8u, 0x1C7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7900u;
label_1c7900:
    // 0x1c7900: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7904: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7908: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x1C7908u;
    SET_GPR_U32(ctx, 31, 0x1C7910u);
    ctx->pc = 0x1C790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7908u;
    // 0x1c790c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x1C7908u, 0x1C7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7910u;
label_1c7910:
    // 0x1c7910: 0xc041298  jal         func_104A60
    ctx->pc = 0x1C7910u;
    SET_GPR_U32(ctx, 31, 0x1C7918u);
    ctx->pc = 0x1C7914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7910u;
    // 0x1c7914: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x1C7910u, 0x1C7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7918u;
label_1c7918:
    // 0x1c7918: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1c7918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c791c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c791cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c7920: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c7924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7928: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x1c7928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x1c792c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c7930: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c7930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c7934: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c7934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c7938: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c7938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c793c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c793cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c7940: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7944: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c7944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7948: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c794c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c794cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7950: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7954: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c795c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c795cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7960: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7964: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7964u;
        // 0x1c7968: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C796Cu;
}
