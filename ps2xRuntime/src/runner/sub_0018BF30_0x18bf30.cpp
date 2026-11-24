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

// Function: sub_0018BF30
// Address: 0x18bf30 - 0x18c764
void sub_0018BF30_0x18bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BF30_0x18bf30");
#endif

    switch (ctx->pc) {
        case 0x18bf90u: goto label_18bf90;
        case 0x18bfa4u: goto label_18bfa4;
        case 0x18bfb8u: goto label_18bfb8;
        case 0x18c024u: goto label_18c024;
        case 0x18c02cu: goto label_18c02c;
        case 0x18c050u: goto label_18c050;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c074u: goto label_18c074;
        case 0x18c0b8u: goto label_18c0b8;
        case 0x18c0c0u: goto label_18c0c0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c0f0u: goto label_18c0f0;
        case 0x18c100u: goto label_18c100;
        case 0x18c108u: goto label_18c108;
        case 0x18c130u: goto label_18c130;
        case 0x18c148u: goto label_18c148;
        case 0x18c160u: goto label_18c160;
        case 0x18c16cu: goto label_18c16c;
        case 0x18c180u: goto label_18c180;
        case 0x18c2c0u: goto label_18c2c0;
        case 0x18c320u: goto label_18c320;
        case 0x18c330u: goto label_18c330;
        case 0x18c354u: goto label_18c354;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c400u: goto label_18c400;
        case 0x18c408u: goto label_18c408;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c498u: goto label_18c498;
        case 0x18c4a8u: goto label_18c4a8;
        case 0x18c500u: goto label_18c500;
        case 0x18c508u: goto label_18c508;
        case 0x18c52cu: goto label_18c52c;
        case 0x18c53cu: goto label_18c53c;
        default: break;
    }

    ctx->pc = 0x18bf30u;

    // 0x18bf30: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x18bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x18bf34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x18bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x18bf38: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x18bf3c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x18bf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x18bf40: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x18bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x18bf44: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18bf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18bf48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18bf48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18bf50: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18bf50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18bf58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18bf5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18bf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18bf60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18bf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18bf68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18bf68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf6c: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x18bf6cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18bf70: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18bf74: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x18bf74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18bf78: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x18bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18bf7c: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x18bf7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18bf80: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x18bf80u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x18bf84: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x18bf84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x18bf88: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18BF88u;
    SET_GPR_U32(ctx, 31, 0x18BF90u);
    ctx->pc = 0x18BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF88u;
    // 0x18bf8c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18BF88u, 0x18BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BF90u;
label_18bf90:
    // 0x18bf90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18bf94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18bf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf98: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18bf9c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18BF9Cu;
    SET_GPR_U32(ctx, 31, 0x18BFA4u);
    ctx->pc = 0x18BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF9Cu;
    // 0x18bfa0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18BF9Cu, 0x18BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFA4u;
label_18bfa4:
    // 0x18bfa4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18bfa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18bfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfac: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18bfb0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18BFB0u;
    SET_GPR_U32(ctx, 31, 0x18BFB8u);
    ctx->pc = 0x18BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFB0u;
    // 0x18bfb4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18BFB0u, 0x18BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFB8u;
