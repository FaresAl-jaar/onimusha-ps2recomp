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

// Function: sub_00173600
// Address: 0x173600 - 0x174238
void sub_00173600_0x173600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173600_0x173600");
#endif

    switch (ctx->pc) {
        case 0x173860u: goto label_173860;
        case 0x173878u: goto label_173878;
        case 0x1738e0u: goto label_1738e0;
        case 0x173984u: goto label_173984;
        case 0x173a40u: goto label_173a40;
        case 0x173a5cu: goto label_173a5c;
        case 0x173ad4u: goto label_173ad4;
        case 0x173af4u: goto label_173af4;
        case 0x173b6cu: goto label_173b6c;
        case 0x173d0cu: goto label_173d0c;
        case 0x173e68u: goto label_173e68;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f74u: goto label_173f74;
        case 0x174000u: goto label_174000;
        case 0x1741acu: goto label_1741ac;
        default: break;
    }

    ctx->pc = 0x173600u;

    // 0x173600: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x173604: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x173604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x173608: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x173608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x17360c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x17360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x173610: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x173610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x173614: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x173614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x173618: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x173618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x17361c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x173620: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x173620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x173624: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x173624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x173628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x173628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17362c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x17362cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173630: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x173630u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x173634: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x173634u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173638: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x173638u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17363c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x17363cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x173640: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x173640u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x173644: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x173644u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x173648: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x173648u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17364c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x17364cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x173650: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x173650u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x173654: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173658: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17365c: 0x8c960034  lw          $s6, 0x34($a0)
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x173660: 0x92d3000a  lbu         $s3, 0xA($s6)
    ctx->pc = 0x173660u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x173664: 0x126002dc  beqz        $s3, . + 4 + (0x2DC << 2)
    ctx->pc = 0x173664u;
    {
        const bool branch_taken_0x173664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x173668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173664u;
        // 0x173668: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173664) {
            ctx->pc = 0x1741D8u;
            goto label_1741d8;
        }
    }
    ctx->pc = 0x17366Cu;
    // 0x17366c: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x173670: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x173674: 0x96a40028  lhu         $a0, 0x28($s5)
    ctx->pc = 0x173674u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x173678: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x173678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17367c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x17367cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173680: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x173684: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173688: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17368c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x173694: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173694u;
    {
        const bool branch_taken_0x173694 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x173698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173694u;
        // 0x173698: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173694) {
            ctx->pc = 0x1736A8u;
            goto label_1736a8;
        }
    }
    ctx->pc = 0x17369Cu;
    // 0x17369c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17369cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1736A0u;
    {
        const bool branch_taken_0x1736a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736A0u;
        // 0x1736a4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736a0) {
            ctx->pc = 0x1736C4u;
            goto label_1736c4;
        }
    }
    ctx->pc = 0x1736A8u;
label_1736a8:
    // 0x1736a8: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1736ac: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1736b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1736b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1736b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1736b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736b8: 0x0  nop
    ctx->pc = 0x1736b8u;
    // NOP
    // 0x1736bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1736bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1736c0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1736c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1736c4:
    // 0x1736c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1736c8: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1736cc: 0xc4210340  lwc1        $f1, 0x340($at)
    ctx->pc = 0x1736ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736d0: 0x3c043d80  lui         $a0, 0x3D80
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15744 << 16));
    // 0x1736d4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1736d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1736d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1736dc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1736e0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1736e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1736e4: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x1736e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1736e8: 0x90a7000b  lbu         $a3, 0xB($a1)
    ctx->pc = 0x1736e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x1736ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1736f0: 0xc4200354  lwc1        $f0, 0x354($at)
    ctx->pc = 0x1736f0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1736f4: 0x46020fc2  mul.s       $f31, $f1, $f2
    ctx->pc = 0x1736f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1736f8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1736f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1736fc: 0x90a5000c  lbu         $a1, 0xC($a1)
    ctx->pc = 0x1736fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x173700: 0xe83804  sllv        $a3, $t0, $a3
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x173704: 0x46020782  mul.s       $f30, $f0, $f2
    ctx->pc = 0x173704u;
    ctx->f[30] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x173708: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x173708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17370c: 0xa82804  sllv        $a1, $t0, $a1
    ctx->pc = 0x17370cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x173710: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x173710u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173714: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x173714u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173718: 0x0  nop
    ctx->pc = 0x173718u;
    // NOP
    // 0x17371c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17371cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173720: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x173720u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x173724: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x173724u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173728: 0x0  nop
    ctx->pc = 0x173728u;
    // NOP
    // 0x17372c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17372cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173730: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x173730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x173734: 0x0  nop
    ctx->pc = 0x173734u;
    // NOP
    // 0x173738: 0x0  nop
    ctx->pc = 0x173738u;
    // NOP
    // 0x17373c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17373Cu;
    {
        const bool branch_taken_0x17373c = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x17373c) {
            ctx->pc = 0x173750u;
            goto label_173750;
        }
    }
    ctx->pc = 0x173744u;
    // 0x173744: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173748u;
    {
        const bool branch_taken_0x173748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173748u;
        // 0x17374c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173748) {
            ctx->pc = 0x17376Cu;
            goto label_17376c;
        }
    }
    ctx->pc = 0x173750u;
