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

// Function: sub_001806D0
// Address: 0x1806d0 - 0x180c64
void sub_001806D0_0x1806d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806D0_0x1806d0");
#endif

    switch (ctx->pc) {
        case 0x1807a8u: goto label_1807a8;
        case 0x18088cu: goto label_18088c;
        case 0x180898u: goto label_180898;
        case 0x1808a8u: goto label_1808a8;
        case 0x1808b8u: goto label_1808b8;
        case 0x180918u: goto label_180918;
        case 0x1809e4u: goto label_1809e4;
        case 0x180b00u: goto label_180b00;
        default: break;
    }

    ctx->pc = 0x1806d0u;

    // 0x1806d0: 0x27bdef20  addiu       $sp, $sp, -0x10E0
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962976));
    // 0x1806d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1806d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1806d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1806dc: 0x2463d2f0  addiu       $v1, $v1, -0x2D10
    ctx->pc = 0x1806dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955760));
    // 0x1806e0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1806e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1806e4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1806e8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1806e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1806ec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1806ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1806f0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1806f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1806f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1806f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1806f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1806f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1806fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1806fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180700: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x180700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x180704: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180708: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x180708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18070c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x180710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180714: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x180714u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x180718: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x180718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18071c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18071cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x180720: 0x8c9e0048  lw          $fp, 0x48($a0)
    ctx->pc = 0x180720u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x180724: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x180724u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x180728: 0x8c930050  lw          $s3, 0x50($a0)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x18072c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x18072cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40D2F0u));
    // 0x180730: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x180730u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40D300u));
    // 0x180734: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x180734u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x40D310u));
    // 0x180738: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x180738u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40D320u));
    // 0x18073c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x18073cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x180740: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x180740u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x180744: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x180744u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x180748: 0x12600137  beqz        $s3, . + 4 + (0x137 << 2)
    ctx->pc = 0x180748u;
    {
        const bool branch_taken_0x180748 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180748u;
        // 0x18074c: 0x7d030030  sq          $v1, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180748) {
            ctx->pc = 0x180C28u;
            goto label_180c28;
        }
    }
    ctx->pc = 0x180750u;
    // 0x180750: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x180750u;
    {
        const bool branch_taken_0x180750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x180754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180750u;
        // 0x180754: 0x3c043f80  lui         $a0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180750) {
            ctx->pc = 0x180778u;
            goto label_180778;
        }
    }
    ctx->pc = 0x180758u;
    // 0x180758: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x18075c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x18075cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x180760: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x180760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x180764: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x180764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x180768: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x18076c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180770: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x180770u;
    {
        const bool branch_taken_0x180770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180770u;
        // 0x180774: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180770) {
            ctx->pc = 0x180C28u;
            goto label_180c28;
        }
    }
    ctx->pc = 0x180778u;
label_180778:
    // 0x180778: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x18077c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x18077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x180780: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180780u;
    {
        const bool branch_taken_0x180780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180780u;
        // 0x180784: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180780) {
            ctx->pc = 0x180790u;
            goto label_180790;
        }
    }
    ctx->pc = 0x180788u;
    // 0x180788: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x180788u;
    {
        const bool branch_taken_0x180788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180788u;
        // 0x18078c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180788) {
            ctx->pc = 0x180800u;
            goto label_180800;
        }
    }
    ctx->pc = 0x180790u;
label_180790:
    // 0x180790: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x180794: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180794u;
    {
        const bool branch_taken_0x180794 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x180794) {
            ctx->pc = 0x1807A8u;
            goto label_1807a8;
        }
    }
    ctx->pc = 0x18079Cu;
    // 0x18079c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18079Cu;
    {
        const bool branch_taken_0x18079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18079Cu;
        // 0x1807a0: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18079c) {
            ctx->pc = 0x180800u;
            goto label_180800;
        }
    }
    ctx->pc = 0x1807A4u;
    // 0x1807a4: 0x0  nop
    ctx->pc = 0x1807a4u;
    // NOP
label_1807a8:
    // 0x1807a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1807a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1807ac: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x1807acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1807b0: 0x346313fd  ori         $v1, $v1, 0x13FD
    ctx->pc = 0x1807b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5117);
    // 0x1807b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1807b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807b8: 0x0  nop
    ctx->pc = 0x1807b8u;
    // NOP
    // 0x1807bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1807bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1807c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1807C0u;
    {
        const bool branch_taken_0x1807c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1807C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807C0u;
        // 0x1807c4: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807c0) {
            ctx->pc = 0x1807E8u;
            goto label_1807e8;
        }
    }
    ctx->pc = 0x1807C8u;
    // 0x1807c8: 0x346313fd  ori         $v1, $v1, 0x13FD
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5117);
    // 0x1807cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1807ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807d0: 0x0  nop
    ctx->pc = 0x1807d0u;
    // NOP
    // 0x1807d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1807d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1807d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1807D8u;
    {
        const bool branch_taken_0x1807d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1807d8) {
            ctx->pc = 0x1807E8u;
            goto label_1807e8;
        }
    }
    ctx->pc = 0x1807E0u;
    // 0x1807e0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1807e0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1807e4: 0x0  nop
    ctx->pc = 0x1807e4u;
    // NOP
