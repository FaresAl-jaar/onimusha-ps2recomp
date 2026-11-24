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

// Function: sub_00136390
// Address: 0x136390 - 0x1364c0
void sub_00136390_0x136390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136390_0x136390");
#endif

    switch (ctx->pc) {
        case 0x1363ecu: goto label_1363ec;
        case 0x136424u: goto label_136424;
        case 0x13646cu: goto label_13646c;
        case 0x13648cu: goto label_13648c;
        default: break;
    }

    ctx->pc = 0x136390u;

    // 0x136390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x136394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x136398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13639c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1363a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1363a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1363a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1363a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1363a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1363a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1363acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363b0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1363b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1363b4: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x1363b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1363b8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1363b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1363bc: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x1363bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1363c0: 0x46010344  c1          0x10344
    ctx->pc = 0x1363c0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[1]);
    // 0x1363c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1363c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363c8: 0x0  nop
    ctx->pc = 0x1363c8u;
    // NOP
    // 0x1363cc: 0x0  nop
    ctx->pc = 0x1363ccu;
    // NOP
    // 0x1363d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1363D0u;
    {
        const bool branch_taken_0x1363d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1363d0) {
            ctx->pc = 0x136410u;
            goto label_136410;
        }
    }
    ctx->pc = 0x1363D8u;
    // 0x1363d8: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x1363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x1363dc: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1363dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1363e0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1363e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1363e4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1363E4u;
    SET_GPR_U32(ctx, 31, 0x1363ECu);
    ctx->pc = 0x1363E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363E4u;
    // 0x1363e8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1363E4u, 0x1363ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363ECu;
label_1363ec:
    // 0x1363ec: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x1363ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x1363f0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1363f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1363f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1363f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1363f8: 0x0  nop
    ctx->pc = 0x1363f8u;
    // NOP
    // 0x1363fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1363fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x136400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136404: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x136404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x136408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x136408u;
    {
        const bool branch_taken_0x136408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136408) {
            ctx->pc = 0x136448u;
            goto label_136448;
        }
    }
    ctx->pc = 0x136410u;
label_136410:
    // 0x136410: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x136414: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x136414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x136418: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x136418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13641c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x13641Cu;
    SET_GPR_U32(ctx, 31, 0x136424u);
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x13641Cu, 0x136424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136424u;
label_136424:
    // 0x136424: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x136428: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x136428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x13642c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13642cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136430: 0x0  nop
    ctx->pc = 0x136430u;
    // NOP
    // 0x136434: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x136434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x136438: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13643c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13643cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x136440: 0x0  nop
    ctx->pc = 0x136440u;
    // NOP
    // 0x136444: 0x28823  negu        $s1, $v0
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_136448:
    // 0x136448: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x136448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13644c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13644cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136450: 0x0  nop
    ctx->pc = 0x136450u;
    // NOP
    // 0x136454: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136458: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x136458u;
    {
        const bool branch_taken_0x136458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136458) {
            ctx->pc = 0x136484u;
            goto label_136484;
        }
    }
    ctx->pc = 0x136460u;
    // 0x136460: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x136460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x136464: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x136464u;
    SET_GPR_U32(ctx, 31, 0x13646Cu);
    ctx->pc = 0x136468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136464u;
    // 0x136468: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x136464u, 0x13646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13646Cu;
label_13646c:
    // 0x13646c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13646cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x136470: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x136470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x136474: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136478: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x136478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13647c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13647Cu;
    {
        const bool branch_taken_0x13647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13647Cu;
        // 0x136480: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13647c) {
            ctx->pc = 0x136498u;
            goto label_136498;
        }
    }
    ctx->pc = 0x136484u;
label_136484:
    // 0x136484: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x136484u;
    SET_GPR_U32(ctx, 31, 0x13648Cu);
    ctx->pc = 0x136488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136484u;
    // 0x136488: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x136484u, 0x13648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13648Cu;
label_13648c:
    // 0x13648c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13648cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x136490: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136494: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x136494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_136498:
    // 0x136498: 0x32230fff  andi        $v1, $s1, 0xFFF
    ctx->pc = 0x136498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
    // 0x13649c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1364a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1364a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1364a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1364a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1364a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1364a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1364ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1364b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1364b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1364b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1364b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1364b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1364B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B8u;
        // 0x1364bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364C0u;
}
