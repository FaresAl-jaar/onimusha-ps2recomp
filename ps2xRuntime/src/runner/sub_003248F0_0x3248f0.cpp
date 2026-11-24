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

// Function: sub_003248F0
// Address: 0x3248f0 - 0x324be4
void sub_003248F0_0x3248f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003248F0_0x3248f0");
#endif

    switch (ctx->pc) {
        case 0x324a84u: goto label_324a84;
        case 0x324ab4u: goto label_324ab4;
        default: break;
    }

    ctx->pc = 0x3248f0u;

    // 0x3248f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3248f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3248f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3248f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3248f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3248fc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3248fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324900: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x324900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x324904: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x324904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x324908: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x324908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32490c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32490cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324910: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x324910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x324914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x324914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324918: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x324918u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32491c: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x32491cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x324920: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x324920u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x324924: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x324924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x324928: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x324928u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x32492c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x32492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x324930: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x324930u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x324934: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x324934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x324938: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x324938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x32493c: 0x24429630  addiu       $v0, $v0, -0x69D0
    ctx->pc = 0x32493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
    // 0x324940: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x324940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x324944: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x324944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x324948: 0xc420ae34  lwc1        $f0, -0x51CC($at)
    ctx->pc = 0x324948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32494c: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x32494cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x324950: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x324950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x324954: 0x3c02ab8f  lui         $v0, 0xAB8F
    ctx->pc = 0x324954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43919 << 16));
    // 0x324958: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x324958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32495c: 0x344269e3  ori         $v0, $v0, 0x69E3
    ctx->pc = 0x32495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27107);
    // 0x324960: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x324960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324964: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324968: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x324968u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x32496c: 0xc423ae30  lwc1        $f3, -0x51D0($at)
    ctx->pc = 0x32496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324970: 0x46002981  sub.s       $f6, $f5, $f0
    ctx->pc = 0x324970u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x324974: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x324974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324978: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32497c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x32497cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324980: 0xc421ae38  lwc1        $f1, -0x51C8($at)
    ctx->pc = 0x324980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324984: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x324984u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x324988: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x324988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32498c: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x32498cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x324990: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324994: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x324994u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324998: 0x8424ada4  lh          $a0, -0x525C($at)
    ctx->pc = 0x324998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946212)));
    // 0x32499c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x32499cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3249a0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3249a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3249a4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x3249a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3249a8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3249a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3249ac: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3249acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3249b0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x3249b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x3249b4: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x3249b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x3249b8: 0x46010504  c1          0x10504
    ctx->pc = 0x3249b8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[1]);
    // 0x3249bc: 0x1010  mfhi        $v0
    ctx->pc = 0x3249bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3249c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3249c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3249c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x3249c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x3249c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3249cc: 0x4600a642  mul.s       $f25, $f20, $f0
    ctx->pc = 0x3249ccu;
    ctx->f[25] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3249d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3249d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3249d4: 0x4605c836  c.le.s      $f25, $f5
    ctx->pc = 0x3249d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249d8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x3249D8u;
    {
        const bool branch_taken_0x3249d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3249DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249D8u;
        // 0x3249dc: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249d8) {
            ctx->pc = 0x324A30u;
            goto label_324a30;
        }
    }
    ctx->pc = 0x3249E0u;
    // 0x3249e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3249e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249e4: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x3249e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3249E8u;
    {
        const bool branch_taken_0x3249e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3249e8) {
            ctx->pc = 0x3249F8u;
            goto label_3249f8;
        }
    }
    ctx->pc = 0x3249F0u;
    // 0x3249f0: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x3249f0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x3249f4: 0x0  nop
    ctx->pc = 0x3249f4u;
    // NOP
label_3249f8:
    // 0x3249f8: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x3249f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
    // 0x3249fc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3249fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324a00: 0x4605c841  sub.s       $f1, $f25, $f5
    ctx->pc = 0x324a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[5]);
    // 0x324a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a08: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x324a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x324a0c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x324a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x324a10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324a14: 0x4600c601  sub.s       $f24, $f24, $f0
    ctx->pc = 0x324a14u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x324a18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x324a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a1c: 0x0  nop
    ctx->pc = 0x324a1cu;
    // NOP
    // 0x324a20: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x324a20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324a24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x324A24u;
    {
        const bool branch_taken_0x324a24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324a24) {
            ctx->pc = 0x324A30u;
            goto label_324a30;
        }
    }
    ctx->pc = 0x324A2Cu;
    // 0x324a2c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x324a2cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_324a30:
    // 0x324a30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324a34: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x324a34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x324a38: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x324a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x324a3c: 0xc424ae30  lwc1        $f4, -0x51D0($at)
    ctx->pc = 0x324a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x324a40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x324a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x324a44: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x324a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324a48: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x324a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324a54: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x324a54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x324a58: 0xc422ae38  lwc1        $f2, -0x51C8($at)
    ctx->pc = 0x324a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324a5c: 0x460325c1  sub.s       $f23, $f4, $f3
    ctx->pc = 0x324a5cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x324a60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324a64: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x324a64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x324a68: 0x8422ad92  lh          $v0, -0x526E($at)
    ctx->pc = 0x324a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946194)));
    // 0x324a6c: 0x46011581  sub.s       $f22, $f2, $f1
    ctx->pc = 0x324a6cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x324a70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324a74: 0x0  nop
    ctx->pc = 0x324a74u;
    // NOP
    // 0x324a78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324a7c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x324A7Cu;
    SET_GPR_U32(ctx, 31, 0x324A84u);
    ctx->pc = 0x324A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A7Cu;
    // 0x324a80: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x324A7Cu, 0x324A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A84u;
