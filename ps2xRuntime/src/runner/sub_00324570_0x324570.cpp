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

// Function: sub_00324570
// Address: 0x324570 - 0x3248e4
void sub_00324570_0x324570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324570_0x324570");
#endif

    switch (ctx->pc) {
        case 0x324724u: goto label_324724;
        case 0x324730u: goto label_324730;
        default: break;
    }

    ctx->pc = 0x324570u;

    // 0x324570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324574: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324578: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32457c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x324580: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324584: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x324584u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324588: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32458c: 0x24429630  addiu       $v0, $v0, -0x69D0
    ctx->pc = 0x32458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
    // 0x324590: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x324590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x324594: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x324594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324598: 0xc425ae34  lwc1        $f5, -0x51CC($at)
    ctx->pc = 0x324598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32459c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x32459cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3245a0: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x3245a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3245a4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3245a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3245a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3245a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3245ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3245acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3245b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3245b4: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x3245b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3245b8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x3245b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3245bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3245bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3245c0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3245c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3245c4: 0xc423ae30  lwc1        $f3, -0x51D0($at)
    ctx->pc = 0x3245c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3245c8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x3245c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3245cc: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x3245ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x3245d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3245d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3245d4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3245d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3245d8: 0xc421ae38  lwc1        $f1, -0x51C8($at)
    ctx->pc = 0x3245d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3245dc: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x3245dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3245e0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3245e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3245e4: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x3245e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3245e8: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3245e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3245ec: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x3245ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3245f0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x3245f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x3245f4: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x3245f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x3245f8: 0x46010104  c1          0x10104
    ctx->pc = 0x3245f8u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[1]);
    // 0x3245fc: 0x0  nop
    ctx->pc = 0x3245fcu;
    // NOP
    // 0x324600: 0x0  nop
    ctx->pc = 0x324600u;
    // NOP
    // 0x324604: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x324604u;
    {
        const bool branch_taken_0x324604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x324608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324604u;
        // 0x324608: 0x46002102  mul.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324604) {
            ctx->pc = 0x324670u;
            goto label_324670;
        }
    }
    ctx->pc = 0x32460Cu;
    // 0x32460c: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x32460Cu;
    {
        const bool branch_taken_0x32460c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32460c) {
            ctx->pc = 0x324670u;
            goto label_324670;
        }
    }
    ctx->pc = 0x324614u;
    // 0x324614: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324618: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x324618u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x32461c: 0x8c22ad94  lw          $v0, -0x526C($at)
    ctx->pc = 0x32461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946196)));
    // 0x324620: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x324620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x324624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x324624u;
    {
        const bool branch_taken_0x324624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324624) {
            ctx->pc = 0x324638u;
            goto label_324638;
        }
    }
    ctx->pc = 0x32462Cu;
    // 0x32462c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32462Cu;
    {
        const bool branch_taken_0x32462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32462Cu;
        // 0x324630: 0xa4a00000  sh          $zero, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32462c) {
            ctx->pc = 0x324668u;
            goto label_324668;
        }
    }
    ctx->pc = 0x324634u;
    // 0x324634: 0x0  nop
    ctx->pc = 0x324634u;
    // NOP
label_324638:
    // 0x324638: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x324638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32463c: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x32463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x324640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324644: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x324644u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x324648: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x324648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32464c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x32464Cu;
    {
        const bool branch_taken_0x32464c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x324650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32464Cu;
        // 0x324650: 0x46011002  mul.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32464c) {
            ctx->pc = 0x324658u;
            goto label_324658;
        }
    }
    ctx->pc = 0x324654u;
    // 0x324654: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x324654u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_324658:
    // 0x324658: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32465c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32465cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x324660: 0x0  nop
    ctx->pc = 0x324660u;
    // NOP
    // 0x324664: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x324664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_324668:
    // 0x324668: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x324668u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x32466c: 0x0  nop
    ctx->pc = 0x32466cu;
    // NOP
