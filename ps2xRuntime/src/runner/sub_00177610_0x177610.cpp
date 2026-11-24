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

// Function: sub_00177610
// Address: 0x177610 - 0x1782a8
void sub_00177610_0x177610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177610_0x177610");
#endif

    switch (ctx->pc) {
        case 0x177624u: goto label_177624;
        case 0x17768cu: goto label_17768c;
        case 0x177694u: goto label_177694;
        case 0x17769cu: goto label_17769c;
        case 0x1776c4u: goto label_1776c4;
        case 0x1776f4u: goto label_1776f4;
        case 0x177710u: goto label_177710;
        case 0x177718u: goto label_177718;
        case 0x177720u: goto label_177720;
        case 0x177728u: goto label_177728;
        case 0x177730u: goto label_177730;
        case 0x17773cu: goto label_17773c;
        case 0x177750u: goto label_177750;
        case 0x177758u: goto label_177758;
        case 0x177778u: goto label_177778;
        case 0x177780u: goto label_177780;
        case 0x177788u: goto label_177788;
        case 0x177790u: goto label_177790;
        case 0x177798u: goto label_177798;
        case 0x1777a0u: goto label_1777a0;
        case 0x1777a8u: goto label_1777a8;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777d4u: goto label_1777d4;
        case 0x1777f4u: goto label_1777f4;
        case 0x177800u: goto label_177800;
        case 0x177808u: goto label_177808;
        case 0x177820u: goto label_177820;
        case 0x177828u: goto label_177828;
        case 0x177840u: goto label_177840;
        case 0x177848u: goto label_177848;
        case 0x177860u: goto label_177860;
        case 0x177868u: goto label_177868;
        case 0x177880u: goto label_177880;
        case 0x177888u: goto label_177888;
        case 0x1778a0u: goto label_1778a0;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778e0u: goto label_1778e0;
        case 0x1778e8u: goto label_1778e8;
        case 0x177900u: goto label_177900;
        case 0x177914u: goto label_177914;
        case 0x177918u: goto label_177918;
        case 0x177930u: goto label_177930;
        case 0x177940u: goto label_177940;
        case 0x17794cu: goto label_17794c;
        case 0x177970u: goto label_177970;
        case 0x177980u: goto label_177980;
        case 0x177988u: goto label_177988;
        case 0x177998u: goto label_177998;
        case 0x1779a0u: goto label_1779a0;
        case 0x1779acu: goto label_1779ac;
        case 0x1779b8u: goto label_1779b8;
        case 0x1779d0u: goto label_1779d0;
        case 0x1779e8u: goto label_1779e8;
        case 0x177a00u: goto label_177a00;
        case 0x177a18u: goto label_177a18;
        case 0x177a30u: goto label_177a30;
        case 0x177a48u: goto label_177a48;
        case 0x177a60u: goto label_177a60;
        case 0x177a78u: goto label_177a78;
        case 0x177a90u: goto label_177a90;
        case 0x177aa8u: goto label_177aa8;
        case 0x177ac0u: goto label_177ac0;
        case 0x177adcu: goto label_177adc;
        case 0x177af8u: goto label_177af8;
        case 0x177b14u: goto label_177b14;
        case 0x177b30u: goto label_177b30;
        case 0x177b4cu: goto label_177b4c;
        case 0x177b68u: goto label_177b68;
        case 0x177b84u: goto label_177b84;
        case 0x177ba0u: goto label_177ba0;
        case 0x177bbcu: goto label_177bbc;
        case 0x177bd8u: goto label_177bd8;
        case 0x177bf4u: goto label_177bf4;
        case 0x177c10u: goto label_177c10;
        case 0x177c2cu: goto label_177c2c;
        case 0x177c48u: goto label_177c48;
        case 0x177c64u: goto label_177c64;
        case 0x177c80u: goto label_177c80;
        case 0x177c9cu: goto label_177c9c;
        case 0x177cb8u: goto label_177cb8;
        case 0x177cd4u: goto label_177cd4;
        case 0x177cf0u: goto label_177cf0;
        case 0x177d0cu: goto label_177d0c;
        case 0x177d18u: goto label_177d18;
        case 0x177d34u: goto label_177d34;
        case 0x177d50u: goto label_177d50;
        case 0x177d6cu: goto label_177d6c;
        case 0x177d84u: goto label_177d84;
        case 0x177d9cu: goto label_177d9c;
        case 0x177db8u: goto label_177db8;
        case 0x177dccu: goto label_177dcc;
        case 0x177de0u: goto label_177de0;
        case 0x177df4u: goto label_177df4;
        case 0x177e08u: goto label_177e08;
        case 0x177e20u: goto label_177e20;
        case 0x177e28u: goto label_177e28;
        case 0x177e34u: goto label_177e34;
        case 0x177e40u: goto label_177e40;
        case 0x177e4cu: goto label_177e4c;
        case 0x177e58u: goto label_177e58;
        case 0x177e60u: goto label_177e60;
        case 0x177e6cu: goto label_177e6c;
        case 0x177e78u: goto label_177e78;
        case 0x177e84u: goto label_177e84;
        case 0x177e90u: goto label_177e90;
        case 0x177e9cu: goto label_177e9c;
        case 0x177ea8u: goto label_177ea8;
        case 0x177eb4u: goto label_177eb4;
        case 0x177ec4u: goto label_177ec4;
        case 0x177edcu: goto label_177edc;
        case 0x177ef4u: goto label_177ef4;
        case 0x177f0cu: goto label_177f0c;
        case 0x177f24u: goto label_177f24;
        case 0x177f3cu: goto label_177f3c;
        case 0x177f54u: goto label_177f54;
        case 0x177f6cu: goto label_177f6c;
        case 0x177f84u: goto label_177f84;
        case 0x177f9cu: goto label_177f9c;
        case 0x177fb4u: goto label_177fb4;
        case 0x177fccu: goto label_177fcc;
        case 0x177fe4u: goto label_177fe4;
        case 0x177ffcu: goto label_177ffc;
        case 0x178014u: goto label_178014;
        case 0x17802cu: goto label_17802c;
        case 0x178044u: goto label_178044;
        case 0x17805cu: goto label_17805c;
        case 0x178074u: goto label_178074;
        case 0x17808cu: goto label_17808c;
        case 0x1780a4u: goto label_1780a4;
        case 0x1780bcu: goto label_1780bc;
        case 0x1780d4u: goto label_1780d4;
        case 0x1780ecu: goto label_1780ec;
        case 0x178104u: goto label_178104;
        case 0x17811cu: goto label_17811c;
        case 0x178134u: goto label_178134;
        case 0x17814cu: goto label_17814c;
        case 0x178164u: goto label_178164;
        case 0x17817cu: goto label_17817c;
        case 0x178194u: goto label_178194;
        case 0x1781acu: goto label_1781ac;
        case 0x1781c4u: goto label_1781c4;
        case 0x1781dcu: goto label_1781dc;
        case 0x1781f4u: goto label_1781f4;
        case 0x178200u: goto label_178200;
        case 0x17821cu: goto label_17821c;
        case 0x17822cu: goto label_17822c;
        case 0x17823cu: goto label_17823c;
        case 0x178250u: goto label_178250;
        case 0x178258u: goto label_178258;
        case 0x178274u: goto label_178274;
        case 0x178280u: goto label_178280;
        case 0x178298u: goto label_178298;
        default: break;
    }

    ctx->pc = 0x177610u;

    // 0x177610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17761c: 0xc05e0ac  jal         func_1782B0
    ctx->pc = 0x17761Cu;
    SET_GPR_U32(ctx, 31, 0x177624u);
    ctx->pc = 0x177620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17761Cu;
    // 0x177620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1782B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1782B0u, 0x17761Cu, 0x177624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177624u;