label_173750:
    // 0x173750: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x173750u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x173754: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x173754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x173758: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x173758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17375c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17375cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173760: 0x0  nop
    ctx->pc = 0x173760u;
    // NOP
    // 0x173764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173768: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x173768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17376c:
    // 0x17376c: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x17376cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x173770: 0x46150682  mul.s       $f26, $f0, $f21
    ctx->pc = 0x173770u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x173774: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x173778: 0x94650006  lhu         $a1, 0x6($v1)
    ctx->pc = 0x173778u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x17377c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x173780: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173780u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173784: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x173788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17378c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173790: 0x4600ae42  mul.s       $f25, $f21, $f0
    ctx->pc = 0x173790u;
    ctx->f[25] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x173794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173798: 0x0  nop
    ctx->pc = 0x173798u;
    // NOP
    // 0x17379c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17379cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1737a0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1737A0u;
    {
        const bool branch_taken_0x1737a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1737A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737A0u;
        // 0x1737a4: 0x4600a602  mul.s       $f24, $f20, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737a0) {
            ctx->pc = 0x1737B4u;
            goto label_1737b4;
        }
    }
    ctx->pc = 0x1737A8u;
    // 0x1737a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1737a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1737ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1737ACu;
    {
        const bool branch_taken_0x1737ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737ACu;
        // 0x1737b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737ac) {
            ctx->pc = 0x1737D0u;
            goto label_1737d0;
        }
    }
    ctx->pc = 0x1737B4u;
label_1737b4:
    // 0x1737b4: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1737b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1737b8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1737b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1737bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1737bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1737c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1737c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1737c4: 0x0  nop
    ctx->pc = 0x1737c4u;
    // NOP
    // 0x1737c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1737c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1737cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1737ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1737d0:
    // 0x1737d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1737d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1737d4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1737d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1737d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1737dc: 0x46180041  sub.s       $f1, $f0, $f24
    ctx->pc = 0x1737dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1737e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1737e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1737e4: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1737E4u;
    {
        const bool branch_taken_0x1737e4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1737E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737E4u;
        // 0x1737e8: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737e4) {
            ctx->pc = 0x1737F8u;
            goto label_1737f8;
        }
    }
    ctx->pc = 0x1737ECu;
    // 0x1737ec: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1737ecu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1737f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1737F0u;
    {
        const bool branch_taken_0x1737f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F0u;
        // 0x1737f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737f0) {
            ctx->pc = 0x173814u;
            goto label_173814;
        }
    }
    ctx->pc = 0x1737F8u;
label_1737f8:
    // 0x1737f8: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x1737f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1737fc: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1737fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x173800: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x173800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x173804: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173804u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173808: 0x0  nop
    ctx->pc = 0x173808u;
    // NOP
    // 0x17380c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17380cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173810: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x173810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_173814:
    // 0x173814: 0x0  nop
    ctx->pc = 0x173814u;
    // NOP
    // 0x173818: 0x0  nop
    ctx->pc = 0x173818u;
    // NOP
    // 0x17381c: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x17381cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x173820: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x173820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x173824: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x173824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x173828: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17382c: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x173830: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x173830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173834: 0x5923c  dsll32      $s2, $a1, 8
    ctx->pc = 0x173834u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 8));
    // 0x173838: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x173838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x17383c: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x17383cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x173840: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x173844: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x173844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x173848: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x173848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x17384c: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x17384cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x173850: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x173850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x173854: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x173854u;
    {
        const bool branch_taken_0x173854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173854u;
        // 0x173858: 0x4600df06  mov.s       $f28, $f27 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173854) {
            ctx->pc = 0x1741B8u;
            goto label_1741b8;
        }
    }
    ctx->pc = 0x17385Cu;
    // 0x17385c: 0x0  nop
    ctx->pc = 0x17385cu;
    // NOP
label_173860:
    // 0x173860: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x173860u;
    {
        const bool branch_taken_0x173860 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x173860) {
            ctx->pc = 0x1738B8u;
            goto label_1738b8;
        }
    }
    ctx->pc = 0x173868u;
    // 0x173868: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17386c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173870: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x173870u;
    SET_GPR_U32(ctx, 31, 0x173878u);
    ctx->pc = 0x173874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173870u;
    // 0x173874: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x173870u, 0x173878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173878u;
label_173878:
    // 0x173878: 0x92b70023  lbu         $s7, 0x23($s5)
    ctx->pc = 0x173878u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x17387c: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x17387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x173880: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x173880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x173884: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x173884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x173888: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x173888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17388c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x17388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x173890: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x173890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x173894: 0x4600c586  mov.s       $f22, $f24
    ctx->pc = 0x173894u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
    // 0x173898: 0x2e41018  mult        $v0, $s7, $a0
    ctx->pc = 0x173898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17389c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1738a0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1738a0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1738a4: 0x0  nop
    ctx->pc = 0x1738a4u;
    // NOP
    // 0x1738a8: 0x0  nop
    ctx->pc = 0x1738a8u;
    // NOP
    // 0x1738ac: 0x1012  mflo        $v0
    ctx->pc = 0x1738acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1738b0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1738B0u;
    {
        const bool branch_taken_0x1738b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738B0u;
        // 0x1738b4: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738b0) {
            ctx->pc = 0x173A28u;
            goto label_173a28;
        }
    }
    ctx->pc = 0x1738B8u;