label_324a84:
    // 0x324a84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324a88: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x324a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x324a8c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x324a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x324a90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x324a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x324a94: 0x8423ad92  lh          $v1, -0x526E($at)
    ctx->pc = 0x324a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946194)));
    // 0x324a98: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x324a98u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x324a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324aa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324aa4: 0x0  nop
    ctx->pc = 0x324aa4u;
    // NOP
    // 0x324aa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324aac: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x324AACu;
    SET_GPR_U32(ctx, 31, 0x324AB4u);
    ctx->pc = 0x324AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324AACu;
    // 0x324ab0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x324AACu, 0x324AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324AB4u;
label_324ab4:
    // 0x324ab4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x324ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324ab8: 0x4601c836  c.le.s      $f25, $f1
    ctx->pc = 0x324ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324abc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x324ABCu;
    {
        const bool branch_taken_0x324abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x324AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324ABCu;
        // 0x324ac0: 0x3c0242fe  lui         $v0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324abc) {
            ctx->pc = 0x324AE0u;
            goto label_324ae0;
        }
    }
    ctx->pc = 0x324AC4u;
    // 0x324ac4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324ac8: 0x0  nop
    ctx->pc = 0x324ac8u;
    // NOP
    // 0x324acc: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x324accu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x324ad0: 0x0  nop
    ctx->pc = 0x324ad0u;
    // NOP
    // 0x324ad4: 0x4601bdc2  mul.s       $f23, $f23, $f1
    ctx->pc = 0x324ad4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x324ad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324AD8u;
    {
        const bool branch_taken_0x324ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AD8u;
        // 0x324adc: 0x4601b582  mul.s       $f22, $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ad8) {
            ctx->pc = 0x324AF8u;
            goto label_324af8;
        }
    }
    ctx->pc = 0x324AE0u;
label_324ae0:
    // 0x324ae0: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x324ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x324ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324ae8: 0x0  nop
    ctx->pc = 0x324ae8u;
    // NOP
    // 0x324aec: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x324aecu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x324af0: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x324af0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x324af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_324af8:
    // 0x324af8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324afc: 0x4617a81a  mula.s      $f21, $f23
    ctx->pc = 0x324afcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[23]));
    // 0x324b00: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x324b00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x324b04: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x324b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x324b08: 0x9023ad8f  lbu         $v1, -0x5271($at)
    ctx->pc = 0x324b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946191)));
    // 0x324b0c: 0x4617001a  mula.s      $f0, $f23
    ctx->pc = 0x324b0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[23]));
    // 0x324b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x324b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x324b14: 0x4616a81c  madd.s      $f0, $f21, $f22
    ctx->pc = 0x324b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[22]));
    // 0x324b18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x324b1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324b1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x324b20: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x324b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x324b24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x324b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x324b28: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x324B28u;
    {
        const bool branch_taken_0x324b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x324b28) {
            ctx->pc = 0x324B98u;
            goto label_324b98;
        }
    }
    ctx->pc = 0x324B30u;
    // 0x324b30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x324B30u;
    {
        const bool branch_taken_0x324b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B30u;
        // 0x324b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b30) {
            ctx->pc = 0x324B70u;
            goto label_324b70;
        }
    }
    ctx->pc = 0x324B38u;
    // 0x324b38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324B38u;
    {
        const bool branch_taken_0x324b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x324b38) {
            ctx->pc = 0x324B48u;
            goto label_324b48;
        }
    }
    ctx->pc = 0x324B40u;
    // 0x324b40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x324B40u;
    {
        const bool branch_taken_0x324b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324b40) {
            ctx->pc = 0x324B98u;
            goto label_324b98;
        }
    }
    ctx->pc = 0x324B48u;
label_324b48:
    // 0x324b48: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x324B48u;
    {
        const bool branch_taken_0x324b48 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x324B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B48u;
        // 0x324b4c: 0x3c0342d2  lui         $v1, 0x42D2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b48) {
            ctx->pc = 0x324B68u;
            goto label_324b68;
        }
    }
    ctx->pc = 0x324B50u;
    // 0x324b50: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x324b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x324b54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b5c: 0x0  nop
    ctx->pc = 0x324b5cu;
    // NOP
    // 0x324b60: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x324b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x324b64: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x324b64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_324b68:
    // 0x324b68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x324B68u;
    {
        const bool branch_taken_0x324b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B68u;
        // 0x324b6c: 0x2404ff81  addiu       $a0, $zero, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b68) {
            ctx->pc = 0x324B98u;
            goto label_324b98;
        }
    }
    ctx->pc = 0x324B70u;
label_324b70:
    // 0x324b70: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x324B70u;
    {
        const bool branch_taken_0x324b70 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x324B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B70u;
        // 0x324b74: 0x3c0342d2  lui         $v1, 0x42D2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b70) {
            ctx->pc = 0x324B90u;
            goto label_324b90;
        }
    }
    ctx->pc = 0x324B78u;
    // 0x324b78: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x324b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x324b7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b84: 0x0  nop
    ctx->pc = 0x324b84u;
    // NOP
    // 0x324b88: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x324b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x324b8c: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x324b8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_324b90:
    // 0x324b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b94: 0x2404ff81  addiu       $a0, $zero, -0x7F
    ctx->pc = 0x324b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
label_324b98:
    // 0x324b98: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x324b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x324b9c: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324b9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x324ba0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x324ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x324ba4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x324ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324ba8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x324ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x324bac: 0x0  nop
    ctx->pc = 0x324bacu;
    // NOP
    // 0x324bb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x324bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x324bb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x324bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324bb8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x324bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x324bbc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x324bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324bc0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x324bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x324bc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x324bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324bc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x324bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x324bcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324bd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x324bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x324bd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x324bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x324bd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x324bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x324bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x324BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BDCu;
        // 0x324be0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BE4u;
}