label_177624:
    // 0x177624: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x177624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x177628: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x177628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x17762c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x17762cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x177630: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x177630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x177634: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x177634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x177638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17763c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x17763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x177640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177644: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x177644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x177648: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x177648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x17764c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x17764cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x177650: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x177650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x177654: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x177654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x177658: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x177658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x17765c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x17765cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x177660: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x177660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x177664: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x177664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x177668: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x177668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x17766c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x17766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x177670: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x177670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x177674: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x177674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x177678: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x177678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x17767c: 0xae022170  sw          $v0, 0x2170($s0)
    ctx->pc = 0x17767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8560), GPR_U32(ctx, 2));
    // 0x177680: 0xaf808630  sw          $zero, -0x79D0($gp)
    ctx->pc = 0x177680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
    // 0x177684: 0xc05e564  jal         func_179590
    ctx->pc = 0x177684u;
    SET_GPR_U32(ctx, 31, 0x17768Cu);
    ctx->pc = 0x177688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177684u;
    // 0x177688: 0xa2052dec  sb          $a1, 0x2DEC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11756), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179590u, 0x177684u, 0x17768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17768Cu;
label_17768c:
    // 0x17768c: 0xc05e454  jal         func_179150
    ctx->pc = 0x17768Cu;
    SET_GPR_U32(ctx, 31, 0x177694u);
    ctx->pc = 0x177690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17768Cu;
    // 0x177690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179150u, 0x17768Cu, 0x177694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177694u;
label_177694:
    // 0x177694: 0xc05dc3c  jal         func_1770F0
    ctx->pc = 0x177694u;
    SET_GPR_U32(ctx, 31, 0x17769Cu);
    ctx->pc = 0x1770F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770F0u, 0x177694u, 0x17769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17769Cu;
label_17769c:
    // 0x17769c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1776a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1776a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1776a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1776a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1776a8: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1776a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1776ac: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x1776b0: 0x24840e90  addiu       $a0, $a0, 0xE90
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3728));
    // 0x1776b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1776b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1776b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1776b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1776bc: 0xc04150c  jal         func_105430
    ctx->pc = 0x1776BCu;
    SET_GPR_U32(ctx, 31, 0x1776C4u);
    ctx->pc = 0x1776C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776BCu;
    // 0x1776c0: 0xfe0223a0  sd          $v0, 0x23A0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 9120), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x1776BCu, 0x1776C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776C4u;
label_1776c4:
    // 0x1776c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x1776c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x1776c8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1776c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1776cc: 0xac200e7c  sw          $zero, 0xE7C($at)
    ctx->pc = 0x1776ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E7Cu, _value); } while (0);
    // 0x1776d0: 0x3442a9e4  ori         $v0, $v0, 0xA9E4
    ctx->pc = 0x1776d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43492);
    // 0x1776d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1776d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1776d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1776d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1776dc: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x1776dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81F004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81F004u, _value); } while (0);
    // 0x1776e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1776e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1776e4: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1776e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81F008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81F008u, _value); } while (0);
    // 0x1776e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1776e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1776ec: 0xc04d298  jal         func_134A60
    ctx->pc = 0x1776ECu;
    SET_GPR_U32(ctx, 31, 0x1776F4u);
    ctx->pc = 0x1776F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1776ECu;
    // 0x1776f0: 0xac22f00c  sw          $v0, -0xFF4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134A60u, 0x1776ECu, 0x1776F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1776F4u;
label_1776f4:
    // 0x1776f4: 0x3c028136  lui         $v0, 0x8136
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33078 << 16));
    // 0x1776f8: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1776fc: 0x34424257  ori         $v0, $v0, 0x4257
    ctx->pc = 0x1776fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16983);
    // 0x177700: 0x3c0501f7  lui         $a1, 0x1F7
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)503 << 16));
    // 0x177704: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x177704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x177708: 0xc04bf60  jal         func_12FD80
    ctx->pc = 0x177708u;
    SET_GPR_U32(ctx, 31, 0x177710u);
    ctx->pc = 0x17770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177708u;
    // 0x17770c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD80u, 0x177708u, 0x177710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177710u;
label_177710:
    // 0x177710: 0xc05dc00  jal         func_177000
    ctx->pc = 0x177710u;
    SET_GPR_U32(ctx, 31, 0x177718u);
    ctx->pc = 0x177000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177000u, 0x177710u, 0x177718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177718u;
label_177718:
    // 0x177718: 0xc044568  jal         func_1115A0
    ctx->pc = 0x177718u;
    SET_GPR_U32(ctx, 31, 0x177720u);
    ctx->pc = 0x17771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177718u;
    // 0x17771c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x177718u, 0x177720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177720u;
label_177720:
    // 0x177720: 0xc047f32  jal         func_11FCC8
    ctx->pc = 0x177720u;
    SET_GPR_U32(ctx, 31, 0x177728u);
    ctx->pc = 0x177724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177720u;
    // 0x177724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FCC8u, 0x177720u, 0x177728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177728u;
label_177728:
    // 0x177728: 0xc048258  jal         func_120960
    ctx->pc = 0x177728u;
    SET_GPR_U32(ctx, 31, 0x177730u);
    ctx->pc = 0x17772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177728u;
    // 0x17772c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120960u, 0x177728u, 0x177730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177730u;
label_177730:
    // 0x177730: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x177734: 0xc045dc4  jal         func_117710
    ctx->pc = 0x177734u;
    SET_GPR_U32(ctx, 31, 0x17773Cu);
    ctx->pc = 0x177738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177734u;
    // 0x177738: 0x248452c0  addiu       $a0, $a0, 0x52C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117710u, 0x177734u, 0x17773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17773Cu;
label_17773c:
    // 0x17773c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17773cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177740: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x177744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x177744u;
    {
        const bool branch_taken_0x177744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177744) {
            ctx->pc = 0x177730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177730;
        }
    }
    ctx->pc = 0x17774Cu;
    // 0x17774c: 0x0  nop
    ctx->pc = 0x17774cu;
    // NOP
label_177750:
    // 0x177750: 0xc045db0  jal         func_1176C0
    ctx->pc = 0x177750u;
    SET_GPR_U32(ctx, 31, 0x177758u);
    ctx->pc = 0x1176C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176C0u, 0x177750u, 0x177758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177758u;
label_177758:
    // 0x177758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17775c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x177760: 0x0  nop
    ctx->pc = 0x177760u;
    // NOP
    // 0x177764: 0x0  nop
    ctx->pc = 0x177764u;
    // NOP
    // 0x177768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177768u;
    {
        const bool branch_taken_0x177768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177768) {
            ctx->pc = 0x177750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177750;
        }
    }
    ctx->pc = 0x177770u;
    // 0x177770: 0xc044568  jal         func_1115A0
    ctx->pc = 0x177770u;
    SET_GPR_U32(ctx, 31, 0x177778u);
    ctx->pc = 0x177774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177770u;
    // 0x177774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x177770u, 0x177778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177778u;
label_177778:
    // 0x177778: 0xc047f32  jal         func_11FCC8
    ctx->pc = 0x177778u;
    SET_GPR_U32(ctx, 31, 0x177780u);
    ctx->pc = 0x17777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177778u;
    // 0x17777c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FCC8u, 0x177778u, 0x177780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177780u;
label_177780:
    // 0x177780: 0xc048258  jal         func_120960
    ctx->pc = 0x177780u;
    SET_GPR_U32(ctx, 31, 0x177788u);
    ctx->pc = 0x177784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177780u;
    // 0x177784: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120960u, 0x177780u, 0x177788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177788u;
label_177788:
    // 0x177788: 0xc048072  jal         func_1201C8
    ctx->pc = 0x177788u;
    SET_GPR_U32(ctx, 31, 0x177790u);
    ctx->pc = 0x17778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177788u;
    // 0x17778c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1201C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201C8u, 0x177788u, 0x177790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177790u;
label_177790:
    // 0x177790: 0xc0458a4  jal         func_116290
    ctx->pc = 0x177790u;
    SET_GPR_U32(ctx, 31, 0x177798u);
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x177790u, 0x177798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177798u;
label_177798:
    // 0x177798: 0xc045a5c  jal         func_116970
    ctx->pc = 0x177798u;
    SET_GPR_U32(ctx, 31, 0x1777A0u);
    ctx->pc = 0x116970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116970u, 0x177798u, 0x1777A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777A0u;