label_1738b8:
    // 0x1738b8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1738b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1738bc: 0x1682002a  bne         $s4, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1738BCu;
    {
        const bool branch_taken_0x1738bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1738bc) {
            ctx->pc = 0x173968u;
            goto label_173968;
        }
    }
    ctx->pc = 0x1738C4u;
    // 0x1738c4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1738c8: 0x2682fffe  addiu       $v0, $s4, -0x2
    ctx->pc = 0x1738c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x1738cc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1738ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1738d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1738d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1738d4: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x1738d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1738d8: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x1738D8u;
    SET_GPR_U32(ctx, 31, 0x1738E0u);
    ctx->pc = 0x1738DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738D8u;
    // 0x1738dc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x1738D8u, 0x1738E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738E0u;
label_1738e0:
    // 0x1738e0: 0x92a50023  lbu         $a1, 0x23($s5)
    ctx->pc = 0x1738e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x1738e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1738e8: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x1738e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1738ec: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1738ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1738f0: 0x2742023  subu        $a0, $s3, $s4
    ctx->pc = 0x1738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1738f4: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x1738f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1738f8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1738f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1738fc: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x173900: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x173900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x173904: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x173904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x173908: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x173908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x17390c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173910: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x173914: 0x70541018  mult1       $v0, $v0, $s4
    ctx->pc = 0x173914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x173918: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x173918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17391c: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x17391cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x173920: 0x0  nop
    ctx->pc = 0x173920u;
    // NOP
    // 0x173924: 0x0  nop
    ctx->pc = 0x173924u;
    // NOP
    // 0x173928: 0xb812  mflo        $s7
    ctx->pc = 0x173928u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x17392c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17392Cu;
    {
        const bool branch_taken_0x17392c = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x173930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17392Cu;
        // 0x173930: 0x46170042  mul.s       $f1, $f0, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17392c) {
            ctx->pc = 0x173940u;
            goto label_173940;
        }
    }
    ctx->pc = 0x173934u;
    // 0x173934: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x173934u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173938u;
    {
        const bool branch_taken_0x173938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173938u;
        // 0x17393c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173938) {
            ctx->pc = 0x17395Cu;
            goto label_17395c;
        }
    }
    ctx->pc = 0x173940u;
label_173940:
    // 0x173940: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x173940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x173944: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x173948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17394c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17394cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173950: 0x0  nop
    ctx->pc = 0x173950u;
    // NOP
    // 0x173954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173958: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x173958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17395c:
    // 0x17395c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17395cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173960: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x173960u;
    {
        const bool branch_taken_0x173960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173960u;
        // 0x173964: 0x4600c580  add.s       $f22, $f24, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173960) {
            ctx->pc = 0x173A28u;
            goto label_173a28;
        }
    }
    ctx->pc = 0x173968u;
label_173968:
    // 0x173968: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17396c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x17396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x173970: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x173970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173974: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173978: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x173978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x17397c: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x17397Cu;
    SET_GPR_U32(ctx, 31, 0x173984u);
    ctx->pc = 0x173980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17397Cu;
    // 0x173980: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x17397Cu, 0x173984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173984u;
label_173984:
    // 0x173984: 0x92a80023  lbu         $t0, 0x23($s5)
    ctx->pc = 0x173984u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x173988: 0x2743823  subu        $a3, $s3, $s4
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x17398c: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x173990: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x173994: 0x34437efa  ori         $v1, $v0, 0x7EFA
    ctx->pc = 0x173994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x173998: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x173998u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x17399c: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x17399cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1739a0: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x1739a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x1739a4: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1739a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x1739a8: 0x2652023  subu        $a0, $s3, $a1
    ctx->pc = 0x1739a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1739ac: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1739acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1739b0: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x1739b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1739b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1739b8: 0x70d41818  mult1       $v1, $a2, $s4
    ctx->pc = 0x1739b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1739bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1739bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1739c0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1739c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1739c4: 0x70c51018  mult1       $v0, $a2, $a1
    ctx->pc = 0x1739c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1739c8: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x1739c8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1739cc: 0x46170042  mul.s       $f1, $f0, $f23
    ctx->pc = 0x1739ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1739d0: 0x0  nop
    ctx->pc = 0x1739d0u;
    // NOP
    // 0x1739d4: 0xb812  mflo        $s7
    ctx->pc = 0x1739d4u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1739d8: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x1739d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1739dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1739dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1739e0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1739e0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1739e4: 0x0  nop
    ctx->pc = 0x1739e4u;
    // NOP
    // 0x1739e8: 0x0  nop
    ctx->pc = 0x1739e8u;
    // NOP
    // 0x1739ec: 0x1012  mflo        $v0
    ctx->pc = 0x1739ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1739f0: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1739F0u;
    {
        const bool branch_taken_0x1739f0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x1739F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F0u;
        // 0x1739f4: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739f0) {
            ctx->pc = 0x173A04u;
            goto label_173a04;
        }
    }
    ctx->pc = 0x1739F8u;
    // 0x1739f8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1739f8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1739fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1739FCu;
    {
        const bool branch_taken_0x1739fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739FCu;
        // 0x173a00: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739fc) {
            ctx->pc = 0x173A20u;
            goto label_173a20;
        }
    }
    ctx->pc = 0x173A04u;
