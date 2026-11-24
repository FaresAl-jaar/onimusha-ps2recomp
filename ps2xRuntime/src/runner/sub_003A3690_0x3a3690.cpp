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

// Function: sub_003A3690
// Address: 0x3a3690 - 0x3a4078
void sub_003A3690_0x3a3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3690_0x3a3690");
#endif

    switch (ctx->pc) {
        case 0x3a36bcu: goto label_3a36bc;
        case 0x3a36d4u: goto label_3a36d4;
        case 0x3a36e0u: goto label_3a36e0;
        case 0x3a36f0u: goto label_3a36f0;
        case 0x3a3708u: goto label_3a3708;
        case 0x3a3718u: goto label_3a3718;
        case 0x3a3744u: goto label_3a3744;
        case 0x3a3870u: goto label_3a3870;
        case 0x3a3974u: goto label_3a3974;
        case 0x3a3988u: goto label_3a3988;
        case 0x3a3998u: goto label_3a3998;
        case 0x3a39c8u: goto label_3a39c8;
        case 0x3a39f8u: goto label_3a39f8;
        case 0x3a3a98u: goto label_3a3a98;
        case 0x3a3ad8u: goto label_3a3ad8;
        case 0x3a3b10u: goto label_3a3b10;
        case 0x3a3b48u: goto label_3a3b48;
        case 0x3a3b80u: goto label_3a3b80;
        case 0x3a3bb8u: goto label_3a3bb8;
        case 0x3a3bd8u: goto label_3a3bd8;
        case 0x3a3c1cu: goto label_3a3c1c;
        case 0x3a3c50u: goto label_3a3c50;
        case 0x3a3c90u: goto label_3a3c90;
        case 0x3a3cc4u: goto label_3a3cc4;
        case 0x3a3d08u: goto label_3a3d08;
        case 0x3a3d3cu: goto label_3a3d3c;
        case 0x3a3d80u: goto label_3a3d80;
        case 0x3a3db4u: goto label_3a3db4;
        case 0x3a3df8u: goto label_3a3df8;
        case 0x3a3e2cu: goto label_3a3e2c;
        case 0x3a3e88u: goto label_3a3e88;
        case 0x3a3e94u: goto label_3a3e94;
        case 0x3a3ea0u: goto label_3a3ea0;
        case 0x3a3eacu: goto label_3a3eac;
        case 0x3a3eb8u: goto label_3a3eb8;
        case 0x3a4044u: goto label_3a4044;
        case 0x3a404cu: goto label_3a404c;
        default: break;
    }

    ctx->pc = 0x3a3690u;

    // 0x3a3690: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x3a3690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x3a3694: 0x24042060  addiu       $a0, $zero, 0x2060
    ctx->pc = 0x3a3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x3a3698: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a369c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3a36a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a36a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a36a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a36a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a36ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a36acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a36b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a36b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a36b4: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3A36B4u;
    SET_GPR_U32(ctx, 31, 0x3A36BCu);
    ctx->pc = 0x3A36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A36B4u;
    // 0x3a36b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3A36B4u, 0x3A36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36BCu;
label_3a36bc:
    // 0x3a36bc: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
    // 0x3a36c0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x3a36c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a36c4: 0x10800262  beqz        $a0, . + 4 + (0x262 << 2)
    ctx->pc = 0x3A36C4u;
    {
        const bool branch_taken_0x3a36c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36C4u;
        // 0x3a36c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36c4) {
            ctx->pc = 0x3A4050u;
            goto label_3a4050;
        }
    }
    ctx->pc = 0x3A36CCu;
    // 0x3a36cc: 0xc049590  jal         func_125640
    ctx->pc = 0x3A36CCu;
    SET_GPR_U32(ctx, 31, 0x3A36D4u);
    ctx->pc = 0x3A36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A36CCu;
    // 0x3a36d0: 0x24062060  addiu       $a2, $zero, 0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3A36CCu, 0x3A36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36D4u;
label_3a36d4:
    // 0x3a36d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a36d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a36d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36dc: 0x0  nop
    ctx->pc = 0x3a36dcu;
    // NOP
label_3a36e0:
    // 0x3a36e0: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a36e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a36e8: 0xc0f020c  jal         func_3C0830
    ctx->pc = 0x3A36E8u;
    SET_GPR_U32(ctx, 31, 0x3A36F0u);
    ctx->pc = 0x3A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A36E8u;
    // 0x3a36ec: 0x24440d3c  addiu       $a0, $v0, 0xD3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0830u, 0x3A36E8u, 0x3A36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36F0u;
label_3a36f0:
    // 0x3a36f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a36f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a36f4: 0x2a2200e2  slti        $v0, $s1, 0xE2
    ctx->pc = 0x3a36f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)226) ? 1 : 0);
    // 0x3a36f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A36F8u;
    {
        const bool branch_taken_0x3a36f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36F8u;
        // 0x3a36fc: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36f8) {
            ctx->pc = 0x3A36E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a36e0;
        }
    }
    ctx->pc = 0x3A3700u;
    // 0x3a3700: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a3704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3708:
    // 0x3a3708: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a370c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a3710: 0xc0f03f0  jal         func_3C0FC0
    ctx->pc = 0x3A3710u;
    SET_GPR_U32(ctx, 31, 0x3A3718u);
    ctx->pc = 0x3A3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3710u;
    // 0x3a3714: 0x24440960  addiu       $a0, $v0, 0x960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FC0u, 0x3A3710u, 0x3A3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3718u;
label_3a3718:
    // 0x3a3718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a3718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a371c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x3a371cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a3720: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3720u;
    {
        const bool branch_taken_0x3a3720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3720u;
        // 0x3a3724: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3720) {
            ctx->pc = 0x3A3708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3708;
        }
    }
    ctx->pc = 0x3A3728u;
    // 0x3a3728: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a372c: 0x240600e2  addiu       $a2, $zero, 0xE2
    ctx->pc = 0x3a372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x3a3730: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3a3730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3734: 0x24440d24  addiu       $a0, $v0, 0xD24
    ctx->pc = 0x3a3734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3364));
    // 0x3a3738: 0x24450d3c  addiu       $a1, $v0, 0xD3C
    ctx->pc = 0x3a3738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3388));
    // 0x3a373c: 0xc0f0740  jal         func_3C1D00
    ctx->pc = 0x3A373Cu;
    SET_GPR_U32(ctx, 31, 0x3A3744u);
    ctx->pc = 0x3A3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A373Cu;
    // 0x3a3740: 0x24470b60  addiu       $a3, $v0, 0xB60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D00u, 0x3A373Cu, 0x3A3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3744u;