label_18bfb8:
    // 0x18bfb8: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x18bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bfbc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x18bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bfc0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x18bfc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bfc4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18BFC4u;
    {
        const bool branch_taken_0x18bfc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFC4u;
        // 0x18bfc8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfc4) {
            ctx->pc = 0x18BFF0u;
            goto label_18bff0;
        }
    }
    ctx->pc = 0x18BFCCu;
    // 0x18bfcc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bfd0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x18bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bfd4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18bfd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bfd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18BFD8u;
    {
        const bool branch_taken_0x18bfd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFD8u;
        // 0x18bfdc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfd8) {
            ctx->pc = 0x18BFF0u;
            goto label_18bff0;
        }
    }
    ctx->pc = 0x18BFE0u;
    // 0x18bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfe4: 0x0  nop
    ctx->pc = 0x18bfe4u;
    // NOP
    // 0x18bfe8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x18bfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x18bfec: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x18bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_18bff0:
    // 0x18bff0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18bff4: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18bff8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18bffc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c004: 0xaea20360  sw          $v0, 0x360($s5)
    ctx->pc = 0x18c004u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 864), GPR_U32(ctx, 2));
    // 0x18c008: 0x8ea20360  lw          $v0, 0x360($s5)
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 864)));
    // 0x18c00c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c010: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c014: 0xaea20360  sw          $v0, 0x360($s5)
    ctx->pc = 0x18c014u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 864), GPR_U32(ctx, 2));
    // 0x18c018: 0x8ea50360  lw          $a1, 0x360($s5)
    ctx->pc = 0x18c018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 864)));
    // 0x18c01c: 0xc041290  jal         func_104A40
    ctx->pc = 0x18C01Cu;
    SET_GPR_U32(ctx, 31, 0x18C024u);
    ctx->pc = 0x18C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C01Cu;
    // 0x18c020: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18C01Cu, 0x18C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C024u;
label_18c024:
    // 0x18c024: 0xc041294  jal         func_104A50
    ctx->pc = 0x18C024u;
    SET_GPR_U32(ctx, 31, 0x18C02Cu);
    ctx->pc = 0x18C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C024u;
    // 0x18c028: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18C024u, 0x18C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C02Cu;
label_18c02c:
    // 0x18c02c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18c030: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c034: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18c034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18c038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c03c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x18c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x18c040: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x18c040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c044: 0x344803e8  ori         $t0, $v0, 0x3E8
    ctx->pc = 0x18c044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1000);
    // 0x18c048: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18C048u;
    SET_GPR_U32(ctx, 31, 0x18C050u);
    ctx->pc = 0x18C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C048u;
    // 0x18c04c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18C048u, 0x18C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C050u;
label_18c050:
    // 0x18c050: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c054: 0xc041322  jal         func_104C88
    ctx->pc = 0x18C054u;
    SET_GPR_U32(ctx, 31, 0x18C05Cu);
    ctx->pc = 0x18C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C054u;
    // 0x18c058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18C054u, 0x18C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C05Cu;
label_18c05c:
    // 0x18c05c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c064: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18C064u;
    SET_GPR_U32(ctx, 31, 0x18C06Cu);
    ctx->pc = 0x18C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C064u;
    // 0x18c068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18C064u, 0x18C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C06Cu;
label_18c06c:
    // 0x18c06c: 0xc041298  jal         func_104A60
    ctx->pc = 0x18C06Cu;
    SET_GPR_U32(ctx, 31, 0x18C074u);
    ctx->pc = 0x18C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C06Cu;
    // 0x18c070: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18C06Cu, 0x18C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C074u;
label_18c074:
    // 0x18c074: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18c074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c078: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x18c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18c07c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c080: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18c084: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x18c084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x18c088: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18c08c: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x18c090: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c098: 0xaea20364  sw          $v0, 0x364($s5)
    ctx->pc = 0x18c098u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 868), GPR_U32(ctx, 2));
    // 0x18c09c: 0x8ea20364  lw          $v0, 0x364($s5)
    ctx->pc = 0x18c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 868)));
    // 0x18c0a0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c0a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c0a8: 0xaea20364  sw          $v0, 0x364($s5)
    ctx->pc = 0x18c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 868), GPR_U32(ctx, 2));
    // 0x18c0ac: 0x8ea50364  lw          $a1, 0x364($s5)
    ctx->pc = 0x18c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 868)));
    // 0x18c0b0: 0xc041290  jal         func_104A40
    ctx->pc = 0x18C0B0u;
    SET_GPR_U32(ctx, 31, 0x18C0B8u);
    ctx->pc = 0x18C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0B0u;
    // 0x18c0b4: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x18C0B0u, 0x18C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0B8u;
label_18c0b8:
    // 0x18c0b8: 0xc041294  jal         func_104A50
    ctx->pc = 0x18C0B8u;
    SET_GPR_U32(ctx, 31, 0x18C0C0u);
    ctx->pc = 0x18C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0B8u;
    // 0x18c0bc: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x18C0B8u, 0x18C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0C0u;
