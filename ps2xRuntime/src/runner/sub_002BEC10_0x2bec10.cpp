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

// Function: sub_002BEC10
// Address: 0x2bec10 - 0x2bee88
void sub_002BEC10_0x2bec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEC10_0x2bec10");
#endif

    switch (ctx->pc) {
        case 0x2bec88u: goto label_2bec88;
        case 0x2bec9cu: goto label_2bec9c;
        case 0x2bee4cu: goto label_2bee4c;
        case 0x2bee64u: goto label_2bee64;
        default: break;
    }

    ctx->pc = 0x2bec10u;

    // 0x2bec10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bec14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2bec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bec18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bec1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bec20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bec24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bec24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bec2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bec2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bec34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bec34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec38: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bec38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bec3c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BEC3Cu;
    {
        const bool branch_taken_0x2bec3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC3Cu;
        // 0x2bec40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec3c) {
            ctx->pc = 0x2BEC78u;
            goto label_2bec78;
        }
    }
    ctx->pc = 0x2BEC44u;
    // 0x2bec44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bec48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEC48u;
    {
        const bool branch_taken_0x2bec48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bec48) {
            ctx->pc = 0x2BEC58u;
            goto label_2bec58;
        }
    }
    ctx->pc = 0x2BEC50u;
    // 0x2bec50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BEC50u;
    {
        const bool branch_taken_0x2bec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec50) {
            ctx->pc = 0x2BEC90u;
            goto label_2bec90;
        }
    }
    ctx->pc = 0x2BEC58u;
label_2bec58:
    // 0x2bec58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bec5c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2bec5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bec60: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2bec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bec64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bec64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bec68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bec6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BEC6Cu;
    {
        const bool branch_taken_0x2bec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC6Cu;
        // 0x2bec70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec6c) {
            ctx->pc = 0x2BEC90u;
            goto label_2bec90;
        }
    }
    ctx->pc = 0x2BEC74u;
    // 0x2bec74: 0x0  nop
    ctx->pc = 0x2bec74u;
    // NOP
label_2bec78:
    // 0x2bec78: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2bec78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2bec7c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2bec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2bec80: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BEC80u;
    SET_GPR_U32(ctx, 31, 0x2BEC88u);
    ctx->pc = 0x2BEC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC80u;
    // 0x2bec84: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BEC80u, 0x2BEC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC88u;
label_2bec88:
    // 0x2bec88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bec88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec8c: 0x0  nop
    ctx->pc = 0x2bec8cu;
    // NOP
label_2bec90:
    // 0x2bec90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bec94: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2BEC94u;
    SET_GPR_U32(ctx, 31, 0x2BEC9Cu);
    ctx->pc = 0x2BEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC94u;
    // 0x2bec98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2BEC94u, 0x2BEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC9Cu;
label_2bec9c:
    // 0x2bec9c: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2BEC9Cu;
    {
        const bool branch_taken_0x2bec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bec9c) {
            ctx->pc = 0x2BEE58u;
            goto label_2bee58;
        }
    }
    ctx->pc = 0x2BECA4u;
    // 0x2beca4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2beca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2beca8: 0xa262005e  sb          $v0, 0x5E($s3)
    ctx->pc = 0x2beca8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2becac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2becacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2becb0: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x2becb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x2becb4: 0xae4207c0  sw          $v0, 0x7C0($s2)
    ctx->pc = 0x2becb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
    // 0x2becb8: 0x9262005f  lbu         $v0, 0x5F($s3)
    ctx->pc = 0x2becb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 95)));
    // 0x2becbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2becbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2becc0: 0xa262005f  sb          $v0, 0x5F($s3)
    ctx->pc = 0x2becc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x2becc4: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x2becc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2becc8: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2BECC8u;
    {
        const bool branch_taken_0x2becc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECC8u;
        // 0x2beccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becc8) {
            ctx->pc = 0x2BED70u;
            goto label_2bed70;
        }
    }
    ctx->pc = 0x2BECD0u;
    // 0x2becd0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x2becd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2becd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2becd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2becd8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BECD8u;
    {
        const bool branch_taken_0x2becd8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECD8u;
        // 0x2becdc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becd8) {
            ctx->pc = 0x2BECECu;
            goto label_2becec;
        }
    }
    ctx->pc = 0x2BECE0u;
    // 0x2bece0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bece0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bece4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BECE4u;
    {
        const bool branch_taken_0x2bece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECE4u;
        // 0x2bece8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bece4) {
            ctx->pc = 0x2BED04u;
            goto label_2bed04;
        }
    }
    ctx->pc = 0x2BECECu;
label_2becec:
    // 0x2becec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2becf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2becf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2becf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2becf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2becf8: 0x0  nop
    ctx->pc = 0x2becf8u;
    // NOP
    // 0x2becfc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2becfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bed00: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bed00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bed04:
    // 0x2bed04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bed08: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bed0c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bed10: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bed14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bed14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bed18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bed18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed1c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bed1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bed20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bed20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bed24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bed24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bed28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BED28u;
    {
        const bool branch_taken_0x2bed28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bed28) {
            ctx->pc = 0x2BED40u;
            goto label_2bed40;
        }
    }
    ctx->pc = 0x2BED30u;
    // 0x2bed30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bed30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bed34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bed34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bed38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BED38u;
    {
        const bool branch_taken_0x2bed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED38u;
        // 0x2bed3c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed38) {
            ctx->pc = 0x2BED5Cu;
            goto label_2bed5c;
        }
    }
    ctx->pc = 0x2BED40u;