label_3a3744:
    // 0x3a3744: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3a3744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a3748: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3a374c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a374cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3750: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3a3750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3a3754: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3a3754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3a3758: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a3758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a375c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3a375cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a3760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a3760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a3764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3768: 0x0  nop
    ctx->pc = 0x3a3768u;
    // NOP
    // 0x3a376c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a376cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a3770: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a3770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3774: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3774u;
    {
        const bool branch_taken_0x3a3774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a3774) {
            ctx->pc = 0x3A378Cu;
            goto label_3a378c;
        }
    }
    ctx->pc = 0x3A377Cu;
    // 0x3a377c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a377cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a3780: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a3780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a3784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3784u;
    {
        const bool branch_taken_0x3a3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3784u;
        // 0x3a3788: 0x3c0243b4  lui         $v0, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3784) {
            ctx->pc = 0x3A37A8u;
            goto label_3a37a8;
        }
    }
    ctx->pc = 0x3A378Cu;
label_3a378c:
    // 0x3a378c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a378cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a3790: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a3794: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a3798: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a3798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a379c: 0x0  nop
    ctx->pc = 0x3a379cu;
    // NOP
    // 0x3a37a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a37a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a37a4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x3a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_3a37a8:
    // 0x3a37a8: 0xa7a301c0  sh          $v1, 0x1C0($sp)
    ctx->pc = 0x3a37a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 448), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a37ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a37acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a37b0: 0x0  nop
    ctx->pc = 0x3a37b0u;
    // NOP
    // 0x3a37b4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3a37b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a37b8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3a37bc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3a37bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3a37c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a37c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a37c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a37c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a37c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a37cc: 0x0  nop
    ctx->pc = 0x3a37ccu;
    // NOP
    // 0x3a37d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a37d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a37d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a37d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a37d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A37D8u;
    {
        const bool branch_taken_0x3a37d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a37d8) {
            ctx->pc = 0x3A37F0u;
            goto label_3a37f0;
        }
    }
    ctx->pc = 0x3A37E0u;
    // 0x3a37e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a37e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a37e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a37e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a37e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A37E8u;
    {
        const bool branch_taken_0x3a37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37E8u;
        // 0x3a37ec: 0xa7a301c2  sh          $v1, 0x1C2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 450), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37e8) {
            ctx->pc = 0x3A380Cu;
            goto label_3a380c;
        }
    }
    ctx->pc = 0x3A37F0u;
label_3a37f0:
    // 0x3a37f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a37f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a37f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a37f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a37f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a37fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a37fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a3800: 0x0  nop
    ctx->pc = 0x3a3800u;
    // NOP
    // 0x3a3804: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a3804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a3808: 0xa7a301c2  sh          $v1, 0x1C2($sp)
    ctx->pc = 0x3a3808u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 450), (uint16_t)GPR_U32(ctx, 3));
label_3a380c:
    // 0x3a380c: 0x27b201c4  addiu       $s2, $sp, 0x1C4
    ctx->pc = 0x3a380cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x3a3810: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3a3810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3a3814: 0x27b101c8  addiu       $s1, $sp, 0x1C8
    ctx->pc = 0x3a3814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x3a3818: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a381c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3a381cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3820: 0x3c023cfb  lui         $v0, 0x3CFB
    ctx->pc = 0x3a3820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15611 << 16));
    // 0x3a3824: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3a3824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3a3828: 0x344353d2  ori         $v1, $v0, 0x53D2
    ctx->pc = 0x3a3828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a382c: 0x27b001cc  addiu       $s0, $sp, 0x1CC
    ctx->pc = 0x3a382cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x3a3830: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x3a3830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x3a3834: 0x27b501d0  addiu       $s5, $sp, 0x1D0
    ctx->pc = 0x3a3834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3a3838: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a3838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a383c: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x3a383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
    // 0x3a3840: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a3840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3a3844: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a3844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3848: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3a3848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3a384c: 0xafa401dc  sw          $a0, 0x1DC($sp)
    ctx->pc = 0x3a384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 4));
    // 0x3a3850: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x3a3850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x3a3854: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3a3854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3858: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a385c: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a3860: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x3a3860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x3a3864: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3a3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a3868: 0xa7a201e0  sh          $v0, 0x1E0($sp)
    ctx->pc = 0x3a3868u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 480), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a386c: 0x0  nop
    ctx->pc = 0x3a386cu;
    // NOP
label_3a3870:
    // 0x3a3870: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3874: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3a3874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3a3878: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3878u;
    {
        const bool branch_taken_0x3a3878 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3878u;
        // 0x3a387c: 0x24540460  addiu       $s4, $v0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3878) {
            ctx->pc = 0x3A38A8u;
            goto label_3a38a8;
        }
    }
    ctx->pc = 0x3A3880u;
    // 0x3a3880: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3a3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3a3884: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a3884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3888: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a388c: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a3890: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a3890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a3894: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a3894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a3898: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a3898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a389c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3a389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3a38a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a38a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3a38a4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3a38a8:
    // 0x3a38a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a38ac: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A38ACu;
    {
        const bool branch_taken_0x3a38ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38ACu;
        // 0x3a38b0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38ac) {
            ctx->pc = 0x3A38D8u;
            goto label_3a38d8;
        }
    }
    ctx->pc = 0x3A38B4u;
    // 0x3a38b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a38b8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a38bc: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a38c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a38c4: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a38c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a38c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a38cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3a38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3a38d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a38d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3a38d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3a38d8:
    // 0x3a38d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a38dc: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A38DCu;
    {
        const bool branch_taken_0x3a38dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38DCu;
        // 0x3a38e0: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38dc) {
            ctx->pc = 0x3A3908u;
            goto label_3a3908;
        }
    }
    ctx->pc = 0x3A38E4u;
    // 0x3a38e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a38e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a38ec: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a38f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a38f4: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a38f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a38f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a38f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a38fc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3a38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3a3900: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a3900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3a3904: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a3904u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3a3908:
    // 0x3a3908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a390c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A390Cu;
    {
        const bool branch_taken_0x3a390c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A390Cu;
        // 0x3a3910: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a390c) {
            ctx->pc = 0x3A3938u;
            goto label_3a3938;
        }
    }
    ctx->pc = 0x3A3914u;
    // 0x3a3914: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a3914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3918: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a391c: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a3920: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a3920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a3924: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a3924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a3928: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a3928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a392c: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x3a392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
    // 0x3a3930: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x3a3930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
    // 0x3a3934: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a3934u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3a3938:
    // 0x3a3938: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a3938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a393c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A393Cu;
    {
        const bool branch_taken_0x3a393c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A393Cu;
        // 0x3a3940: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a393c) {
            ctx->pc = 0x3A3968u;
            goto label_3a3968;
        }
    }
    ctx->pc = 0x3A3944u;
    // 0x3a3944: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3a3944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3948: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a394c: 0x3c023bfb  lui         $v0, 0x3BFB
    ctx->pc = 0x3a394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15355 << 16));
    // 0x3a3950: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a3950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3a3954: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x3a3954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x3a3958: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a3958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a395c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3a395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3a3960: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a3960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3a3964: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3a3964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3a3968:
    // 0x3a3968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a396c: 0xc0f0570  jal         func_3C15C0
    ctx->pc = 0x3A396Cu;
    SET_GPR_U32(ctx, 31, 0x3A3974u);
    ctx->pc = 0x3A3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A396Cu;
    // 0x3a3970: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C15C0u, 0x3A396Cu, 0x3A3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3974u;
