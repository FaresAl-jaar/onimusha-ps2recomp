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

// Function: sub_002BCBB0
// Address: 0x2bcbb0 - 0x2bd070
void sub_002BCBB0_0x2bcbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCBB0_0x2bcbb0");
#endif

    switch (ctx->pc) {
        case 0x2bcec0u: goto label_2bcec0;
        case 0x2bceccu: goto label_2bcecc;
        case 0x2bcf58u: goto label_2bcf58;
        case 0x2bcfd8u: goto label_2bcfd8;
        default: break;
    }

    ctx->pc = 0x2bcbb0u;

    // 0x2bcbb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bcbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bcbb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bcbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bcbb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bcbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bcbbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bcbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bcbc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bcbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bcbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bcbc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bcbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bcbccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcbd0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bcbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bcbd4: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x2bcbd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2bcbd8: 0x1020011d  beqz        $at, . + 4 + (0x11D << 2)
    ctx->pc = 0x2BCBD8u;
    {
        const bool branch_taken_0x2bcbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD8u;
        // 0x2bcbdc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbd8) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCBE0u;
    // 0x2bcbe0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bcbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bcbe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bcbe8: 0x24637750  addiu       $v1, $v1, 0x7750
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30544));
    // 0x2bcbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcbf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcbf4: 0x400008  jr          $v0
    ctx->pc = 0x2BCBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BCC00u: goto label_2bcc00;
            case 0x2BCC70u: goto label_2bcc70;
            case 0x2BCD00u: goto label_2bcd00;
            case 0x2BCDB0u: goto label_2bcdb0;
            case 0x2BCE28u: goto label_2bce28;
            case 0x2BCE98u: goto label_2bce98;
            case 0x2BCF50u: goto label_2bcf50;
            case 0x2BCFD0u: goto label_2bcfd0;
            case 0x2BD050u: goto label_2bd050;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCBF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BCBFCu;
    // 0x2bcbfc: 0x0  nop
    ctx->pc = 0x2bcbfcu;
    // NOP
label_2bcc00:
    // 0x2bcc00: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bcc00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcc04: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2bcc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc0c: 0x0  nop
    ctx->pc = 0x2bcc0cu;
    // NOP
    // 0x2bcc10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcc14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcc18: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcc1c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bcc20: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2bcc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc28: 0x0  nop
    ctx->pc = 0x2bcc28u;
    // NOP
    // 0x2bcc2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcc30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcc34: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bcc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bcc38: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bcc38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bcc3c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2bcc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc44: 0x0  nop
    ctx->pc = 0x2bcc44u;
    // NOP
    // 0x2bcc48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcc48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcc4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcc50: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bcc54: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bcc54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcc58: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2bcc58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2bcc5c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bcc60: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bcc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcc68: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x2BCC68u;
    {
        const bool branch_taken_0x2bcc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC68u;
        // 0x2bcc6c: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc68) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCC70u;
label_2bcc70:
    // 0x2bcc70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bcc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bcc74: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2bcc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bcc78: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2bcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bcc7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bcc80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcc84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcc88: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2BCC88u;
    {
        const bool branch_taken_0x2bcc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc88) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCC90u;
    // 0x2bcc90: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bcc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcc94: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2bcc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcc98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcc9c: 0x0  nop
    ctx->pc = 0x2bcc9cu;
    // NOP
    // 0x2bcca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcca4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcca8: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bccac: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bccacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bccb0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2bccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bccb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bccb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bccb8: 0x0  nop
    ctx->pc = 0x2bccb8u;
    // NOP
    // 0x2bccbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bccbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bccc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bccc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bccc4: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bccc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bccc8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bccc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bcccc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2bccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bccd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bccd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bccd4: 0x0  nop
    ctx->pc = 0x2bccd4u;
    // NOP
    // 0x2bccd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bccd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bccdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bccdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcce0: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bcce4: 0x846200c2  lh          $v0, 0xC2($v1)
    ctx->pc = 0x2bcce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x2bcce8: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bccec: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bccecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bccf0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bccf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bccf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bccf8: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2BCCF8u;
    {
        const bool branch_taken_0x2bccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCF8u;
        // 0x2bccfc: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccf8) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCD00u;
label_2bcd00:
    // 0x2bcd00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bcd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bcd04: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2bcd04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bcd08: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2bcd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bcd0c: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2bcd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2bcd10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bcd14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bcd18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcd1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCD1Cu;
    {
        const bool branch_taken_0x2bcd1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD1Cu;
        // 0x2bcd20: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd1c) {
            ctx->pc = 0x2BCD2Cu;
            goto label_2bcd2c;
        }
    }
    ctx->pc = 0x2BCD24u;
    // 0x2bcd24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCD24u;
    {
        const bool branch_taken_0x2bcd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd24) {
            ctx->pc = 0x2BCD34u;
            goto label_2bcd34;
        }
    }
    ctx->pc = 0x2BCD2Cu;
