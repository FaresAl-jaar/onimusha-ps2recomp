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

// Function: sub_0038A390
// Address: 0x38a390 - 0x38a4c4
void sub_0038A390_0x38a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A390_0x38a390");
#endif

    switch (ctx->pc) {
        case 0x38a3acu: goto label_38a3ac;
        default: break;
    }

    ctx->pc = 0x38a390u;

    // 0x38a390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38a394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38a398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38a3a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3a4: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38A3A4u;
    SET_GPR_U32(ctx, 31, 0x38A3ACu);
    ctx->pc = 0x38A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A3A4u;
    // 0x38a3a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38A3A4u, 0x38A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3ACu;
label_38a3ac:
    // 0x38a3ac: 0x8e250144  lw          $a1, 0x144($s1)
    ctx->pc = 0x38a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x38a3b0: 0xc6250020  lwc1        $f5, 0x20($s1)
    ctx->pc = 0x38a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x38a3b4: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x38a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38a3b8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x38a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x38a3bc: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x38a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38a3c0: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x38a3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x38a3c4: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x38a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a3c8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x38a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x38a3cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38a3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a3d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x38a3d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38a3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a3dc: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x38a3dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x38a3e0: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x38a3e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x38a3e4: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x38a3e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x38a3e8: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x38a3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x38a3ec: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x38a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x38a3f0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a3f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38a3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38a3f8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x38a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x38a3fc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x38a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x38a400: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x38a404: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x38a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38a408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38a40c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x38a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x38a410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38a410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38a414: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x38a414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x38a418: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38A418u;
    {
        const bool branch_taken_0x38a418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A418u;
        // 0x38a41c: 0x32a02  srl         $a1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a418) {
            ctx->pc = 0x38A430u;
            goto label_38a430;
        }
    }
    ctx->pc = 0x38A420u;
    // 0x38a420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a424: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38a424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38a428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A428u;
    {
        const bool branch_taken_0x38a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A428u;
        // 0x38a42c: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a428) {
            ctx->pc = 0x38A44Cu;
            goto label_38a44c;
        }
    }
    ctx->pc = 0x38A430u;
label_38a430:
    // 0x38a430: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38a430u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38a434: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38a438: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a43c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38a43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38a440: 0x0  nop
    ctx->pc = 0x38a440u;
    // NOP
    // 0x38a444: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38a444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38a448: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x38a448u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_38a44c:
    // 0x38a44c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x38a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x38a450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38a450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a454: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38a454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38a458: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38a458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38a45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38a45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a460: 0x0  nop
    ctx->pc = 0x38a460u;
    // NOP
    // 0x38a464: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38a464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38a468: 0x2810  mfhi        $a1
    ctx->pc = 0x38a468u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x38a46c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38A46Cu;
    {
        const bool branch_taken_0x38a46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38a46c) {
            ctx->pc = 0x38A484u;
            goto label_38a484;
        }
    }
    ctx->pc = 0x38A474u;
    // 0x38a474: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a478: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38a478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38a47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38A47Cu;
    {
        const bool branch_taken_0x38a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A47Cu;
        // 0x38a480: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a47c) {
            ctx->pc = 0x38A4A0u;
            goto label_38a4a0;
        }
    }
    ctx->pc = 0x38A484u;
label_38a484:
    // 0x38a484: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38a484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38a488: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38a488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38a48c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38a48cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38a490: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38a490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38a494: 0x0  nop
    ctx->pc = 0x38a494u;
    // NOP
    // 0x38a498: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38a498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38a49c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x38a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_38a4a0:
    // 0x38a4a0: 0xa6232aca  sh          $v1, 0x2ACA($s1)
    ctx->pc = 0x38a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10954), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a4a4: 0xa6302acc  sh          $s0, 0x2ACC($s1)
    ctx->pc = 0x38a4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10956), (uint16_t)GPR_U32(ctx, 16));
    // 0x38a4a8: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x38a4a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x38a4ac: 0xa6232ace  sh          $v1, 0x2ACE($s1)
    ctx->pc = 0x38a4acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10958), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38a4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x38A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A4BCu;
        // 0x38a4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A4C4u;
}