label_3a3974:
    // 0x3a3974: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a3978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a397c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3a397cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a3980: 0xc0f05e0  jal         func_3C1780
    ctx->pc = 0x3A3980u;
    SET_GPR_U32(ctx, 31, 0x3A3988u);
    ctx->pc = 0x3A3984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3980u;
    // 0x3a3984: 0x24450960  addiu       $a1, $v0, 0x960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1780u, 0x3A3980u, 0x3A3988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3988u;
label_3a3988:
    // 0x3a3988: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a398c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3990: 0xc0f05e4  jal         func_3C1790
    ctx->pc = 0x3A3990u;
    SET_GPR_U32(ctx, 31, 0x3A3998u);
    ctx->pc = 0x3A3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3990u;
    // 0x3a3994: 0x24450d24  addiu       $a1, $v0, 0xD24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1790u, 0x3A3990u, 0x3A3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3998u;
label_3a3998:
    // 0x3a3998: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a3998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a399c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x3a399cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a39a0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3A39A0u;
    {
        const bool branch_taken_0x3a39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39A0u;
        // 0x3a39a4: 0x26d60100  addiu       $s6, $s6, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39a0) {
            ctx->pc = 0x3A3870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3870;
        }
    }
    ctx->pc = 0x3A39A8u;
    // 0x3a39a8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3a39a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3a39ac: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a39b0: 0x8c23b870  lw          $v1, -0x4790($at)
    ctx->pc = 0x3a39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80B870u));
    // 0x3a39b4: 0xac431fb0  sw          $v1, 0x1FB0($v0)
    ctx->pc = 0x3a39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8112), GPR_U32(ctx, 3));
    // 0x3a39b8: 0x8f858c60  lw          $a1, -0x73A0($gp)
    ctx->pc = 0x3a39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a39bc: 0x8ca41fb0  lw          $a0, 0x1FB0($a1)
    ctx->pc = 0x3a39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8112)));
    // 0x3a39c0: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3A39C0u;
    SET_GPR_U32(ctx, 31, 0x3A39C8u);
    ctx->pc = 0x3A39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A39C0u;
    // 0x3a39c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3A39C0u, 0x3A39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A39C8u;
label_3a39c8:
    // 0x3a39c8: 0x8f898c60  lw          $t1, -0x73A0($gp)
    ctx->pc = 0x3a39c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a39cc: 0x8d221fb0  lw          $v0, 0x1FB0($t1)
    ctx->pc = 0x3a39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8112)));
    // 0x3a39d0: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x3a39d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x3a39d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3a39d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a39d8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x3A39D8u;
    {
        const bool branch_taken_0x3a39d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39D8u;
        // 0x3a39dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39d8) {
            ctx->pc = 0x3A3A90u;
            goto label_3a3a90;
        }
    }
    ctx->pc = 0x3A39E0u;
    // 0x3a39e0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3a39e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3a39e4: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x3a39e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3a39e8: 0x34068002  ori         $a2, $zero, 0x8002
    ctx->pc = 0x3a39e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x3a39ec: 0x34078003  ori         $a3, $zero, 0x8003
    ctx->pc = 0x3a39ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x3a39f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a39f4: 0x34088004  ori         $t0, $zero, 0x8004
    ctx->pc = 0x3a39f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_3a39f8:
    // 0x3a39f8: 0x25427fff  addiu       $v0, $t2, 0x7FFF
    ctx->pc = 0x3a39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 32767));
    // 0x3a39fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a3a00: 0x10480013  beq         $v0, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A3A00u;
    {
        const bool branch_taken_0x3a3a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a3a00) {
            ctx->pc = 0x3A3A50u;
            goto label_3a3a50;
        }
    }
    ctx->pc = 0x3A3A08u;
    // 0x3a3a08: 0x1047000f  beq         $v0, $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x3A3A08u;
    {
        const bool branch_taken_0x3a3a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3a3a08) {
            ctx->pc = 0x3A3A48u;
            goto label_3a3a48;
        }
    }
    ctx->pc = 0x3A3A10u;
    // 0x3a3a10: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3A10u;
    {
        const bool branch_taken_0x3a3a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x3a3a10) {
            ctx->pc = 0x3A3A40u;
            goto label_3a3a40;
        }
    }
    ctx->pc = 0x3A3A18u;
    // 0x3a3a18: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3A18u;
    {
        const bool branch_taken_0x3a3a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a3a18) {
            ctx->pc = 0x3A3A38u;
            goto label_3a3a38;
        }
    }
    ctx->pc = 0x3A3A20u;
    // 0x3a3a20: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3A20u;
    {
        const bool branch_taken_0x3a3a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a3a20) {
            ctx->pc = 0x3A3A30u;
            goto label_3a3a30;
        }
    }
    ctx->pc = 0x3A3A28u;
    // 0x3a3a28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A3A28u;
    {
        const bool branch_taken_0x3a3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3a28) {
            ctx->pc = 0x3A3A70u;
            goto label_3a3a70;
        }
    }
    ctx->pc = 0x3A3A30u;
