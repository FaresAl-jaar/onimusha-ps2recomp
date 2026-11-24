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

// Function: sub_0017BF70
// Address: 0x17bf70 - 0x17c440
void sub_0017BF70_0x17bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BF70_0x17bf70");
#endif

    switch (ctx->pc) {
        case 0x17bfacu: goto label_17bfac;
        case 0x17c1a8u: goto label_17c1a8;
        case 0x17c2f0u: goto label_17c2f0;
        case 0x17c370u: goto label_17c370;
        case 0x17c388u: goto label_17c388;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c3b4u: goto label_17c3b4;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c408u: goto label_17c408;
        case 0x17c41cu: goto label_17c41c;
        default: break;
    }

    ctx->pc = 0x17bf70u;

    // 0x17bf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17bf74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17bf78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17bf7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17bf80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17bf84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17bf88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17bf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17bf8c: 0x9082001d  lbu         $v0, 0x1D($a0)
    ctx->pc = 0x17bf8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x17bf90: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x17BF90u;
    {
        const bool branch_taken_0x17bf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF90u;
        // 0x17bf94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf90) {
            ctx->pc = 0x17C3A8u;
            goto label_17c3a8;
        }
    }
    ctx->pc = 0x17BF98u;
    // 0x17bf98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf9c: 0x14a200ec  bne         $a1, $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x17BF9Cu;
    {
        const bool branch_taken_0x17bf9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x17bf9c) {
            ctx->pc = 0x17C350u;
            goto label_17c350;
        }
    }
    ctx->pc = 0x17BFA4u;
    // 0x17bfa4: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17BFA4u;
    SET_GPR_U32(ctx, 31, 0x17BFACu);
    ctx->pc = 0x17BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFA4u;
    // 0x17bfa8: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17BFA4u, 0x17BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFACu;
label_17bfac:
    // 0x17bfac: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x17bfacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17bfb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BFB0u;
    {
        const bool branch_taken_0x17bfb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bfb0) {
            ctx->pc = 0x17BFC8u;
            goto label_17bfc8;
        }
    }
    ctx->pc = 0x17BFB8u;
    // 0x17bfb8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17bfbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17bfc0: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x17bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x17bfc4: 0x0  nop
    ctx->pc = 0x17bfc4u;
    // NOP
label_17bfc8:
    // 0x17bfc8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x17bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17bfcc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17bfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17bfd0: 0x9e640024  lwu         $a0, 0x24($s3)
    ctx->pc = 0x17bfd0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x17bfd4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17bfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17bfd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17bfdc: 0x8cb0007c  lw          $s0, 0x7C($a1)
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x17bfe0: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x17BFE0u;
    {
        const bool branch_taken_0x17bfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFE0u;
        // 0x17bfe4: 0x8e710014  lw          $s1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfe0) {
            ctx->pc = 0x17C188u;
            goto label_17c188;
        }
    }
    ctx->pc = 0x17BFE8u;
    // 0x17bfe8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17bfec: 0x96240010  lhu         $a0, 0x10($s1)
    ctx->pc = 0x17bfecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17bff0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x17bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x17bff4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x17bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x17bff8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17bffc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c000: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x17c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x17c004: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17C004u;
    {
        const bool branch_taken_0x17c004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c004) {
            ctx->pc = 0x17C050u;
            goto label_17c050;
        }
    }
    ctx->pc = 0x17C00Cu;
    // 0x17c00c: 0x80650002  lb          $a1, 0x2($v1)
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c010: 0x3c043c00  lui         $a0, 0x3C00
    ctx->pc = 0x17c010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15360 << 16));
    // 0x17c014: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17c014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c018: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c01c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c01cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c020: 0x0  nop
    ctx->pc = 0x17c020u;
    // NOP
    // 0x17c024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c02c: 0xe420d270  swc1        $f0, -0x2D90($at)
    ctx->pc = 0x17c02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x40D270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D270u, _value); } while (0); }
    // 0x17c030: 0x80630003  lb          $v1, 0x3($v1)
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x17c034: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c03c: 0x0  nop
    ctx->pc = 0x17c03cu;
    // NOP
    // 0x17c040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c044: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c048: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x17C048u;
    {
        const bool branch_taken_0x17c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C048u;
        // 0x17c04c: 0xe420d274  swc1        $f0, -0x2D8C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294955636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c048) {
            ctx->pc = 0x17C178u;
            goto label_17c178;
        }
    }
    ctx->pc = 0x17C050u;