label_173a04:
    // 0x173a04: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x173a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x173a08: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x173a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x173a0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x173a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x173a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173a14: 0x0  nop
    ctx->pc = 0x173a14u;
    // NOP
    // 0x173a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173a1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x173a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_173a20:
    // 0x173a20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x173a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x173a24: 0x4600c580  add.s       $f22, $f24, $f0
    ctx->pc = 0x173a24u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_173a28:
    // 0x173a28: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x173a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x173a2c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x173A2Cu;
    {
        const bool branch_taken_0x173a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A2Cu;
        // 0x173a30: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a2c) {
            ctx->pc = 0x173A70u;
            goto label_173a70;
        }
    }
    ctx->pc = 0x173A34u;
    // 0x173a34: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x173a34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x173a38: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x173A38u;
    SET_GPR_U32(ctx, 31, 0x173A40u);
    ctx->pc = 0x173A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A38u;
    // 0x173a3c: 0x34850040  ori         $a1, $a0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x173A38u, 0x173A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A40u;
label_173a40:
    // 0x173a40: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x173a44: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x173a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x173a48: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x173a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x173a4c: 0x34a40100  ori         $a0, $a1, 0x100
    ctx->pc = 0x173a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x173a50: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x173a54: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x173A54u;
    SET_GPR_U32(ctx, 31, 0x173A5Cu);
    ctx->pc = 0x173A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A54u;
    // 0x173a58: 0x34a702a0  ori         $a3, $a1, 0x2A0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x173A54u, 0x173A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A5Cu;
label_173a5c:
    // 0x173a5c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x173A5Cu;
    {
        const bool branch_taken_0x173a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173a5c) {
            ctx->pc = 0x173AB0u;
            goto label_173ab0;
        }
    }
    ctx->pc = 0x173A64u;
    // 0x173a64: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x173A64u;
    {
        const bool branch_taken_0x173a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A64u;
        // 0x173a68: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a64) {
            ctx->pc = 0x1741B0u;
            goto label_1741b0;
        }
    }
    ctx->pc = 0x173A6Cu;
    // 0x173a6c: 0x0  nop
    ctx->pc = 0x173a6cu;
    // NOP
label_173a70:
    // 0x173a70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173a74: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173a74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173a78: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x173a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x173a7c: 0x34820010  ori         $v0, $a0, 0x10
    ctx->pc = 0x173a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x173a80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173a84: 0xe42002a0  swc1        $f0, 0x2A0($at)
    ctx->pc = 0x173a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700002A0u, bits); }
    // 0x173a88: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x173a88u;
    SET_GPR_VEC(ctx, 5, runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x173a8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x173a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x173a90: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x173a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x173a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a98: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x173a98u;
    runtime->Store128(rdram, ctx, 0x70000000u, GPR_VEC(ctx, 5));
    // 0x173a9c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173aa0: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x173aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x173aa4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x173aa4u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x173aa8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x173aa8u;
    runtime->Store128(rdram, ctx, 0x70000100u, GPR_VEC(ctx, 2));
    // 0x173aac: 0x0  nop
    ctx->pc = 0x173aacu;
    // NOP
label_173ab0:
    // 0x173ab0: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x173ab4: 0x34436595  ori         $v1, $v0, 0x6595
    ctx->pc = 0x173ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26005);
    // 0x173ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173abc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173ac0: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x173ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173ac4: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x173ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x173ac8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x173ac8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x173acc: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x173ACCu;
    SET_GPR_U32(ctx, 31, 0x173AD4u);
    ctx->pc = 0x173AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173ACCu;
    // 0x173ad0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x173ACCu, 0x173AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AD4u;
label_173ad4:
    // 0x173ad4: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x173ad8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173adc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x173adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x173ae0: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x173ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x173ae4: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x173ae8: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x173ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173aec: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x173AECu;
    SET_GPR_U32(ctx, 31, 0x173AF4u);
    ctx->pc = 0x173AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AECu;
    // 0x173af0: 0x344702a4  ori         $a3, $v0, 0x2A4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x173AECu, 0x173AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AF4u;
