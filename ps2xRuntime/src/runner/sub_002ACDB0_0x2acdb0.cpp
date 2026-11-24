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

// Function: sub_002ACDB0
// Address: 0x2acdb0 - 0x2acfec
void sub_002ACDB0_0x2acdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACDB0_0x2acdb0");
#endif

    switch (ctx->pc) {
        case 0x2ace20u: goto label_2ace20;
        case 0x2acf24u: goto label_2acf24;
        case 0x2acf3cu: goto label_2acf3c;
        case 0x2acf94u: goto label_2acf94;
        case 0x2acfacu: goto label_2acfac;
        default: break;
    }

    ctx->pc = 0x2acdb0u;

    // 0x2acdb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2acdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2acdb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2acdb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2acdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2acdbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2acdc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2acdc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2acdc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2acdcc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2acdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2acdd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2acdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdd8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2acdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acddc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2acddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acde0: 0xe4800870  swc1        $f0, 0x870($a0)
    ctx->pc = 0x2acde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2160), bits); }
    // 0x2acde4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2acde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acde8: 0xe4800874  swc1        $f0, 0x874($a0)
    ctx->pc = 0x2acde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2164), bits); }
    // 0x2acdec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2acdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdf0: 0xe4800878  swc1        $f0, 0x878($a0)
    ctx->pc = 0x2acdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2168), bits); }
    // 0x2acdf4: 0xac82087c  sw          $v0, 0x87C($a0)
    ctx->pc = 0x2acdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2172), GPR_U32(ctx, 2));
    // 0x2acdf8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2acdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acdfc: 0xe4800890  swc1        $f0, 0x890($a0)
    ctx->pc = 0x2acdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2192), bits); }
    // 0x2ace00: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2ace00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace04: 0xe4800894  swc1        $f0, 0x894($a0)
    ctx->pc = 0x2ace04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2196), bits); }
    // 0x2ace08: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2ace08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace0c: 0xe4800898  swc1        $f0, 0x898($a0)
    ctx->pc = 0x2ace0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2200), bits); }
    // 0x2ace10: 0x26650870  addiu       $a1, $s3, 0x870
    ctx->pc = 0x2ace10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2160));
    // 0x2ace14: 0xac82089c  sw          $v0, 0x89C($a0)
    ctx->pc = 0x2ace14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2204), GPR_U32(ctx, 2));
    // 0x2ace18: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2ACE18u;
    SET_GPR_U32(ctx, 31, 0x2ACE20u);
    ctx->pc = 0x2ACE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE18u;
    // 0x2ace1c: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2ACE18u, 0x2ACE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE20u;
label_2ace20:
    // 0x2ace20: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2ace20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2ace24: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2ace24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2ace28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ace28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ace2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ace2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ace30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ace30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ace34: 0x0  nop
    ctx->pc = 0x2ace34u;
    // NOP
    // 0x2ace38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ace38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ace3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ace3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ace40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ace40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ace44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ace44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ace48: 0x0  nop
    ctx->pc = 0x2ace48u;
    // NOP
    // 0x2ace4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ace4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ace50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ace50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ace54: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2ace54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2ace58: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACE58u;
    {
        const bool branch_taken_0x2ace58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE58u;
        // 0x2ace5c: 0xa66208a0  sh          $v0, 0x8A0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace58) {
            ctx->pc = 0x2ACE78u;
            goto label_2ace78;
        }
    }
    ctx->pc = 0x2ACE60u;
    // 0x2ace60: 0xc6610874  lwc1        $f1, 0x874($s3)
    ctx->pc = 0x2ace60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ace64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ace64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ace68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ace68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ace6c: 0x0  nop
    ctx->pc = 0x2ace6cu;
    // NOP
    // 0x2ace70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ace70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ace74: 0xe6600894  swc1        $f0, 0x894($s3)
    ctx->pc = 0x2ace74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2196), bits); }
label_2ace78:
    // 0x2ace78: 0xc6610874  lwc1        $f1, 0x874($s3)
    ctx->pc = 0x2ace78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ace7c: 0xc6600894  lwc1        $f0, 0x894($s3)
    ctx->pc = 0x2ace7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ace80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ace80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ace84: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2ACE84u;
    {
        const bool branch_taken_0x2ace84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ace84) {
            ctx->pc = 0x2ACEB0u;
            goto label_2aceb0;
        }
    }
    ctx->pc = 0x2ACE8Cu;
    // 0x2ace8c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACE8Cu;
    {
        const bool branch_taken_0x2ace8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE8Cu;
        // 0x2ace90: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace8c) {
            ctx->pc = 0x2ACEA0u;
            goto label_2acea0;
        }
    }
    ctx->pc = 0x2ACE94u;
    // 0x2ace94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ACE94u;
    {
        const bool branch_taken_0x2ace94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE94u;
        // 0x2ace98: 0xa2620822  sb          $v0, 0x822($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace94) {
            ctx->pc = 0x2ACEC8u;
            goto label_2acec8;
        }
    }
    ctx->pc = 0x2ACE9Cu;
    // 0x2ace9c: 0x0  nop
    ctx->pc = 0x2ace9cu;
    // NOP
label_2acea0:
    // 0x2acea0: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x2acea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2acea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACEA4u;
    {
        const bool branch_taken_0x2acea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEA4u;
        // 0x2acea8: 0xa2620822  sb          $v0, 0x822($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acea4) {
            ctx->pc = 0x2ACEC8u;
            goto label_2acec8;
        }
    }
    ctx->pc = 0x2ACEACu;
    // 0x2aceac: 0x0  nop
    ctx->pc = 0x2aceacu;
    // NOP