label_2bed40:
    // 0x2bed40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bed40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bed44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bed48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bed48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bed4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bed4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bed50: 0x0  nop
    ctx->pc = 0x2bed50u;
    // NOP
    // 0x2bed54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bed58: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bed58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bed5c:
    // 0x2bed5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bed60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BED60u;
    {
        const bool branch_taken_0x2bed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bed60) {
            ctx->pc = 0x2BED70u;
            goto label_2bed70;
        }
    }
    ctx->pc = 0x2BED68u;
    // 0x2bed68: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2bed68u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2bed6c: 0x0  nop
    ctx->pc = 0x2bed6cu;
    // NOP
label_2bed70:
    // 0x2bed70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BED70u;
    {
        const bool branch_taken_0x2bed70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED70u;
        // 0x2bed74: 0x4143c  dsll32      $v0, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed70) {
            ctx->pc = 0x2BED80u;
            goto label_2bed80;
        }
    }
    ctx->pc = 0x2BED78u;
    // 0x2bed78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BED78u;
    {
        const bool branch_taken_0x2bed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED78u;
        // 0x2bed7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed78) {
            ctx->pc = 0x2BEE04u;
            goto label_2bee04;
        }
    }
    ctx->pc = 0x2BED80u;
label_2bed80:
    // 0x2bed80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bed80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bed84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BED84u;
    {
        const bool branch_taken_0x2bed84 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED84u;
        // 0x2bed88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed84) {
            ctx->pc = 0x2BED98u;
            goto label_2bed98;
        }
    }
    ctx->pc = 0x2BED8Cu;
    // 0x2bed8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bed8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BED90u;
    {
        const bool branch_taken_0x2bed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED90u;
        // 0x2bed94: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed90) {
            ctx->pc = 0x2BEDB0u;
            goto label_2bedb0;
        }
    }
    ctx->pc = 0x2BED98u;
label_2bed98:
    // 0x2bed98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bed9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2beda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2beda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beda4: 0x0  nop
    ctx->pc = 0x2beda4u;
    // NOP
    // 0x2beda8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2beda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bedac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bedacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bedb0:
    // 0x2bedb0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bedb4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bedb8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bedb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bedbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bedc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bedc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bedc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bedc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bedc8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bedc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bedcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bedccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bedd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bedd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bedd4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEDD4u;
    {
        const bool branch_taken_0x2bedd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bedd4) {
            ctx->pc = 0x2BEDECu;
            goto label_2bedec;
        }
    }
    ctx->pc = 0x2BEDDCu;
    // 0x2beddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2beddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bede0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bede0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bede4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEDE4u;
    {
        const bool branch_taken_0x2bede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bede4) {
            ctx->pc = 0x2BEE04u;
            goto label_2bee04;
        }
    }
    ctx->pc = 0x2BEDECu;
label_2bedec:
    // 0x2bedec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bedecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bedf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bedf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bedf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bedf8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bedf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bedfc: 0x0  nop
    ctx->pc = 0x2bedfcu;
    // NOP
    // 0x2bee00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bee00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bee04:
    // 0x2bee04: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x2bee04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bee08: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2bee0c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2bee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2bee10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee14: 0x246350e8  addiu       $v1, $v1, 0x50E8
    ctx->pc = 0x2bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20712));
    // 0x2bee18: 0x26790008  addiu       $t9, $s3, 0x8
    ctx->pc = 0x2bee18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2bee1c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bee1cu;
    { uint32_t bits = FAST_READ32(0x4E50E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bee20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee24: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bee24u;
    { uint32_t bits = FAST_READ32(0x4E50ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bee28: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bee28u;
    { uint32_t bits = FAST_READ32(0x4E50F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bee2c: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2bee2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2bee30: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2bee30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2bee34: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2bee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2bee38: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x2bee38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2bee3c: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x2bee3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bee40: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2bee40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bee44: 0xc040250  jal         func_100940
    ctx->pc = 0x2BEE44u;
    SET_GPR_U32(ctx, 31, 0x2BEE4Cu);
    ctx->pc = 0x2BEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE44u;
    // 0x2bee48: 0xa2600107  sb          $zero, 0x107($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BEE44u, 0x2BEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE4Cu;
label_2bee4c:
    // 0x2bee4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEE4Cu;
    {
        const bool branch_taken_0x2bee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bee4c) {
            ctx->pc = 0x2BEE68u;
            goto label_2bee68;
        }
    }
    ctx->pc = 0x2BEE54u;
    // 0x2bee54: 0x0  nop
    ctx->pc = 0x2bee54u;
    // NOP
label_2bee58:
    // 0x2bee58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee5c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BEE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE64u);
    ctx->pc = 0x2BEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE5Cu;
    // 0x2bee60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BEE5Cu, 0x2BEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE64u;
label_2bee64:
    // 0x2bee64: 0x0  nop
    ctx->pc = 0x2bee64u;
    // NOP
label_2bee68:
    // 0x2bee68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bee6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bee6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bee70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bee70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bee74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bee78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bee7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bee80: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE80u;
        // 0x2bee84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEE88u;
}