label_1777a0:
    // 0x1777a0: 0xc044c40  jal         func_113100
    ctx->pc = 0x1777A0u;
    SET_GPR_U32(ctx, 31, 0x1777A8u);
    ctx->pc = 0x113100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113100u, 0x1777A0u, 0x1777A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777A8u;
label_1777a8:
    // 0x1777a8: 0xc040d08  jal         func_103420
    ctx->pc = 0x1777A8u;
    SET_GPR_U32(ctx, 31, 0x1777B0u);
    ctx->pc = 0x1777ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777A8u;
    // 0x1777ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x1777A8u, 0x1777B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777B0u;
label_1777b0:
    // 0x1777b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1777b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1777b4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1777b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1777b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1777bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1777BCu;
    {
        const bool branch_taken_0x1777bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1777C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1777BCu;
        // 0x1777c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777bc) {
            ctx->pc = 0x1777E0u;
            goto label_1777e0;
        }
    }
    ctx->pc = 0x1777C4u;
    // 0x1777c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1777c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1777c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1777cc: 0xc0409ae  jal         func_1026B8
    ctx->pc = 0x1777CCu;
    SET_GPR_U32(ctx, 31, 0x1777D4u);
    ctx->pc = 0x1777D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777CCu;
    // 0x1777d0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026B8u, 0x1777CCu, 0x1777D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777D4u;
label_1777d4:
    // 0x1777d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1777D4u;
    {
        const bool branch_taken_0x1777d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777d4) {
            ctx->pc = 0x1777F8u;
            goto label_1777f8;
        }
    }
    ctx->pc = 0x1777DCu;
    // 0x1777dc: 0x0  nop
    ctx->pc = 0x1777dcu;
    // NOP
label_1777e0:
    // 0x1777e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1777e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1777e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1777e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777e8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1777ec: 0xc0409ae  jal         func_1026B8
    ctx->pc = 0x1777ECu;
    SET_GPR_U32(ctx, 31, 0x1777F4u);
    ctx->pc = 0x1777F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777ECu;
    // 0x1777f0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026B8u, 0x1777ECu, 0x1777F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1777F4u;
label_1777f4:
    // 0x1777f4: 0x0  nop
    ctx->pc = 0x1777f4u;
    // NOP
label_1777f8:
    // 0x1777f8: 0xc040d08  jal         func_103420
    ctx->pc = 0x1777F8u;
    SET_GPR_U32(ctx, 31, 0x177800u);
    ctx->pc = 0x1777FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1777F8u;
    // 0x1777fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x1777F8u, 0x177800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177800u;
label_177800:
    // 0x177800: 0xc05e3b8  jal         func_178EE0
    ctx->pc = 0x177800u;
    SET_GPR_U32(ctx, 31, 0x177808u);
    ctx->pc = 0x177804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177800u;
    // 0x177804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178EE0u, 0x177800u, 0x177808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177808u;
label_177808:
    // 0x177808: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17780c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17780cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177810: 0x248452f0  addiu       $a0, $a0, 0x52F0
    ctx->pc = 0x177810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21232));
    // 0x177814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177818: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177818u;
    SET_GPR_U32(ctx, 31, 0x177820u);
    ctx->pc = 0x17781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177818u;
    // 0x17781c: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177818u, 0x177820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177820u;
label_177820:
    // 0x177820: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177820u;
    {
        const bool branch_taken_0x177820 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x177820) {
            ctx->pc = 0x177808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177808;
        }
    }
    ctx->pc = 0x177828u;
label_177828:
    // 0x177828: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17782c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177830: 0x24845320  addiu       $a0, $a0, 0x5320
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21280));
    // 0x177834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177838: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177838u;
    SET_GPR_U32(ctx, 31, 0x177840u);
    ctx->pc = 0x17783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177838u;
    // 0x17783c: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177838u, 0x177840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177840u;
label_177840:
    // 0x177840: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177840u;
    {
        const bool branch_taken_0x177840 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x177840) {
            ctx->pc = 0x177828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177828;
        }
    }
    ctx->pc = 0x177848u;
label_177848:
    // 0x177848: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17784c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17784cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177850: 0x24845350  addiu       $a0, $a0, 0x5350
    ctx->pc = 0x177850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
    // 0x177854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177858: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177858u;
    SET_GPR_U32(ctx, 31, 0x177860u);
    ctx->pc = 0x17785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177858u;
    // 0x17785c: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177858u, 0x177860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177860u;
label_177860:
    // 0x177860: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177860u;
    {
        const bool branch_taken_0x177860 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x177860) {
            ctx->pc = 0x177848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177848;
        }
    }
    ctx->pc = 0x177868u;
label_177868:
    // 0x177868: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17786c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17786cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177870: 0x24845380  addiu       $a0, $a0, 0x5380
    ctx->pc = 0x177870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21376));
    // 0x177874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177878: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177878u;
    SET_GPR_U32(ctx, 31, 0x177880u);
    ctx->pc = 0x17787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177878u;
    // 0x17787c: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177878u, 0x177880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177880u;
label_177880:
    // 0x177880: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177880u;
    {
        const bool branch_taken_0x177880 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x177880) {
            ctx->pc = 0x177868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177868;
        }
    }
    ctx->pc = 0x177888u;
label_177888:
    // 0x177888: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17788c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17788cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177890: 0x248453b0  addiu       $a0, $a0, 0x53B0
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
    // 0x177894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177898: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177898u;
    SET_GPR_U32(ctx, 31, 0x1778A0u);
    ctx->pc = 0x17789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177898u;
    // 0x17789c: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177898u, 0x1778A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778A0u;
label_1778a0:
    // 0x1778a0: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1778A0u;
    {
        const bool branch_taken_0x1778a0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1778a0) {
            ctx->pc = 0x177888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177888;
        }
    }
    ctx->pc = 0x1778A8u;
label_1778a8:
    // 0x1778a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1778a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1778ac: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1778b0: 0x248453e0  addiu       $a0, $a0, 0x53E0
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21472));
    // 0x1778b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1778b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778b8: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x1778B8u;
    SET_GPR_U32(ctx, 31, 0x1778C0u);
    ctx->pc = 0x1778BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778B8u;
    // 0x1778bc: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x1778B8u, 0x1778C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778C0u;
label_1778c0:
    // 0x1778c0: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1778C0u;
    {
        const bool branch_taken_0x1778c0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1778c0) {
            ctx->pc = 0x1778A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1778a8;
        }
    }
    ctx->pc = 0x1778C8u;
label_1778c8:
    // 0x1778c8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1778c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1778cc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1778ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1778d0: 0x24845410  addiu       $a0, $a0, 0x5410
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
    // 0x1778d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1778d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778d8: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x1778D8u;
    SET_GPR_U32(ctx, 31, 0x1778E0u);
    ctx->pc = 0x1778DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778D8u;
    // 0x1778dc: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x1778D8u, 0x1778E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778E0u;
label_1778e0:
    // 0x1778e0: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1778E0u;
    {
        const bool branch_taken_0x1778e0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1778e0) {
            ctx->pc = 0x1778C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1778c8;
        }
    }
    ctx->pc = 0x1778E8u;
label_1778e8:
    // 0x1778e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1778ec: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1778ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1778f0: 0x24845440  addiu       $a0, $a0, 0x5440
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21568));
    // 0x1778f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1778f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778f8: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x1778F8u;
    SET_GPR_U32(ctx, 31, 0x177900u);
    ctx->pc = 0x1778FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778F8u;
    // 0x1778fc: 0x24c65318  addiu       $a2, $a2, 0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x1778F8u, 0x177900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177900u;
label_177900:
    // 0x177900: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177900u;
    {
        const bool branch_taken_0x177900 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x177904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177900u;
        // 0x177904: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177900) {
            ctx->pc = 0x1778E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1778e8;
        }
    }
    ctx->pc = 0x177908u;
    // 0x177908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17790c: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x17790Cu;
    SET_GPR_U32(ctx, 31, 0x177914u);
    ctx->pc = 0x177910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17790Cu;
    // 0x177910: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x17790Cu, 0x177914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177914u;