label_1807e8:
    // 0x1807e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1807e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807ec: 0x0  nop
    ctx->pc = 0x1807ecu;
    // NOP
    // 0x1807f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1807f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1807f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1807F4u;
    {
        const bool branch_taken_0x1807f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1807f4) {
            ctx->pc = 0x180800u;
            goto label_180800;
        }
    }
    ctx->pc = 0x1807FCu;
    // 0x1807fc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1807fcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_180800:
    // 0x180800: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x180800u;
    {
        const bool branch_taken_0x180800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x180800) {
            ctx->pc = 0x180860u;
            goto label_180860;
        }
    }
    ctx->pc = 0x180808u;
    // 0x180808: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18080c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180810: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x180810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x180814: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x180814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180818: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x180818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x18081c: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x18081cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x180820: 0x92640024  lbu         $a0, 0x24($s3)
    ctx->pc = 0x180820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x180824: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x180824u;
    {
        const bool branch_taken_0x180824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180824) {
            ctx->pc = 0x180850u;
            goto label_180850;
        }
    }
    ctx->pc = 0x18082Cu;
    // 0x18082c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x18082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180830: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x180830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180834: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x180834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x180838: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x180838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18083c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x18083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x180840: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x180840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180844: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x180844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x180848: 0xa2630025  sb          $v1, 0x25($s3)
    ctx->pc = 0x180848u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x18084c: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x18084cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
label_180850:
    // 0x180850: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180854: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x180854u;
    {
        const bool branch_taken_0x180854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180854u;
        // 0x180858: 0xa2630024  sb          $v1, 0x24($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180854) {
            ctx->pc = 0x180B78u;
            goto label_180b78;
        }
    }
    ctx->pc = 0x18085Cu;
    // 0x18085c: 0x0  nop
    ctx->pc = 0x18085cu;
    // NOP
label_180860:
    // 0x180860: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x180860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x180864: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x180864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x180868: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x180868u;
    {
        const bool branch_taken_0x180868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180868u;
        // 0x18086c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180868) {
            ctx->pc = 0x180898u;
            goto label_180898;
        }
    }
    ctx->pc = 0x180870u;
    // 0x180870: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x180870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x180874: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x180878: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x180878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18087c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x180880: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x180880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x180884: 0xc04f7b8  jal         func_13DEE0
    ctx->pc = 0x180884u;
    SET_GPR_U32(ctx, 31, 0x18088Cu);
    ctx->pc = 0x180888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180884u;
    // 0x180888: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEE0u, 0x180884u, 0x18088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18088Cu;
label_18088c:
    // 0x18088c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x180890: 0xc04f7d8  jal         func_13DF60
    ctx->pc = 0x180890u;
    SET_GPR_U32(ctx, 31, 0x180898u);
    ctx->pc = 0x180894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180890u;
    // 0x180894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF60u, 0x180890u, 0x180898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180898u;
label_180898:
    // 0x180898: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18089c: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1808a0: 0x27b600f8  addiu       $s6, $sp, 0xF8
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1808a4: 0x0  nop
    ctx->pc = 0x1808a4u;
    // NOP
label_1808a8:
    // 0x1808a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1808ac: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1808b0: 0xc041442  jal         func_105108
    ctx->pc = 0x1808B0u;
    SET_GPR_U32(ctx, 31, 0x1808B8u);
    ctx->pc = 0x1808B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808B0u;
    // 0x1808b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1808B0u, 0x1808B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808B8u;
label_1808b8:
    // 0x1808b8: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1808b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1808bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1808c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1808C0u;
    {
        const bool branch_taken_0x1808c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808c0) {
            ctx->pc = 0x180900u;
            goto label_180900;
        }
    }
    ctx->pc = 0x1808C8u;
    // 0x1808c8: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x1808c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1808cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1808d0: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x1808d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1808d4: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x1808d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1808d8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x1808d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1808dc: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x1808dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1808e0: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x1808e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1808e4: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1808e4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x1808e8: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1808e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1808ec: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x1808ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1808f0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1808f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1808f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1808f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1808f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1808F8u;
    {
        const bool branch_taken_0x1808f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808F8u;
        // 0x1808fc: 0xe7a010dc  swc1        $f0, 0x10DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808f8) {
            ctx->pc = 0x180918u;
            goto label_180918;
        }
    }
    ctx->pc = 0x180900u;