label_2aceb0:
    // 0x2aceb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACEB0u;
    {
        const bool branch_taken_0x2aceb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEB0u;
        // 0x2aceb4: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aceb0) {
            ctx->pc = 0x2ACEC0u;
            goto label_2acec0;
        }
    }
    ctx->pc = 0x2ACEB8u;
    // 0x2aceb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACEB8u;
    {
        const bool branch_taken_0x2aceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEB8u;
        // 0x2acebc: 0xa2620822  sb          $v0, 0x822($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2082), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aceb8) {
            ctx->pc = 0x2ACEC8u;
            goto label_2acec8;
        }
    }
    ctx->pc = 0x2ACEC0u;
label_2acec0:
    // 0x2acec0: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x2acec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x2acec4: 0xa2620822  sb          $v0, 0x822($s3)
    ctx->pc = 0x2acec4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2082), (uint8_t)GPR_U32(ctx, 2));
label_2acec8:
    // 0x2acec8: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x2acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x2acecc: 0xa2620780  sb          $v0, 0x780($s3)
    ctx->pc = 0x2aceccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aced0: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2aced4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aced8: 0xae7208c4  sw          $s2, 0x8C4($s3)
    ctx->pc = 0x2aced8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2244), GPR_U32(ctx, 18));
    // 0x2acedc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acee0: 0xae7008b4  sw          $s0, 0x8B4($s3)
    ctx->pc = 0x2acee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2228), GPR_U32(ctx, 16));
    // 0x2acee4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x2acee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2acee8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2acee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2aceec: 0x7a620870  lq          $v0, 0x870($s3)
    ctx->pc = 0x2aceecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 2160)));
    // 0x2acef0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2acef4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2acef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2acef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2acef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acefc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2acefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2acf00: 0x7a620870  lq          $v0, 0x870($s3)
    ctx->pc = 0x2acf00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 2160)));
    // 0x2acf04: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2acf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2acf08: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2acf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acf0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acf10: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2acf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2acf14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2acf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2acf18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2acf1c: 0xc0ab33c  jal         func_2ACCF0
    ctx->pc = 0x2ACF1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF24u);
    ctx->pc = 0x2ACF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF1Cu;
    // 0x2acf20: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF0u, 0x2ACF1Cu, 0x2ACF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF24u;
label_2acf24:
    // 0x2acf24: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acf28: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2acf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2acf2c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2acf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2acf30: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x2acf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2acf34: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x2ACF34u;
    SET_GPR_U32(ctx, 31, 0x2ACF3Cu);
    ctx->pc = 0x2ACF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF34u;
    // 0x2acf38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x2ACF34u, 0x2ACF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF3Cu;
label_2acf3c:
    // 0x2acf3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACF3Cu;
    {
        const bool branch_taken_0x2acf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acf3c) {
            ctx->pc = 0x2ACF50u;
            goto label_2acf50;
        }
    }
    ctx->pc = 0x2ACF44u;
    // 0x2acf44: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2acf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2acf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2acf4c: 0x0  nop
    ctx->pc = 0x2acf4cu;
    // NOP
label_2acf50:
    // 0x2acf50: 0x7a630890  lq          $v1, 0x890($s3)
    ctx->pc = 0x2acf50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 2192)));
    // 0x2acf54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2acf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2acf58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2acf5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2acf60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2acf64: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2acf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2acf68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acf6c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2acf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x2acf70: 0x7a620890  lq          $v0, 0x890($s3)
    ctx->pc = 0x2acf70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 2192)));
    // 0x2acf74: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2acf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2acf78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2acf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2acf7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2acf80: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2acf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2acf84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2acf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2acf88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2acf8c: 0xc0ab33c  jal         func_2ACCF0
    ctx->pc = 0x2ACF8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF94u);
    ctx->pc = 0x2ACF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF8Cu;
    // 0x2acf90: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF0u, 0x2ACF8Cu, 0x2ACF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF94u;
label_2acf94:
    // 0x2acf94: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acf98: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2acf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2acf9c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2acf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2acfa0: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x2acfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2acfa4: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x2ACFA4u;
    SET_GPR_U32(ctx, 31, 0x2ACFACu);
    ctx->pc = 0x2ACFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFA4u;
    // 0x2acfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x2ACFA4u, 0x2ACFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFACu;
label_2acfac:
    // 0x2acfac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACFACu;
    {
        const bool branch_taken_0x2acfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acfac) {
            ctx->pc = 0x2ACFC0u;
            goto label_2acfc0;
        }
    }
    ctx->pc = 0x2ACFB4u;
    // 0x2acfb4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2acfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acfb8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2acfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2acfbc: 0x0  nop
    ctx->pc = 0x2acfbcu;
    // NOP
label_2acfc0:
    // 0x2acfc0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2acfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acfc4: 0xe6600874  swc1        $f0, 0x874($s3)
    ctx->pc = 0x2acfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2164), bits); }
    // 0x2acfc8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2acfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acfcc: 0xe6600894  swc1        $f0, 0x894($s3)
    ctx->pc = 0x2acfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2196), bits); }
    // 0x2acfd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2acfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acfd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2acfd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acfd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acfd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acfdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2acfdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acfe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acfe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFE4u;
        // 0x2acfe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACFECu;
}
