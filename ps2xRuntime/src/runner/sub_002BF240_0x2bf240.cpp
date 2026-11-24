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

// Function: sub_002BF240
// Address: 0x2bf240 - 0x2bf36c
void sub_002BF240_0x2bf240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF240_0x2bf240");
#endif

    switch (ctx->pc) {
        case 0x2bf344u: goto label_2bf344;
        default: break;
    }

    ctx->pc = 0x2bf240u;

    // 0x2bf240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bf244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf24c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bf24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bf250: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BF250u;
    {
        const bool branch_taken_0x2bf250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf250) {
            ctx->pc = 0x2BF2B0u;
            goto label_2bf2b0;
        }
    }
    ctx->pc = 0x2BF258u;
    // 0x2bf258: 0x848300cc  lh          $v1, 0xCC($a0)
    ctx->pc = 0x2bf258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x2bf25c: 0x84a200c2  lh          $v0, 0xC2($a1)
    ctx->pc = 0x2bf25cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x2bf260: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bf260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf264: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF264u;
    {
        const bool branch_taken_0x2bf264 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2bf264) {
            ctx->pc = 0x2BF270u;
            goto label_2bf270;
        }
    }
    ctx->pc = 0x2BF26Cu;
    // 0x2bf26c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2bf26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2bf270:
    // 0x2bf270: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x2bf270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2bf274: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2BF274u;
    {
        const bool branch_taken_0x2bf274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf274) {
            ctx->pc = 0x2BF350u;
            goto label_2bf350;
        }
    }
    ctx->pc = 0x2BF27Cu;
    // 0x2bf27c: 0xa4830086  sh          $v1, 0x86($a0)
    ctx->pc = 0x2bf27cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf280: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bf284: 0xa4820084  sh          $v0, 0x84($a0)
    ctx->pc = 0x2bf284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bf288: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2bf288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2bf28c: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x2bf28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bf290: 0x24425108  addiu       $v0, $v0, 0x5108
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20744));
    // 0x2bf294: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2bf294u;
    { uint32_t bits = FAST_READ32(0x4E5108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf298: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bf298u;
    { uint32_t bits = FAST_READ32(0x4E510Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf29c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bf29cu;
    { uint32_t bits = FAST_READ32(0x4E5110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf2a0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bf2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bf2a4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bf2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bf2a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BF2A8u;
    {
        const bool branch_taken_0x2bf2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2A8u;
        // 0x2bf2ac: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2a8) {
            ctx->pc = 0x2BF328u;
            goto label_2bf328;
        }
    }
    ctx->pc = 0x2BF2B0u;
label_2bf2b0:
    // 0x2bf2b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf2b4: 0xc48200c0  lwc1        $f2, 0xC0($a0)
    ctx->pc = 0x2bf2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf2b8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2bf2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf2bc: 0xc48400c8  lwc1        $f4, 0xC8($a0)
    ctx->pc = 0x2bf2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf2c0: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x2bf2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf2c8: 0x0  nop
    ctx->pc = 0x2bf2c8u;
    // NOP
    // 0x2bf2cc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2bf2ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bf2d0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2bf2d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2bf2d4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bf2d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bf2d8: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2bf2d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2bf2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf2e0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2BF2E0u;
    {
        const bool branch_taken_0x2bf2e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf2e0) {
            ctx->pc = 0x2BF350u;
            goto label_2bf350;
        }
    }
    ctx->pc = 0x2BF2E8u;
    // 0x2bf2e8: 0x788700c0  lq          $a3, 0xC0($a0)
    ctx->pc = 0x2bf2e8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2bf2ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2bf2f0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bf2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bf2f4: 0x24425118  addiu       $v0, $v0, 0x5118
    ctx->pc = 0x2bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20760));
    // 0x2bf2f8: 0x7c8700b0  sq          $a3, 0xB0($a0)
    ctx->pc = 0x2bf2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 7));
    // 0x2bf2fc: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x2bf2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x2bf300: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bf300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bf304: 0xa083005e  sb          $v1, 0x5E($a0)
    ctx->pc = 0x2bf304u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf308: 0x94830080  lhu         $v1, 0x80($a0)
    ctx->pc = 0x2bf308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2bf30c: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bf30cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf310: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2bf310u;
    { uint32_t bits = FAST_READ32(0x4E5118u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf314: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bf314u;
    { uint32_t bits = FAST_READ32(0x4E511Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf318: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bf318u;
    { uint32_t bits = FAST_READ32(0x4E5120u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf31c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bf31cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bf320: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bf320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bf324: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bf324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2bf328:
    // 0x2bf328: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bf328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bf32c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x2bf32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2bf330: 0x24990008  addiu       $t9, $a0, 0x8
    ctx->pc = 0x2bf330u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf334: 0xa4800058  sh          $zero, 0x58($a0)
    ctx->pc = 0x2bf334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf338: 0xa4800056  sh          $zero, 0x56($a0)
    ctx->pc = 0x2bf338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bf33c: 0xc040250  jal         func_100940
    ctx->pc = 0x2BF33Cu;
    SET_GPR_U32(ctx, 31, 0x2BF344u);
    ctx->pc = 0x2BF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF33Cu;
    // 0x2bf340: 0xa0800107  sb          $zero, 0x107($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BF33Cu, 0x2BF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF344u;
label_2bf344:
    // 0x2bf344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF344u;
    {
        const bool branch_taken_0x2bf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF344u;
        // 0x2bf348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf344) {
            ctx->pc = 0x2BF360u;
            goto label_2bf360;
        }
    }
    ctx->pc = 0x2BF34Cu;
    // 0x2bf34c: 0x0  nop
    ctx->pc = 0x2bf34cu;
    // NOP
label_2bf350:
    // 0x2bf350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bf350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf354: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bf354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bf358: 0xa38389d4  sb          $v1, -0x762C($gp)
    ctx->pc = 0x2bf358u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf35c: 0x0  nop
    ctx->pc = 0x2bf35cu;
    // NOP
label_2bf360:
    // 0x2bf360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf364: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF364u;
        // 0x2bf368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF36Cu;
}