label_180900:
    // 0x180900: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x180900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x180904: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x180908: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x18090c: 0x27a610dc  addiu       $a2, $sp, 0x10DC
    ctx->pc = 0x18090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4316));
    // 0x180910: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x180910u;
    SET_GPR_U32(ctx, 31, 0x180918u);
    ctx->pc = 0x180914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180910u;
    // 0x180914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x180910u, 0x180918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180918u;
label_180918:
    // 0x180918: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x180918u;
    {
        const bool branch_taken_0x180918 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x180918) {
            ctx->pc = 0x180970u;
            goto label_180970;
        }
    }
    ctx->pc = 0x180920u;
    // 0x180920: 0xc7a110dc  lwc1        $f1, 0x10DC($sp)
    ctx->pc = 0x180920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x180924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180928: 0x0  nop
    ctx->pc = 0x180928u;
    // NOP
    // 0x18092c: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x18092cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x180930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180934: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180934u;
    {
        const bool branch_taken_0x180934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180934) {
            ctx->pc = 0x180940u;
            goto label_180940;
        }
    }
    ctx->pc = 0x18093Cu;
    // 0x18093c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x18093cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_180940:
    // 0x180940: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x180940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x180944: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x180944u;
    {
        const bool branch_taken_0x180944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180944) {
            ctx->pc = 0x180960u;
            goto label_180960;
        }
    }
    ctx->pc = 0x18094Cu;
    // 0x18094c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x18094cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180950: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x180950u;
    {
        const bool branch_taken_0x180950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180950) {
            ctx->pc = 0x180970u;
            goto label_180970;
        }
    }
    ctx->pc = 0x180958u;
    // 0x180958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180958u;
    {
        const bool branch_taken_0x180958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180958u;
        // 0x18095c: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180958) {
            ctx->pc = 0x180970u;
            goto label_180970;
        }
    }
    ctx->pc = 0x180960u;
label_180960:
    // 0x180960: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x180960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180964: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180964u;
    {
        const bool branch_taken_0x180964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180964) {
            ctx->pc = 0x180970u;
            goto label_180970;
        }
    }
    ctx->pc = 0x18096Cu;
    // 0x18096c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x18096cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_180970:
    // 0x180970: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x180974: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x180974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x180978: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x180978u;
    {
        const bool branch_taken_0x180978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180978u;
        // 0x18097c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180978) {
            ctx->pc = 0x1808A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1808a8;
        }
    }
    ctx->pc = 0x180980u;
    // 0x180980: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x180984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180988: 0x0  nop
    ctx->pc = 0x180988u;
    // NOP
    // 0x18098c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x18098cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180990: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x180990u;
    {
        const bool branch_taken_0x180990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180990) {
            ctx->pc = 0x1809A0u;
            goto label_1809a0;
        }
    }
    ctx->pc = 0x180998u;
    // 0x180998: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x180998u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x18099c: 0x0  nop
    ctx->pc = 0x18099cu;
    // NOP
label_1809a0:
    // 0x1809a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1809a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1809a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1809a8: 0x0  nop
    ctx->pc = 0x1809a8u;
    // NOP
    // 0x1809ac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1809acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1809B0u;
    {
        const bool branch_taken_0x1809b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809b0) {
            ctx->pc = 0x1809C0u;
            goto label_1809c0;
        }
    }
    ctx->pc = 0x1809B8u;
    // 0x1809b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1809b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1809bc: 0x0  nop
    ctx->pc = 0x1809bcu;
    // NOP
label_1809c0:
    // 0x1809c0: 0x92700024  lbu         $s0, 0x24($s3)
    ctx->pc = 0x1809c0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1809c4: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1809c8: 0xa2600024  sb          $zero, 0x24($s3)
    ctx->pc = 0x1809c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1809cc: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x1809ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1809d0: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1809d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1809d4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1809d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1809d8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1809d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1809dc: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1809DCu;
    SET_GPR_U32(ctx, 31, 0x1809E4u);
    ctx->pc = 0x1809E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809DCu;
    // 0x1809e0: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1809DCu, 0x1809E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809E4u;