label_18c0c0:
    // 0x18c0c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18c0c4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c0c8: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x18c0c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x18c0cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0d0: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x18c0d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c0d8: 0x344803f4  ori         $t0, $v0, 0x3F4
    ctx->pc = 0x18c0d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1012);
    // 0x18c0dc: 0xc0412e0  jal         func_104B80
    ctx->pc = 0x18C0DCu;
    SET_GPR_U32(ctx, 31, 0x18C0E4u);
    ctx->pc = 0x18C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0DCu;
    // 0x18c0e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B80u, 0x18C0DCu, 0x18C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0E4u;
label_18c0e4:
    // 0x18c0e4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c0e8: 0xc041322  jal         func_104C88
    ctx->pc = 0x18C0E8u;
    SET_GPR_U32(ctx, 31, 0x18C0F0u);
    ctx->pc = 0x18C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0E8u;
    // 0x18c0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x18C0E8u, 0x18C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0F0u;
label_18c0f0:
    // 0x18c0f0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x18c0f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c0f8: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x18C0F8u;
    SET_GPR_U32(ctx, 31, 0x18C100u);
    ctx->pc = 0x18C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0F8u;
    // 0x18c0fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x18C0F8u, 0x18C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C100u;
label_18c100:
    // 0x18c100: 0xc041298  jal         func_104A60
    ctx->pc = 0x18C100u;
    SET_GPR_U32(ctx, 31, 0x18C108u);
    ctx->pc = 0x18C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C100u;
    // 0x18c104: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x18C100u, 0x18C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C108u;
label_18c108:
    // 0x18c108: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x18c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x18c10c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18c110: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x18c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x18c114: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x18c118: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c11c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c120: 0x24841470  addiu       $a0, $a0, 0x1470
    ctx->pc = 0x18c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
    // 0x18c124: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18c124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c128: 0xc0414d0  jal         func_105340
    ctx->pc = 0x18C128u;
    SET_GPR_U32(ctx, 31, 0x18C130u);
    ctx->pc = 0x18C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C128u;
    // 0x18c12c: 0xac22fc90  sw          $v0, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x18C128u, 0x18C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C130u;
label_18c130:
    // 0x18c130: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18c130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18c134: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c138: 0x24841470  addiu       $a0, $a0, 0x1470
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
    // 0x18c13c: 0xac20147c  sw          $zero, 0x147C($at)
    ctx->pc = 0x18c13cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x84147Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x84147Cu, _value); } while (0);
    // 0x18c140: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C140u;
    SET_GPR_U32(ctx, 31, 0x18C148u);
    ctx->pc = 0x18C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C140u;
    // 0x18c144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C140u, 0x18C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C148u;
label_18c148:
    // 0x18c148: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x18c148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x18c14c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x18c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x18c150: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18c154: 0x24a51470  addiu       $a1, $a1, 0x1470
    ctx->pc = 0x18c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5232));
    // 0x18c158: 0xc041460  jal         func_105180
    ctx->pc = 0x18C158u;
    SET_GPR_U32(ctx, 31, 0x18C160u);
    ctx->pc = 0x18C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C158u;
    // 0x18c15c: 0x24c6d770  addiu       $a2, $a2, -0x2890 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18C158u, 0x18C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C160u;
label_18c160:
    // 0x18c160: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18c164: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C164u;
    SET_GPR_U32(ctx, 31, 0x18C16Cu);
    ctx->pc = 0x18C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C164u;
    // 0x18c168: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C164u, 0x18C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C16Cu;
label_18c16c:
    // 0x18c16c: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x18c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x18c170: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x18c174: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x18c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x18c178: 0xc041460  jal         func_105180
    ctx->pc = 0x18C178u;
    SET_GPR_U32(ctx, 31, 0x18C180u);
    ctx->pc = 0x18C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C178u;
    // 0x18c17c: 0x24c61470  addiu       $a2, $a2, 0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x18C178u, 0x18C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C180u;
