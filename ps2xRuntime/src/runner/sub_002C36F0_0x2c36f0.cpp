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

// Function: sub_002C36F0
// Address: 0x2c36f0 - 0x2c38fc
void sub_002C36F0_0x2c36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C36F0_0x2c36f0");
#endif

    switch (ctx->pc) {
        case 0x2c3728u: goto label_2c3728;
        case 0x2c3764u: goto label_2c3764;
        case 0x2c3788u: goto label_2c3788;
        case 0x2c37c0u: goto label_2c37c0;
        case 0x2c38acu: goto label_2c38ac;
        default: break;
    }

    ctx->pc = 0x2c36f0u;

    // 0x2c36f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c36f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c36f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c36f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c36f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c36fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c36fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3700: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c3700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3708: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c3708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c370c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3710: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c3710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c371c: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c3720: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C3720u;
    SET_GPR_U32(ctx, 31, 0x2C3728u);
    ctx->pc = 0x2C3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3720u;
    // 0x2c3724: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C3720u, 0x2C3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3728u;
label_2c3728:
    // 0x2c3728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c3728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c372c: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C372Cu;
    {
        const bool branch_taken_0x2c372c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c372c) {
            ctx->pc = 0x2C3838u;
            goto label_2c3838;
        }
    }
    ctx->pc = 0x2C3734u;
    // 0x2c3734: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c3738: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c3738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c373c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2c373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2c3740: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2c3744: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c3744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c3748: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x2c3748u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c374c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C374Cu;
    {
        const bool branch_taken_0x2c374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C374Cu;
        // 0x2c3750: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c374c) {
            ctx->pc = 0x2C3778u;
            goto label_2c3778;
        }
    }
    ctx->pc = 0x2C3754u;
    // 0x2c3754: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c3754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3758: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2c3758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c375c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C375Cu;
    SET_GPR_U32(ctx, 31, 0x2C3764u);
    ctx->pc = 0x2C3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C375Cu;
    // 0x2c3760: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C375Cu, 0x2C3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3764u;
label_2c3764:
    // 0x2c3764: 0x862200c0  lh          $v0, 0xC0($s1)
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2c3768: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c3768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c376c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2c376cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c3770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3770u;
    {
        const bool branch_taken_0x2c3770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3770u;
        // 0x2c3774: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3770) {
            ctx->pc = 0x2C3798u;
            goto label_2c3798;
        }
    }
    ctx->pc = 0x2C3778u;
label_2c3778:
    // 0x2c3778: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2c3778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c377c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3780: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C3780u;
    SET_GPR_U32(ctx, 31, 0x2C3788u);
    ctx->pc = 0x2C3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3780u;
    // 0x2c3784: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C3780u, 0x2C3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3788u;
label_2c3788:
    // 0x2c3788: 0x866200c0  lh          $v0, 0xC0($s3)
    ctx->pc = 0x2c3788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x2c378c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c3790: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2c3790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c3794: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2c3794u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_2c3798:
    // 0x2c3798: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2c3798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c379c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2c379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c37a0: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x2c37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c37a4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2c37a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c37a8: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x2c37a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c37ac: 0x46000304  c1          0x304
    ctx->pc = 0x2c37acu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c37b0: 0x0  nop
    ctx->pc = 0x2c37b0u;
    // NOP
    // 0x2c37b4: 0x0  nop
    ctx->pc = 0x2c37b4u;
    // NOP
    // 0x2c37b8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C37B8u;
    SET_GPR_U32(ctx, 31, 0x2C37C0u);
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C37B8u, 0x2C37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37C0u;
label_2c37c0:
    // 0x2c37c0: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c37c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c37c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2c37c8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2c37c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c37cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c37ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c37d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c37d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c37d4: 0x0  nop
    ctx->pc = 0x2c37d4u;
    // NOP
    // 0x2c37d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c37d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c37dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c37dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c37e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c37e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c37e4: 0x0  nop
    ctx->pc = 0x2c37e4u;
    // NOP
    // 0x2c37e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c37ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c37ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c37f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c37f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c37f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c37f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c37f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c37fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c37fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c3800: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c3800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c3804: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c3804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c3808: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c3808u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c380c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C380Cu;
    {
        const bool branch_taken_0x2c380c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2c380c) {
            ctx->pc = 0x2C3818u;
            goto label_2c3818;
        }
    }
    ctx->pc = 0x2C3814u;
    // 0x2c3814: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c3814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2c3818:
    // 0x2c3818: 0x82420003  lb          $v0, 0x3($s2)
    ctx->pc = 0x2c3818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2c381c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2c381cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3820: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c3824: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c3824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c3828: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3828u;
    {
        const bool branch_taken_0x2c3828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3828) {
            ctx->pc = 0x2C3838u;
            goto label_2c3838;
        }
    }
    ctx->pc = 0x2C3830u;
    // 0x2c3830: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3834: 0x0  nop
    ctx->pc = 0x2c3834u;
    // NOP