label_3a3a30:
    // 0x3a3a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3A30u;
    {
        const bool branch_taken_0x3a3a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A30u;
        // 0x3a3a34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a30) {
            ctx->pc = 0x3A3A58u;
            goto label_3a3a58;
        }
    }
    ctx->pc = 0x3A3A38u;
label_3a3a38:
    // 0x3a3a38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3A38u;
    {
        const bool branch_taken_0x3a3a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A38u;
        // 0x3a3a3c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a38) {
            ctx->pc = 0x3A3A58u;
            goto label_3a3a58;
        }
    }
    ctx->pc = 0x3A3A40u;
label_3a3a40:
    // 0x3a3a40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3A40u;
    {
        const bool branch_taken_0x3a3a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A40u;
        // 0x3a3a44: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a40) {
            ctx->pc = 0x3A3A58u;
            goto label_3a3a58;
        }
    }
    ctx->pc = 0x3A3A48u;
label_3a3a48:
    // 0x3a3a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3A48u;
    {
        const bool branch_taken_0x3a3a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A48u;
        // 0x3a3a4c: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a48) {
            ctx->pc = 0x3A3A58u;
            goto label_3a3a58;
        }
    }
    ctx->pc = 0x3A3A50u;
label_3a3a50:
    // 0x3a3a50: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x3a3a50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3a54: 0x0  nop
    ctx->pc = 0x3a3a54u;
    // NOP
label_3a3a58:
    // 0x3a3a58: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x3a3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3a3a5c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3a3a60: 0xa44a1fba  sh          $t2, 0x1FBA($v0)
    ctx->pc = 0x3a3a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8122), (uint16_t)GPR_U32(ctx, 10));
    // 0x3a3a64: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3a68: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3a3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3a3a6c: 0xa0431fb4  sb          $v1, 0x1FB4($v0)
    ctx->pc = 0x3a3a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8116), (uint8_t)GPR_U32(ctx, 3));
label_3a3a70:
    // 0x3a3a70: 0x8f898c60  lw          $t1, -0x73A0($gp)
    ctx->pc = 0x3a3a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3a74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a3a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a3a78: 0x8d221fb0  lw          $v0, 0x1FB0($t1)
    ctx->pc = 0x3a3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8112)));
    // 0x3a3a7c: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x3a3a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x3a3a80: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x3a3a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a3a84: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3A3A84u;
    {
        const bool branch_taken_0x3a3a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3a84) {
            ctx->pc = 0x3A39F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a39f8;
        }
    }
    ctx->pc = 0x3A3A8Cu;
    // 0x3a3a8c: 0x0  nop
    ctx->pc = 0x3a3a8cu;
    // NOP
label_3a3a90:
    // 0x3a3a90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3a98:
    // 0x3a3a98: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3a9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3aa0: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A3AA0u;
    {
        const bool branch_taken_0x3a3aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AA0u;
        // 0x3a3aa4: 0x24500460  addiu       $s0, $v0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3aa0) {
            ctx->pc = 0x3A3AD8u;
            goto label_3a3ad8;
        }
    }
    ctx->pc = 0x3A3AA8u;
    // 0x3a3aa8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3aac: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x3a3aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3a3ab0: 0x2442d0e0  addiu       $v0, $v0, -0x2F20
    ctx->pc = 0x3a3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955232));
    // 0x3a3ab4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x3a3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3a3ab8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3ab8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D0E0u));
    // 0x3a3abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ac0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3ac4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a3ac8: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x3a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
    // 0x3a3acc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a3accu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D0D0u));
    // 0x3a3ad0: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3A3AD0u;
    SET_GPR_U32(ctx, 31, 0x3A3AD8u);
    ctx->pc = 0x3A3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AD0u;
    // 0x3a3ad4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3A3AD0u, 0x3A3AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3AD8u;
label_3a3ad8:
    // 0x3a3ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3adc: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3ADCu;
    {
        const bool branch_taken_0x3a3adc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3ADCu;
        // 0x3a3ae0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3adc) {
            ctx->pc = 0x3A3B10u;
            goto label_3a3b10;
        }
    }
    ctx->pc = 0x3A3AE4u;
    // 0x3a3ae4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x3a3ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3a3ae8: 0x2442d100  addiu       $v0, $v0, -0x2F00
    ctx->pc = 0x3a3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
    // 0x3a3aec: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3a3aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3a3af0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3af0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3af8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3afc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a3b00: 0x2442d0f0  addiu       $v0, $v0, -0x2F10
    ctx->pc = 0x3a3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955248));
    // 0x3a3b04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a3b04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D0F0u));
    // 0x3a3b08: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3A3B08u;
    SET_GPR_U32(ctx, 31, 0x3A3B10u);
    ctx->pc = 0x3A3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B08u;
    // 0x3a3b0c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3A3B08u, 0x3A3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B10u;
label_3a3b10:
    // 0x3a3b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3b14: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3B14u;
    {
        const bool branch_taken_0x3a3b14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B14u;
        // 0x3a3b18: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b14) {
            ctx->pc = 0x3A3B48u;
            goto label_3a3b48;
        }
    }
    ctx->pc = 0x3A3B1Cu;
    // 0x3a3b1c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x3a3b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3a3b20: 0x2442d120  addiu       $v0, $v0, -0x2EE0
    ctx->pc = 0x3a3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955296));
    // 0x3a3b24: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3a3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3a3b28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3b28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3b34: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a3b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a3b38: 0x2442d110  addiu       $v0, $v0, -0x2EF0
    ctx->pc = 0x3a3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955280));
    // 0x3a3b3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a3b3cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D110u));
    // 0x3a3b40: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3A3B40u;
    SET_GPR_U32(ctx, 31, 0x3A3B48u);
    ctx->pc = 0x3A3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B40u;
    // 0x3a3b44: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3A3B40u, 0x3A3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B48u;