label_173af4:
    // 0x173af4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173AF4u;
    {
        const bool branch_taken_0x173af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173af4) {
            ctx->pc = 0x173B08u;
            goto label_173b08;
        }
    }
    ctx->pc = 0x173AFCu;
    // 0x173afc: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x173AFCu;
    {
        const bool branch_taken_0x173afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AFCu;
        // 0x173b00: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173afc) {
            ctx->pc = 0x1741B0u;
            goto label_1741b0;
        }
    }
    ctx->pc = 0x173B04u;
    // 0x173b04: 0x0  nop
    ctx->pc = 0x173b04u;
    // NOP
label_173b08:
    // 0x173b08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173b0c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x173b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x173b10: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x173b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x173b14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173b18: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173b1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x173b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x173b20: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x173b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173b24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x173B24u;
    {
        const bool branch_taken_0x173b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b24) {
            ctx->pc = 0x173B38u;
            goto label_173b38;
        }
    }
    ctx->pc = 0x173B2Cu;
    // 0x173b2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173B2Cu;
    {
        const bool branch_taken_0x173b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b2c) {
            ctx->pc = 0x173B40u;
            goto label_173b40;
        }
    }
    ctx->pc = 0x173B34u;
    // 0x173b34: 0x0  nop
    ctx->pc = 0x173b34u;
    // NOP
label_173b38:
    // 0x173b38: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x173b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x173b3c: 0x0  nop
    ctx->pc = 0x173b3cu;
    // NOP
label_173b40:
    // 0x173b40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x173b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x173b44: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x173b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x173b48: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x173b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x173b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x173b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x173b50: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x173b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x173b54: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x173b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x173b5c: 0x34c40020  ori         $a0, $a2, 0x20
    ctx->pc = 0x173b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x173b60: 0x34c50300  ori         $a1, $a2, 0x300
    ctx->pc = 0x173b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x173b64: 0xc041442  jal         func_105108
    ctx->pc = 0x173B64u;
    SET_GPR_U32(ctx, 31, 0x173B6Cu);
    ctx->pc = 0x173B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B64u;
    // 0x173b68: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x173B64u, 0x173B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B6Cu;
label_173b6c:
    // 0x173b6c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x173b70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x173B70u;
    {
        const bool branch_taken_0x173b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B70u;
        // 0x173b74: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b70) {
            ctx->pc = 0x173BC0u;
            goto label_173bc0;
        }
    }
    ctx->pc = 0x173B78u;
    // 0x173b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173b7c: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x173b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 272))); // MMIO: 0x70000110
    // 0x173b80: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x173b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x173b84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173b88: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x173b88u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x173b8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173b90: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x173b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x173b94: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x173b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x173b98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173b98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b9c: 0x0  nop
    ctx->pc = 0x173b9cu;
    // NOP
    // 0x173ba0: 0x46800720  cvt.s.w     $f28, $f0
    ctx->pc = 0x173ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x173ba4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173ba8: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x173ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173bac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x173bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173bb4: 0x0  nop
    ctx->pc = 0x173bb4u;
    // NOP
    // 0x173bb8: 0x468006e0  cvt.s.w     $f27, $f0
    ctx->pc = 0x173bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x173bbc: 0x0  nop
    ctx->pc = 0x173bbcu;
    // NOP
label_173bc0:
    // 0x173bc0: 0x461ce01a  mula.s      $f28, $f28
    ctx->pc = 0x173bc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x173bc4: 0x461bd81c  madd.s      $f0, $f27, $f27
    ctx->pc = 0x173bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[27]));
    // 0x173bc8: 0x46000744  c1          0x744
    ctx->pc = 0x173bc8u;
    ctx->f[29] = FPU_SQRT_S(ctx->f[0]);
    // 0x173bcc: 0x0  nop
    ctx->pc = 0x173bccu;
    // NOP
    // 0x173bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173bd4: 0x0  nop
    ctx->pc = 0x173bd4u;
    // NOP
    // 0x173bd8: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x173bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173bdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x173BDCu;
    {
        const bool branch_taken_0x173bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BDCu;
        // 0x173be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bdc) {
            ctx->pc = 0x173BF0u;
            goto label_173bf0;
        }
    }
    ctx->pc = 0x173BE4u;
    // 0x173be4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x173BE4u;
    {
        const bool branch_taken_0x173be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BE4u;
        // 0x173be8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173be4) {
            ctx->pc = 0x173C28u;
            goto label_173c28;
        }
    }
    ctx->pc = 0x173BECu;
    // 0x173bec: 0x0  nop
    ctx->pc = 0x173becu;
    // NOP