label_324670:
    // 0x324670: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324674: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x324674u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x324678: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x324678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x32467c: 0x8424ada4  lh          $a0, -0x525C($at)
    ctx->pc = 0x32467cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946212)));
    // 0x324680: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x324680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324684: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x324684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x324688: 0x34428203  ori         $v0, $v0, 0x8203
    ctx->pc = 0x324688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33283);
    // 0x32468c: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x32468cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x324690: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x324690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x324694: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x324694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324698: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x324698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32469c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32469cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3246a0: 0x0  nop
    ctx->pc = 0x3246a0u;
    // NOP
    // 0x3246a4: 0x1010  mfhi        $v0
    ctx->pc = 0x3246a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3246a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3246a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3246ac: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x3246acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x3246b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3246b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3246b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3246b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3246b8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x3246B8u;
    {
        const bool branch_taken_0x3246b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3246BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246B8u;
        // 0x3246bc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246b8) {
            ctx->pc = 0x324710u;
            goto label_324710;
        }
    }
    ctx->pc = 0x3246C0u;
    // 0x3246c0: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x3246c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246c4: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x3246c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3246c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3246C8u;
    {
        const bool branch_taken_0x3246c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3246c8) {
            ctx->pc = 0x3246D8u;
            goto label_3246d8;
        }
    }
    ctx->pc = 0x3246D0u;
    // 0x3246d0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x3246d0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x3246d4: 0x0  nop
    ctx->pc = 0x3246d4u;
    // NOP
label_3246d8:
    // 0x3246d8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3246dc: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x3246dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3246e0: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x3246e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3246e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3246e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3246e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3246e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3246ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3246ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3246f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3246f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3246f4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3246f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3246f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3246f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3246fc: 0x0  nop
    ctx->pc = 0x3246fcu;
    // NOP
    // 0x324700: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x324700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324704: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x324704u;
    {
        const bool branch_taken_0x324704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324704) {
            ctx->pc = 0x324710u;
            goto label_324710;
        }
    }
    ctx->pc = 0x32470Cu;
    // 0x32470c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32470cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_324710:
    // 0x324710: 0x3401ae30  ori         $at, $zero, 0xAE30
    ctx->pc = 0x324710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44592);
    // 0x324714: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x324714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324718: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x324718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32471c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x32471Cu;
    SET_GPR_U32(ctx, 31, 0x324724u);
    ctx->pc = 0x324720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32471Cu;
    // 0x324720: 0x2213021  addu        $a2, $s1, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x32471Cu, 0x324724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324724u;
label_324724:
    // 0x324724: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x324724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324728: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x324728u;
    SET_GPR_U32(ctx, 31, 0x324730u);
    ctx->pc = 0x32472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324728u;
    // 0x32472c: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x324728u, 0x324730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324730u;
label_324730:
    // 0x324730: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x324730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x324734: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324738: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x324738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x32473c: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x32473cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x324740: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324744: 0x8422ad92  lh          $v0, -0x526E($at)
    ctx->pc = 0x324744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946194)));
    // 0x324748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32474c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32474cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x324750: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x324750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x324754: 0x0  nop
    ctx->pc = 0x324754u;
    // NOP
    // 0x324758: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x324758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32475c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32475cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x324760: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324764: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324764u;
    {
        const bool branch_taken_0x324764 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x324768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324764u;
        // 0x324768: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324764) {
            ctx->pc = 0x324774u;
            goto label_324774;
        }
    }
    ctx->pc = 0x32476Cu;
    // 0x32476c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324770: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x324770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_324774:
    // 0x324774: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x324774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x324778: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x324778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32477c: 0x304707ff  andi        $a3, $v0, 0x7FF
    ctx->pc = 0x32477cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x324780: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324784: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x324784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x324788: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x324788u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x32478c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32478cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x324790: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x324790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x324794: 0x24860400  addiu       $a2, $a0, 0x400
    ctx->pc = 0x324794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x324798: 0x9023ad8f  lbu         $v1, -0x5271($at)
    ctx->pc = 0x324798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946191)));
    // 0x32479c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x32479cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3247a0: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x3247a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x3247a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3247a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3247a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3247a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3247ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3247acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3247b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3247b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3247b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3247b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3247b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3247b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247bc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3247bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3247c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3247c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3247c4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3247c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3247c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3247c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3247cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3247ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3247d0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3247d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3247d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3247d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3247d8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3247D8u;
    {
        const bool branch_taken_0x3247d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3247d8) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x3247E0u;
    // 0x3247e0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3247E0u;
    {
        const bool branch_taken_0x3247e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3247e0) {
            ctx->pc = 0x324860u;
            goto label_324860;
        }
    }
    ctx->pc = 0x3247E8u;
    // 0x3247e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3247e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3247ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3247ECu;
    {
        const bool branch_taken_0x3247ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3247ec) {
            ctx->pc = 0x324800u;
            goto label_324800;
        }
    }
    ctx->pc = 0x3247F4u;
    // 0x3247f4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3247F4u;
    {
        const bool branch_taken_0x3247f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3247f4) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x3247FCu;
    // 0x3247fc: 0x0  nop
    ctx->pc = 0x3247fcu;
    // NOP