label_177914:
    // 0x177914: 0x0  nop
    ctx->pc = 0x177914u;
    // NOP
label_177918:
    // 0x177918: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x177918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17791c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x177920: 0x24845470  addiu       $a0, $a0, 0x5470
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
    // 0x177924: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x177924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x177928: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x177928u;
    SET_GPR_U32(ctx, 31, 0x177930u);
    ctx->pc = 0x17792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177928u;
    // 0x17792c: 0x24c654a0  addiu       $a2, $a2, 0x54A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x177928u, 0x177930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177930u;
label_177930:
    // 0x177930: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177930u;
    {
        const bool branch_taken_0x177930 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x177934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177930u;
        // 0x177934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177930) {
            ctx->pc = 0x177918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177918;
        }
    }
    ctx->pc = 0x177938u;
    // 0x177938: 0xc05e324  jal         func_178C90
    ctx->pc = 0x177938u;
    SET_GPR_U32(ctx, 31, 0x177940u);
    ctx->pc = 0x178C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C90u, 0x177938u, 0x177940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177940u;
label_177940:
    // 0x177940: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x177940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x177944: 0xc054e54  jal         func_153950
    ctx->pc = 0x177944u;
    SET_GPR_U32(ctx, 31, 0x17794Cu);
    ctx->pc = 0x177948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177944u;
    // 0x177948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153950u, 0x177944u, 0x17794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17794Cu;
label_17794c:
    // 0x17794c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x177950: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x177954: 0x24426700  addiu       $v0, $v0, 0x6700
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26368));
    // 0x177958: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x17795c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x17795cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x177960: 0x3c0200b5  lui         $v0, 0xB5
    ctx->pc = 0x177960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)181 << 16));
    // 0x177964: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x177964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x177968: 0xc054d48  jal         func_153520
    ctx->pc = 0x177968u;
    SET_GPR_U32(ctx, 31, 0x177970u);
    ctx->pc = 0x17796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177968u;
    // 0x17796c: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153520u, 0x177968u, 0x177970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177970u;
label_177970:
    // 0x177970: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x177970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x177974: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x177974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x177978: 0xc054d48  jal         func_153520
    ctx->pc = 0x177978u;
    SET_GPR_U32(ctx, 31, 0x177980u);
    ctx->pc = 0x17797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177978u;
    // 0x17797c: 0x3c06000e  lui         $a2, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153520u, 0x177978u, 0x177980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177980u;
label_177980:
    // 0x177980: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x177980u;
    SET_GPR_U32(ctx, 31, 0x177988u);
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x177980u, 0x177988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177988u;
label_177988:
    // 0x177988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17798c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17798cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177990: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x177990u;
    SET_GPR_U32(ctx, 31, 0x177998u);
    ctx->pc = 0x177994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177990u;
    // 0x177994: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x177990u, 0x177998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177998u;
label_177998:
    // 0x177998: 0xc08d1fc  jal         func_2347F0
    ctx->pc = 0x177998u;
    SET_GPR_U32(ctx, 31, 0x1779A0u);
    ctx->pc = 0x2347F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347F0u, 0x177998u, 0x1779A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779A0u;
label_1779a0:
    // 0x1779a0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1779a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1779a4: 0xc0ce528  jal         func_3394A0
    ctx->pc = 0x1779A4u;
    SET_GPR_U32(ctx, 31, 0x1779ACu);
    ctx->pc = 0x1779A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779A4u;
    // 0x1779a8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394A0u, 0x1779A4u, 0x1779ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779ACu;
label_1779ac:
    // 0x1779ac: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1779acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1779b0: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x1779B0u;
    SET_GPR_U32(ctx, 31, 0x1779B8u);
    ctx->pc = 0x1779B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779B0u;
    // 0x1779b4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x1779B0u, 0x1779B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779B8u;
label_1779b8:
    // 0x1779b8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1779b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1779bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1779bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1779c0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1779c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1779c4: 0x24061c00  addiu       $a2, $zero, 0x1C00
    ctx->pc = 0x1779c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1779c8: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x1779C8u;
    SET_GPR_U32(ctx, 31, 0x1779D0u);
    ctx->pc = 0x1779CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779C8u;
    // 0x1779cc: 0x24070044  addiu       $a3, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x1779C8u, 0x1779D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779D0u;
label_1779d0:
    // 0x1779d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1779d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1779d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1779d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1779d8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1779dc: 0x24061c44  addiu       $a2, $zero, 0x1C44
    ctx->pc = 0x1779dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7236));
    // 0x1779e0: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x1779E0u;
    SET_GPR_U32(ctx, 31, 0x1779E8u);
    ctx->pc = 0x1779E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779E0u;
    // 0x1779e4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x1779E0u, 0x1779E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779E8u;
label_1779e8:
    // 0x1779e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1779e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1779ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1779ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1779f0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1779f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1779f4: 0x24061c54  addiu       $a2, $zero, 0x1C54
    ctx->pc = 0x1779f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7252));
    // 0x1779f8: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x1779F8u;
    SET_GPR_U32(ctx, 31, 0x177A00u);
    ctx->pc = 0x1779FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779F8u;
    // 0x1779fc: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x1779F8u, 0x177A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A00u;
label_177a00:
    // 0x177a00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x177a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x177a08: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a0c: 0x24061c60  addiu       $a2, $zero, 0x1C60
    ctx->pc = 0x177a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7264));
    // 0x177a10: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A10u;
    SET_GPR_U32(ctx, 31, 0x177A18u);
    ctx->pc = 0x177A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A10u;
    // 0x177a14: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A10u, 0x177A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A18u;
label_177a18:
    // 0x177a18: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x177a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x177a20: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a24: 0x24061ca0  addiu       $a2, $zero, 0x1CA0
    ctx->pc = 0x177a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7328));
    // 0x177a28: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A28u;
    SET_GPR_U32(ctx, 31, 0x177A30u);
    ctx->pc = 0x177A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A28u;
    // 0x177a2c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A28u, 0x177A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A30u;
label_177a30:
    // 0x177a30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x177a38: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a3c: 0x24061cc0  addiu       $a2, $zero, 0x1CC0
    ctx->pc = 0x177a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7360));
    // 0x177a40: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A40u;
    SET_GPR_U32(ctx, 31, 0x177A48u);
    ctx->pc = 0x177A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A40u;
    // 0x177a44: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A40u, 0x177A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A48u;
label_177a48:
    // 0x177a48: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177a50: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a54: 0x24061d00  addiu       $a2, $zero, 0x1D00
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7424));
    // 0x177a58: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A58u;
    SET_GPR_U32(ctx, 31, 0x177A60u);
    ctx->pc = 0x177A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A58u;
    // 0x177a5c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A58u, 0x177A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A60u;
label_177a60:
    // 0x177a60: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a64: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x177a68: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a6c: 0x24061d20  addiu       $a2, $zero, 0x1D20
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7456));
    // 0x177a70: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A70u;
    SET_GPR_U32(ctx, 31, 0x177A78u);
    ctx->pc = 0x177A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A70u;
    // 0x177a74: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A70u, 0x177A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A78u;
label_177a78:
    // 0x177a78: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x177a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177a80: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a84: 0x24061d3c  addiu       $a2, $zero, 0x1D3C
    ctx->pc = 0x177a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7484));
    // 0x177a88: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177A88u;
    SET_GPR_U32(ctx, 31, 0x177A90u);
    ctx->pc = 0x177A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A88u;
    // 0x177a8c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177A88u, 0x177A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A90u;
label_177a90:
    // 0x177a90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177a94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x177a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177a98: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177a9c: 0x24061d7c  addiu       $a2, $zero, 0x1D7C
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7548));
    // 0x177aa0: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177AA0u;
    SET_GPR_U32(ctx, 31, 0x177AA8u);
    ctx->pc = 0x177AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AA0u;
    // 0x177aa4: 0x24070104  addiu       $a3, $zero, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177AA0u, 0x177AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AA8u;