label_173bf0:
    // 0x173bf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173bf4: 0xc4220028  lwc1        $f2, 0x28($at)
    ctx->pc = 0x173bf4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173c00: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x173c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x173c04: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x173c04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x173c08: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x173c08u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x173c0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173c10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x173c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x173c18: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x173c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x173c1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173c20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173c24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_173c28:
    // 0x173c28: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x173c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x173c2c: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x173c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x173c30: 0x172600  sll         $a0, $s7, 24
    ctx->pc = 0x173c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x173c34: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x173c34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x173c38: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x173c3c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x173c40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c44: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x173c48: 0x34c40030  ori         $a0, $a2, 0x30
    ctx->pc = 0x173c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x173c4c: 0x34c50300  ori         $a1, $a2, 0x300
    ctx->pc = 0x173c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x173c50: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x173c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x173c54: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x173c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173c58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c5c: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x173c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x173c60: 0x8c270104  lw          $a3, 0x104($at)
    ctx->pc = 0x173c60u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173c64: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x173c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x173c68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c6c: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x173c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x173c70: 0x8c270108  lw          $a3, 0x108($at)
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x173c74: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x173c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x173c78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c7c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173c7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c80: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x173c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x173c84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c88: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173c8c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173c8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173c90: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173c94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173c98: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173c9c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173c9cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ca0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173ca4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173ca8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x173cac: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x173cb0: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x173cb4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x173cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173cb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173cbc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x173cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x173cc0: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x173cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173cc4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x173cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173cc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173ccc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x173cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x173cd0: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x173cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x173cd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x173cd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173cdc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173cdcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ce0: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x173ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x173ce4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173ce8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173cec: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173cecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173cf0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173cf4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173cf8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173cfc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173cfcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d00: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173d04: 0xc041442  jal         func_105108
    ctx->pc = 0x173D04u;
    SET_GPR_U32(ctx, 31, 0x173D0Cu);
    ctx->pc = 0x173D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D04u;
    // 0x173d08: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x173D04u, 0x173D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D0Cu;
label_173d0c:
    // 0x173d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d10: 0x0  nop
    ctx->pc = 0x173d10u;
    // NOP
    // 0x173d14: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x173d14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x173D18u;
    {
        const bool branch_taken_0x173d18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D18u;
        // 0x173d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d18) {
            ctx->pc = 0x173D28u;
            goto label_173d28;
        }
    }
    ctx->pc = 0x173D20u;
    // 0x173d20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x173D20u;
    {
        const bool branch_taken_0x173d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D20u;
        // 0x173d24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d20) {
            ctx->pc = 0x173D60u;
            goto label_173d60;
        }
    }
    ctx->pc = 0x173D28u;
label_173d28:
    // 0x173d28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173d2c: 0xc4220038  lwc1        $f2, 0x38($at)
    ctx->pc = 0x173d2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173d34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173d38: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x173d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x173d3c: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x173d3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x173d40: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x173d40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x173d44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173d48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173d4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x173d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x173d50: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x173d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x173d54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x173d58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173d58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173d5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173d5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_173d60:
    // 0x173d60: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x173d64: 0x973021  addu        $a2, $a0, $s7
    ctx->pc = 0x173d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x173d68: 0x3c05cccc  lui         $a1, 0xCCCC
    ctx->pc = 0x173d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52428 << 16));
    // 0x173d6c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x173d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x173d70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173d74: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x173d74u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x173d78: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173d7c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x173d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173d80: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x173d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x173d84: 0x860019  multu       $a0, $a2
    ctx->pc = 0x173d84u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x173d88: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x173d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x173d8c: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x173d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x173d90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x173d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x173d94: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x173d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x173d98: 0x2010  mfhi        $a0
    ctx->pc = 0x173d98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x173d9c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x173d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x173da0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x173da4: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x173da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x173da8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x173dac: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x173dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x173db0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x173db4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173db8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x173db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x173dbc: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x173dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x173dc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x173dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173dc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173dc8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x173dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x173dcc: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173dd0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x173dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x173dd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173dd8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173dd8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173ddc: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x173ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x173de0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173de4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173de8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173de8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dec: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173df0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173df4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173df8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173df8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dfc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173e00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e04: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x173e08: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x173e0c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x173e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x173e10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x173e14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e18: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x173e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x173e1c: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x173e20: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e28: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x173e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x173e2c: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x173e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173e30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x173e34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e38: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173e38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e3c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x173e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x173e40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e44: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173e48: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173e48u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e4c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173e50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173e54: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173e58: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173e58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173e5c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173e60: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x173E60u;
    {
        const bool branch_taken_0x173e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E60u;
        // 0x173e64: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e60) {
            ctx->pc = 0x174110u;
            goto label_174110;
        }
    }
    ctx->pc = 0x173E68u;
label_173e68:
    // 0x173e68: 0x2fc1000a  sltiu       $at, $fp, 0xA
    ctx->pc = 0x173e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x173e6c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x173E6Cu;
    {
        const bool branch_taken_0x173e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E6Cu;
        // 0x173e70: 0x3c033d08  lui         $v1, 0x3D08 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e6c) {
            ctx->pc = 0x173EC0u;
            goto label_173ec0;
        }
    }
    ctx->pc = 0x173E74u;
    // 0x173e74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x173e78: 0x34646595  ori         $a0, $v1, 0x6595
    ctx->pc = 0x173e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26005);
    // 0x173e7c: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x173e80: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x173e84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173e84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173e88: 0x2e32818  mult        $a1, $s7, $v1
    ctx->pc = 0x173e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x173e8c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x173e8cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x173e90: 0x705e2018  mult1       $a0, $v0, $fp
    ctx->pc = 0x173e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x173e94: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x173e98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x173e9c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x173e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x173ea0: 0x640019  multu       $v1, $a0
    ctx->pc = 0x173ea0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x173ea4: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x173ea8: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x173ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x173eac: 0x1810  mfhi        $v1
    ctx->pc = 0x173eacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x173eb0: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x173eb4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x173eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x173eb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x173EB8u;
    {
        const bool branch_taken_0x173eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EB8u;
        // 0x173ebc: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173eb8) {
            ctx->pc = 0x173ED8u;
            goto label_173ed8;
        }
    }
    ctx->pc = 0x173EC0u;
