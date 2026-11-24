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

// Function: sub_0018E720
// Address: 0x18e720 - 0x18e98c
void sub_0018E720_0x18e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E720_0x18e720");
#endif

    switch (ctx->pc) {
        case 0x18e840u: goto label_18e840;
        case 0x18e918u: goto label_18e918;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e948u: goto label_18e948;
        default: break;
    }

    ctx->pc = 0x18e720u;

    // 0x18e720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e72c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18e72cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e730: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x18e730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18e734: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E734u;
    {
        const bool branch_taken_0x18e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E734u;
        // 0x18e738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e734) {
            ctx->pc = 0x18E758u;
            goto label_18e758;
        }
    }
    ctx->pc = 0x18E73Cu;
    // 0x18e73c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18e73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18e740: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x18e740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x18e744: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x18e748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18e748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18e74c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E74Cu;
    {
        const bool branch_taken_0x18e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e74c) {
            ctx->pc = 0x18E760u;
            goto label_18e760;
        }
    }
    ctx->pc = 0x18E754u;
    // 0x18e754: 0x0  nop
    ctx->pc = 0x18e754u;
    // NOP
label_18e758:
    // 0x18e758: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x18E758u;
    {
        const bool branch_taken_0x18e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e758) {
            ctx->pc = 0x18E978u;
            goto label_18e978;
        }
    }
    ctx->pc = 0x18E760u;
label_18e760:
    // 0x18e760: 0x3c02407d  lui         $v0, 0x407D
    ctx->pc = 0x18e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16509 << 16));
    // 0x18e764: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x18e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18e768: 0x344470a4  ori         $a0, $v0, 0x70A4
    ctx->pc = 0x18e768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x18e76c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18e770: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18e774: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x18e774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e778: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18e77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e784: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x18e784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18e788: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x18e788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x18e78c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18e790: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x18e790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x18e794: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e798: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x18e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e79c: 0xc603003c  lwc1        $f3, 0x3C($s0)
    ctx->pc = 0x18e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18e7a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18e7a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x18e7a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x18e7a8: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x18e7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e7ac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7ACu;
    {
        const bool branch_taken_0x18e7ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e7ac) {
            ctx->pc = 0x18E7C0u;
            goto label_18e7c0;
        }
    }
    ctx->pc = 0x18E7B4u;
    // 0x18e7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18E7B4u;
    {
        const bool branch_taken_0x18e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7B4u;
        // 0x18e7b8: 0x460118c1  sub.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7b4) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E7BCu;
    // 0x18e7bc: 0x0  nop
    ctx->pc = 0x18e7bcu;
    // NOP
label_18e7c0:
    // 0x18e7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e7c4: 0x0  nop
    ctx->pc = 0x18e7c4u;
    // NOP
    // 0x18e7c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18e7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e7cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7CCu;
    {
        const bool branch_taken_0x18e7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e7cc) {
            ctx->pc = 0x18E7D8u;
            goto label_18e7d8;
        }
    }
    ctx->pc = 0x18E7D4u;
    // 0x18e7d4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x18e7d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_18e7d8:
    // 0x18e7d8: 0xe603003c  swc1        $f3, 0x3C($s0)
    ctx->pc = 0x18e7d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x18e7dc: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18e7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18e7e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7E0u;
    {
        const bool branch_taken_0x18e7e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x18E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7E0u;
        // 0x18e7e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7e0) {
            ctx->pc = 0x18E7F4u;
            goto label_18e7f4;
        }
    }
    ctx->pc = 0x18E7E8u;
    // 0x18e7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e7ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E7ECu;
    {
        const bool branch_taken_0x18e7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7ECu;
        // 0x18e7f0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7ec) {
            ctx->pc = 0x18E80Cu;
            goto label_18e80c;
        }
    }
    ctx->pc = 0x18E7F4u;
label_18e7f4:
    // 0x18e7f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18e7f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18e7fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e800: 0x0  nop
    ctx->pc = 0x18e800u;
    // NOP
    // 0x18e804: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x18e804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18e808: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x18e808u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_18e80c:
    // 0x18e80c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18e810: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x18e814: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18e814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18e818: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18e818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e81c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e820: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x18e820u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18e824: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18e824u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x18e828: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x18e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e82c: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x18e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e830: 0x0  nop
    ctx->pc = 0x18e830u;
    // NOP
    // 0x18e834: 0x0  nop
    ctx->pc = 0x18e834u;
    // NOP
    // 0x18e838: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x18E838u;
    SET_GPR_U32(ctx, 31, 0x18E840u);
    ctx->pc = 0x18E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E838u;
    // 0x18e83c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x18E838u, 0x18E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E840u;
