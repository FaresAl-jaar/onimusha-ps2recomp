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

// Function: sub_002D76A0
// Address: 0x2d76a0 - 0x2d7d70
void sub_002D76A0_0x2d76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D76A0_0x2d76a0");
#endif

    switch (ctx->pc) {
        case 0x2d7770u: goto label_2d7770;
        case 0x2d7958u: goto label_2d7958;
        case 0x2d7cf0u: goto label_2d7cf0;
        default: break;
    }

    ctx->pc = 0x2d76a0u;

    // 0x2d76a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d76a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d76a8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2d76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2d76ac: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2d76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2d76b0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2d76b4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2d76b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2d76b8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2d76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2d76bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2d76bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2d76c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d76c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d76c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d76c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d76c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d76ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d76d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d76d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d76d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d76d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d76d8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x2d76d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d76dc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2d76dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d76e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2d76e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d76e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2d76e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d76e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2d76e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d76ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2d76ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d76f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d76f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d76f4: 0x80a40015  lb          $a0, 0x15($a1)
    ctx->pc = 0x2d76f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x2d76f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D76F8u;
    {
        const bool branch_taken_0x2d76f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76F8u;
        // 0x2d76fc: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76f8) {
            ctx->pc = 0x2D7708u;
            goto label_2d7708;
        }
    }
    ctx->pc = 0x2D7700u;
    // 0x2d7700: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D7700u;
    {
        const bool branch_taken_0x2d7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7700u;
        // 0x2d7704: 0x92a40047  lbu         $a0, 0x47($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 71)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7700) {
            ctx->pc = 0x2D7708u;
            goto label_2d7708;
        }
    }
    ctx->pc = 0x2D7708u;
label_2d7708:
    // 0x2d7708: 0x86870008  lh          $a3, 0x8($s4)
    ctx->pc = 0x2d7708u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2d770c: 0x8685000a  lh          $a1, 0xA($s4)
    ctx->pc = 0x2d770cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x2d7710: 0x309700ff  andi        $s7, $a0, 0xFF
    ctx->pc = 0x2d7710u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d7714: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d7714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7718: 0x92b60044  lbu         $s6, 0x44($s5)
    ctx->pc = 0x2d7718u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x2d771c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7720: 0x86840004  lh          $a0, 0x4($s4)
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d7724: 0x8e8a0018  lw          $t2, 0x18($s4)
    ctx->pc = 0x2d7724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2d7728: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x2d7728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2d772c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2d772cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7730: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d7730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7734: 0x0  nop
    ctx->pc = 0x2d7734u;
    // NOP
    // 0x2d7738: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x2d7738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x2d773c: 0x164e00  sll         $t1, $s6, 24
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
    // 0x2d7740: 0x109f025  or          $fp, $t0, $t1
    ctx->pc = 0x2d7740u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2d7744: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x2d7744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x2d7748: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d7748u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d774c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7750: 0x0  nop
    ctx->pc = 0x2d7750u;
    // NOP
    // 0x2d7754: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x2d7754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d7758: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d7758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d775c: 0x461a1002  mul.s       $f0, $f2, $f26
    ctx->pc = 0x2d775cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x2d7760: 0x46001e00  add.s       $f24, $f3, $f0
    ctx->pc = 0x2d7760u;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d7764: 0x46191002  mul.s       $f0, $f2, $f25
    ctx->pc = 0x2d7764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x2d7768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D7768u;
    {
        const bool branch_taken_0x2d7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7768u;
        // 0x2d776c: 0x46000dc0  add.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7768) {
            ctx->pc = 0x2D7798u;
            goto label_2d7798;
        }
    }
    ctx->pc = 0x2D7770u;
label_2d7770:
    // 0x2d7770: 0x85440004  lh          $a0, 0x4($t2)
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d7774: 0x85430006  lh          $v1, 0x6($t2)
    ctx->pc = 0x2d7774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x2d7778: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d7778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d777c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d777cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7780: 0x8d4a0018  lw          $t2, 0x18($t2)
    ctx->pc = 0x2d7780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x2d7784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d7784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d778c: 0x4601c600  add.s       $f24, $f24, $f1
    ctx->pc = 0x2d778cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x2d7790: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x2d7790u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x2d7794: 0x0  nop
    ctx->pc = 0x2d7794u;
    // NOP