label_3a3b48:
    // 0x3a3b48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3b4c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3B4Cu;
    {
        const bool branch_taken_0x3a3b4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B4Cu;
        // 0x3a3b50: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b4c) {
            ctx->pc = 0x3A3B80u;
            goto label_3a3b80;
        }
    }
    ctx->pc = 0x3A3B54u;
    // 0x3a3b54: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x3a3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3a3b58: 0x2442d140  addiu       $v0, $v0, -0x2EC0
    ctx->pc = 0x3a3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955328));
    // 0x3a3b5c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3a3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3a3b60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3b6c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a3b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a3b70: 0x2442d130  addiu       $v0, $v0, -0x2ED0
    ctx->pc = 0x3a3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
    // 0x3a3b74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a3b74u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D130u));
    // 0x3a3b78: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3A3B78u;
    SET_GPR_U32(ctx, 31, 0x3A3B80u);
    ctx->pc = 0x3A3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B78u;
    // 0x3a3b7c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3A3B78u, 0x3A3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B80u;
label_3a3b80:
    // 0x3a3b80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3b84: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A3B84u;
    {
        const bool branch_taken_0x3a3b84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B84u;
        // 0x3a3b88: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b84) {
            ctx->pc = 0x3A3BB8u;
            goto label_3a3bb8;
        }
    }
    ctx->pc = 0x3A3B8Cu;
    // 0x3a3b8c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x3a3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3a3b90: 0x2442d160  addiu       $v0, $v0, -0x2EA0
    ctx->pc = 0x3a3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955360));
    // 0x3a3b94: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3a3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3a3b98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ba0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3ba4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3a3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3a3ba8: 0x2442d150  addiu       $v0, $v0, -0x2EB0
    ctx->pc = 0x3a3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955344));
    // 0x3a3bac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a3bacu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D150u));
    // 0x3a3bb0: 0xc0f05bc  jal         func_3C16F0
    ctx->pc = 0x3A3BB0u;
    SET_GPR_U32(ctx, 31, 0x3A3BB8u);
    ctx->pc = 0x3A3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BB0u;
    // 0x3a3bb4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C16F0u, 0x3A3BB0u, 0x3A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BB8u;
label_3a3bb8:
    // 0x3a3bb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a3bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a3bbc: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x3a3bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a3bc0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3A3BC0u;
    {
        const bool branch_taken_0x3a3bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BC0u;
        // 0x3a3bc4: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3bc0) {
            ctx->pc = 0x3A3A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3a98;
        }
    }
    ctx->pc = 0x3A3BC8u;
    // 0x3a3bc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a3bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a3bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a3bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bd4: 0x0  nop
    ctx->pc = 0x3a3bd4u;
    // NOP
label_3a3bd8:
    // 0x3a3bd8: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3bdc: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x3a3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3a3be0: 0x1660001b  bnez        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A3BE0u;
    {
        const bool branch_taken_0x3a3be0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BE0u;
        // 0x3a3be4: 0x24500460  addiu       $s0, $v0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3be0) {
            ctx->pc = 0x3A3C50u;
            goto label_3a3c50;
        }
    }
    ctx->pc = 0x3A3BE8u;
    // 0x3a3be8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3a3bec: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3a3becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3a3bf0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3a3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3a3bf4: 0x24471ee4  addiu       $a3, $v0, 0x1EE4
    ctx->pc = 0x3a3bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    // 0x3a3bf8: 0x2463d170  addiu       $v1, $v1, -0x2E90
    ctx->pc = 0x3a3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955376));
    // 0x3a3bfc: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3a3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3a3c00: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3a3c00u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D170u));
    // 0x3a3c04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a3c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c14: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3A3C14u;
    SET_GPR_U32(ctx, 31, 0x3A3C1Cu);
    ctx->pc = 0x3A3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C14u;
    // 0x3a3c18: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3A3C14u, 0x3A3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C1Cu;
label_3a3c1c:
    // 0x3a3c1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3c20: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3a3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3a3c24: 0x2442d180  addiu       $v0, $v0, -0x2E80
    ctx->pc = 0x3a3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3a3c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3c2cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D180u));
    // 0x3a3c30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3c38: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3c40: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3c44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3c48: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3A3C48u;
    SET_GPR_U32(ctx, 31, 0x3A3C50u);
    ctx->pc = 0x3A3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C48u;
    // 0x3a3c4c: 0x24471ef8  addiu       $a3, $v0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3A3C48u, 0x3A3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C50u;
label_3a3c50:
    // 0x3a3c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3c54: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A3C54u;
    {
        const bool branch_taken_0x3a3c54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C54u;
        // 0x3a3c58: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c54) {
            ctx->pc = 0x3A3CC8u;
            goto label_3a3cc8;
        }
    }
    ctx->pc = 0x3A3C5Cu;
    // 0x3a3c5c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3a3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3a3c60: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x3a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x3a3c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3c68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3c6c: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x3a3c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x3a3c70: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3a3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3a3c74: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3c74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3c78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a3c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a3c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3c80: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3c84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3c88: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3A3C88u;
    SET_GPR_U32(ctx, 31, 0x3A3C90u);
    ctx->pc = 0x3A3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C88u;
    // 0x3a3c8c: 0x24471ee4  addiu       $a3, $v0, 0x1EE4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3A3C88u, 0x3A3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C90u;
label_3a3c90:
    // 0x3a3c90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3c94: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3a3c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3a3c98: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x3a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x3a3c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ca0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3ca0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D1A0u));
    // 0x3a3ca4: 0x2406ff9c  addiu       $a2, $zero, -0x64
    ctx->pc = 0x3a3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x3a3ca8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3cac: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3cacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3cb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3cb4: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3cb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3cbc: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3A3CBCu;
    SET_GPR_U32(ctx, 31, 0x3A3CC4u);
    ctx->pc = 0x3A3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CBCu;
    // 0x3a3cc0: 0x24471ef8  addiu       $a3, $v0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3A3CBCu, 0x3A3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CC4u;
label_3a3cc4:
    // 0x3a3cc4: 0x0  nop
    ctx->pc = 0x3a3cc4u;
    // NOP
label_3a3cc8:
    // 0x3a3cc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3ccc: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A3CCCu;
    {
        const bool branch_taken_0x3a3ccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CCCu;
        // 0x3a3cd0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ccc) {
            ctx->pc = 0x3A3D40u;
            goto label_3a3d40;
        }
    }
    ctx->pc = 0x3A3CD4u;
    // 0x3a3cd4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3a3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a3cd8: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x3a3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x3a3cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ce0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3ce4: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3a3ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3a3ce8: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3a3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3a3cec: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3cecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3cf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a3cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a3cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3cf8: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3cfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3d00: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3A3D00u;
    SET_GPR_U32(ctx, 31, 0x3A3D08u);
    ctx->pc = 0x3A3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D00u;
    // 0x3a3d04: 0x24471ee4  addiu       $a3, $v0, 0x1EE4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3A3D00u, 0x3A3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D08u;
