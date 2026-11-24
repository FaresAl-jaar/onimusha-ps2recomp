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

// Function: sub_00136210
// Address: 0x136210 - 0x136388
void sub_00136210_0x136210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136210_0x136210");
#endif

    switch (ctx->pc) {
        case 0x136244u: goto label_136244;
        case 0x136268u: goto label_136268;
        case 0x13629cu: goto label_13629c;
        default: break;
    }

    ctx->pc = 0x136210u;

    // 0x136210: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x136210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x136214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136218: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x136218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13621c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x136220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x136220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136228: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x136228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13622c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136234: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x136234u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x136238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13623c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13623Cu;
    SET_GPR_U32(ctx, 31, 0x136244u);
    ctx->pc = 0x136240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13623Cu;
    // 0x136240: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13623Cu, 0x136244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136244u;
label_136244:
    // 0x136244: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x136244u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x136248: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136250: 0x0  nop
    ctx->pc = 0x136250u;
    // NOP
    // 0x136254: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x136254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136258: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x136258u;
    {
        const bool branch_taken_0x136258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136258u;
        // 0x13625c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136258) {
            ctx->pc = 0x136270u;
            goto label_136270;
        }
    }
    ctx->pc = 0x136260u;
    // 0x136260: 0xc04150c  jal         func_105430
    ctx->pc = 0x136260u;
    SET_GPR_U32(ctx, 31, 0x136268u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x136260u, 0x136268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136268u;
label_136268:
    // 0x136268: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x136268u;
    {
        const bool branch_taken_0x136268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136268) {
            ctx->pc = 0x136368u;
            goto label_136368;
        }
    }
    ctx->pc = 0x136270u;
label_136270:
    // 0x136270: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x136274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x136274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13627c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13627cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x136284: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x136284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x136288: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x136288u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13628c: 0x0  nop
    ctx->pc = 0x13628cu;
    // NOP
    // 0x136290: 0x0  nop
    ctx->pc = 0x136290u;
    // NOP
    // 0x136294: 0xc041460  jal         func_105180
    ctx->pc = 0x136294u;
    SET_GPR_U32(ctx, 31, 0x13629Cu);
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x136294u, 0x13629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13629Cu;
label_13629c:
    // 0x13629c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x13629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1362a0: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1362a4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1362a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1362a8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1362a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1362ac: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x1362acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1362b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1362b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1362b4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x1362b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1362b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1362b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1362bc: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1362bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1362c0: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1362c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1362c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1362c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1362c8: 0x4601a142  mul.s       $f5, $f20, $f1
    ctx->pc = 0x1362c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1362cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1362ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362d0: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x1362d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1362d4: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1362d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1362d8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1362d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1362dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1362dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362e0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1362e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1362e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1362e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1362e8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1362e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1362ec: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1362ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1362f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1362f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1362f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1362f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362f8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1362f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1362fc: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1362fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x136300: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136304: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136308: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x136308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13630c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13630cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x136310: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x136310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x136314: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x136314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x136318: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x136318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13631c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x13631cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x136320: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x136320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x136324: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x136324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x136328: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13632c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13632cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x136330: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x136330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x136334: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x136334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136338: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x136338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13633c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x13633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x136340: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x136340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136344: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x136344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x136348: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x136348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13634c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x13634cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x136350: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x136350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x136354: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x136354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x136358: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x136358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x13635c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13635cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x136360: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x136360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x136364: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x136364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_136368:
    // 0x136368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13636c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13636cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136370: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x136370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x136374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x136374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x136378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13637c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13637cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136380: 0x3e00008  jr          $ra
    ctx->pc = 0x136380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136380u;
        // 0x136384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136388u;
}
