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

// Function: sub_003B4840
// Address: 0x3b4840 - 0x3b4934
void sub_003B4840_0x3b4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4840_0x3b4840");
#endif

    switch (ctx->pc) {
        case 0x3b486cu: goto label_3b486c;
        case 0x3b487cu: goto label_3b487c;
        case 0x3b4888u: goto label_3b4888;
        case 0x3b48d0u: goto label_3b48d0;
        default: break;
    }

    ctx->pc = 0x3b4840u;

    // 0x3b4840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b4844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b4844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b4848: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b4848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b484c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b4850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b4850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4854: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b4854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b4858: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b4858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b485c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3b485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b4860: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3b4860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b4864: 0xc096908  jal         func_25A420
    ctx->pc = 0x3B4864u;
    SET_GPR_U32(ctx, 31, 0x3B486Cu);
    ctx->pc = 0x3B4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4864u;
    // 0x3b4868: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3B4864u, 0x3B486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B486Cu;
label_3b486c:
    // 0x3b486c: 0xc78183c4  lwc1        $f1, -0x7C3C($gp)
    ctx->pc = 0x3b486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b4870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b4874: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B4874u;
    SET_GPR_U32(ctx, 31, 0x3B487Cu);
    ctx->pc = 0x3B4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4874u;
    // 0x3b4878: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B4874u, 0x3B487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B487Cu;
label_3b487c:
    // 0x3b487c: 0xc78c83c8  lwc1        $f12, -0x7C38($gp)
    ctx->pc = 0x3b487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b4880: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B4880u;
    SET_GPR_U32(ctx, 31, 0x3B4888u);
    ctx->pc = 0x3B4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4880u;
    // 0x3b4884: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B4880u, 0x3B4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4888u;
label_3b4888:
    // 0x3b4888: 0xc78483c8  lwc1        $f4, -0x7C38($gp)
    ctx->pc = 0x3b4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b488c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4890: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b4890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b4894: 0xc78283cc  lwc1        $f2, -0x7C34($gp)
    ctx->pc = 0x3b4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4898: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x3b4898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b489c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3b489cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3b48a0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3b48a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3b48a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3b48a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3b48a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b48a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b48ac: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x3b48acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x3b48b0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3b48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3b48b4: 0xc79483d4  lwc1        $f20, -0x7C2C($gp)
    ctx->pc = 0x3b48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b48b8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3b48b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b48bc: 0xc78d83d0  lwc1        $f13, -0x7C30($gp)
    ctx->pc = 0x3b48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b48c0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x3b48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b48c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b48c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b48c8: 0xc096960  jal         func_25A580
    ctx->pc = 0x3B48C8u;
    SET_GPR_U32(ctx, 31, 0x3B48D0u);
    ctx->pc = 0x3B48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B48C8u;
    // 0x3b48cc: 0x46010381  sub.s       $f14, $f0, $f1 (Delay Slot)
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x3B48C8u, 0x3B48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B48D0u;
label_3b48d0:
    // 0x3b48d0: 0xc78283d0  lwc1        $f2, -0x7C30($gp)
    ctx->pc = 0x3b48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b48d4: 0x461400c1  sub.s       $f3, $f0, $f20
    ctx->pc = 0x3b48d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3b48d8: 0xc78083d8  lwc1        $f0, -0x7C28($gp)
    ctx->pc = 0x3b48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b48dc: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x3b48dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x3b48e0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3b48e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x3b48e4: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x3b48e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b48e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3b48e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b48ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b48ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b48f0: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x3b48f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x3b48f4: 0xc78083dc  lwc1        $f0, -0x7C24($gp)
    ctx->pc = 0x3b48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b48f8: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x3b48f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b48fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3b48fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b4900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b4900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b4904: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x3b4904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x3b4908: 0xc78083e0  lwc1        $f0, -0x7C20($gp)
    ctx->pc = 0x3b4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b490c: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x3b490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4910: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3b4910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b4914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b4914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b4918: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3b4918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x3b491c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4920: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b4924: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b4924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b4928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b492c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B492Cu;
        // 0x3b4930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B492Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4934u;
}