label_3a3d08:
    // 0x3a3d08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3d0c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3a3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3a3d10: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x3a3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x3a3d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3d18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3d18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D1C0u));
    // 0x3a3d1c: 0x2406ff38  addiu       $a2, $zero, -0xC8
    ctx->pc = 0x3a3d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x3a3d20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3d24: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3d24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3d28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3d2c: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3d30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3d34: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3A3D34u;
    SET_GPR_U32(ctx, 31, 0x3A3D3Cu);
    ctx->pc = 0x3A3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D34u;
    // 0x3a3d38: 0x24471ef8  addiu       $a3, $v0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3A3D34u, 0x3A3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D3Cu;
label_3a3d3c:
    // 0x3a3d3c: 0x0  nop
    ctx->pc = 0x3a3d3cu;
    // NOP
label_3a3d40:
    // 0x3a3d40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3d44: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A3D44u;
    {
        const bool branch_taken_0x3a3d44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D44u;
        // 0x3a3d48: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d44) {
            ctx->pc = 0x3A3DB8u;
            goto label_3a3db8;
        }
    }
    ctx->pc = 0x3A3D4Cu;
    // 0x3a3d4c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3a3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3a3d50: 0x2442d1d0  addiu       $v0, $v0, -0x2E30
    ctx->pc = 0x3a3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
    // 0x3a3d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3d58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3d58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3d5c: 0x2406ffce  addiu       $a2, $zero, -0x32
    ctx->pc = 0x3a3d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x3a3d60: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3a3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3a3d64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3d68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a3d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a3d6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3d70: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3d74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3d78: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3A3D78u;
    SET_GPR_U32(ctx, 31, 0x3A3D80u);
    ctx->pc = 0x3A3D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D78u;
    // 0x3a3d7c: 0x24471ee4  addiu       $a3, $v0, 0x1EE4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3A3D78u, 0x3A3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D80u;
label_3a3d80:
    // 0x3a3d80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3d84: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3a3d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a3d88: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x3a3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x3a3d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3d90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3d90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D1E0u));
    // 0x3a3d94: 0x2406ffce  addiu       $a2, $zero, -0x32
    ctx->pc = 0x3a3d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x3a3d98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3d9c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3da4: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3da8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3dac: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3A3DACu;
    SET_GPR_U32(ctx, 31, 0x3A3DB4u);
    ctx->pc = 0x3A3DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3DACu;
    // 0x3a3db0: 0x24471ef8  addiu       $a3, $v0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3A3DACu, 0x3A3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3DB4u;
label_3a3db4:
    // 0x3a3db4: 0x0  nop
    ctx->pc = 0x3a3db4u;
    // NOP
label_3a3db8:
    // 0x3a3db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3dbc: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A3DBCu;
    {
        const bool branch_taken_0x3a3dbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3DBCu;
        // 0x3a3dc0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3dbc) {
            ctx->pc = 0x3A3E30u;
            goto label_3a3e30;
        }
    }
    ctx->pc = 0x3A3DC4u;
    // 0x3a3dc4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3a3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a3dc8: 0x2442d1f0  addiu       $v0, $v0, -0x2E10
    ctx->pc = 0x3a3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955504));
    // 0x3a3dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3dd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3dd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3dd8: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x3a3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3a3ddc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3de0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3a3de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a3de4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3de8: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3dec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3df0: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3A3DF0u;
    SET_GPR_U32(ctx, 31, 0x3A3DF8u);
    ctx->pc = 0x3A3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3DF0u;
    // 0x3a3df4: 0x24471ee4  addiu       $a3, $v0, 0x1EE4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3A3DF0u, 0x3A3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3DF8u;
label_3a3df8:
    // 0x3a3df8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a3dfc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3a3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a3e00: 0x2442d200  addiu       $v0, $v0, -0x2E00
    ctx->pc = 0x3a3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955520));
    // 0x3a3e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3e08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65D200u));
    // 0x3a3e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3e14: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a3e18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a3e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3e1c: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3e20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a3e24: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3A3E24u;
    SET_GPR_U32(ctx, 31, 0x3A3E2Cu);
    ctx->pc = 0x3A3E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E24u;
    // 0x3a3e28: 0x24471ef8  addiu       $a3, $v0, 0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3A3E24u, 0x3A3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E2Cu;
label_3a3e2c:
    // 0x3a3e2c: 0x0  nop
    ctx->pc = 0x3a3e2cu;
    // NOP
label_3a3e30:
    // 0x3a3e30: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3e34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a3e34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a3e38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a3e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3e3c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3a3e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a3e40: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x3a3e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a3e44: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x3a3e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3a3e48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3a3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3a3e4c: 0xa0601ee5  sb          $zero, 0x1EE5($v1)
    ctx->pc = 0x3a3e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7909), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3e50: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3e54: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3a3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3a3e58: 0xa0651ef9  sb          $a1, 0x1EF9($v1)
    ctx->pc = 0x3a3e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7929), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a3e5c: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3e60: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3a3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3a3e64: 0xa4641ee8  sh          $a0, 0x1EE8($v1)
    ctx->pc = 0x3a3e64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7912), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a3e68: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3e6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3a3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3a3e70: 0xa4641efc  sh          $a0, 0x1EFC($v1)
    ctx->pc = 0x3a3e70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7932), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a3e74: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x3A3E74u;
    {
        const bool branch_taken_0x3a3e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E74u;
        // 0x3a3e78: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e74) {
            ctx->pc = 0x3A3BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3bd8;
        }
    }
    ctx->pc = 0x3A3E7Cu;
    // 0x3a3e7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3e80: 0xc0e8d70  jal         func_3A35C0
    ctx->pc = 0x3A3E80u;
    SET_GPR_U32(ctx, 31, 0x3A3E88u);
    ctx->pc = 0x3A3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E80u;
    // 0x3a3e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A35C0u, 0x3A3E80u, 0x3A3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E88u;