label_18c180:
    // 0x18c180: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18c184: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c188: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18c188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18c18c: 0x27a70204  addiu       $a3, $sp, 0x204
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
    // 0x18c190: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x18c194: 0x27a501f4  addiu       $a1, $sp, 0x1F4
    ctx->pc = 0x18c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x18c198: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18c19c: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x18c19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x18c1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c1a4: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x18c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x18c1a8: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x18c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1ac: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x18c1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x18c1b0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x18c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x18c1b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18c1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c1b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18c1bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18c1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18c1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c1c4: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x18c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c1c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18c1c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18c1cc: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x18c1ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18c1d0: 0xc4221470  lwc1        $f2, 0x1470($at)
    ctx->pc = 0x18c1d0u;
    { uint32_t bits = FAST_READ32(0x841470u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c1d4: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x18c1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x18c1d8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c1dc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x18c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x18c1e0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x18c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1e4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x18c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x18c1e8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1ec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x18c1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x18c1f0: 0xc4201474  lwc1        $f0, 0x1474($at)
    ctx->pc = 0x18c1f0u;
    { uint32_t bits = FAST_READ32(0x841474u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c1f4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x18c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x18c1f8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c1fc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x18c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x18c200: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x18c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c204: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x18c204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x18c208: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c20c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x18c20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18c210: 0xc4201478  lwc1        $f0, 0x1478($at)
    ctx->pc = 0x18c210u;
    { uint32_t bits = FAST_READ32(0x841478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c214: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x18c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x18c218: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c21c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x18c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x18c220: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x18c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18c224: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18c228: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x18c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c22c: 0xc7a20200  lwc1        $f2, 0x200($sp)
    ctx->pc = 0x18c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c230: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x18c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c234: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c238: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18c238u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18c23c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18c23cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18c240: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x18c240u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x18c244: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x18c244u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x18c248: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c24c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x18c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x18c250: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x18c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18c254: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18c258: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x18c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c25c: 0xc7a201f0  lwc1        $f2, 0x1F0($sp)
    ctx->pc = 0x18c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c260: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c264: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c268: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18c268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18c26c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18c26cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18c270: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x18c270u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x18c274: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x18c274u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x18c278: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c278u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c27c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x18c27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x18c280: 0xc4241470  lwc1        $f4, 0x1470($at)
    ctx->pc = 0x18c280u;
    { uint32_t bits = FAST_READ32(0x841470u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18c284: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x18c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18c288: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x18c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c28c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c290: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c294: 0xc4221474  lwc1        $f2, 0x1474($at)
    ctx->pc = 0x18c294u;
    { uint32_t bits = FAST_READ32(0x841474u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c298: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18c298u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x18c29c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x18c29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x18c2a0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18c2a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18c2a4: 0xc4201478  lwc1        $f0, 0x1478($at)
    ctx->pc = 0x18c2a4u;
    { uint32_t bits = FAST_READ32(0x841478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c2a8: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x18c2a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[2]));
    // 0x18c2ac: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x18c2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x18c2b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18c2b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18c2b4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x18c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x18c2b8: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x18C2B8u;
    SET_GPR_U32(ctx, 31, 0x18C2C0u);
    ctx->pc = 0x18C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C2B8u;
    // 0x18c2bc: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x18C2B8u, 0x18C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C2C0u;
label_18c2c0:
    // 0x18c2c0: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x18c2c4: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x18c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x18c2c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c2cc: 0x3442ff60  ori         $v0, $v0, 0xFF60
    ctx->pc = 0x18c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x18c2d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18c2d4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x18c2d8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x18c2d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18c2dc: 0x3c0244f9  lui         $v0, 0x44F9
    ctx->pc = 0x18c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17657 << 16));
    // 0x18c2e0: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x18c2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18c2e4: 0x3c073f60  lui         $a3, 0x3F60
    ctx->pc = 0x18c2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16224 << 16));
    // 0x18c2e8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x18c2ec: 0x3c064500  lui         $a2, 0x4500
    ctx->pc = 0x18c2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17664 << 16));
    // 0x18c2f0: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x18c2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18c2f4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x18c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x18c2f8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x18c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x18c2fc: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x18c2fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c300: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x18c300u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18c304: 0x44867800  mtc1        $a2, $f15
    ctx->pc = 0x18c304u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18c308: 0x44858000  mtc1        $a1, $f16
    ctx->pc = 0x18c308u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x18c30c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x18c30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x18c310: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x18c310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x18c314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18c318: 0xc041646  jal         func_105918
    ctx->pc = 0x18C318u;
    SET_GPR_U32(ctx, 31, 0x18C320u);
    ctx->pc = 0x18C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C318u;
    // 0x18c31c: 0x46006c46  mov.s       $f17, $f13 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105918u, 0x18C318u, 0x18C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C320u;
label_18c320:
    // 0x18c320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c324: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x18c324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x18c328: 0xc04144e  jal         func_105138
    ctx->pc = 0x18C328u;
    SET_GPR_U32(ctx, 31, 0x18C330u);
    ctx->pc = 0x18C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C328u;
    // 0x18c32c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18C328u, 0x18C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C330u;
label_18c330:
    // 0x18c330: 0x3c0246fa  lui         $v0, 0x46FA
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18170 << 16));
    // 0x18c334: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x18c334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18c338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c33c: 0x0  nop
    ctx->pc = 0x18c33cu;
    // NOP
    // 0x18c340: 0x461405c3  div.s       $f23, $f0, $f20
    ctx->pc = 0x18c340u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x18c344: 0x0  nop
    ctx->pc = 0x18c344u;
    // NOP
    // 0x18c348: 0x0  nop
    ctx->pc = 0x18c348u;
    // NOP
    // 0x18c34c: 0xc04150c  jal         func_105430
    ctx->pc = 0x18C34Cu;
    SET_GPR_U32(ctx, 31, 0x18C354u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18C34Cu, 0x18C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C354u;
label_18c354:
    // 0x18c354: 0x4617b840  add.s       $f1, $f23, $f23
    ctx->pc = 0x18c354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x18c358: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x18c358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x18c35c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c360: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18c360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18c364: 0x3c02c200  lui         $v0, 0xC200
    ctx->pc = 0x18c364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49664 << 16));
    // 0x18c368: 0x27b00144  addiu       $s0, $sp, 0x144
    ctx->pc = 0x18c368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x18c36c: 0x27b60158  addiu       $s6, $sp, 0x158
    ctx->pc = 0x18c36cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x18c370: 0x3467019a  ori         $a3, $v1, 0x19A
    ctx->pc = 0x18c370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)410);
    // 0x18c374: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18c374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c378: 0x344200cd  ori         $v0, $v0, 0xCD
    ctx->pc = 0x18c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)205);
    // 0x18c37c: 0x27b7016c  addiu       $s7, $sp, 0x16C
    ctx->pc = 0x18c37cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x18c380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c384: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c384u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c388: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18c38c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x18c38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18c390: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x18c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18c394: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x18c394u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x18c398: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x18c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x18c39c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x18c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x18c3a0: 0xc04144e  jal         func_105138
    ctx->pc = 0x18C3A0u;
    SET_GPR_U32(ctx, 31, 0x18C3A8u);
    ctx->pc = 0x18C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3A0u;
    // 0x18c3a4: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18C3A0u, 0x18C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C3A8u;