label_2d7798:
    // 0x2d7798: 0x1540fff5  bnez        $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D7798u;
    {
        const bool branch_taken_0x2d7798 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7798) {
            ctx->pc = 0x2D7770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7770;
        }
    }
    ctx->pc = 0x2D77A0u;
    // 0x2d77a0: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d77a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2d77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2d77a8: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x2d77a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d77ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2d77acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d77b0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D77B0u;
    {
        const bool branch_taken_0x2d77b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d77b0) {
            ctx->pc = 0x2D77F8u;
            goto label_2d77f8;
        }
    }
    ctx->pc = 0x2D77B8u;
    // 0x2d77b8: 0x86a40048  lh          $a0, 0x48($s5)
    ctx->pc = 0x2d77b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2d77bc: 0xc6a2004c  lwc1        $f2, 0x4C($s5)
    ctx->pc = 0x2d77bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d77c0: 0x86a3004a  lh          $v1, 0x4A($s5)
    ctx->pc = 0x2d77c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 74)));
    // 0x2d77c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d77c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d77c8: 0x4602b582  mul.s       $f22, $f22, $f2
    ctx->pc = 0x2d77c8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2d77cc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2d77ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d77d0: 0x4603c041  sub.s       $f1, $f24, $f3
    ctx->pc = 0x2d77d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2d77d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d77d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d77d8: 0x46011e00  add.s       $f24, $f3, $f1
    ctx->pc = 0x2d77d8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d77dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d77dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d77e0: 0x0  nop
    ctx->pc = 0x2d77e0u;
    // NOP
    // 0x2d77e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d77e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d77e8: 0x4601b801  sub.s       $f0, $f23, $f1
    ctx->pc = 0x2d77e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x2d77ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2d77ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d77f0: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x2d77f0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d77f4: 0x0  nop
    ctx->pc = 0x2d77f4u;
    // NOP
label_2d77f8:
    // 0x2d77f8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d77f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d77fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d77fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d7800: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7800u;
    {
        const bool branch_taken_0x2d7800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7800u;
        // 0x2d7804: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7800) {
            ctx->pc = 0x2D7818u;
            goto label_2d7818;
        }
    }
    ctx->pc = 0x2D7808u;
    // 0x2d7808: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2d7808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d780c: 0x733023  subu        $a2, $v1, $s3
    ctx->pc = 0x2d780cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d7810: 0x4600c607  neg.s       $f24, $f24
    ctx->pc = 0x2d7810u;
    ctx->f[24] = FPU_NEG_S(ctx->f[24]);
    // 0x2d7814: 0x649823  subu        $s3, $v1, $a0
    ctx->pc = 0x2d7814u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d7818:
    // 0x2d7818: 0x86a50034  lh          $a1, 0x34($s5)
    ctx->pc = 0x2d7818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2d781c: 0x86a40036  lh          $a0, 0x36($s5)
    ctx->pc = 0x2d781cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x2d7820: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2d7824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d7824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7828: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2d7828u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d782c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d782cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7830: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d7830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d7834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d7834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7838: 0x4602c600  add.s       $f24, $f24, $f2
    ctx->pc = 0x2d7838u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x2d783c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2d783cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2d7840: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x2d7840u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x2d7844: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d7848: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2d7848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2d784c: 0x8eb2003c  lw          $s2, 0x3C($s5)
    ctx->pc = 0x2d784cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2d7850: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x2d7850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d7854: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2d7854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d7858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d7858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d785c: 0x0  nop
    ctx->pc = 0x2d785cu;
    // NOP
    // 0x2d7860: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2d7860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2d7864: 0x24a37000  addiu       $v1, $a1, 0x7000
    ctx->pc = 0x2d7864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x2d7868: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2d7868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2d786c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2d786cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d7870: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d7874: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d7874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d7878: 0x0  nop
    ctx->pc = 0x2d7878u;
    // NOP
    // 0x2d787c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2d787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2d7880: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7880u;
    {
        const bool branch_taken_0x2d7880 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2D7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7880u;
        // 0x2d7884: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7880) {
            ctx->pc = 0x2D7894u;
            goto label_2d7894;
        }
    }
    ctx->pc = 0x2D7888u;
    // 0x2d7888: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d7888u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d788c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D788Cu;
    {
        const bool branch_taken_0x2d788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D788Cu;
        // 0x2d7890: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d788c) {
            ctx->pc = 0x2D78B0u;
            goto label_2d78b0;
        }
    }
    ctx->pc = 0x2D7894u;