label_177aa8:
    // 0x177aa8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177aac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x177aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x177ab0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ab8: 0xc04c9f0  jal         func_1327C0
    ctx->pc = 0x177AB8u;
    SET_GPR_U32(ctx, 31, 0x177AC0u);
    ctx->pc = 0x177ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AB8u;
    // 0x177abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327C0u, 0x177AB8u, 0x177AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AC0u;
label_177ac0:
    // 0x177ac0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ac8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177acc: 0x24061e80  addiu       $a2, $zero, 0x1E80
    ctx->pc = 0x177accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7808));
    // 0x177ad0: 0x240706c0  addiu       $a3, $zero, 0x6C0
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    // 0x177ad4: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177AD4u;
    SET_GPR_U32(ctx, 31, 0x177ADCu);
    ctx->pc = 0x177AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AD4u;
    // 0x177ad8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177AD4u, 0x177ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177ADCu;
label_177adc:
    // 0x177adc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177ae4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177ae8: 0x24063040  addiu       $a2, $zero, 0x3040
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12352));
    // 0x177aec: 0x24070fc0  addiu       $a3, $zero, 0xFC0
    ctx->pc = 0x177aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
    // 0x177af0: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177AF0u;
    SET_GPR_U32(ctx, 31, 0x177AF8u);
    ctx->pc = 0x177AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AF0u;
    // 0x177af4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177AF0u, 0x177AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AF8u;
label_177af8:
    // 0x177af8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177afc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177b00: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b04: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b08: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b0c: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B0Cu;
    SET_GPR_U32(ctx, 31, 0x177B14u);
    ctx->pc = 0x177B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B0Cu;
    // 0x177b10: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B0Cu, 0x177B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B14u;
label_177b14:
    // 0x177b14: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177b18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177b1c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b20: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b24: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b28: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B28u;
    SET_GPR_U32(ctx, 31, 0x177B30u);
    ctx->pc = 0x177B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B28u;
    // 0x177b2c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B28u, 0x177B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B30u;
label_177b30:
    // 0x177b30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177b38: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b3c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b40: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b44: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B44u;
    SET_GPR_U32(ctx, 31, 0x177B4Cu);
    ctx->pc = 0x177B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B44u;
    // 0x177b48: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B44u, 0x177B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B4Cu;
label_177b4c:
    // 0x177b4c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177b50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x177b54: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b58: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b5c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b60: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B60u;
    SET_GPR_U32(ctx, 31, 0x177B68u);
    ctx->pc = 0x177B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B60u;
    // 0x177b64: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B60u, 0x177B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B68u;
label_177b68:
    // 0x177b68: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177b6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x177b70: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b74: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b78: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b7c: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B7Cu;
    SET_GPR_U32(ctx, 31, 0x177B84u);
    ctx->pc = 0x177B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B7Cu;
    // 0x177b80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B7Cu, 0x177B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B84u;
label_177b84:
    // 0x177b84: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177b88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x177b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x177b8c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177b90: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177b94: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177b98: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177B98u;
    SET_GPR_U32(ctx, 31, 0x177BA0u);
    ctx->pc = 0x177B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B98u;
    // 0x177b9c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177B98u, 0x177BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BA0u;
label_177ba0:
    // 0x177ba0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177ba4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x177ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177ba8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177bac: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177bb0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177bb4: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177BB4u;
    SET_GPR_U32(ctx, 31, 0x177BBCu);
    ctx->pc = 0x177BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BB4u;
    // 0x177bb8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177BB4u, 0x177BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BBCu;
label_177bbc:
    // 0x177bbc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177bc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x177bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x177bc4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177bc8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177bcc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177bd0: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177BD0u;
    SET_GPR_U32(ctx, 31, 0x177BD8u);
    ctx->pc = 0x177BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BD0u;
    // 0x177bd4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177BD0u, 0x177BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BD8u;
label_177bd8:
    // 0x177bd8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177bdc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x177be0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177be4: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177be8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177bec: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177BECu;
    SET_GPR_U32(ctx, 31, 0x177BF4u);
    ctx->pc = 0x177BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BECu;
    // 0x177bf0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177BECu, 0x177BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BF4u;
label_177bf4:
    // 0x177bf4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177bf8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x177bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x177bfc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c00: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177c04: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177c08: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C08u;
    SET_GPR_U32(ctx, 31, 0x177C10u);
    ctx->pc = 0x177C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C08u;
    // 0x177c0c: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C08u, 0x177C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C10u;
label_177c10:
    // 0x177c10: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177c14: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x177c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x177c18: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c1c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177c20: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x177c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x177c24: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C24u;
    SET_GPR_U32(ctx, 31, 0x177C2Cu);
    ctx->pc = 0x177C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C24u;
    // 0x177c28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C24u, 0x177C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C2Cu;
label_177c2c:
    // 0x177c2c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177c30: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x177c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x177c34: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c38: 0x24061280  addiu       $a2, $zero, 0x1280
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4736));
    // 0x177c3c: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x177c40: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C40u;
    SET_GPR_U32(ctx, 31, 0x177C48u);
    ctx->pc = 0x177C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C40u;
    // 0x177c44: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C40u, 0x177C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C48u;
label_177c48:
    // 0x177c48: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177c4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x177c50: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c54: 0x24061280  addiu       $a2, $zero, 0x1280
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4736));
    // 0x177c58: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x177c5c: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C5Cu;
    SET_GPR_U32(ctx, 31, 0x177C64u);
    ctx->pc = 0x177C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C5Cu;
    // 0x177c60: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C5Cu, 0x177C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C64u;
label_177c64:
    // 0x177c64: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177c68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177c6c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c70: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x177c74: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x177c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x177c78: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C78u;
    SET_GPR_U32(ctx, 31, 0x177C80u);
    ctx->pc = 0x177C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C78u;
    // 0x177c7c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C78u, 0x177C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C80u;
label_177c80:
    // 0x177c80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177c84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x177c88: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177c8c: 0x24062540  addiu       $a2, $zero, 0x2540
    ctx->pc = 0x177c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9536));
    // 0x177c90: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x177c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x177c94: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177C94u;
    SET_GPR_U32(ctx, 31, 0x177C9Cu);
    ctx->pc = 0x177C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C94u;
    // 0x177c98: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177C94u, 0x177C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C9Cu;
label_177c9c:
    // 0x177c9c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177ca0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x177ca4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177ca8: 0x24062dc0  addiu       $a2, $zero, 0x2DC0
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11712));
    // 0x177cac: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x177cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x177cb0: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177CB0u;
    SET_GPR_U32(ctx, 31, 0x177CB8u);
    ctx->pc = 0x177CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CB0u;
    // 0x177cb4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177CB0u, 0x177CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CB8u;
label_177cb8:
    // 0x177cb8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177cbc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x177cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x177cc0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177cc4: 0x24062840  addiu       $a2, $zero, 0x2840
    ctx->pc = 0x177cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x177cc8: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x177cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x177ccc: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177CCCu;
    SET_GPR_U32(ctx, 31, 0x177CD4u);
    ctx->pc = 0x177CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CCCu;
    // 0x177cd0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177CCCu, 0x177CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CD4u;
label_177cd4:
    // 0x177cd4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177cd8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x177cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x177cdc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177ce0: 0x24062b40  addiu       $a2, $zero, 0x2B40
    ctx->pc = 0x177ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11072));
    // 0x177ce4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x177ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x177ce8: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177CE8u;
    SET_GPR_U32(ctx, 31, 0x177CF0u);
    ctx->pc = 0x177CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CE8u;
    // 0x177cec: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177CE8u, 0x177CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CF0u;
label_177cf0:
    // 0x177cf0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177cf4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x177cf8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x177cfc: 0x24062840  addiu       $a2, $zero, 0x2840
    ctx->pc = 0x177cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x177d00: 0x240717c0  addiu       $a3, $zero, 0x17C0
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6080));
    // 0x177d04: 0xc04c9f8  jal         func_1327E0
    ctx->pc = 0x177D04u;
    SET_GPR_U32(ctx, 31, 0x177D0Cu);
    ctx->pc = 0x177D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D04u;
    // 0x177d08: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327E0u, 0x177D04u, 0x177D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D0Cu;