label_18c3a8:
    // 0x18c3a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x18c3ac: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x18c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x18c3b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c3b4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x18c3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x18c3b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c3bc: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x18c3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x18c3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c3c4: 0x3c06c280  lui         $a2, 0xC280
    ctx->pc = 0x18c3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49792 << 16));
    // 0x18c3c8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x18c3c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x18c3cc: 0x3c05c200  lui         $a1, 0xC200
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49664 << 16));
    // 0x18c3d0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x18c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x18c3d4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x18c3d8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x18c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x18c3dc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18c3dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18c3e0: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x18c3e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c3e4: 0x44877800  mtc1        $a3, $f15
    ctx->pc = 0x18c3e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x18c3e8: 0x44868000  mtc1        $a2, $f16
    ctx->pc = 0x18c3e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x18c3ec: 0x44858800  mtc1        $a1, $f17
    ctx->pc = 0x18c3ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x18c3f0: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x18c3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x18c3f4: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x18c3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x18c3f8: 0xc062e18  jal         func_18B860
    ctx->pc = 0x18C3F8u;
    SET_GPR_U32(ctx, 31, 0x18C400u);
    ctx->pc = 0x18C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C3F8u;
    // 0x18c3fc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B860u, 0x18C3F8u, 0x18C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C400u;
label_18c400:
    // 0x18c400: 0xc04150c  jal         func_105430
    ctx->pc = 0x18C400u;
    SET_GPR_U32(ctx, 31, 0x18C408u);
    ctx->pc = 0x18C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C400u;
    // 0x18c404: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18C400u, 0x18C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C408u;