label_17c050:
    // 0x17c050: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x17c050u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17c054: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x17c054u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17c058: 0x14890015  bne         $a0, $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x17C058u;
    {
        const bool branch_taken_0x17c058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x17C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C058u;
        // 0x17c05c: 0x3c043c00  lui         $a0, 0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15360 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c058) {
            ctx->pc = 0x17C0B0u;
            goto label_17c0b0;
        }
    }
    ctx->pc = 0x17C060u;
    // 0x17c060: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c064: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17c064u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c068: 0xae650030  sw          $a1, 0x30($s3)
    ctx->pc = 0x17c068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 5));
    // 0x17c06c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x17c070: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c074: 0x80640002  lb          $a0, 0x2($v1)
    ctx->pc = 0x17c074u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c07c: 0x0  nop
    ctx->pc = 0x17c07cu;
    // NOP
    // 0x17c080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c084: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c088: 0xe420d270  swc1        $f0, -0x2D90($at)
    ctx->pc = 0x17c088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x40D270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D270u, _value); } while (0); }
    // 0x17c08c: 0x80630003  lb          $v1, 0x3($v1)
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x17c090: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c098: 0x0  nop
    ctx->pc = 0x17c098u;
    // NOP
    // 0x17c09c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c0a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c0a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17C0A4u;
    {
        const bool branch_taken_0x17c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0A4u;
        // 0x17c0a8: 0xe420d274  swc1        $f0, -0x2D8C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294955636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0a4) {
            ctx->pc = 0x17C178u;
            goto label_17c178;
        }
    }
    ctx->pc = 0x17C0ACu;
    // 0x17c0ac: 0x0  nop
    ctx->pc = 0x17c0acu;
    // NOP
label_17c0b0:
    // 0x17c0b0: 0x80680002  lb          $t0, 0x2($v1)
    ctx->pc = 0x17c0b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c0b4: 0x80670003  lb          $a3, 0x3($v1)
    ctx->pc = 0x17c0b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x17c0b8: 0x3c043c00  lui         $a0, 0x3C00
    ctx->pc = 0x17c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15360 << 16));
    // 0x17c0bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x17c0bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c0c0: 0x80660006  lb          $a2, 0x6($v1)
    ctx->pc = 0x17c0c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x17c0c4: 0x80650007  lb          $a1, 0x7($v1)
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x17c0c8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x17c0c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c0cc: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x17c0ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c0d0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17c0d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c0d4: 0x0  nop
    ctx->pc = 0x17c0d4u;
    // NOP
    // 0x17c0d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c0dc: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x17c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17c0e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c0e4: 0x46011142  mul.s       $f5, $f2, $f1
    ctx->pc = 0x17c0e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c0e8: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x17c0e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c0ec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x17c0ecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c0f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c0f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c0f4: 0x0  nop
    ctx->pc = 0x17c0f4u;
    // NOP
    // 0x17c0f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c0fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c100: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17c100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c104: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C104u;
    {
        const bool branch_taken_0x17c104 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C104u;
        // 0x17c108: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c104) {
            ctx->pc = 0x17C118u;
            goto label_17c118;
        }
    }
    ctx->pc = 0x17C10Cu;
    // 0x17c10c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c10cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C110u;
    {
        const bool branch_taken_0x17c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C110u;
        // 0x17c114: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c110) {
            ctx->pc = 0x17C134u;
            goto label_17c134;
        }
    }
    ctx->pc = 0x17C118u;