label_18e840:
    // 0x18e840: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x18e840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x18e844: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E844u;
    {
        const bool branch_taken_0x18e844 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x18E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E844u;
        // 0x18e848: 0x4600a0c2  mul.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e844) {
            ctx->pc = 0x18E858u;
            goto label_18e858;
        }
    }
    ctx->pc = 0x18E84Cu;
    // 0x18e84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18E850u;
    {
        const bool branch_taken_0x18e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E850u;
        // 0x18e854: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e850) {
            ctx->pc = 0x18E874u;
            goto label_18e874;
        }
    }
    ctx->pc = 0x18E858u;
label_18e858:
    // 0x18e858: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18e85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18e860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18e860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18e864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e868: 0x0  nop
    ctx->pc = 0x18e868u;
    // NOP
    // 0x18e86c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18e86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18e870: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18e870u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18e874:
    // 0x18e874: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18e878: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x18e87c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x18e87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18e880: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18e880u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e884: 0x3c02407d  lui         $v0, 0x407D
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16509 << 16));
    // 0x18e888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e88c: 0x0  nop
    ctx->pc = 0x18e88cu;
    // NOP
    // 0x18e890: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18e890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18e894: 0x344470a4  ori         $a0, $v0, 0x70A4
    ctx->pc = 0x18e894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x18e898: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18e89c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18e8a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18e8a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18e8a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18e8a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x18e8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x18e8ac: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x18e8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x18e8b0: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x18e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18e8b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x18e8b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e8b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e8c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x18e8c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18e8c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x18e8c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x18e8c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18e8cc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x18e8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x18e8d0: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x18e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e8d4: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x18e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e8d8: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x18e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e8dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18e8e0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x18e8e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x18e8e4: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x18e8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e8e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18E8E8u;
    {
        const bool branch_taken_0x18e8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e8e8) {
            ctx->pc = 0x18E8F8u;
            goto label_18e8f8;
        }
    }
    ctx->pc = 0x18E8F0u;
    // 0x18e8f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E8F0u;
    {
        const bool branch_taken_0x18e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F0u;
        // 0x18e8f4: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e8f0) {
            ctx->pc = 0x18E910u;
            goto label_18e910;
        }
    }
    ctx->pc = 0x18E8F8u;
label_18e8f8:
    // 0x18e8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e8fc: 0x0  nop
    ctx->pc = 0x18e8fcu;
    // NOP
    // 0x18e900: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18e900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e904: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18E904u;
    {
        const bool branch_taken_0x18e904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e904) {
            ctx->pc = 0x18E910u;
            goto label_18e910;
        }
    }
    ctx->pc = 0x18E90Cu;
    // 0x18e90c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x18e90cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_18e910:
    // 0x18e910: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x18E910u;
    SET_GPR_U32(ctx, 31, 0x18E918u);
    ctx->pc = 0x18E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E910u;
    // 0x18e914: 0xe60c0044  swc1        $f12, 0x44($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x18E910u, 0x18E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E918u;
label_18e918:
    // 0x18e918: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x18e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18e91c: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x18e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e920: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x18e920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e924: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18e924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18e928: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18e92c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18e930: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x18e930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x18e934: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x18E934u;
    SET_GPR_U32(ctx, 31, 0x18E93Cu);
    ctx->pc = 0x18E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E934u;
    // 0x18e938: 0xc60c0048  lwc1        $f12, 0x48($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x18E934u, 0x18E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E93Cu;
label_18e93c:
    // 0x18e93c: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x18e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e940: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x18E940u;
    SET_GPR_U32(ctx, 31, 0x18E948u);
    ctx->pc = 0x18E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E940u;
    // 0x18e944: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x18E940u, 0x18E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E948u;
label_18e948:
    // 0x18e948: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x18e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e94c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18e94cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18e950: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x18e950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18e954: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x18e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e958: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18e958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18e95c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x18e95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x18e960: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x18e960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e964: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18e964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18e968: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x18e968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x18e96c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x18e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e970: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18e970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18e974: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x18e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_18e978:
    // 0x18e978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e980: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e984: 0x3e00008  jr          $ra
    ctx->pc = 0x18E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E984u;
        // 0x18e988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E98Cu;
}