label_2d7894:
    // 0x2d7894: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2d7894u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2d7898: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d7898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d789c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d789cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d78a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d78a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78a4: 0x0  nop
    ctx->pc = 0x2d78a4u;
    // NOP
    // 0x2d78a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d78a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d78ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d78acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d78b0:
    // 0x2d78b0: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2d78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x2d78b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d78b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d78b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d78bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d78c0: 0x0  nop
    ctx->pc = 0x2d78c0u;
    // NOP
    // 0x2d78c4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2d78c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2d78c8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2d78c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2d78cc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2d78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d78d0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2d78d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d78d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78d8: 0x0  nop
    ctx->pc = 0x2d78d8u;
    // NOP
    // 0x2d78dc: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x2d78dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x2d78e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d78e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d78e4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D78E4u;
    {
        const bool branch_taken_0x2d78e4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D78E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78E4u;
        // 0x2d78e8: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78e4) {
            ctx->pc = 0x2D78F8u;
            goto label_2d78f8;
        }
    }
    ctx->pc = 0x2D78ECu;
    // 0x2d78ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d78ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D78F0u;
    {
        const bool branch_taken_0x2d78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78F0u;
        // 0x2d78f4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78f0) {
            ctx->pc = 0x2D7914u;
            goto label_2d7914;
        }
    }
    ctx->pc = 0x2D78F8u;
label_2d78f8:
    // 0x2d78f8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2d78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2d78fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d78fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d7900: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d7900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d7904: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d7904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7908: 0x0  nop
    ctx->pc = 0x2d7908u;
    // NOP
    // 0x2d790c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2d790cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d7910: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d7910u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d7914:
    // 0x2d7914: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x2d7914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x2d7918: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d791c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d791cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7920: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2d7920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d7924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7928: 0x0  nop
    ctx->pc = 0x2d7928u;
    // NOP
    // 0x2d792c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2d792cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2d7930: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2d7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7934: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2d7934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d7938: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d793c: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x2d793cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d7940: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d7940u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7944: 0x0  nop
    ctx->pc = 0x2d7944u;
    // NOP
    // 0x2d7948: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x2d7948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x2d794c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d794cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7950: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2D7950u;
    {
        const bool branch_taken_0x2d7950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7950u;
        // 0x2d7954: 0x46001500  add.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7950) {
            ctx->pc = 0x2D7D18u;
            goto label_2d7d18;
        }
    }
    ctx->pc = 0x2D7958u;
label_2d7958:
    // 0x2d7958: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d7958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d795c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d795cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7960: 0x0  nop
    ctx->pc = 0x2d7960u;
    // NOP
    // 0x2d7964: 0x461a0042  mul.s       $f1, $f0, $f26
    ctx->pc = 0x2d7964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2d7968: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x2d7968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x2d796c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d796cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7970: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7970u;
    {
        const bool branch_taken_0x2d7970 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7970u;
        // 0x2d7974: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7970) {
            ctx->pc = 0x2D7998u;
            goto label_2d7998;
        }
    }
    ctx->pc = 0x2D7978u;
    // 0x2d7978: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d7978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d797c: 0x0  nop
    ctx->pc = 0x2d797cu;
    // NOP
    // 0x2d7980: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x2d7980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d7984: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2d7984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2d7988: 0x0  nop
    ctx->pc = 0x2d7988u;
    // NOP
    // 0x2d798c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d798cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d7990: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7990u;
    {
        const bool branch_taken_0x2d7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7990u;
        // 0x2d7994: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7990) {
            ctx->pc = 0x2D79B8u;
            goto label_2d79b8;
        }
    }
    ctx->pc = 0x2D7998u;