label_18c408:
    // 0x18c408: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18c40c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18c410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c414: 0x27b400f4  addiu       $s4, $sp, 0xF4
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x18c418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c41c: 0x27b300f8  addiu       $s3, $sp, 0xF8
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x18c420: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18c420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18c424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c428: 0x3c03c380  lui         $v1, 0xC380
    ctx->pc = 0x18c428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50048 << 16));
    // 0x18c42c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x18c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18c430: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x18c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c434: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x18c434u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18c438: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x18c438u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18c43c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x18c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18c440: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x18c440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x18c444: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C444u;
    SET_GPR_U32(ctx, 31, 0x18C44Cu);
    ctx->pc = 0x18C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C444u;
    // 0x18c448: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C444u, 0x18C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C44Cu;
label_18c44c:
    // 0x18c44c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18c450: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x18c454: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c458: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c45c: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x18c45cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x18c460: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18c460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18c464: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c46c: 0x0  nop
    ctx->pc = 0x18c46cu;
    // NOP
    // 0x18c470: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x18c470u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18c474: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C474u;
    SET_GPR_U32(ctx, 31, 0x18C47Cu);
    ctx->pc = 0x18C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C474u;
    // 0x18c478: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C474u, 0x18C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C47Cu;
label_18c47c:
    // 0x18c47c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x18c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x18c480: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x18c484: 0xe6960000  swc1        $f22, 0x0($s4)
    ctx->pc = 0x18c484u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x18c488: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x18c48c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x18c490: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C490u;
    SET_GPR_U32(ctx, 31, 0x18C498u);
    ctx->pc = 0x18C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C490u;
    // 0x18c494: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C490u, 0x18C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C498u;
label_18c498:
    // 0x18c498: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18c49c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18c49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4a0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x18C4A0u;
    SET_GPR_U32(ctx, 31, 0x18C4A8u);
    ctx->pc = 0x18C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4A0u;
    // 0x18c4a4: 0xe6940000  swc1        $f20, 0x0($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x18C4A0u, 0x18C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C4A8u;
label_18c4a8:
    // 0x18c4a8: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x18c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18c4ac: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x18c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x18c4b0: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x18c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18c4b4: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x18c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
    // 0x18c4b8: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x18c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x18c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18c4c0: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x18c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c4c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4c8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x18c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c4cc: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x18c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c4d0: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x18c4d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18c4d4: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x18c4d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x18c4d8: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x18c4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18c4dc: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x18c4dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x18c4e0: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x18c4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x18c4e4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x18c4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x18c4e8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x18c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c4ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x18c4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x18c4f0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x18c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c4f4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x18c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x18c4f8: 0xc04144e  jal         func_105138
    ctx->pc = 0x18C4F8u;
    SET_GPR_U32(ctx, 31, 0x18C500u);
    ctx->pc = 0x18C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C4F8u;
    // 0x18c4fc: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18C4F8u, 0x18C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C500u;
label_18c500:
    // 0x18c500: 0xc04150c  jal         func_105430
    ctx->pc = 0x18C500u;
    SET_GPR_U32(ctx, 31, 0x18C508u);
    ctx->pc = 0x18C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C500u;
    // 0x18c504: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x18C500u, 0x18C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C508u;