label_177d0c:
    // 0x177d0c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d10: 0xc04c8a4  jal         func_132290
    ctx->pc = 0x177D10u;
    SET_GPR_U32(ctx, 31, 0x177D18u);
    ctx->pc = 0x177D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D10u;
    // 0x177d14: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132290u, 0x177D10u, 0x177D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D18u;
label_177d18:
    // 0x177d18: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d1c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x177d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x177d20: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d28: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x177d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x177d2c: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177D2Cu;
    SET_GPR_U32(ctx, 31, 0x177D34u);
    ctx->pc = 0x177D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D2Cu;
    // 0x177d30: 0x34466000  ori         $a2, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177D2Cu, 0x177D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D34u;
label_177d34:
    // 0x177d34: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d38: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x177d3c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177d44: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x177d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x177d48: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177D48u;
    SET_GPR_U32(ctx, 31, 0x177D50u);
    ctx->pc = 0x177D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D48u;
    // 0x177d4c: 0x34464000  ori         $a2, $v0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177D48u, 0x177D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D50u;
label_177d50:
    // 0x177d50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d54: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x177d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x177d58: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177d5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177d60: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x177d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x177d64: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177D64u;
    SET_GPR_U32(ctx, 31, 0x177D6Cu);
    ctx->pc = 0x177D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D64u;
    // 0x177d68: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177D64u, 0x177D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D6Cu;
label_177d6c:
    // 0x177d6c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x177d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177d74: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177d78: 0x3c0601ff  lui         $a2, 0x1FF
    ctx->pc = 0x177d78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)511 << 16));
    // 0x177d7c: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177D7Cu;
    SET_GPR_U32(ctx, 31, 0x177D84u);
    ctx->pc = 0x177D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D7Cu;
    // 0x177d80: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177D7Cu, 0x177D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D84u;
label_177d84:
    // 0x177d84: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177d88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x177d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177d8c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177d90: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x177d94: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177D94u;
    SET_GPR_U32(ctx, 31, 0x177D9Cu);
    ctx->pc = 0x177D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D94u;
    // 0x177d98: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177D94u, 0x177D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D9Cu;
label_177d9c:
    // 0x177d9c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x177d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x177da0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x177da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x177da4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x177da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x177da8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x177da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x177dac: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x177dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x177db0: 0xc04c8b8  jal         func_1322E0
    ctx->pc = 0x177DB0u;
    SET_GPR_U32(ctx, 31, 0x177DB8u);
    ctx->pc = 0x177DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DB0u;
    // 0x177db4: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1322E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1322E0u, 0x177DB0u, 0x177DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DB8u;
label_177db8:
    // 0x177db8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177dbc: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x177dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x177dc0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x177dc4: 0xc04fb10  jal         func_13EC40
    ctx->pc = 0x177DC4u;
    SET_GPR_U32(ctx, 31, 0x177DCCu);
    ctx->pc = 0x177DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DC4u;
    // 0x177dc8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC40u, 0x177DC4u, 0x177DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DCCu;
label_177dcc:
    // 0x177dcc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177dd0: 0x2605209c  addiu       $a1, $s0, 0x209C
    ctx->pc = 0x177dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8348));
    // 0x177dd4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x177dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x177dd8: 0xc04fb10  jal         func_13EC40
    ctx->pc = 0x177DD8u;
    SET_GPR_U32(ctx, 31, 0x177DE0u);
    ctx->pc = 0x177DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DD8u;
    // 0x177ddc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC40u, 0x177DD8u, 0x177DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DE0u;
label_177de0:
    // 0x177de0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177de4: 0x260520dc  addiu       $a1, $s0, 0x20DC
    ctx->pc = 0x177de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8412));
    // 0x177de8: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
    // 0x177dec: 0xc04fb10  jal         func_13EC40
    ctx->pc = 0x177DECu;
    SET_GPR_U32(ctx, 31, 0x177DF4u);
    ctx->pc = 0x177DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DECu;
    // 0x177df0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC40u, 0x177DECu, 0x177DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DF4u;
label_177df4:
    // 0x177df4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177df8: 0x2605211c  addiu       $a1, $s0, 0x211C
    ctx->pc = 0x177df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8476));
    // 0x177dfc: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x177dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x177e00: 0xc04fb10  jal         func_13EC40
    ctx->pc = 0x177E00u;
    SET_GPR_U32(ctx, 31, 0x177E08u);
    ctx->pc = 0x177E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E00u;
    // 0x177e04: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC40u, 0x177E00u, 0x177E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E08u;
label_177e08:
    // 0x177e08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177e10: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x177e14: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x177e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x177e18: 0xc063c4c  jal         func_18F130
    ctx->pc = 0x177E18u;
    SET_GPR_U32(ctx, 31, 0x177E20u);
    ctx->pc = 0x177E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E18u;
    // 0x177e1c: 0xa022cc72  sb          $v0, -0x338E($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954098), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F130u, 0x177E18u, 0x177E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E20u;
label_177e20:
    // 0x177e20: 0xc061c28  jal         func_1870A0
    ctx->pc = 0x177E20u;
    SET_GPR_U32(ctx, 31, 0x177E28u);
    ctx->pc = 0x177E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E20u;
    // 0x177e24: 0x260423b0  addiu       $a0, $s0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870A0u, 0x177E20u, 0x177E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E28u;
label_177e28:
    // 0x177e28: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177e2c: 0xc04c7a4  jal         func_131E90
    ctx->pc = 0x177E2Cu;
    SET_GPR_U32(ctx, 31, 0x177E34u);
    ctx->pc = 0x177E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E2Cu;
    // 0x177e30: 0x24846700  addiu       $a0, $a0, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E90u, 0x177E2Cu, 0x177E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E34u;
label_177e34:
    // 0x177e34: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x177e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x177e38: 0xc0f0180  jal         func_3C0600
    ctx->pc = 0x177E38u;
    SET_GPR_U32(ctx, 31, 0x177E40u);
    ctx->pc = 0x177E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E38u;
    // 0x177e3c: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0600u, 0x177E38u, 0x177E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E40u;
label_177e40:
    // 0x177e40: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x177e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x177e44: 0xc0c0c54  jal         func_303150
    ctx->pc = 0x177E44u;
    SET_GPR_U32(ctx, 31, 0x177E4Cu);
    ctx->pc = 0x177E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E44u;
    // 0x177e48: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303150u, 0x177E44u, 0x177E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E4Cu;
label_177e4c:
    // 0x177e4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x177e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x177e50: 0xc051d00  jal         func_147400
    ctx->pc = 0x177E50u;
    SET_GPR_U32(ctx, 31, 0x177E58u);
    ctx->pc = 0x177E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E50u;
    // 0x177e54: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147400u, 0x177E50u, 0x177E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E58u;
label_177e58:
    // 0x177e58: 0xc0a2930  jal         func_28A4C0
    ctx->pc = 0x177E58u;
    SET_GPR_U32(ctx, 31, 0x177E60u);
    ctx->pc = 0x28A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A4C0u, 0x177E58u, 0x177E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E60u;
label_177e60:
    // 0x177e60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x177e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x177e64: 0xc052bd0  jal         func_14AF40
    ctx->pc = 0x177E64u;
    SET_GPR_U32(ctx, 31, 0x177E6Cu);
    ctx->pc = 0x177E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E64u;
    // 0x177e68: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF40u, 0x177E64u, 0x177E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E6Cu;
label_177e6c:
    // 0x177e6c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x177e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x177e70: 0xc052ca0  jal         func_14B280
    ctx->pc = 0x177E70u;
    SET_GPR_U32(ctx, 31, 0x177E78u);
    ctx->pc = 0x177E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E70u;
    // 0x177e74: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B280u, 0x177E70u, 0x177E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E78u;
label_177e78:
    // 0x177e78: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x177e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x177e7c: 0xc094f20  jal         func_253C80
    ctx->pc = 0x177E7Cu;
    SET_GPR_U32(ctx, 31, 0x177E84u);
    ctx->pc = 0x177E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E7Cu;
    // 0x177e80: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C80u, 0x177E7Cu, 0x177E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E84u;