label_2d7998:
    // 0x2d7998: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d799c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d799cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d79a0: 0x0  nop
    ctx->pc = 0x2d79a0u;
    // NOP
    // 0x2d79a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d79a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d79a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d79a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d79ac: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2d79acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2d79b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d79b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d79b4: 0x0  nop
    ctx->pc = 0x2d79b4u;
    // NOP
label_2d79b8:
    // 0x2d79b8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x2d79b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d79bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d79bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d79c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d79c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d79c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d79c8: 0x3c094100  lui         $t1, 0x4100
    ctx->pc = 0x2d79c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16640 << 16));
    // 0x2d79cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d79ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d79d0: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x2d79d4: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x2d79d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d79d8: 0x3c0a4180  lui         $t2, 0x4180
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16768 << 16));
    // 0x2d79dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d79e0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x2d79e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d79e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d79e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d79e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d79ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d79ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d79f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d79f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d79f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d79f8: 0x3c084180  lui         $t0, 0x4180
    ctx->pc = 0x2d79f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16768 << 16));
    // 0x2d79fc: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d7a00: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7a04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d7a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d7a08: 0x3c074100  lui         $a3, 0x4100
    ctx->pc = 0x2d7a08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16640 << 16));
    // 0x2d7a0c: 0x46000187  neg.s       $f6, $f0
    ctx->pc = 0x2d7a0cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[0]);
    // 0x2d7a10: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x2d7a10u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d7a14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7a18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d7a1c: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x2d7a20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7a24: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x2d7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d7a28: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d7a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d7a2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7a30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d7a34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7a34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7a38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d7a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d7a3c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d7a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7a40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d7a44: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d7a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d7a48: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x2d7a4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d7a54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d7a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d7a58: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2d7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7a5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7a5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7a60: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2d7a60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d7a64: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2d7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7a68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d7a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d7a6c: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x2d7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d7a70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d7a74: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2d7a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2d7a78: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x2d7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x2d7a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7a84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7a88: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x2d7a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2d7a8c: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x2d7a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x2d7a90: 0x4602c100  add.s       $f4, $f24, $f2
    ctx->pc = 0x2d7a90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x2d7a94: 0x4601c080  add.s       $f2, $f24, $f1
    ctx->pc = 0x2d7a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x2d7a98: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2d7a98u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7a9c: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x2d7a9cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2d7aa0: 0x46040a82  mul.s       $f10, $f1, $f4
    ctx->pc = 0x2d7aa0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2d7aa4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2d7aa4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7aa8: 0x4606b182  mul.s       $f6, $f22, $f6
    ctx->pc = 0x2d7aa8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[22], ctx->f[6]);
    // 0x2d7aac: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x2d7aacu;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d7ab0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d7ab0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7ab4: 0x4606b980  add.s       $f6, $f23, $f6
    ctx->pc = 0x2d7ab4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[23], ctx->f[6]);
    // 0x2d7ab8: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2d7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d7abc: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x2d7abcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2d7ac0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d7ac0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d7ac4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7ac8: 0x4601d041  sub.s       $f1, $f26, $f1
    ctx->pc = 0x2d7ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[1]);
    // 0x2d7acc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2d7accu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7ad0: 0x46070142  mul.s       $f5, $f0, $f7
    ctx->pc = 0x2d7ad0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d7ad4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d7ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d7ad8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d7ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7adc: 0x460052a4  .word       0x460052A4                   # cvt.w.s     $f10, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[10], &tmp, sizeof(tmp)); }
    // 0x2d7ae0: 0x4602c881  sub.s       $f2, $f25, $f2
    ctx->pc = 0x2d7ae0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
    // 0x2d7ae4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d7ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d7ae8: 0x44025000  mfc1        $v0, $f10
    ctx->pc = 0x2d7ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[10], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7aec: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x2d7aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d7af0: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x2d7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2d7af4: 0x4605b082  mul.s       $f2, $f22, $f5
    ctx->pc = 0x2d7af4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
    // 0x2d7af8: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x2d7afc: 0x4602b880  add.s       $f2, $f23, $f2
    ctx->pc = 0x2d7afcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x2d7b00: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x2d7b00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d7b04: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x2d7b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7b08: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x2d7b08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d7b0c: 0x24477900  addiu       $a3, $v0, 0x7900
    ctx->pc = 0x2d7b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2d7b10: 0x46004a64  .word       0x46004A64                   # cvt.w.s     $f9, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[9], &tmp, sizeof(tmp)); }
    // 0x2d7b14: 0x44024800  mfc1        $v0, $f9
    ctx->pc = 0x2d7b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7b18: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d7b1c: 0x24457000  addiu       $a1, $v0, 0x7000
    ctx->pc = 0x2d7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2d7b20: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2d7b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d7b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7b28: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2D7B28u;
    {
        const bool branch_taken_0x2d7b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B28u;
        // 0x2d7b2c: 0x24447900  addiu       $a0, $v0, 0x7900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b28) {
            ctx->pc = 0x2D7B58u;
            goto label_2d7b58;
        }
    }
    ctx->pc = 0x2D7B30u;
    // 0x2d7b30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d7b34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d7b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d7b38: 0x0  nop
    ctx->pc = 0x2d7b38u;
    // NOP
    // 0x2d7b3c: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x2d7b3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d7b40: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2d7b40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2d7b44: 0x0  nop
    ctx->pc = 0x2d7b44u;
    // NOP
    // 0x2d7b48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d7b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d7b4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D7B4Cu;
    {
        const bool branch_taken_0x2d7b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B4Cu;
        // 0x2d7b50: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b4c) {
            ctx->pc = 0x2D7B78u;
            goto label_2d7b78;
        }
    }
    ctx->pc = 0x2D7B54u;
    // 0x2d7b54: 0x0  nop
    ctx->pc = 0x2d7b54u;
    // NOP