label_3a3e88:
    // 0x3a3e88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3e8c: 0xc0e8d70  jal         func_3A35C0
    ctx->pc = 0x3A3E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A3E94u);
    ctx->pc = 0x3A3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E8Cu;
    // 0x3a3e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A35C0u, 0x3A3E8Cu, 0x3A3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3E94u;
label_3a3e94:
    // 0x3a3e94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3e98: 0xc0e8d70  jal         func_3A35C0
    ctx->pc = 0x3A3E98u;
    SET_GPR_U32(ctx, 31, 0x3A3EA0u);
    ctx->pc = 0x3A3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3E98u;
    // 0x3a3e9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A35C0u, 0x3A3E98u, 0x3A3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3EA0u;
label_3a3ea0:
    // 0x3a3ea0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3ea4: 0xc0e8d70  jal         func_3A35C0
    ctx->pc = 0x3A3EA4u;
    SET_GPR_U32(ctx, 31, 0x3A3EACu);
    ctx->pc = 0x3A3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3EA4u;
    // 0x3a3ea8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A35C0u, 0x3A3EA4u, 0x3A3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3EACu;
label_3a3eac:
    // 0x3a3eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3eb0: 0xc0e8d70  jal         func_3A35C0
    ctx->pc = 0x3A3EB0u;
    SET_GPR_U32(ctx, 31, 0x3A3EB8u);
    ctx->pc = 0x3A3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3EB0u;
    // 0x3a3eb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A35C0u, 0x3A3EB0u, 0x3A3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3EB8u;
