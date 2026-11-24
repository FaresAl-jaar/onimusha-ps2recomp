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

// Function: sub_00284F00
// Address: 0x284f00 - 0x285068
void sub_00284F00_0x284f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F00_0x284f00");
#endif

    switch (ctx->pc) {
        case 0x284f40u: goto label_284f40;
        case 0x284f70u: goto label_284f70;
        case 0x284f94u: goto label_284f94;
        case 0x284fe8u: goto label_284fe8;
        default: break;
    }

    ctx->pc = 0x284f00u;

    // 0x284f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x284f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x284f04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x284f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x284f08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x284f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x284f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284f14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x284f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x284f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284f24: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x284f24u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x284f28: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x284f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x284f2c: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x284f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x284f30: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x284f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x284f34: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x284F34u;
    {
        const bool branch_taken_0x284f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F34u;
        // 0x284f38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f34) {
            ctx->pc = 0x285048u;
            goto label_285048;
        }
    }
    ctx->pc = 0x284F3Cu;
    // 0x284f3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x284f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284f40:
    // 0x284f40: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x284f40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x284f44: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x284f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x284f48: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x284F48u;
    {
        const bool branch_taken_0x284f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284f48) {
            ctx->pc = 0x285030u;
            goto label_285030;
        }
    }
    ctx->pc = 0x284F50u;
    // 0x284f50: 0xc66d0038  lwc1        $f13, 0x38($s3)
    ctx->pc = 0x284f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x284f54: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x284f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x284f58: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x284f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x284f5c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x284f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x284f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284f64: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x284f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284f68: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x284F68u;
    SET_GPR_U32(ctx, 31, 0x284F70u);
    ctx->pc = 0x284F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F68u;
    // 0x284f6c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x284F68u, 0x284F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F70u;
label_284f70:
    // 0x284f70: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x284f70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x284f74: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x284F74u;
    {
        const bool branch_taken_0x284f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x284F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F74u;
        // 0x284f78: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f74) {
            ctx->pc = 0x284F88u;
            goto label_284f88;
        }
    }
    ctx->pc = 0x284F7Cu;
    // 0x284f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x284F80u;
    {
        const bool branch_taken_0x284f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F80u;
        // 0x284f84: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f80) {
            ctx->pc = 0x284F98u;
            goto label_284f98;
        }
    }
    ctx->pc = 0x284F88u;
label_284f88:
    // 0x284f88: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x284f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x284f8c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x284F8Cu;
    SET_GPR_U32(ctx, 31, 0x284F94u);
    ctx->pc = 0x284F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F8Cu;
    // 0x284f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x284F8Cu, 0x284F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284F94u;
label_284f94:
    // 0x284f94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_284f98:
    // 0x284f98: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x284f9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x284f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x284fa0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x284fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x284fa4: 0x0  nop
    ctx->pc = 0x284fa4u;
    // NOP
    // 0x284fa8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x284fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x284fac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x284facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x284fb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x284fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x284fb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x284fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x284fb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x284fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284fbc: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x284fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x284fc0: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x284fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x284fc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x284fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284fc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x284fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x284fcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x284fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284fd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x284FD0u;
    {
        const bool branch_taken_0x284fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FD0u;
        // 0x284fd4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fd0) {
            ctx->pc = 0x284FE0u;
            goto label_284fe0;
        }
    }
    ctx->pc = 0x284FD8u;
    // 0x284fd8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x284fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x284fdc: 0x0  nop
    ctx->pc = 0x284fdcu;
    // NOP
label_284fe0:
    // 0x284fe0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x284FE0u;
    SET_GPR_U32(ctx, 31, 0x284FE8u);
    ctx->pc = 0x284FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284FE0u;
    // 0x284fe4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x284FE0u, 0x284FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284FE8u;
label_284fe8:
    // 0x284fe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284FE8u;
    {
        const bool branch_taken_0x284fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284fe8) {
            ctx->pc = 0x285000u;
            goto label_285000;
        }
    }
    ctx->pc = 0x284FF0u;
    // 0x284ff0: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x284ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x284ff4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x284FF4u;
    {
        const bool branch_taken_0x284ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FF4u;
        // 0x284ff8: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ff4) {
            ctx->pc = 0x285030u;
            goto label_285030;
        }
    }
    ctx->pc = 0x284FFCu;
    // 0x284ffc: 0x0  nop
    ctx->pc = 0x284ffcu;
    // NOP
label_285000:
    // 0x285000: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285008: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x285008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x28500c: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x285010: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x285010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x285014: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x285014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285018: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x285018u;
    {
        const bool branch_taken_0x285018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285018u;
        // 0x28501c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285018) {
            ctx->pc = 0x285028u;
            goto label_285028;
        }
    }
    ctx->pc = 0x285020u;
    // 0x285020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285020u;
    {
        const bool branch_taken_0x285020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285020u;
        // 0x285024: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285020) {
            ctx->pc = 0x285030u;
            goto label_285030;
        }
    }
    ctx->pc = 0x285028u;
label_285028:
    // 0x285028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x285028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28502c: 0x0  nop
    ctx->pc = 0x28502cu;
    // NOP
label_285030:
    // 0x285030: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x285030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x285034: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x285034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x285038: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x285038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28503c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x28503Cu;
    {
        const bool branch_taken_0x28503c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28503Cu;
        // 0x285040: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28503c) {
            ctx->pc = 0x284F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284f40;
        }
    }
    ctx->pc = 0x285044u;
    // 0x285044: 0x0  nop
    ctx->pc = 0x285044u;
    // NOP
label_285048:
    // 0x285048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x285048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28504c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285050: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28505c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28505cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285060: 0x3e00008  jr          $ra
    ctx->pc = 0x285060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285060u;
        // 0x285064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285068u;
}