label_17c118:
    // 0x17c118: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x17c11c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17c11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17c120: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x17c120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17c124: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c124u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c128: 0x0  nop
    ctx->pc = 0x17c128u;
    // NOP
    // 0x17c12c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x17c12cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17c130: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x17c130u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_17c134:
    // 0x17c134: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x17c134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17c138: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x17c138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x17c13c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c140: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x17c140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x17c144: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x17c144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c148: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x17c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17c14c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17c14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c150: 0x0  nop
    ctx->pc = 0x17c150u;
    // NOP
    // 0x17c154: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c158: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x17c158u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x17c15c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17c15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c160: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17c160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c164: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x17c164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x17c168: 0xe421d270  swc1        $f1, -0x2D90($at)
    ctx->pc = 0x17c168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294955632), bits); }
    // 0x17c16c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x17c16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x17c170: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x17c170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x17c174: 0xe420d274  swc1        $f0, -0x2D8C($at)
    ctx->pc = 0x17c174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x40D274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D274u, _value); } while (0); }
label_17c178:
    // 0x17c178: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x17c17c: 0x2463d270  addiu       $v1, $v1, -0x2D90
    ctx->pc = 0x17c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955632));
    // 0x17c180: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17c180u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40D270u));
    // 0x17c184: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x17c184u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_17c188:
    // 0x17c188: 0x9e640020  lwu         $a0, 0x20($s3)
    ctx->pc = 0x17c188u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17c18c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17c190: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x17c194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x17c194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x17c198: 0x108300a1  beq         $a0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x17C198u;
    {
        const bool branch_taken_0x17c198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C198u;
        // 0x17c19c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c198) {
            ctx->pc = 0x17C420u;
            goto label_17c420;
        }
    }
    ctx->pc = 0x17C1A0u;
    // 0x17c1a0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x17C1A0u;
    {
        const bool branch_taken_0x17c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c1a0) {
            ctx->pc = 0x17C338u;
            goto label_17c338;
        }
    }
    ctx->pc = 0x17C1A8u;
label_17c1a8:
    // 0x17c1a8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x17c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17c1ac: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17c1b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c1b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c1b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17c1bc: 0x946300dc  lhu         $v1, 0xDC($v1)
    ctx->pc = 0x17c1bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x17c1c0: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x17c1c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17c1c4: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x17C1C4u;
    {
        const bool branch_taken_0x17c1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c1c4) {
            ctx->pc = 0x17C420u;
            goto label_17c420;
        }
    }
    ctx->pc = 0x17C1CCu;
    // 0x17c1cc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x17c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x17c1d0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17c1d4: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x17c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17c1d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17c1dc: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x17c1e0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17c1e4: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x17c1e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x17c1e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17c1ec: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x17c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17c1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c1f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c1f8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17c1fc: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17C1FCu;
    {
        const bool branch_taken_0x17c1fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x17c1fc) {
            ctx->pc = 0x17C228u;
            goto label_17c228;
        }
    }
    ctx->pc = 0x17C204u;
    // 0x17c204: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x17c208: 0x3c023980  lui         $v0, 0x3980
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14720 << 16));
    // 0x17c20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17c210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c214: 0x0  nop
    ctx->pc = 0x17c214u;
    // NOP
    // 0x17c218: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c21c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x17C21Cu;
    {
        const bool branch_taken_0x17c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C21Cu;
        // 0x17c220: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c21c) {
            ctx->pc = 0x17C2E8u;
            goto label_17c2e8;
        }
    }
    ctx->pc = 0x17C224u;
    // 0x17c224: 0x0  nop
    ctx->pc = 0x17c224u;
    // NOP
label_17c228:
    // 0x17c228: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x17c228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17c22c: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x17c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17c230: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x17C230u;
    {
        const bool branch_taken_0x17c230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C230u;
        // 0x17c234: 0x3c023980  lui         $v0, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14720 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c230) {
            ctx->pc = 0x17C260u;
            goto label_17c260;
        }
    }
    ctx->pc = 0x17C238u;
    // 0x17c238: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x17c238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17c23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c240: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x17c240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x17c244: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x17c244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x17c248: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x17c248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x17c24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c250: 0x0  nop
    ctx->pc = 0x17c250u;
    // NOP
    // 0x17c254: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c258: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17C258u;
    {
        const bool branch_taken_0x17c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C258u;
        // 0x17c25c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c258) {
            ctx->pc = 0x17C2E8u;
            goto label_17c2e8;
        }
    }
    ctx->pc = 0x17C260u;