label_18c508:
    // 0x18c508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c50c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x18c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x18c510: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x18c510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x18c514: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x18c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x18c518: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18c518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18c51c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18c51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c520: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x18c520u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x18c524: 0xc04144e  jal         func_105138
    ctx->pc = 0x18C524u;
    SET_GPR_U32(ctx, 31, 0x18C52Cu);
    ctx->pc = 0x18C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C524u;
    // 0x18c528: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18C524u, 0x18C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C52Cu;
label_18c52c:
    // 0x18c52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c530: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x18c534: 0xc04144e  jal         func_105138
    ctx->pc = 0x18C534u;
    SET_GPR_U32(ctx, 31, 0x18C53Cu);
    ctx->pc = 0x18C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C534u;
    // 0x18c538: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x18C534u, 0x18C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C53Cu;
label_18c53c:
    // 0x18c53c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18c540: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C540u;
    {
        const bool branch_taken_0x18c540 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C540u;
        // 0x18c544: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c540) {
            ctx->pc = 0x18C554u;
            goto label_18c554;
        }
    }
    ctx->pc = 0x18C548u;
    // 0x18c548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c54c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C54Cu;
    {
        const bool branch_taken_0x18c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C54Cu;
        // 0x18c550: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c54c) {
            ctx->pc = 0x18C56Cu;
            goto label_18c56c;
        }
    }
    ctx->pc = 0x18C554u;
label_18c554:
    // 0x18c554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18c558: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c55c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18c55cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c560: 0x0  nop
    ctx->pc = 0x18c560u;
    // NOP
    // 0x18c564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c568: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18c568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18c56c:
    // 0x18c56c: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x18c56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c570: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18c570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18c574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c578: 0x0  nop
    ctx->pc = 0x18c578u;
    // NOP
    // 0x18c57c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18c57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c580: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18C580u;
    {
        const bool branch_taken_0x18c580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c580) {
            ctx->pc = 0x18C598u;
            goto label_18c598;
        }
    }
    ctx->pc = 0x18C588u;
    // 0x18c588: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c58c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C590u;
    {
        const bool branch_taken_0x18c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C590u;
        // 0x18c594: 0x121a02  srl         $v1, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c590) {
            ctx->pc = 0x18C5B4u;
            goto label_18c5b4;
        }
    }
    ctx->pc = 0x18C598u;
label_18c598:
    // 0x18c598: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18c598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c59c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c5a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c5a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c5a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c5a8: 0x0  nop
    ctx->pc = 0x18c5a8u;
    // NOP
    // 0x18c5ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c5b0: 0x121a02  srl         $v1, $s2, 8
    ctx->pc = 0x18c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
label_18c5b4:
    // 0x18c5b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18c5b8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C5B8u;
    {
        const bool branch_taken_0x18c5b8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B8u;
        // 0x18c5bc: 0xae240040  sw          $a0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b8) {
            ctx->pc = 0x18C5CCu;
            goto label_18c5cc;
        }
    }
    ctx->pc = 0x18C5C0u;
    // 0x18c5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c5c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C5C4u;
    {
        const bool branch_taken_0x18c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C4u;
        // 0x18c5c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c4) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5CCu;
label_18c5cc:
    // 0x18c5cc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x18c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18c5d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18c5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18c5d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c5d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18c5d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c5dc: 0x0  nop
    ctx->pc = 0x18c5dcu;
    // NOP
    // 0x18c5e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c5e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18c5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18c5e8:
    // 0x18c5e8: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x18c5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c5ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18c5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c5f4: 0x0  nop
    ctx->pc = 0x18c5f4u;
    // NOP
    // 0x18c5f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18c5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c5fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18C5FCu;
    {
        const bool branch_taken_0x18c5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c5fc) {
            ctx->pc = 0x18C614u;
            goto label_18c614;
        }
    }
    ctx->pc = 0x18C604u;
    // 0x18c604: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c608: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c60c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C60Cu;
    {
        const bool branch_taken_0x18c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C60Cu;
        // 0x18c610: 0x121c02  srl         $v1, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c60c) {
            ctx->pc = 0x18C630u;
            goto label_18c630;
        }
    }
    ctx->pc = 0x18C614u;