label_173ec0:
    // 0x173ec0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x173ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x173ec4: 0x121a3c  dsll32      $v1, $s2, 8
    ctx->pc = 0x173ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
    // 0x173ec8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x173ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x173ecc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x173eccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x173ed0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x173ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x173ed4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x173ed4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_173ed8:
    // 0x173ed8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ee0: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x173ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x173ee4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x173ee4u;
    SET_GPR_VEC(ctx, 6, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x173ee8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x173ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x173eec: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x173eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x173ef0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x173ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x173ef4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173ef8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x173ef8u;
    runtime->Store128(rdram, ctx, 0x70000100u, GPR_VEC(ctx, 6));
    // 0x173efc: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x173efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173f00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173f04: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x173F04u;
    SET_GPR_U32(ctx, 31, 0x173F0Cu);
    ctx->pc = 0x173F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F04u;
    // 0x173f08: 0x34450040  ori         $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x173F04u, 0x173F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F0Cu;
label_173f0c:
    // 0x173f0c: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x173f10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173f14: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x173f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x173f18: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x173f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x173f1c: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x173f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x173f20: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x173f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173f24: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x173F24u;
    SET_GPR_U32(ctx, 31, 0x173F2Cu);
    ctx->pc = 0x173F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F24u;
    // 0x173f28: 0x344702a4  ori         $a3, $v0, 0x2A4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x173F24u, 0x173F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F2Cu;
label_173f2c:
    // 0x173f2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173F2Cu;
    {
        const bool branch_taken_0x173f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f2c) {
            ctx->pc = 0x173F40u;
            goto label_173f40;
        }
    }
    ctx->pc = 0x173F34u;
    // 0x173f34: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x173F34u;
    {
        const bool branch_taken_0x173f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F34u;
        // 0x173f38: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f34) {
            ctx->pc = 0x174120u;
            goto label_174120;
        }
    }
    ctx->pc = 0x173F3Cu;
    // 0x173f3c: 0x0  nop
    ctx->pc = 0x173f3cu;
    // NOP
label_173f40:
    // 0x173f40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173f44: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x173f44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173f48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x173f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x173f4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x173f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173f50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x173F50u;
    {
        const bool branch_taken_0x173f50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f50) {
            ctx->pc = 0x173F60u;
            goto label_173f60;
        }
    }
    ctx->pc = 0x173F58u;
    // 0x173f58: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x173f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x173f5c: 0x0  nop
    ctx->pc = 0x173f5cu;
    // NOP
label_173f60:
    // 0x173f60: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173f64: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x173f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x173f68: 0x34450300  ori         $a1, $v0, 0x300
    ctx->pc = 0x173f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x173f6c: 0xc041442  jal         func_105108
    ctx->pc = 0x173F6Cu;
    SET_GPR_U32(ctx, 31, 0x173F74u);
    ctx->pc = 0x173F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F6Cu;
    // 0x173f70: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x173F6Cu, 0x173F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F74u;