label_2bcd2c:
    // 0x2bcd2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bcd30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2bcd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bcd34:
    // 0x2bcd34: 0x10a000c6  beqz        $a1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2BCD34u;
    {
        const bool branch_taken_0x2bcd34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd34) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCD3Cu;
    // 0x2bcd3c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bcd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcd40: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2bcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcd48: 0x0  nop
    ctx->pc = 0x2bcd48u;
    // NOP
    // 0x2bcd4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcd50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd54: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcd58: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bcd5c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2bcd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcd64: 0x0  nop
    ctx->pc = 0x2bcd64u;
    // NOP
    // 0x2bcd68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcd6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd70: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bcd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bcd74: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bcd74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bcd78: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2bcd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcd80: 0x0  nop
    ctx->pc = 0x2bcd80u;
    // NOP
    // 0x2bcd84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcd84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcd88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcd8c: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bcd90: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bcd90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcd94: 0x84a200c2  lh          $v0, 0xC2($a1)
    ctx->pc = 0x2bcd94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x2bcd98: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bcd9c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bcd9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bcda0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcda4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2BCDA4u;
    {
        const bool branch_taken_0x2bcda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDA4u;
        // 0x2bcda8: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcda4) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCDACu;
    // 0x2bcdac: 0x0  nop
    ctx->pc = 0x2bcdacu;
    // NOP
label_2bcdb0:
    // 0x2bcdb0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bcdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcdb4: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bcdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcdbc: 0x0  nop
    ctx->pc = 0x2bcdbcu;
    // NOP
    // 0x2bcdc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bcdc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bcdc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcdc8: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcdcc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bcdccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bcdd0: 0xc64000c4  lwc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bcdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bcdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcdd8: 0x0  nop
    ctx->pc = 0x2bcdd8u;
    // NOP
    // 0x2bcddc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bcddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bcde0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bcde4: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bcde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bcde8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bcde8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bcdec: 0xc64000c8  lwc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcdf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bcdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcdf4: 0x0  nop
    ctx->pc = 0x2bcdf4u;
    // NOP
    // 0x2bcdf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bcdf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bcdfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bcdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bce00: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bce04: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bce04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bce08: 0x864200cc  lh          $v0, 0xCC($s2)
    ctx->pc = 0x2bce08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2bce0c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bce10: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bce10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bce14: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2bce14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bce18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bce18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bce1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bce20: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2BCE20u;
    {
        const bool branch_taken_0x2bce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE20u;
        // 0x2bce24: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce20) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCE28u;
label_2bce28:
    // 0x2bce28: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bce28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bce2c: 0xc64100d0  lwc1        $f1, 0xD0($s2)
    ctx->pc = 0x2bce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bce30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce34: 0x0  nop
    ctx->pc = 0x2bce34u;
    // NOP
    // 0x2bce38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bce38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bce3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bce3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bce40: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bce44: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bce44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bce48: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x2bce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bce4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce50: 0x0  nop
    ctx->pc = 0x2bce50u;
    // NOP
    // 0x2bce54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bce54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bce58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bce5c: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bce60: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bce60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bce64: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x2bce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bce68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bce68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bce6c: 0x0  nop
    ctx->pc = 0x2bce6cu;
    // NOP
    // 0x2bce70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bce70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bce74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bce74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bce78: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bce7c: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bce7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bce80: 0x864200dc  lh          $v0, 0xDC($s2)
    ctx->pc = 0x2bce80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2bce84: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bce84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bce88: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bce88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bce8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bce90: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2BCE90u;
    {
        const bool branch_taken_0x2bce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE90u;
        // 0x2bce94: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce90) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCE98u;
label_2bce98:
    // 0x2bce98: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2bce98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2bce9c: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x2bce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x2bcea0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bcea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bcea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcea8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bcea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bceac: 0x0  nop
    ctx->pc = 0x2bceacu;
    // NOP
    // 0x2bceb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bceb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bceb4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2bceb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bceb8: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2BCEB8u;
    SET_GPR_U32(ctx, 31, 0x2BCEC0u);
    ctx->pc = 0x2BCEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEB8u;
    // 0x2bcebc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2BCEB8u, 0x2BCEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCEC0u;
label_2bcec0:
    // 0x2bcec0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcec4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2BCEC4u;
    SET_GPR_U32(ctx, 31, 0x2BCECCu);
    ctx->pc = 0x2BCEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCEC4u;
    // 0x2bcec8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2BCEC4u, 0x2BCECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCECCu;
label_2bcecc:
    // 0x2bcecc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2bceccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bced0: 0xc64200d0  lwc1        $f2, 0xD0($s2)
    ctx->pc = 0x2bced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bced4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x2bced4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bced8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2bced8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bcedc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bcedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcee0: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x2bcee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2bcee4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x2bcee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bcee8: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2bcee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bceec: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2bceecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x2bcef0: 0x4614209c  madd.s      $f2, $f4, $f20
    ctx->pc = 0x2bcef0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[20]));
    // 0x2bcef4: 0xe64200c0  swc1        $f2, 0xC0($s2)
    ctx->pc = 0x2bcef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcef8: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bcef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bcefc: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x2bcefcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2bcf00: 0xc64300d4  lwc1        $f3, 0xD4($s2)
    ctx->pc = 0x2bcf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcf04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bcf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcf08: 0x0  nop
    ctx->pc = 0x2bcf08u;
    // NOP
    // 0x2bcf0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bcf0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bcf10: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2bcf10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2bcf14: 0xe64200c4  swc1        $f2, 0xC4($s2)
    ctx->pc = 0x2bcf14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bcf18: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x2bcf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcf1c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2bcf1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x2bcf20: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x2bcf20u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2bcf24: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bcf28: 0x82040008  lb          $a0, 0x8($s0)
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcf2c: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2bcf2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2bcf30: 0x864200dc  lh          $v0, 0xDC($s2)
    ctx->pc = 0x2bcf30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2bcf34: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2bcf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2bcf38: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2bcf38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2bcf3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bcf40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcf44: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2BCF44u;
    {
        const bool branch_taken_0x2bcf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF44u;
        // 0x2bcf48: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf44) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCF4Cu;
    // 0x2bcf4c: 0x0  nop
    ctx->pc = 0x2bcf4cu;
    // NOP
label_2bcf50:
    // 0x2bcf50: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BCF50u;
    SET_GPR_U32(ctx, 31, 0x2BCF58u);
    ctx->pc = 0x2BCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF50u;
    // 0x2bcf54: 0x8e450090  lw          $a1, 0x90($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BCF50u, 0x2BCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF58u;
label_2bcf58:
    // 0x2bcf58: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2BCF58u;
    {
        const bool branch_taken_0x2bcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcf58) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCF60u;
    // 0x2bcf60: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2bcf60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcf64: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2bcf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcf68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf6c: 0x0  nop
    ctx->pc = 0x2bcf6cu;
    // NOP
    // 0x2bcf70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcf70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcf74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcf74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcf78: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcf7c: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2bcf7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bcf80: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2bcf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcf84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcf84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcf88: 0x0  nop
    ctx->pc = 0x2bcf88u;
    // NOP
    // 0x2bcf8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcf8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcf90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcf94: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bcf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bcf98: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x2bcf98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bcf9c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2bcf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfa4: 0x0  nop
    ctx->pc = 0x2bcfa4u;
    // NOP
    // 0x2bcfa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcfa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcfac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcfacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcfb0: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bcfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bcfb4: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bcfb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcfb8: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x2bcfb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x2bcfbc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bcfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bcfc0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bcfc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bcfc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcfc8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BCFC8u;
    {
        const bool branch_taken_0x2bcfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFC8u;
        // 0x2bcfcc: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfc8) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCFD0u;
label_2bcfd0:
    // 0x2bcfd0: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BCFD0u;
    SET_GPR_U32(ctx, 31, 0x2BCFD8u);
    ctx->pc = 0x2BCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFD0u;
    // 0x2bcfd4: 0x8e450088  lw          $a1, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BCFD0u, 0x2BCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFD8u;
label_2bcfd8:
    // 0x2bcfd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BCFD8u;
    {
        const bool branch_taken_0x2bcfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcfd8) {
            ctx->pc = 0x2BD050u;
            goto label_2bd050;
        }
    }
    ctx->pc = 0x2BCFE0u;
    // 0x2bcfe0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bcfe4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2bcfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bcfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfec: 0x0  nop
    ctx->pc = 0x2bcfecu;
    // NOP
    // 0x2bcff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bcff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bcff8: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2bcff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2bcffc: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2bcffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bd000: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2bd000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd008: 0x0  nop
    ctx->pc = 0x2bd008u;
    // NOP
    // 0x2bd00c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd014: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2bd014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2bd018: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x2bd018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bd01c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2bd01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd024: 0x0  nop
    ctx->pc = 0x2bd024u;
    // NOP
    // 0x2bd028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd02c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bd02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd030: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2bd030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2bd034: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x2bd034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bd038: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x2bd038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x2bd03c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2bd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd040: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2bd040u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2bd044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd048: 0xa64200cc  sh          $v0, 0xCC($s2)
    ctx->pc = 0x2bd048u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bd04c: 0x0  nop
    ctx->pc = 0x2bd04cu;
    // NOP
label_2bd050:
    // 0x2bd050: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x2bd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x2bd054: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bd054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd058: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bd058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd05c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bd05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bd060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bd064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd068: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD068u;
        // 0x2bd06c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD070u;
}
