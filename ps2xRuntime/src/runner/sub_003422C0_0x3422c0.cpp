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

// Function: sub_003422C0
// Address: 0x3422c0 - 0x342434
void sub_003422C0_0x3422c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003422C0_0x3422c0");
#endif

    switch (ctx->pc) {
        case 0x34230cu: goto label_34230c;
        case 0x3423a0u: goto label_3423a0;
        case 0x3423f0u: goto label_3423f0;
        case 0x342404u: goto label_342404;
        case 0x342418u: goto label_342418;
        default: break;
    }

    ctx->pc = 0x3422c0u;

    // 0x3422c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3422c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3422c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3422c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3422c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3422cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3422ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3422d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3422d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3422d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3422d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3422d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3422dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3422dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422e0: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x3422e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3422e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3422e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422e8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3422e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3422ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3422ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3422f0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3422f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3422f4: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3422f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3422f8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3422f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3422fc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3422fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x342300: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x342300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x342304: 0xc0d0714  jal         func_341C50
    ctx->pc = 0x342304u;
    SET_GPR_U32(ctx, 31, 0x34230Cu);
    ctx->pc = 0x342308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342304u;
    // 0x342308: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C50u, 0x342304u, 0x34230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34230Cu;
label_34230c:
    // 0x34230c: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x34230Cu;
    {
        const bool branch_taken_0x34230c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x34230c) {
            ctx->pc = 0x3423A8u;
            goto label_3423a8;
        }
    }
    ctx->pc = 0x342314u;
    // 0x342314: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x342314u;
    {
        const bool branch_taken_0x342314 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x342318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342314u;
        // 0x342318: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342314) {
            ctx->pc = 0x342328u;
            goto label_342328;
        }
    }
    ctx->pc = 0x34231Cu;
    // 0x34231c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34231cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342320u;
    {
        const bool branch_taken_0x342320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342320u;
        // 0x342324: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342320) {
            ctx->pc = 0x342340u;
            goto label_342340;
        }
    }
    ctx->pc = 0x342328u;
label_342328:
    // 0x342328: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x342328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x34232c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34232cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x342330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x342330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342334: 0x0  nop
    ctx->pc = 0x342334u;
    // NOP
    // 0x342338: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x342338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x34233c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x34233cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_342340:
    // 0x342340: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x342340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342344: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x342344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x342348: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x342348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x34234c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x342350: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x342350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x342354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342358: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x342358u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x34235c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x34235cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x342360: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x342360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342364: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x342364u;
    {
        const bool branch_taken_0x342364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342364) {
            ctx->pc = 0x34237Cu;
            goto label_34237c;
        }
    }
    ctx->pc = 0x34236Cu;
    // 0x34236c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34236cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x342370: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x342370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342374u;
    {
        const bool branch_taken_0x342374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342374u;
        // 0x342378: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342374) {
            ctx->pc = 0x342398u;
            goto label_342398;
        }
    }
    ctx->pc = 0x34237Cu;
label_34237c:
    // 0x34237c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34237cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x342380: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x342380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x342384: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x342388: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x342388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34238c: 0x0  nop
    ctx->pc = 0x34238cu;
    // NOP
    // 0x342390: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x342390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x342394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x342394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342398:
    // 0x342398: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x342398u;
    SET_GPR_U32(ctx, 31, 0x3423A0u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x342398u, 0x3423A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423A0u;
label_3423a0:
    // 0x3423a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3423A0u;
    {
        const bool branch_taken_0x3423a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423a0) {
            ctx->pc = 0x3423B0u;
            goto label_3423b0;
        }
    }
    ctx->pc = 0x3423A8u;
label_3423a8:
    // 0x3423a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3423a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423ac: 0x0  nop
    ctx->pc = 0x3423acu;
    // NOP
label_3423b0:
    // 0x3423b0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3423b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3423b4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3423b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3423b8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3423b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3423bc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3423bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3423c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3423c4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3423c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3423c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3423c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423cc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3423ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3423d0: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x3423d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x3423d4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3423d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3423d8: 0xe6230010  swc1        $f3, 0x10($s1)
    ctx->pc = 0x3423d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x3423dc: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x3423dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x3423e0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x3423e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x3423e4: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x3423e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3423e8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3423E8u;
    SET_GPR_U32(ctx, 31, 0x3423F0u);
    ctx->pc = 0x3423ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423E8u;
    // 0x3423ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3423E8u, 0x3423F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423F0u;
label_3423f0:
    // 0x3423f0: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x3423f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3423f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3423f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423f8: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x3423f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x3423fc: 0xc0d05e4  jal         func_341790
    ctx->pc = 0x3423FCu;
    SET_GPR_U32(ctx, 31, 0x342404u);
    ctx->pc = 0x342400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423FCu;
    // 0x342400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341790u, 0x3423FCu, 0x342404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342404u;
label_342404:
    // 0x342404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342404u;
    {
        const bool branch_taken_0x342404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342404u;
        // 0x342408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342404) {
            ctx->pc = 0x342418u;
            goto label_342418;
        }
    }
    ctx->pc = 0x34240Cu;
    // 0x34240c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342410: 0xc0d0590  jal         func_341640
    ctx->pc = 0x342410u;
    SET_GPR_U32(ctx, 31, 0x342418u);
    ctx->pc = 0x342414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342410u;
    // 0x342414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x342410u, 0x342418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342418u;
label_342418:
    // 0x342418: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x342418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34241c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34241cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34242c: 0x3e00008  jr          $ra
    ctx->pc = 0x34242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34242Cu;
        // 0x342430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342434u;
}