label_173f74:
    // 0x173f74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173f78: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x173f78u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x173f7c: 0x4600e024  .word       0x4600E024                   # cvt.w.s     $f0, $f28 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[28]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173f80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173f84: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x173f88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x173f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x173f8c: 0x4600d824  .word       0x4600D824                   # cvt.w.s     $f0, $f27 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[27]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173f90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173f94: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x173f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x173f98: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x173f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x173f9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x173f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x173fa0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173fa4: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173fa8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x173fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173fac: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x173facu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x173fb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173fb4: 0x0  nop
    ctx->pc = 0x173fb4u;
    // NOP
    // 0x173fb8: 0x46800f20  cvt.s.w     $f28, $f1
    ctx->pc = 0x173fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x173fbc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x173fc0: 0x461ce01a  mula.s      $f28, $f28
    ctx->pc = 0x173fc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x173fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173fc8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x173fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173fd4: 0x0  nop
    ctx->pc = 0x173fd4u;
    // NOP
    // 0x173fd8: 0x46800ee0  cvt.s.w     $f27, $f1
    ctx->pc = 0x173fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x173fdc: 0x461bd85c  madd.s      $f1, $f27, $f27
    ctx->pc = 0x173fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[27]));
    // 0x173fe0: 0x46010744  c1          0x10744
    ctx->pc = 0x173fe0u;
    ctx->f[29] = FPU_SQRT_S(ctx->f[1]);
    // 0x173fe4: 0x0  nop
    ctx->pc = 0x173fe4u;
    // NOP
    // 0x173fe8: 0x0  nop
    ctx->pc = 0x173fe8u;
    // NOP
    // 0x173fec: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x173fecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173ff0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x173FF0u;
    {
        const bool branch_taken_0x173ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FF0u;
        // 0x173ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ff0) {
            ctx->pc = 0x174000u;
            goto label_174000;
        }
    }
    ctx->pc = 0x173FF8u;
    // 0x173ff8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x173FF8u;
    {
        const bool branch_taken_0x173ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FF8u;
        // 0x173ffc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ff8) {
            ctx->pc = 0x174038u;
            goto label_174038;
        }
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174004: 0xc4220038  lwc1        $f2, 0x38($at)
    ctx->pc = 0x174004u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174008: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17400c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174010: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x174010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x174014: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x174014u;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x174018: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x174018u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17401c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17401cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x174020: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174024: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x174024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x174028: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x174028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x17402c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17402cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x174030: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174034: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x174034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_174038:
    // 0x174038: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x174038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x17403c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17403cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174040: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x174044: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x174048: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x174048u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x17404c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x17404cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x174050: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x174054: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x174054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x174058: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17405c: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x17405cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x174060: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x174060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x174064: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x174068: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x174068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17406c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174070: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x174070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x174074: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x174074u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x174078: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x174078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x17407c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x174080: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x174080u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174084: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x174084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x174088: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17408c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x174090: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x174090u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174094: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x174094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x174098: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x174098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17409c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1740a0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1740a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1740a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1740a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740ac: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1740b0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1740b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1740b4: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x1740b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1740b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1740bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740c0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1740c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1740c4: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x1740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x1740c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1740cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740d0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1740d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1740d4: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x1740d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x1740d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1740d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1740dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740e0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1740e0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740e4: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1740e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1740e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740ec: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1740ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1740f0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1740f0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740f4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1740f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1740f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1740f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1740fc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1740fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x174100: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x174100u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174104: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x174104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x174108: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x174108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17410c: 0x0  nop
    ctx->pc = 0x17410cu;
    // NOP
label_174110:
    // 0x174110: 0x2fc1000b  sltiu       $at, $fp, 0xB
    ctx->pc = 0x174110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x174114: 0x1420ff54  bnez        $at, . + 4 + (-0xAC << 2)
    ctx->pc = 0x174114u;
    {
        const bool branch_taken_0x174114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174114) {
            ctx->pc = 0x173E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e68;
        }
    }
    ctx->pc = 0x17411Cu;
    // 0x17411c: 0x0  nop
    ctx->pc = 0x17411cu;
    // NOP
label_174120:
    // 0x174120: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x174120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x174124: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x174124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x174128: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17412c: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x174130: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x174134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174138: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x174138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x17413c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x174140: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x174140u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x174144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x174144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x174148: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x174148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17414c: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x17414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x174150: 0x3442005c  ori         $v0, $v0, 0x5C
    ctx->pc = 0x174150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)92);
    // 0x174154: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x174154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x174158: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x174158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17415c: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x17415cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x174160: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174168: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x174168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17416c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17416cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174170: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x174170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x174174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x174174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x174178: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x174178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17417c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x17417cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x174180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x174184: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x174184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x174188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x174188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17418c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x174190: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x174190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x174194: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x174194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x174198: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x174198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x17419c: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x17419cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1741a0: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x1741a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x1741a4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1741A4u;
    SET_GPR_U32(ctx, 31, 0x1741ACu);
    ctx->pc = 0x1741A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741A4u;
    // 0x1741a8: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1741A4u, 0x1741ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741ACu;
label_1741ac:
    // 0x1741ac: 0x0  nop
    ctx->pc = 0x1741acu;
    // NOP
label_1741b0:
    // 0x1741b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1741b4: 0x0  nop
    ctx->pc = 0x1741b4u;
    // NOP
label_1741b8:
    // 0x1741b8: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x1741b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1741bc: 0x1460fda8  bnez        $v1, . + 4 + (-0x258 << 2)
    ctx->pc = 0x1741BCu;
    {
        const bool branch_taken_0x1741bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1741C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741BCu;
        // 0x1741c0: 0x2604000f  addiu       $a0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741bc) {
            ctx->pc = 0x173860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173860;
        }
    }
    ctx->pc = 0x1741C4u;
    // 0x1741c4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1741c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1741c8: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1741c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1741cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1741ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1741d0: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x1741d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x1741d4: 0x0  nop
    ctx->pc = 0x1741d4u;
    // NOP
label_1741d8:
    // 0x1741d8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1741d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1741dc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1741dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1741e0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1741e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1741e4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1741e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1741e8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1741e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1741ec: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1741ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1741f0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1741f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1741f4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1741f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1741f8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1741f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1741fc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1741fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174200: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x174200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x174204: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x174204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174208: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x174208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x17420c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17420cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174210: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x174210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x174214: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x174214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174218: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x174218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17421c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17421cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174220: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x174220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x174224: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x174224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x174228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x174228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17422c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174230: 0x3e00008  jr          $ra
    ctx->pc = 0x174230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174230u;
        // 0x174234: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174238u;
}