label_3a3eb8:
    // 0x3a3eb8: 0x8f8c8c60  lw          $t4, -0x73A0($gp)
    ctx->pc = 0x3a3eb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3ebc: 0x3c0245d7  lui         $v0, 0x45D7
    ctx->pc = 0x3a3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17879 << 16));
    // 0x3a3ec0: 0x3443a000  ori         $v1, $v0, 0xA000
    ctx->pc = 0x3a3ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x3a3ec4: 0x34463800  ori         $a2, $v0, 0x3800
    ctx->pc = 0x3a3ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x3a3ec8: 0x3c0945a9  lui         $t1, 0x45A9
    ctx->pc = 0x3a3ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17833 << 16));
    // 0x3a3ecc: 0x3c0245d1  lui         $v0, 0x45D1
    ctx->pc = 0x3a3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17873 << 16));
    // 0x3a3ed0: 0x3448f800  ori         $t0, $v0, 0xF800
    ctx->pc = 0x3a3ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3a3ed4: 0x35255800  ori         $a1, $t1, 0x5800
    ctx->pc = 0x3a3ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)22528);
    // 0x3a3ed8: 0x3c0245d8  lui         $v0, 0x45D8
    ctx->pc = 0x3a3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17880 << 16));
    // 0x3a3edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3ee0: 0x344b2800  ori         $t3, $v0, 0x2800
    ctx->pc = 0x3a3ee0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x3a3ee4: 0x34476000  ori         $a3, $v0, 0x6000
    ctx->pc = 0x3a3ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x3a3ee8: 0xad831fc8  sw          $v1, 0x1FC8($t4)
    ctx->pc = 0x3a3ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8136), GPR_U32(ctx, 3));
    // 0x3a3eec: 0x3c0245d6  lui         $v0, 0x45D6
    ctx->pc = 0x3a3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17878 << 16));
    // 0x3a3ef0: 0xad851fcc  sw          $a1, 0x1FCC($t4)
    ctx->pc = 0x3a3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8140), GPR_U32(ctx, 5));
    // 0x3a3ef4: 0x25831fc8  addiu       $v1, $t4, 0x1FC8
    ctx->pc = 0x3a3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 8136));
    // 0x3a3ef8: 0xad881fd0  sw          $t0, 0x1FD0($t4)
    ctx->pc = 0x3a3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8144), GPR_U32(ctx, 8));
    // 0x3a3efc: 0x3c0545aa  lui         $a1, 0x45AA
    ctx->pc = 0x3a3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17834 << 16));
    // 0x3a3f00: 0xad891fd4  sw          $t1, 0x1FD4($t4)
    ctx->pc = 0x3a3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8148), GPR_U32(ctx, 9));
    // 0x3a3f04: 0x3c0845c6  lui         $t0, 0x45C6
    ctx->pc = 0x3a3f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17862 << 16));
    // 0x3a3f08: 0xa1841fd8  sb          $a0, 0x1FD8($t4)
    ctx->pc = 0x3a3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8152), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3f0c: 0x3449b800  ori         $t1, $v0, 0xB800
    ctx->pc = 0x3a3f0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47104);
    // 0x3a3f10: 0xa1841fd9  sb          $a0, 0x1FD9($t4)
    ctx->pc = 0x3a3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8153), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3f18: 0xa1801fda  sb          $zero, 0x1FDA($t4)
    ctx->pc = 0x3a3f18u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8154), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3f1c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x3a3f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3f20: 0xad8b1fdc  sw          $t3, 0x1FDC($t4)
    ctx->pc = 0x3a3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8156), GPR_U32(ctx, 11));
    // 0x3a3f24: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3a3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3a3f28: 0xad851fe0  sw          $a1, 0x1FE0($t4)
    ctx->pc = 0x3a3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8160), GPR_U32(ctx, 5));
    // 0x3a3f2c: 0xad891fe4  sw          $t1, 0x1FE4($t4)
    ctx->pc = 0x3a3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8164), GPR_U32(ctx, 9));
    // 0x3a3f30: 0x3c0545c5  lui         $a1, 0x45C5
    ctx->pc = 0x3a3f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17861 << 16));
    // 0x3a3f34: 0xad881fe8  sw          $t0, 0x1FE8($t4)
    ctx->pc = 0x3a3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8168), GPR_U32(ctx, 8));
    // 0x3a3f38: 0x34abf800  ori         $t3, $a1, 0xF800
    ctx->pc = 0x3a3f38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63488);
    // 0x3a3f3c: 0xa1841fec  sb          $a0, 0x1FEC($t4)
    ctx->pc = 0x3a3f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8172), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3f40: 0x3c0545dd  lui         $a1, 0x45DD
    ctx->pc = 0x3a3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17885 << 16));
    // 0x3a3f44: 0xa1821fed  sb          $v0, 0x1FED($t4)
    ctx->pc = 0x3a3f44u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8173), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3f48: 0x34a9b800  ori         $t1, $a1, 0xB800
    ctx->pc = 0x3a3f48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47104);
    // 0x3a3f4c: 0xa18a1fee  sb          $t2, 0x1FEE($t4)
    ctx->pc = 0x3a3f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8174), (uint8_t)GPR_U32(ctx, 10));
    // 0x3a3f50: 0x3c0545c8  lui         $a1, 0x45C8
    ctx->pc = 0x3a3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17864 << 16));
    // 0x3a3f54: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3a3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3a3f58: 0x3c0845d2  lui         $t0, 0x45D2
    ctx->pc = 0x3a3f58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17874 << 16));
    // 0x3a3f5c: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x3a3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x3a3f60: 0x34aa4000  ori         $t2, $a1, 0x4000
    ctx->pc = 0x3a3f60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3a3f64: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x3a3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x3a3f68: 0x35063800  ori         $a2, $t0, 0x3800
    ctx->pc = 0x3a3f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14336);
    // 0x3a3f6c: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x3a3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x3a3f70: 0x3c0545d9  lui         $a1, 0x45D9
    ctx->pc = 0x3a3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17881 << 16));
    // 0x3a3f74: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x3a3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3f78: 0x34adc800  ori         $t5, $a1, 0xC800
    ctx->pc = 0x3a3f78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51200);
    // 0x3a3f7c: 0xac690014  sw          $t1, 0x14($v1)
    ctx->pc = 0x3a3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 9));
    // 0x3a3f80: 0x3508c800  ori         $t0, $t0, 0xC800
    ctx->pc = 0x3a3f80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)51200);
    // 0x3a3f84: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x3a3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 10));
    // 0x3a3f88: 0x3c0945e0  lui         $t1, 0x45E0
    ctx->pc = 0x3a3f88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17888 << 16));
    // 0x3a3f8c: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x3a3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
    // 0x3a3f90: 0x3c0545e6  lui         $a1, 0x45E6
    ctx->pc = 0x3a3f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17894 << 16));
    // 0x3a3f94: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x3a3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x3a3f98: 0x34a73000  ori         $a3, $a1, 0x3000
    ctx->pc = 0x3a3f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x3a3f9c: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x3a3f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3fa0: 0x3c0545f0  lui         $a1, 0x45F0
    ctx->pc = 0x3a3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17904 << 16));
    // 0x3a3fa4: 0xa0640025  sb          $a0, 0x25($v1)
    ctx->pc = 0x3a3fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3fa8: 0x34aca000  ori         $t4, $a1, 0xA000
    ctx->pc = 0x3a3fa8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x3a3fac: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x3a3facu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3fb0: 0x352a1000  ori         $t2, $t1, 0x1000
    ctx->pc = 0x3a3fb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    // 0x3a3fb4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3a3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3a3fb8: 0x3526a800  ori         $a2, $t1, 0xA800
    ctx->pc = 0x3a3fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)43008);
    // 0x3a3fbc: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x3a3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x3a3fc0: 0x352b6000  ori         $t3, $t1, 0x6000
    ctx->pc = 0x3a3fc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24576);
    // 0x3a3fc4: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x3a3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x3a3fc8: 0x3c054600  lui         $a1, 0x4600
    ctx->pc = 0x3a3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17920 << 16));
    // 0x3a3fcc: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x3a3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x3a3fd0: 0x34aad400  ori         $t2, $a1, 0xD400
    ctx->pc = 0x3a3fd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x3a3fd4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x3a3fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x3a3fd8: 0x3c0545fb  lui         $a1, 0x45FB
    ctx->pc = 0x3a3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17915 << 16));
    // 0x3a3fdc: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x3a3fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3fe0: 0x34a81000  ori         $t0, $a1, 0x1000
    ctx->pc = 0x3a3fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x3a3fe4: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x3a3fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a3fe8: 0x3c054605  lui         $a1, 0x4605
    ctx->pc = 0x3a3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17925 << 16));
    // 0x3a3fec: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3a3fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3ff0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x3a3ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3ff4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x3a3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x3a3ff8: 0x34a7e800  ori         $a3, $a1, 0xE800
    ctx->pc = 0x3a3ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59392);
    // 0x3a3ffc: 0xac6c0018  sw          $t4, 0x18($v1)
    ctx->pc = 0x3a3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 12));
    // 0x3a4000: 0x34a61400  ori         $a2, $a1, 0x1400
    ctx->pc = 0x3a4000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x3a4004: 0xac6b001c  sw          $t3, 0x1C($v1)
    ctx->pc = 0x3a4004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 11));
    // 0x3a4008: 0x34a5c800  ori         $a1, $a1, 0xC800
    ctx->pc = 0x3a4008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51200);
    // 0x3a400c: 0xac6a0020  sw          $t2, 0x20($v1)
    ctx->pc = 0x3a400cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 10));
    // 0x3a4010: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a4014: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x3a4014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a4018: 0xa0640025  sb          $a0, 0x25($v1)
    ctx->pc = 0x3a4018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a401c: 0xa0690026  sb          $t1, 0x26($v1)
    ctx->pc = 0x3a401cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 9));
    // 0x3a4020: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3a4020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x3a4024: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3a4024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3a4028: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x3a4028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x3a402c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3a402cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x3a4030: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x3a4030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x3a4034: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x3a4034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a4038: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x3a4038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a403c: 0xc0e8d34  jal         func_3A34D0
    ctx->pc = 0x3A403Cu;
    SET_GPR_U32(ctx, 31, 0x3A4044u);
    ctx->pc = 0x3A4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A403Cu;
    // 0x3a4040: 0xa0620012  sb          $v0, 0x12($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34D0u, 0x3A403Cu, 0x3A4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4044u;
label_3a4044:
    // 0x3a4044: 0xc0e8d34  jal         func_3A34D0
    ctx->pc = 0x3A4044u;
    SET_GPR_U32(ctx, 31, 0x3A404Cu);
    ctx->pc = 0x3A4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4044u;
    // 0x3a4048: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34D0u, 0x3A4044u, 0x3A404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A404Cu;
label_3a404c:
    // 0x3a404c: 0x0  nop
    ctx->pc = 0x3a404cu;
    // NOP
label_3a4050:
    // 0x3a4050: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a4050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a4054: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a4054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a4058: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a4058u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a405c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a405cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4060: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a4060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a406c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a406cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4070: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4070u;
        // 0x3a4074: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4078u;
}