label_2d7b58:
    // 0x2d7b58: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d7b5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d7b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7b60: 0x0  nop
    ctx->pc = 0x2d7b60u;
    // NOP
    // 0x2d7b64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d7b64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d7b68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d7b68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d7b6c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2d7b6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2d7b70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d7b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d7b74: 0x0  nop
    ctx->pc = 0x2d7b74u;
    // NOP
label_2d7b78:
    // 0x2d7b78: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2d7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2d7b7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d7b80: 0x3c074380  lui         $a3, 0x4380
    ctx->pc = 0x2d7b80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17280 << 16));
    // 0x2d7b84: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d7b88: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2d7b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d7b8c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d7b90: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2d7b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2d7b94: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2d7b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d7b98: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2d7b98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d7b9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d7ba0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2d7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2d7ba4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x2d7ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2d7ba8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2d7ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7bac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7bb0: 0x24820400  addiu       $v0, $a0, 0x400
    ctx->pc = 0x2d7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x2d7bb4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d7bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d7bb8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d7bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d7bbc: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d7bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7bc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d7bc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d7bcc: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2d7bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d7bd0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7bd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d7bd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d7bd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2d7bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d7bdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7be0: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2d7be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d7be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7be8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2d7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d7bec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d7bf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d7bf4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2d7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d7bf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7bfc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2d7bfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d7c00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d7c04: 0x3c043838  lui         $a0, 0x3838
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14392 << 16));
    // 0x2d7c08: 0x34840053  ori         $a0, $a0, 0x53
    ctx->pc = 0x2d7c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)83);
    // 0x2d7c0c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2d7c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2d7c10: 0x4602a900  add.s       $f4, $f21, $f2
    ctx->pc = 0x2d7c10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2d7c14: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x2d7c14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2d7c18: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2d7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7c1c: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x2d7c1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d7c20: 0x4602a080  add.s       $f2, $f20, $f2
    ctx->pc = 0x2d7c20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2d7c24: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d7c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d7c28: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x2d7c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d7c2c: 0x460520c3  div.s       $f3, $f4, $f5
    ctx->pc = 0x2d7c2cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x2d7c30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d7c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c34: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2d7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7c38: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d7c3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2d7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d7c40: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2d7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2d7c44: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2d7c44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d7c48: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x2d7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x2d7c4c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d7c50: 0xae0a0028  sw          $t2, 0x28($s0)
    ctx->pc = 0x2d7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 10));
    // 0x2d7c54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d7c58: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x2d7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
    // 0x2d7c5c: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2d7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2d7c60: 0xae090038  sw          $t1, 0x38($s0)
    ctx->pc = 0x2d7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 9));
    // 0x2d7c64: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2d7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2d7c68: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x2d7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x2d7c6c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2d7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2d7c70: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x2d7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x2d7c74: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x2d7c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x2d7c78: 0x4605a903  div.s       $f4, $f21, $f5
    ctx->pc = 0x2d7c78u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[21], ctx->f[5]); }
    // 0x2d7c7c: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x2d7c7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d7c80: 0x4605a103  div.s       $f4, $f20, $f5
    ctx->pc = 0x2d7c80u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[20], ctx->f[5]); }
    // 0x2d7c84: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x2d7c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x2d7c88: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2d7c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2d7c8c: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x2d7c8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2d7c90: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2d7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x2d7c94: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x2d7c94u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x2d7c98: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x2d7c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d7c9c: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x2d7c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2d7ca0: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x2d7ca0u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x2d7ca4: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2d7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2d7ca8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2d7ca8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x2d7cac: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x2d7cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2d7cb0: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2d7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2d7cb4: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2d7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2d7cb8: 0x92860014  lbu         $a2, 0x14($s4)
    ctx->pc = 0x2d7cb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2d7cbc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d7cc0: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x2d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2d7cc4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x2d7cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7cc8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2d7cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2d7ccc: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2d7cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7cd0: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x2d7cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7cd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7cd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d7cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d7cdc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d7ce0: 0xa216000f  sb          $s6, 0xF($s0)
    ctx->pc = 0x2d7ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 22));
    // 0x2d7ce4: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x2d7ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x2d7ce8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D7CE8u;
    SET_GPR_U32(ctx, 31, 0x2D7CF0u);
    ctx->pc = 0x2D7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CE8u;
    // 0x2d7cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D7CE8u, 0x2D7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CF0u;