label_2c3838:
    // 0x2c3838: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c3838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c383c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c3840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3840u;
    {
        const bool branch_taken_0x2c3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3840u;
        // 0x2c3844: 0x15102b  sltu        $v0, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3840) {
            ctx->pc = 0x2C3850u;
            goto label_2c3850;
        }
    }
    ctx->pc = 0x2C3848u;
    // 0x2c3848: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c384c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2c384cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c3850:
    // 0x2c3850: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3850u;
    {
        const bool branch_taken_0x2c3850 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3850) {
            ctx->pc = 0x2C38D0u;
            goto label_2c38d0;
        }
    }
    ctx->pc = 0x2C3858u;
    // 0x2c3858: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c385c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C385Cu;
    {
        const bool branch_taken_0x2c385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C385Cu;
        // 0x2c3860: 0x92450005  lbu         $a1, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c385c) {
            ctx->pc = 0x2C38B8u;
            goto label_2c38b8;
        }
    }
    ctx->pc = 0x2C3864u;
    // 0x2c3864: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3864u;
    {
        const bool branch_taken_0x2c3864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3864u;
        // 0x2c3868: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3864) {
            ctx->pc = 0x2C38A0u;
            goto label_2c38a0;
        }
    }
    ctx->pc = 0x2C386Cu;
    // 0x2c386c: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c386cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c3870: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3874: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c3874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c387c: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c387cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3880: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c3880u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3884: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c3884u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3888: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c3888u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c388c: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c388cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3890: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c3894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3898: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3898u;
    {
        const bool branch_taken_0x2c3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3898u;
        // 0x2c389c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3898) {
            ctx->pc = 0x2C38C8u;
            goto label_2c38c8;
        }
    }
    ctx->pc = 0x2C38A0u;
label_2c38a0:
    // 0x2c38a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38a4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C38A4u;
    SET_GPR_U32(ctx, 31, 0x2C38ACu);
    ctx->pc = 0x2C38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38A4u;
    // 0x2c38a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C38A4u, 0x2C38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38ACu;
label_2c38ac:
    // 0x2c38ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C38ACu;
    {
        const bool branch_taken_0x2c38ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c38ac) {
            ctx->pc = 0x2C38C0u;
            goto label_2c38c0;
        }
    }
    ctx->pc = 0x2C38B4u;
    // 0x2c38b4: 0x0  nop
    ctx->pc = 0x2c38b4u;
    // NOP
label_2c38b8:
    // 0x2c38b8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c38b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c38bc: 0x0  nop
    ctx->pc = 0x2c38bcu;
    // NOP
label_2c38c0:
    // 0x2c38c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c38c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38c4: 0x0  nop
    ctx->pc = 0x2c38c4u;
    // NOP
label_2c38c8:
    // 0x2c38c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C38C8u;
    {
        const bool branch_taken_0x2c38c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c38c8) {
            ctx->pc = 0x2C38D8u;
            goto label_2c38d8;
        }
    }
    ctx->pc = 0x2C38D0u;
label_2c38d0:
    // 0x2c38d0: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c38d4: 0x0  nop
    ctx->pc = 0x2c38d4u;
    // NOP
label_2c38d8:
    // 0x2c38d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c38d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c38dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c38dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c38e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c38e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c38e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c38e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c38e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c38e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c38ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c38ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c38f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38F4u;
        // 0x2c38f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38FCu;
}