label_17c260:
    // 0x17c260: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x17c260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x17c264: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x17c268: 0x3c023980  lui         $v0, 0x3980
    ctx->pc = 0x17c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14720 << 16));
    // 0x17c26c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c270: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x17c270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17c274: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x17c274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c27c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c280: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x17c280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c288: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x17c288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17c28c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C28Cu;
    {
        const bool branch_taken_0x17c28c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x17C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C28Cu;
        // 0x17c290: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c28c) {
            ctx->pc = 0x17C2A0u;
            goto label_17c2a0;
        }
    }
    ctx->pc = 0x17C294u;
    // 0x17c294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C298u;
    {
        const bool branch_taken_0x17c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C298u;
        // 0x17c29c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c298) {
            ctx->pc = 0x17C2BCu;
            goto label_17c2bc;
        }
    }
    ctx->pc = 0x17C2A0u;
label_17c2a0:
    // 0x17c2a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17c2a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17c2a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17c2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17c2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c2b0: 0x0  nop
    ctx->pc = 0x17c2b0u;
    // NOP
    // 0x17c2b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x17c2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c2b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17c2b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17c2bc:
    // 0x17c2bc: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x17c2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17c2c0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x17c2c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x17c2c4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x17c2c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17c2c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17c2cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c2d0: 0x0  nop
    ctx->pc = 0x17c2d0u;
    // NOP
    // 0x17c2d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c2d8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17c2d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17c2dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c2e0: 0x46001d00  add.s       $f20, $f3, $f0
    ctx->pc = 0x17c2e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x17c2e4: 0x0  nop
    ctx->pc = 0x17c2e4u;
    // NOP
label_17c2e8:
    // 0x17c2e8: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x17C2E8u;
    SET_GPR_U32(ctx, 31, 0x17C2F0u);
    ctx->pc = 0x17C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C2E8u;
    // 0x17c2ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x17C2E8u, 0x17C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2F0u;
label_17c2f0:
    // 0x17c2f0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17c2f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17c2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17c2f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17c2f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c2fc: 0x0  nop
    ctx->pc = 0x17c2fcu;
    // NOP
    // 0x17c300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c304: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17C304u;
    {
        const bool branch_taken_0x17c304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c304) {
            ctx->pc = 0x17C310u;
            goto label_17c310;
        }
    }
    ctx->pc = 0x17C30Cu;
    // 0x17c30c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17c30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17c310:
    // 0x17c310: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17c314: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17c318: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17c31c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17c320: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17c324: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c328: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17c32c: 0x8c6300e4  lw          $v1, 0xE4($v1)
    ctx->pc = 0x17c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x17c330: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c334: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x17c334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_17c338:
    // 0x17c338: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x17c338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c33c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x17c33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17c340: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x17C340u;
    {
        const bool branch_taken_0x17c340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c340) {
            ctx->pc = 0x17C1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c1a8;
        }
    }
    ctx->pc = 0x17C348u;
    // 0x17c348: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x17C348u;
    {
        const bool branch_taken_0x17c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c348) {
            ctx->pc = 0x17C420u;
            goto label_17c420;
        }
    }
    ctx->pc = 0x17C350u;
label_17c350:
    // 0x17c350: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17c354: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x17c354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17c358: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C358u;
    {
        const bool branch_taken_0x17c358 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x17c358) {
            ctx->pc = 0x17C368u;
            goto label_17c368;
        }
    }
    ctx->pc = 0x17C360u;
    // 0x17c360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c364: 0x0  nop
    ctx->pc = 0x17c364u;
    // NOP