label_2d7cf0:
    // 0x2d7cf0: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x2d7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2d7cf4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2d7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2d7cf8: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x2d7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2d7cfc: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x2d7cfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7d00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7D00u;
    {
        const bool branch_taken_0x2d7d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D00u;
        // 0x2d7d04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d00) {
            ctx->pc = 0x2D7D10u;
            goto label_2d7d10;
        }
    }
    ctx->pc = 0x2D7D08u;
    // 0x2d7d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7D08u;
    {
        const bool branch_taken_0x2d7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D08u;
        // 0x2d7d0c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d08) {
            ctx->pc = 0x2D7D18u;
            goto label_2d7d18;
        }
    }
    ctx->pc = 0x2D7D10u;
label_2d7d10:
    // 0x2d7d10: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2d7d14: 0x0  nop
    ctx->pc = 0x2d7d14u;
    // NOP
label_2d7d18:
    // 0x2d7d18: 0xd3182b  sltu        $v1, $a2, $s3
    ctx->pc = 0x2d7d18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2d7d1c: 0x1460ff0e  bnez        $v1, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x2D7D1Cu;
    {
        const bool branch_taken_0x2d7d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d1c) {
            ctx->pc = 0x2D7958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7958;
        }
    }
    ctx->pc = 0x2D7D24u;
    // 0x2d7d24: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2d7d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7d28: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2d7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2d7d2c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2d7d2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7d30: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2d7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d7d34: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d7d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7d38: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2d7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d7d3c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7d40: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2d7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d7d44: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2d7d44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7d48: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2d7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d7d4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2d7d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7d50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2d7d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7d54: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d7d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7d58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7d5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d7d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7d60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d7d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7d64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d7d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D68u;
        // 0x2d7d6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D70u;
}