label_1809e4:
    // 0x1809e4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1809e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1809e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1809e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1809ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1809ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1809f0: 0x0  nop
    ctx->pc = 0x1809f0u;
    // NOP
    // 0x1809f4: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x1809f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1809F8u;
    {
        const bool branch_taken_0x1809f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1809FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809F8u;
        // 0x1809fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809f8) {
            ctx->pc = 0x180A08u;
            goto label_180a08;
        }
    }
    ctx->pc = 0x180A00u;
    // 0x180a00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x180A00u;
    {
        const bool branch_taken_0x180a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A00u;
        // 0x180a04: 0xa2630024  sb          $v1, 0x24($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a00) {
            ctx->pc = 0x180A50u;
            goto label_180a50;
        }
    }
    ctx->pc = 0x180A08u;
label_180a08:
    // 0x180a08: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x180a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x180a0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x180a10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x180a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a14: 0x0  nop
    ctx->pc = 0x180a14u;
    // NOP
    // 0x180a18: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x180a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a1c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x180A1Cu;
    {
        const bool branch_taken_0x180a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A1Cu;
        // 0x180a20: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a1c) {
            ctx->pc = 0x180A50u;
            goto label_180a50;
        }
    }
    ctx->pc = 0x180A24u;
    // 0x180a24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x180a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a28: 0x0  nop
    ctx->pc = 0x180a28u;
    // NOP
    // 0x180a2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x180A30u;
    {
        const bool branch_taken_0x180a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180a30) {
            ctx->pc = 0x180A48u;
            goto label_180a48;
        }
    }
    ctx->pc = 0x180A38u;
    // 0x180a38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180a3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180A3Cu;
    {
        const bool branch_taken_0x180a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A3Cu;
        // 0x180a40: 0xa2630024  sb          $v1, 0x24($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a3c) {
            ctx->pc = 0x180A50u;
            goto label_180a50;
        }
    }
    ctx->pc = 0x180A44u;
    // 0x180a44: 0x0  nop
    ctx->pc = 0x180a44u;
    // NOP
label_180a48:
    // 0x180a48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180a4c: 0xa2630024  sb          $v1, 0x24($s3)
    ctx->pc = 0x180a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 3));
label_180a50:
    // 0x180a50: 0x92640024  lbu         $a0, 0x24($s3)
    ctx->pc = 0x180a50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x180a54: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x180a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x180a58: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x180A58u;
    {
        const bool branch_taken_0x180a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x180a58) {
            ctx->pc = 0x180A88u;
            goto label_180a88;
        }
    }
    ctx->pc = 0x180A60u;
    // 0x180a60: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x180a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x180a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180a68: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x180a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x180a6c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x180a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a70: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x180a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x180a74: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x180a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a78: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x180a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x180a7c: 0xa2630025  sb          $v1, 0x25($s3)
    ctx->pc = 0x180a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x180a80: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x180a80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x180a84: 0x0  nop
    ctx->pc = 0x180a84u;
    // NOP
label_180a88:
    // 0x180a88: 0x92640024  lbu         $a0, 0x24($s3)
    ctx->pc = 0x180a88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x180a8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x180a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180a90: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x180A90u;
    {
        const bool branch_taken_0x180a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x180A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A90u;
        // 0x180a94: 0x3c054270  lui         $a1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a90) {
            ctx->pc = 0x180B00u;
            goto label_180b00;
        }
    }
    ctx->pc = 0x180A98u;
    // 0x180a98: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x180a9c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x180a9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180aa0: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x180aa4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180aa8: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x180aa8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x180aac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x180aacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180ab0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x180ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180ab4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180ab8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x180ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x180abc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x180abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x180ac0: 0x4602a803  div.s       $f0, $f21, $f2
    ctx->pc = 0x180ac0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[2]); }
    // 0x180ac4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180ac8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x180ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x180acc: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x180accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180ad0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x180AD0u;
    {
        const bool branch_taken_0x180ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AD0u;
        // 0x180ad4: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ad0) {
            ctx->pc = 0x180AE0u;
            goto label_180ae0;
        }
    }
    ctx->pc = 0x180AD8u;
    // 0x180ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180AD8u;
    {
        const bool branch_taken_0x180ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ad8) {
            ctx->pc = 0x180AE8u;
            goto label_180ae8;
        }
    }
    ctx->pc = 0x180AE0u;
label_180ae0:
    // 0x180ae0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x180ae0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x180ae4: 0x0  nop
    ctx->pc = 0x180ae4u;
    // NOP