label_18c614:
    // 0x18c614: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18c614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c61c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c620: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c624: 0x0  nop
    ctx->pc = 0x18c624u;
    // NOP
    // 0x18c628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c62c: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x18c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
label_18c630:
    // 0x18c630: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18c634: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C634u;
    {
        const bool branch_taken_0x18c634 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C634u;
        // 0x18c638: 0xae240044  sw          $a0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c634) {
            ctx->pc = 0x18C648u;
            goto label_18c648;
        }
    }
    ctx->pc = 0x18C63Cu;
    // 0x18c63c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C640u;
    {
        const bool branch_taken_0x18c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C640u;
        // 0x18c644: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c640) {
            ctx->pc = 0x18C664u;
            goto label_18c664;
        }
    }
    ctx->pc = 0x18C648u;
label_18c648:
    // 0x18c648: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x18c648u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18c64c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18c64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18c650: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c654: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18c654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c658: 0x0  nop
    ctx->pc = 0x18c658u;
    // NOP
    // 0x18c65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18c660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18c664:
    // 0x18c664: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x18c664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c668: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18c668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18c66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c670: 0x0  nop
    ctx->pc = 0x18c670u;
    // NOP
    // 0x18c674: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18c674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c678: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18C678u;
    {
        const bool branch_taken_0x18c678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c678) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C680u;
    // 0x18c680: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c684: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C688u;
    {
        const bool branch_taken_0x18c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C688u;
        // 0x18c68c: 0x121e02  srl         $v1, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c688) {
            ctx->pc = 0x18C6ACu;
            goto label_18c6ac;
        }
    }
    ctx->pc = 0x18C690u;
label_18c690:
    // 0x18c690: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18c690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c694: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c698: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c69c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c6a0: 0x0  nop
    ctx->pc = 0x18c6a0u;
    // NOP
    // 0x18c6a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c6a8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x18c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
label_18c6ac:
    // 0x18c6ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18c6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18c6b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C6B0u;
    {
        const bool branch_taken_0x18c6b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x18C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6B0u;
        // 0x18c6b4: 0xae240048  sw          $a0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6b0) {
            ctx->pc = 0x18C6C4u;
            goto label_18c6c4;
        }
    }
    ctx->pc = 0x18C6B8u;
    // 0x18c6b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6BCu;
    {
        const bool branch_taken_0x18c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6BCu;
        // 0x18c6c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6bc) {
            ctx->pc = 0x18C6E0u;
            goto label_18c6e0;
        }
    }
    ctx->pc = 0x18C6C4u;
label_18c6c4:
    // 0x18c6c4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x18c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18c6c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18c6cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c6d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18c6d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6d4: 0x0  nop
    ctx->pc = 0x18c6d4u;
    // NOP
    // 0x18c6d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c6d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c6dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18c6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18c6e0:
    // 0x18c6e0: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x18c6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18c6e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18c6e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6ec: 0x0  nop
    ctx->pc = 0x18c6ecu;
    // NOP
    // 0x18c6f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18c6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18C6F4u;
    {
        const bool branch_taken_0x18c6f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c6f4) {
            ctx->pc = 0x18C70Cu;
            goto label_18c70c;
        }
    }
    ctx->pc = 0x18C6FCu;
    // 0x18c6fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c700: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18C704u;
    {
        const bool branch_taken_0x18c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C704u;
        // 0x18c708: 0xae24004c  sw          $a0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c704) {
            ctx->pc = 0x18C728u;
            goto label_18c728;
        }
    }
    ctx->pc = 0x18C70Cu;
label_18c70c:
    // 0x18c70c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18c70cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c710: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18c710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18c714: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18c718: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18c718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18c71c: 0x0  nop
    ctx->pc = 0x18c71cu;
    // NOP
    // 0x18c720: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18c724: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x18c724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
label_18c728:
    // 0x18c728: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18c72c: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x18c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18c730: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18c730u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18c734: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x18c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18c738: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x18c738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18c73c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x18c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c740: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x18c740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c744: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x18c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c748: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18c748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c74c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18c74cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c750: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18c750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c754: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18c758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c75c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C75Cu;
        // 0x18c760: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C764u;
}