label_17c368:
    // 0x17c368: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17C368u;
    SET_GPR_U32(ctx, 31, 0x17C370u);
    ctx->pc = 0x17C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C368u;
    // 0x17c36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17C368u, 0x17C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C370u;
label_17c370:
    // 0x17c370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c374: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17c374u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17c378: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C378u;
    {
        const bool branch_taken_0x17c378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C378u;
        // 0x17c37c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c378) {
            ctx->pc = 0x17C390u;
            goto label_17c390;
        }
    }
    ctx->pc = 0x17C380u;
    // 0x17c380: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17C380u;
    SET_GPR_U32(ctx, 31, 0x17C388u);
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17C380u, 0x17C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C388u;
label_17c388:
    // 0x17c388: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x17c388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c38c: 0x0  nop
    ctx->pc = 0x17c38cu;
    // NOP
label_17c390:
    // 0x17c390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c394: 0xc05f110  jal         func_17C440
    ctx->pc = 0x17C394u;
    SET_GPR_U32(ctx, 31, 0x17C39Cu);
    ctx->pc = 0x17C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C394u;
    // 0x17c398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C440u, 0x17C394u, 0x17C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17C39Cu;
    {
        const bool branch_taken_0x17c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c39c) {
            ctx->pc = 0x17C420u;
            goto label_17c420;
        }
    }
    ctx->pc = 0x17C3A4u;
    // 0x17c3a4: 0x0  nop
    ctx->pc = 0x17c3a4u;
    // NOP
label_17c3a8:
    // 0x17c3a8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x17c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x17c3ac: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17C3ACu;
    SET_GPR_U32(ctx, 31, 0x17C3B4u);
    ctx->pc = 0x17C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3ACu;
    // 0x17c3b0: 0x458021  addu        $s0, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17C3ACu, 0x17C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3B4u;
label_17c3b4:
    // 0x17c3b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c3b8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x17c3b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17c3bc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x17C3BCu;
    {
        const bool branch_taken_0x17c3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c3bc) {
            ctx->pc = 0x17C410u;
            goto label_17c410;
        }
    }
    ctx->pc = 0x17C3C4u;
    // 0x17c3c4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x17c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17c3c8: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x17c3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x17c3cc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17c3d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17c3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c3dc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c3e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c3e4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x17c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x17c3e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C3E8u;
    {
        const bool branch_taken_0x17c3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3E8u;
        // 0x17c3ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3e8) {
            ctx->pc = 0x17C400u;
            goto label_17c400;
        }
    }
    ctx->pc = 0x17C3F0u;
    // 0x17c3f0: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17C3F0u;
    SET_GPR_U32(ctx, 31, 0x17C3F8u);
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17C3F0u, 0x17C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F8u;
label_17c3f8:
    // 0x17c3f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17C3F8u;
    {
        const bool branch_taken_0x17c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3F8u;
        // 0x17c3fc: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3f8) {
            ctx->pc = 0x17C410u;
            goto label_17c410;
        }
    }
    ctx->pc = 0x17C400u;
label_17c400:
    // 0x17c400: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17C400u;
    SET_GPR_U32(ctx, 31, 0x17C408u);
    ctx->pc = 0x17C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C400u;
    // 0x17c404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17C400u, 0x17C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C408u;
label_17c408:
    // 0x17c408: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x17c408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c40c: 0x0  nop
    ctx->pc = 0x17c40cu;
    // NOP
label_17c410:
    // 0x17c410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c414: 0xc05f110  jal         func_17C440
    ctx->pc = 0x17C414u;
    SET_GPR_U32(ctx, 31, 0x17C41Cu);
    ctx->pc = 0x17C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C414u;
    // 0x17c418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C440u, 0x17C414u, 0x17C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C41Cu;
label_17c41c:
    // 0x17c41c: 0x0  nop
    ctx->pc = 0x17c41cu;
    // NOP
label_17c420:
    // 0x17c420: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c424: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17c424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c428: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c42c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c438: 0x3e00008  jr          $ra
    ctx->pc = 0x17C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C438u;
        // 0x17c43c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C440u;
}