label_324800:
    // 0x324800: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x324800u;
    {
        const bool branch_taken_0x324800 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x324800) {
            ctx->pc = 0x32480Cu;
            goto label_32480c;
        }
    }
    ctx->pc = 0x324808u;
    // 0x324808: 0x52823  negu        $a1, $a1
    ctx->pc = 0x324808u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_32480c:
    // 0x32480c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32480Cu;
    {
        const bool branch_taken_0x32480c = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x32480c) {
            ctx->pc = 0x324818u;
            goto label_324818;
        }
    }
    ctx->pc = 0x324814u;
    // 0x324814: 0x42023  negu        $a0, $a0
    ctx->pc = 0x324814u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_324818:
    // 0x324818: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x324818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x32481c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x32481Cu;
    {
        const bool branch_taken_0x32481c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32481c) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x324824u;
    // 0x324824: 0x28e20400  slti        $v0, $a3, 0x400
    ctx->pc = 0x324824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x324828: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x324828u;
    {
        const bool branch_taken_0x324828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324828) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x324830u;
    // 0x324830: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x324830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x324834: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324834u;
    {
        const bool branch_taken_0x324834 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x324838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324834u;
        // 0x324838: 0x229c3  sra         $a1, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324834) {
            ctx->pc = 0x324844u;
            goto label_324844;
        }
    }
    ctx->pc = 0x32483Cu;
    // 0x32483c: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x32483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x324840: 0x229c3  sra         $a1, $v0, 7
    ctx->pc = 0x324840u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 7));
label_324844:
    // 0x324844: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x324844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x324848: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x324848u;
    {
        const bool branch_taken_0x324848 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324848u;
        // 0x32484c: 0x221c3  sra         $a0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324848) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x324850u;
    // 0x324850: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x324850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x324854: 0x221c3  sra         $a0, $v0, 7
    ctx->pc = 0x324854u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 7));
    // 0x324858: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x324858u;
    {
        const bool branch_taken_0x324858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324858) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x324860u;
label_324860:
    // 0x324860: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x324860u;
    {
        const bool branch_taken_0x324860 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x324860) {
            ctx->pc = 0x32486Cu;
            goto label_32486c;
        }
    }
    ctx->pc = 0x324868u;
    // 0x324868: 0x42023  negu        $a0, $a0
    ctx->pc = 0x324868u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_32486c:
    // 0x32486c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32486Cu;
    {
        const bool branch_taken_0x32486c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x32486c) {
            ctx->pc = 0x324878u;
            goto label_324878;
        }
    }
    ctx->pc = 0x324874u;
    // 0x324874: 0x52823  negu        $a1, $a1
    ctx->pc = 0x324874u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_324878:
    // 0x324878: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x32487c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32487Cu;
    {
        const bool branch_taken_0x32487c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x324880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32487Cu;
        // 0x324880: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32487c) {
            ctx->pc = 0x32488Cu;
            goto label_32488c;
        }
    }
    ctx->pc = 0x324884u;
    // 0x324884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324888: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x324888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_32488c:
    // 0x32488c: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x32488cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x324890: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x324890u;
    {
        const bool branch_taken_0x324890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324890u;
        // 0x324894: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324890) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x324898u;
    // 0x324898: 0x28e20400  slti        $v0, $a3, 0x400
    ctx->pc = 0x324898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x32489c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32489Cu;
    {
        const bool branch_taken_0x32489c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32489c) {
            ctx->pc = 0x3248C0u;
            goto label_3248c0;
        }
    }
    ctx->pc = 0x3248A4u;
    // 0x3248a4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3248a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3248a8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3248A8u;
    {
        const bool branch_taken_0x3248a8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3248ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248A8u;
        // 0x3248ac: 0x229c3  sra         $a1, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248a8) {
            ctx->pc = 0x3248B8u;
            goto label_3248b8;
        }
    }
    ctx->pc = 0x3248B0u;
    // 0x3248b0: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x3248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x3248b4: 0x229c3  sra         $a1, $v0, 7
    ctx->pc = 0x3248b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 7));
label_3248b8:
    // 0x3248b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3248b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248bc: 0x0  nop
    ctx->pc = 0x3248bcu;
    // NOP
label_3248c0:
    // 0x3248c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3248c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3248c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3248c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3248c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3248c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3248cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3248ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3248d0: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3248d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3248d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3248d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3248d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3248dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3248DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248DCu;
        // 0x3248e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3248E4u;
}