label_180ae8:
    // 0x180ae8: 0x3c033db8  lui         $v1, 0x3DB8
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
    // 0x180aec: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x180aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x180af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180af4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x180AF4u;
    {
        const bool branch_taken_0x180af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AF4u;
        // 0x180af8: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180af4) {
            ctx->pc = 0x180B70u;
            goto label_180b70;
        }
    }
    ctx->pc = 0x180AFCu;
    // 0x180afc: 0x0  nop
    ctx->pc = 0x180afcu;
    // NOP
label_180b00:
    // 0x180b00: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x180b04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x180b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180b08: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x180b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b0c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x180b10: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x180b10u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x180b14: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x180b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x180b18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180b1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x180b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180b20: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x180b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180b24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180b28: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x180b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x180b2c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x180b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x180b30: 0x4602a803  div.s       $f0, $f21, $f2
    ctx->pc = 0x180b30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[2]); }
    // 0x180b34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x180b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x180b38: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x180b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x180b3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x180B3Cu;
    {
        const bool branch_taken_0x180b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B3Cu;
        // 0x180b40: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b3c) {
            ctx->pc = 0x180B50u;
            goto label_180b50;
        }
    }
    ctx->pc = 0x180B44u;
    // 0x180b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180B44u;
    {
        const bool branch_taken_0x180b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b44) {
            ctx->pc = 0x180B58u;
            goto label_180b58;
        }
    }
    ctx->pc = 0x180B4Cu;
    // 0x180b4c: 0x0  nop
    ctx->pc = 0x180b4cu;
    // NOP
label_180b50:
    // 0x180b50: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x180b50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x180b54: 0x0  nop
    ctx->pc = 0x180b54u;
    // NOP
label_180b58:
    // 0x180b58: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
    // 0x180b5c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x180b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x180b60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180b64: 0x0  nop
    ctx->pc = 0x180b64u;
    // NOP
    // 0x180b68: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x180b68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x180b6c: 0x0  nop
    ctx->pc = 0x180b6cu;
    // NOP
label_180b70:
    // 0x180b70: 0xe6750018  swc1        $f21, 0x18($s3)
    ctx->pc = 0x180b70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x180b74: 0x0  nop
    ctx->pc = 0x180b74u;
    // NOP
label_180b78:
    // 0x180b78: 0x82630026  lb          $v1, 0x26($s3)
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x180b7c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x180B7Cu;
    {
        const bool branch_taken_0x180b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b7c) {
            ctx->pc = 0x180BF0u;
            goto label_180bf0;
        }
    }
    ctx->pc = 0x180B84u;
    // 0x180b84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x180b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x180b88: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x180b88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x180b8c: 0x82640026  lb          $a0, 0x26($s3)
    ctx->pc = 0x180b8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x180b90: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x180b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b94: 0x82630025  lb          $v1, 0x25($s3)
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x180b98: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x180b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180b9c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x180b9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180ba0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x180ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180ba4: 0x0  nop
    ctx->pc = 0x180ba4u;
    // NOP
    // 0x180ba8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x180ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x180bac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x180bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x180bb0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x180bb0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x180bb4: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x180bb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x180bb8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x180bb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x180bbc: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x180bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x180bc0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x180bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x180bc4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x180bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180bc8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x180bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180bcc: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x180bccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x180bd0: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x180bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x180bd4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x180bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x180bd8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x180bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180bdc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x180bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180be0: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x180be0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x180be4: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x180be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x180be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180BE8u;
    {
        const bool branch_taken_0x180be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE8u;
        // 0x180bec: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180be8) {
            ctx->pc = 0x180C08u;
            goto label_180c08;
        }
    }
    ctx->pc = 0x180BF0u;
label_180bf0:
    // 0x180bf0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x180bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180bf4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x180bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x180bf8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x180bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180bfc: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x180bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x180c00: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x180c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180c04: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x180c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_180c08:
    // 0x180c08: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x180c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180c0c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x180c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180c10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x180c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x180c14: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180C14u;
    {
        const bool branch_taken_0x180c14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C14u;
        // 0x180c18: 0xe6800004  swc1        $f0, 0x4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c14) {
            ctx->pc = 0x180C28u;
            goto label_180c28;
        }
    }
    ctx->pc = 0x180C1Cu;
    // 0x180c1c: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x180c20: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x180c24: 0xaea30044  sw          $v1, 0x44($s5)
    ctx->pc = 0x180c24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
label_180c28:
    // 0x180c28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x180c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x180c2c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x180c2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180c30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x180c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x180c34: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x180c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180c38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x180c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x180c3c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x180c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180c40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x180c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180c44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x180c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180c48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x180c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180c4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x180c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180c50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x180c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180c54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x180c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180c58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x180C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C5Cu;
        // 0x180c60: 0x27bd10e0  addiu       $sp, $sp, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180C64u;
}