label_177e84:
    // 0x177e84: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x177e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x177e88: 0xc0bcd18  jal         func_2F3460
    ctx->pc = 0x177E88u;
    SET_GPR_U32(ctx, 31, 0x177E90u);
    ctx->pc = 0x177E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E88u;
    // 0x177e8c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3460u, 0x177E88u, 0x177E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E90u;
label_177e90:
    // 0x177e90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x177e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x177e94: 0xc05e668  jal         func_1799A0
    ctx->pc = 0x177E94u;
    SET_GPR_U32(ctx, 31, 0x177E9Cu);
    ctx->pc = 0x177E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E94u;
    // 0x177e98: 0x2484cdb0  addiu       $a0, $a0, -0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1799A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1799A0u, 0x177E94u, 0x177E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E9Cu;
label_177e9c:
    // 0x177e9c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177ea0: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x177EA0u;
    SET_GPR_U32(ctx, 31, 0x177EA8u);
    ctx->pc = 0x177EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EA0u;
    // 0x177ea4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B60u, 0x177EA0u, 0x177EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EA8u;
label_177ea8:
    // 0x177ea8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x177eac: 0xc0c7f04  jal         func_31FC10
    ctx->pc = 0x177EACu;
    SET_GPR_U32(ctx, 31, 0x177EB4u);
    ctx->pc = 0x177EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EACu;
    // 0x177eb0: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC10u, 0x177EACu, 0x177EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EB4u;
label_177eb4:
    // 0x177eb4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ebc: 0xc04c638  jal         func_1318E0
    ctx->pc = 0x177EBCu;
    SET_GPR_U32(ctx, 31, 0x177EC4u);
    ctx->pc = 0x177EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EBCu;
    // 0x177ec0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1318E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1318E0u, 0x177EBCu, 0x177EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EC4u;
label_177ec4:
    // 0x177ec4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177ec8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x177ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x177ecc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ed4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177ED4u;
    SET_GPR_U32(ctx, 31, 0x177EDCu);
    ctx->pc = 0x177ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ED4u;
    // 0x177ed8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177ED4u, 0x177EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EDCu;
label_177edc:
    // 0x177edc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177ee0: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x177ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x177ee4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177eec: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177EECu;
    SET_GPR_U32(ctx, 31, 0x177EF4u);
    ctx->pc = 0x177EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EECu;
    // 0x177ef0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177EECu, 0x177EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177EF4u;
label_177ef4:
    // 0x177ef4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177ef8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x177ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x177efc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f04: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F04u;
    SET_GPR_U32(ctx, 31, 0x177F0Cu);
    ctx->pc = 0x177F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F04u;
    // 0x177f08: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F04u, 0x177F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F0Cu;
label_177f0c:
    // 0x177f0c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x177f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x177f14: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f1c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F1Cu;
    SET_GPR_U32(ctx, 31, 0x177F24u);
    ctx->pc = 0x177F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F1Cu;
    // 0x177f20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F1Cu, 0x177F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F24u;
label_177f24:
    // 0x177f24: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x177f2c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f34: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F34u;
    SET_GPR_U32(ctx, 31, 0x177F3Cu);
    ctx->pc = 0x177F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F34u;
    // 0x177f38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F34u, 0x177F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F3Cu;
label_177f3c:
    // 0x177f3c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f40: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x177f44: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f4c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F4Cu;
    SET_GPR_U32(ctx, 31, 0x177F54u);
    ctx->pc = 0x177F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F4Cu;
    // 0x177f50: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F4Cu, 0x177F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F54u;
label_177f54:
    // 0x177f54: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f58: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x177f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x177f5c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f64: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F64u;
    SET_GPR_U32(ctx, 31, 0x177F6Cu);
    ctx->pc = 0x177F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F64u;
    // 0x177f68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F64u, 0x177F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F6Cu;
label_177f6c:
    // 0x177f6c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f70: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x177f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x177f74: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f7c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F7Cu;
    SET_GPR_U32(ctx, 31, 0x177F84u);
    ctx->pc = 0x177F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F7Cu;
    // 0x177f80: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F7Cu, 0x177F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F84u;
label_177f84:
    // 0x177f84: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177f88: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x177f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x177f8c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f94: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177F94u;
    SET_GPR_U32(ctx, 31, 0x177F9Cu);
    ctx->pc = 0x177F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F94u;
    // 0x177f98: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177F94u, 0x177F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F9Cu;
label_177f9c:
    // 0x177f9c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177fa0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x177fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x177fa4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fac: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177FACu;
    SET_GPR_U32(ctx, 31, 0x177FB4u);
    ctx->pc = 0x177FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FACu;
    // 0x177fb0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177FACu, 0x177FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FB4u;
label_177fb4:
    // 0x177fb4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177fb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177fbc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fc4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177FC4u;
    SET_GPR_U32(ctx, 31, 0x177FCCu);
    ctx->pc = 0x177FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FC4u;
    // 0x177fc8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177FC4u, 0x177FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FCCu;
label_177fcc:
    // 0x177fcc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177fd0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177fd4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fdc: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177FDCu;
    SET_GPR_U32(ctx, 31, 0x177FE4u);
    ctx->pc = 0x177FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FDCu;
    // 0x177fe0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177FDCu, 0x177FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FE4u;
label_177fe4:
    // 0x177fe4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x177fe8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x177fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x177fec: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x177fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x177ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ff4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x177FF4u;
    SET_GPR_U32(ctx, 31, 0x177FFCu);
    ctx->pc = 0x177FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FF4u;
    // 0x177ff8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x177FF4u, 0x177FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FFCu;
label_177ffc:
    // 0x177ffc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x177ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178000: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x178004: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17800c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17800Cu;
    SET_GPR_U32(ctx, 31, 0x178014u);
    ctx->pc = 0x178010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17800Cu;
    // 0x178010: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17800Cu, 0x178014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178014u;
label_178014:
    // 0x178014: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178018: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17801c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178024: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178024u;
    SET_GPR_U32(ctx, 31, 0x17802Cu);
    ctx->pc = 0x178028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178024u;
    // 0x178028: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178024u, 0x17802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17802Cu;
label_17802c:
    // 0x17802c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178030: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x178030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x178034: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17803c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17803Cu;
    SET_GPR_U32(ctx, 31, 0x178044u);
    ctx->pc = 0x178040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17803Cu;
    // 0x178040: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17803Cu, 0x178044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178044u;
label_178044:
    // 0x178044: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178048: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x178048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x17804c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178054: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178054u;
    SET_GPR_U32(ctx, 31, 0x17805Cu);
    ctx->pc = 0x178058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178054u;
    // 0x178058: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178054u, 0x17805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17805Cu;
label_17805c:
    // 0x17805c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178060: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x178060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x178064: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17806c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17806Cu;
    SET_GPR_U32(ctx, 31, 0x178074u);
    ctx->pc = 0x178070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17806Cu;
    // 0x178070: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17806Cu, 0x178074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178074u;
label_178074:
    // 0x178074: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178078: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17807c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178084: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178084u;
    SET_GPR_U32(ctx, 31, 0x17808Cu);
    ctx->pc = 0x178088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178084u;
    // 0x178088: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178084u, 0x17808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17808Cu;
label_17808c:
    // 0x17808c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178090: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x178094: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17809c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17809Cu;
    SET_GPR_U32(ctx, 31, 0x1780A4u);
    ctx->pc = 0x1780A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17809Cu;
    // 0x1780a0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17809Cu, 0x1780A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780A4u;
label_1780a4:
    // 0x1780a4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1780a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1780a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1780ac: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1780b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1780b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780b4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1780B4u;
    SET_GPR_U32(ctx, 31, 0x1780BCu);
    ctx->pc = 0x1780B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780B4u;
    // 0x1780b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1780B4u, 0x1780BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780BCu;
label_1780bc:
    // 0x1780bc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1780bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1780c0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1780c4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1780c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1780c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780cc: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1780CCu;
    SET_GPR_U32(ctx, 31, 0x1780D4u);
    ctx->pc = 0x1780D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780CCu;
    // 0x1780d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1780CCu, 0x1780D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780D4u;
label_1780d4:
    // 0x1780d4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1780d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1780d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1780d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1780dc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1780dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1780e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1780e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780e4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1780E4u;
    SET_GPR_U32(ctx, 31, 0x1780ECu);
    ctx->pc = 0x1780E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780E4u;
    // 0x1780e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1780E4u, 0x1780ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1780ECu;
label_1780ec:
    // 0x1780ec: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1780ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1780f0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1780f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1780f4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1780f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1780f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780fc: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1780FCu;
    SET_GPR_U32(ctx, 31, 0x178104u);
    ctx->pc = 0x178100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1780FCu;
    // 0x178100: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1780FCu, 0x178104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178104u;
label_178104:
    // 0x178104: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178108: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x17810c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178114: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178114u;
    SET_GPR_U32(ctx, 31, 0x17811Cu);
    ctx->pc = 0x178118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178114u;
    // 0x178118: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178114u, 0x17811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17811Cu;
label_17811c:
    // 0x17811c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17811cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178120: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x178120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x178124: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17812c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17812Cu;
    SET_GPR_U32(ctx, 31, 0x178134u);
    ctx->pc = 0x178130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17812Cu;
    // 0x178130: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17812Cu, 0x178134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178134u;
label_178134:
    // 0x178134: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178138: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x178138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x17813c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178144: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178144u;
    SET_GPR_U32(ctx, 31, 0x17814Cu);
    ctx->pc = 0x178148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178144u;
    // 0x178148: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178144u, 0x17814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17814Cu;
label_17814c:
    // 0x17814c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178150: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178154: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17815c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17815Cu;
    SET_GPR_U32(ctx, 31, 0x178164u);
    ctx->pc = 0x178160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17815Cu;
    // 0x178160: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17815Cu, 0x178164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178164u;
label_178164:
    // 0x178164: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178168: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x178168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17816c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178174: 0xc04c64c  jal         func_131930
    ctx->pc = 0x178174u;
    SET_GPR_U32(ctx, 31, 0x17817Cu);
    ctx->pc = 0x178178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178174u;
    // 0x178178: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x178174u, 0x17817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17817Cu;
label_17817c:
    // 0x17817c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x17817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178180: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x178184: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x178188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17818c: 0xc04c64c  jal         func_131930
    ctx->pc = 0x17818Cu;
    SET_GPR_U32(ctx, 31, 0x178194u);
    ctx->pc = 0x178190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17818Cu;
    // 0x178190: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x17818Cu, 0x178194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178194u;
label_178194:
    // 0x178194: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x178194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x178198: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x178198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x17819c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x17819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1781a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1781a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a4: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1781A4u;
    SET_GPR_U32(ctx, 31, 0x1781ACu);
    ctx->pc = 0x1781A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781A4u;
    // 0x1781a8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1781A4u, 0x1781ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781ACu;
label_1781ac:
    // 0x1781ac: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1781b0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1781b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1781b4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1781b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1781b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781bc: 0xc04c64c  jal         func_131930
    ctx->pc = 0x1781BCu;
    SET_GPR_U32(ctx, 31, 0x1781C4u);
    ctx->pc = 0x1781C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781BCu;
    // 0x1781c0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131930u, 0x1781BCu, 0x1781C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781C4u;
label_1781c4:
    // 0x1781c4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1781c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1781c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781cc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1781ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1781d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1781d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781d4: 0xc04c304  jal         func_130C10
    ctx->pc = 0x1781D4u;
    SET_GPR_U32(ctx, 31, 0x1781DCu);
    ctx->pc = 0x1781D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781D4u;
    // 0x1781d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x1781D4u, 0x1781DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781DCu;
label_1781dc:
    // 0x1781dc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1781dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1781e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1781e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1781e4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x1781e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1781e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781ec: 0xc04c304  jal         func_130C10
    ctx->pc = 0x1781ECu;
    SET_GPR_U32(ctx, 31, 0x1781F4u);
    ctx->pc = 0x1781F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781ECu;
    // 0x1781f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x1781ECu, 0x1781F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781F4u;
label_1781f4:
    // 0x1781f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1781f8: 0xc0526ec  jal         func_149BB0
    ctx->pc = 0x1781F8u;
    SET_GPR_U32(ctx, 31, 0x178200u);
    ctx->pc = 0x1781FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781F8u;
    // 0x1781fc: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149BB0u, 0x1781F8u, 0x178200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178200u;
label_178200:
    // 0x178200: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178204: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x178208: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x17820c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x178210: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x178214: 0xc05dc3c  jal         func_1770F0
    ctx->pc = 0x178214u;
    SET_GPR_U32(ctx, 31, 0x17821Cu);
    ctx->pc = 0x178218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178214u;
    // 0x178218: 0xac22cee0  sw          $v0, -0x3120($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770F0u, 0x178214u, 0x17821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17821Cu;
label_17821c:
    // 0x17821c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x178220: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x178220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x178224: 0xc041038  jal         func_1040E0
    ctx->pc = 0x178224u;
    SET_GPR_U32(ctx, 31, 0x17822Cu);
    ctx->pc = 0x178228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178224u;
    // 0x178228: 0xfc221000  sd          $v0, 0x1000($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4096), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040E0u, 0x178224u, 0x17822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17822Cu;
label_17822c:
    // 0x17822c: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x178230: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x178230u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x178234: 0xc040ef6  jal         func_103BD8
    ctx->pc = 0x178234u;
    SET_GPR_U32(ctx, 31, 0x17823Cu);
    ctx->pc = 0x178238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178234u;
    // 0x178238: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103BD8u, 0x178234u, 0x17823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17823Cu;
label_17823c:
    // 0x17823c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x17823cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x178240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178244: 0x24a5fbc0  addiu       $a1, $a1, -0x440
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966208));
    // 0x178248: 0xc043730  jal         func_10DCC0
    ctx->pc = 0x178248u;
    SET_GPR_U32(ctx, 31, 0x178250u);
    ctx->pc = 0x17824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178248u;
    // 0x17824c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCC0u, 0x178248u, 0x178250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178250u;
label_178250:
    // 0x178250: 0xc043aca  jal         func_10EB28
    ctx->pc = 0x178250u;
    SET_GPR_U32(ctx, 31, 0x178258u);
    ctx->pc = 0x178254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178250u;
    // 0x178254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB28u, 0x178250u, 0x178258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178258u;
label_178258:
    // 0x178258: 0x3c020120  lui         $v0, 0x120
    ctx->pc = 0x178258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)288 << 16));
    // 0x17825c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x17825cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x178260: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x178260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x178264: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x178264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x178268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17826c: 0xc09bc58  jal         func_26F160
    ctx->pc = 0x17826Cu;
    SET_GPR_U32(ctx, 31, 0x178274u);
    ctx->pc = 0x178270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17826Cu;
    // 0x178270: 0xae022df8  sw          $v0, 0x2DF8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11768), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F160u, 0x17826Cu, 0x178274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178274u;
label_178274:
    // 0x178274: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x178274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x178278: 0xc0f9fa4  jal         func_3E7E90
    ctx->pc = 0x178278u;
    SET_GPR_U32(ctx, 31, 0x178280u);
    ctx->pc = 0x17827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178278u;
    // 0x17827c: 0x248465b0  addiu       $a0, $a0, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7E90u, 0x178278u, 0x178280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178280u;
label_178280:
    // 0x178280: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x178280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x178284: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x178284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x178288: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x178288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x17828c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17828cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178290: 0xc04c900  jal         func_132400
    ctx->pc = 0x178290u;
    SET_GPR_U32(ctx, 31, 0x178298u);
    ctx->pc = 0x178294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178290u;
    // 0x178294: 0x24c6e990  addiu       $a2, $a2, -0x1670 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132400u, 0x178290u, 0x178298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178298u;
label_178298:
    // 0x178298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17829c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17829cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1782a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1782A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782A0u;
        // 0x1782a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1782A8u;
}
