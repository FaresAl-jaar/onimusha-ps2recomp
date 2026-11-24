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

// Function: sub_0016B0E0
// Address: 0x16b0e0 - 0x16bd18
void sub_0016B0E0_0x16b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B0E0_0x16b0e0");
#endif

    switch (ctx->pc) {
        case 0x16b340u: goto label_16b340;
        case 0x16b358u: goto label_16b358;
        case 0x16b3c0u: goto label_16b3c0;
        case 0x16b464u: goto label_16b464;
        case 0x16b520u: goto label_16b520;
        case 0x16b53cu: goto label_16b53c;
        case 0x16b5b4u: goto label_16b5b4;
        case 0x16b5d4u: goto label_16b5d4;
        case 0x16b64cu: goto label_16b64c;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b948u: goto label_16b948;
        case 0x16b9ecu: goto label_16b9ec;
        case 0x16ba0cu: goto label_16ba0c;
        case 0x16ba54u: goto label_16ba54;
        case 0x16bc8cu: goto label_16bc8c;
        default: break;
    }

    ctx->pc = 0x16b0e0u;

    // 0x16b0e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x16b0e4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x16b0e8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x16b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x16b0ec: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x16b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x16b0f0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x16b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x16b0f4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x16b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x16b0f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x16b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x16b0fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x16b100: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16b104: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16b108: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b10c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x16b10cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x16b110: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x16b110u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16b114: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x16b114u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x16b118: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x16b118u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16b11c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x16b11cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x16b120: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x16b120u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16b124: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x16b124u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16b128: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16b128u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16b12c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16b12cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16b130: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16b130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16b134: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16b134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16b138: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b13c: 0x8c960034  lw          $s6, 0x34($a0)
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16b140: 0x92d3000a  lbu         $s3, 0xA($s6)
    ctx->pc = 0x16b140u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x16b144: 0x126002dc  beqz        $s3, . + 4 + (0x2DC << 2)
    ctx->pc = 0x16B144u;
    {
        const bool branch_taken_0x16b144 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B144u;
        // 0x16b148: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b144) {
            ctx->pc = 0x16BCB8u;
            goto label_16bcb8;
        }
    }
    ctx->pc = 0x16B14Cu;
    // 0x16b14c: 0x8ea70018  lw          $a3, 0x18($s5)
    ctx->pc = 0x16b14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x16b150: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x16b154: 0x96a40028  lhu         $a0, 0x28($s5)
    ctx->pc = 0x16b154u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x16b158: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x16b158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16b15c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x16b15cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b160: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x16b160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16b164: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x16b164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b168: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x16b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16b16c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16b170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b174: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B174u;
    {
        const bool branch_taken_0x16b174 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x16B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B174u;
        // 0x16b178: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b174) {
            ctx->pc = 0x16B188u;
            goto label_16b188;
        }
    }
    ctx->pc = 0x16B17Cu;
    // 0x16b17c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b17cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B180u;
    {
        const bool branch_taken_0x16b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B180u;
        // 0x16b184: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b180) {
            ctx->pc = 0x16B1A4u;
            goto label_16b1a4;
        }
    }
    ctx->pc = 0x16B188u;
label_16b188:
    // 0x16b188: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x16b188u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x16b18c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x16b18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16b190: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16b194: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16b194u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b198: 0x0  nop
    ctx->pc = 0x16b198u;
    // NOP
    // 0x16b19c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x16b19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x16b1a0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x16b1a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_16b1a4:
    // 0x16b1a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b1a8: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x16b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16b1ac: 0xc4210340  lwc1        $f1, 0x340($at)
    ctx->pc = 0x16b1acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b1b0: 0x3c043d80  lui         $a0, 0x3D80
    ctx->pc = 0x16b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15744 << 16));
    // 0x16b1b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x16b1b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16b1b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16b1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1bc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x16b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x16b1c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x16b1c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16b1c4: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x16b1c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16b1c8: 0x90a7000b  lbu         $a3, 0xB($a1)
    ctx->pc = 0x16b1c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x16b1cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b1d0: 0xc4200354  lwc1        $f0, 0x354($at)
    ctx->pc = 0x16b1d0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b1d4: 0x46020fc2  mul.s       $f31, $f1, $f2
    ctx->pc = 0x16b1d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16b1d8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16b1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16b1dc: 0x90a5000c  lbu         $a1, 0xC($a1)
    ctx->pc = 0x16b1dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16b1e0: 0xe83804  sllv        $a3, $t0, $a3
    ctx->pc = 0x16b1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x16b1e4: 0x46020782  mul.s       $f30, $f0, $f2
    ctx->pc = 0x16b1e4u;
    ctx->f[30] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16b1e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x16b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16b1ec: 0xa82804  sllv        $a1, $t0, $a1
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x16b1f0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x16b1f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b1f4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x16b1f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b1f8: 0x0  nop
    ctx->pc = 0x16b1f8u;
    // NOP
    // 0x16b1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b200: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x16b200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16b204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16b204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b208: 0x0  nop
    ctx->pc = 0x16b208u;
    // NOP
    // 0x16b20c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b210: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x16b210u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16b214: 0x0  nop
    ctx->pc = 0x16b214u;
    // NOP
    // 0x16b218: 0x0  nop
    ctx->pc = 0x16b218u;
    // NOP
    // 0x16b21c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B21Cu;
    {
        const bool branch_taken_0x16b21c = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x16b21c) {
            ctx->pc = 0x16B230u;
            goto label_16b230;
        }
    }
    ctx->pc = 0x16B224u;
    // 0x16b224: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b224u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B228u;
    {
        const bool branch_taken_0x16b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B228u;
        // 0x16b22c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b228) {
            ctx->pc = 0x16B24Cu;
            goto label_16b24c;
        }
    }
    ctx->pc = 0x16B230u;
label_16b230:
    // 0x16b230: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x16b234: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x16b234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16b238: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x16b238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16b23c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16b23cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b240: 0x0  nop
    ctx->pc = 0x16b240u;
    // NOP
    // 0x16b244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b248: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b24c:
    // 0x16b24c: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x16b24cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16b250: 0x46150682  mul.s       $f26, $f0, $f21
    ctx->pc = 0x16b250u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16b254: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x16b254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16b258: 0x94650006  lhu         $a1, 0x6($v1)
    ctx->pc = 0x16b258u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16b25c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16b260: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b260u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b264: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x16b264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x16b268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b26c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16b270: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x16b270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16b274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b278: 0x0  nop
    ctx->pc = 0x16b278u;
    // NOP
    // 0x16b27c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b280: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B280u;
    {
        const bool branch_taken_0x16b280 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x16B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B280u;
        // 0x16b284: 0x4600a5c2  mul.s       $f23, $f20, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b280) {
            ctx->pc = 0x16B294u;
            goto label_16b294;
        }
    }
    ctx->pc = 0x16B288u;
    // 0x16b288: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16b288u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b28c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B28Cu;
    {
        const bool branch_taken_0x16b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B28Cu;
        // 0x16b290: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b28c) {
            ctx->pc = 0x16B2B0u;
            goto label_16b2b0;
        }
    }
    ctx->pc = 0x16B294u;
label_16b294:
    // 0x16b294: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x16b298: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x16b298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x16b29c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16b29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16b2a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b2a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2a4: 0x0  nop
    ctx->pc = 0x16b2a4u;
    // NOP
    // 0x16b2a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b2ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b2acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b2b0:
    // 0x16b2b0: 0x46140582  mul.s       $f22, $f0, $f20
    ctx->pc = 0x16b2b0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16b2b4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x16b2b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x16b2bc: 0x461a0841  sub.s       $f1, $f1, $f26
    ctx->pc = 0x16b2bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x16b2c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2c4: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B2C4u;
    {
        const bool branch_taken_0x16b2c4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x16B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2C4u;
        // 0x16b2c8: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2c4) {
            ctx->pc = 0x16B2D8u;
            goto label_16b2d8;
        }
    }
    ctx->pc = 0x16B2CCu;
    // 0x16b2cc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x16b2ccu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B2D0u;
    {
        const bool branch_taken_0x16b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2D0u;
        // 0x16b2d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2d0) {
            ctx->pc = 0x16B2F4u;
            goto label_16b2f4;
        }
    }
    ctx->pc = 0x16B2D8u;
label_16b2d8:
    // 0x16b2d8: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x16b2dc: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x16b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x16b2e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16b2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16b2e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b2e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2e8: 0x0  nop
    ctx->pc = 0x16b2e8u;
    // NOP
    // 0x16b2ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b2f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b2f4:
    // 0x16b2f4: 0x0  nop
    ctx->pc = 0x16b2f4u;
    // NOP
    // 0x16b2f8: 0x0  nop
    ctx->pc = 0x16b2f8u;
    // NOP
    // 0x16b2fc: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x16b2fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16b300: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x16b300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x16b304: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x16b304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16b308: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16b308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16b30c: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16b310: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16b310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b314: 0x5923c  dsll32      $s2, $a1, 8
    ctx->pc = 0x16b314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 8));
    // 0x16b318: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x16b318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x16b31c: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x16b31cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x16b320: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16b324: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16b328: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x16b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x16b32c: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x16b32cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b330: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x16b330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x16b334: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x16B334u;
    {
        const bool branch_taken_0x16b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B334u;
        // 0x16b338: 0x4600df06  mov.s       $f28, $f27 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b334) {
            ctx->pc = 0x16BC98u;
            goto label_16bc98;
        }
    }
    ctx->pc = 0x16B33Cu;
    // 0x16b33c: 0x0  nop
    ctx->pc = 0x16b33cu;
    // NOP
label_16b340:
    // 0x16b340: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B340u;
    {
        const bool branch_taken_0x16b340 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b340) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B348u;
    // 0x16b348: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x16b348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x16b34c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b350: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16B350u;
    SET_GPR_U32(ctx, 31, 0x16B358u);
    ctx->pc = 0x16B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B350u;
    // 0x16b354: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16B350u, 0x16B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B358u;
label_16b358:
    // 0x16b358: 0x92b70023  lbu         $s7, 0x23($s5)
    ctx->pc = 0x16b358u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16b35c: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x16b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x16b360: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16b360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16b364: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x16b364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x16b368: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16b368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b36c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x16b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x16b370: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x16b370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16b374: 0x4600d606  mov.s       $f24, $f26
    ctx->pc = 0x16b374u;
    ctx->f[24] = FPU_MOV_S(ctx->f[26]);
    // 0x16b378: 0x2e41018  mult        $v0, $s7, $a0
    ctx->pc = 0x16b378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b37c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b380: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x16b380u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b384: 0x0  nop
    ctx->pc = 0x16b384u;
    // NOP
    // 0x16b388: 0x0  nop
    ctx->pc = 0x16b388u;
    // NOP
    // 0x16b38c: 0x1012  mflo        $v0
    ctx->pc = 0x16b38cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16b390: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x16B390u;
    {
        const bool branch_taken_0x16b390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B390u;
        // 0x16b394: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b390) {
            ctx->pc = 0x16B508u;
            goto label_16b508;
        }
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x16b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x16b39c: 0x1682002a  bne         $s4, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16B39Cu;
    {
        const bool branch_taken_0x16b39c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b39c) {
            ctx->pc = 0x16B448u;
            goto label_16b448;
        }
    }
    ctx->pc = 0x16B3A4u;
    // 0x16b3a4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x16b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x16b3a8: 0x2682fffe  addiu       $v0, $s4, -0x2
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x16b3ac: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x16b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16b3b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b3b4: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x16b3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16b3b8: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16B3B8u;
    SET_GPR_U32(ctx, 31, 0x16B3C0u);
    ctx->pc = 0x16B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3B8u;
    // 0x16b3bc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16B3B8u, 0x16B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3C0u;
label_16b3c0:
    // 0x16b3c0: 0x92a50023  lbu         $a1, 0x23($s5)
    ctx->pc = 0x16b3c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16b3c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16b3c8: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x16b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x16b3cc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16b3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b3d0: 0x2742023  subu        $a0, $s3, $s4
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x16b3d4: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x16b3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16b3d8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x16b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x16b3dc: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x16b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x16b3e0: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16b3e4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x16b3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16b3e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16b3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b3f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b3f4: 0x70541018  mult1       $v0, $v0, $s4
    ctx->pc = 0x16b3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b3f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b3fc: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x16b3fcu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b400: 0x0  nop
    ctx->pc = 0x16b400u;
    // NOP
    // 0x16b404: 0x0  nop
    ctx->pc = 0x16b404u;
    // NOP
    // 0x16b408: 0xb812  mflo        $s7
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x16b40c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B40Cu;
    {
        const bool branch_taken_0x16b40c = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x16B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B40Cu;
        // 0x16b410: 0x46190042  mul.s       $f1, $f0, $f25 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b40c) {
            ctx->pc = 0x16B420u;
            goto label_16b420;
        }
    }
    ctx->pc = 0x16B414u;
    // 0x16b414: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x16b414u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B418u;
    {
        const bool branch_taken_0x16b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B418u;
        // 0x16b41c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b418) {
            ctx->pc = 0x16B43Cu;
            goto label_16b43c;
        }
    }
    ctx->pc = 0x16B420u;
label_16b420:
    // 0x16b420: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x16b424: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x16b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x16b428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16b42c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b430: 0x0  nop
    ctx->pc = 0x16b430u;
    // NOP
    // 0x16b434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b438: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b43c:
    // 0x16b43c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16b43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16b440: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16B440u;
    {
        const bool branch_taken_0x16b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B440u;
        // 0x16b444: 0x4600d600  add.s       $f24, $f26, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b440) {
            ctx->pc = 0x16B508u;
            goto label_16b508;
        }
    }
    ctx->pc = 0x16B448u;
label_16b448:
    // 0x16b448: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x16b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x16b44c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x16b450: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x16b450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16b454: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b458: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x16b458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16b45c: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16B45Cu;
    SET_GPR_U32(ctx, 31, 0x16B464u);
    ctx->pc = 0x16B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B45Cu;
    // 0x16b460: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16B45Cu, 0x16B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B464u;
label_16b464:
    // 0x16b464: 0x92a80023  lbu         $t0, 0x23($s5)
    ctx->pc = 0x16b464u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16b468: 0x2743823  subu        $a3, $s3, $s4
    ctx->pc = 0x16b468u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x16b46c: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x16b470: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x16b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16b474: 0x34437efa  ori         $v1, $v0, 0x7EFA
    ctx->pc = 0x16b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16b478: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x16b478u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x16b47c: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x16b47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16b480: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x16b484: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16b488: 0x2652023  subu        $a0, $s3, $a1
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x16b48c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16b48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b490: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x16b490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x16b494: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16b498: 0x70d41818  mult1       $v1, $a2, $s4
    ctx->pc = 0x16b498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16b49c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b4a0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b4a4: 0x70c51018  mult1       $v0, $a2, $a1
    ctx->pc = 0x16b4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b4a8: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x16b4a8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x16b4ac: 0x46190042  mul.s       $f1, $f0, $f25
    ctx->pc = 0x16b4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x16b4b0: 0x0  nop
    ctx->pc = 0x16b4b0u;
    // NOP
    // 0x16b4b4: 0xb812  mflo        $s7
    ctx->pc = 0x16b4b4u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x16b4b8: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x16b4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16b4bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b4c0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x16b4c0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b4c4: 0x0  nop
    ctx->pc = 0x16b4c4u;
    // NOP
    // 0x16b4c8: 0x0  nop
    ctx->pc = 0x16b4c8u;
    // NOP
    // 0x16b4cc: 0x1012  mflo        $v0
    ctx->pc = 0x16b4ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16b4d0: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B4D0u;
    {
        const bool branch_taken_0x16b4d0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x16B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4D0u;
        // 0x16b4d4: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4d0) {
            ctx->pc = 0x16B4E4u;
            goto label_16b4e4;
        }
    }
    ctx->pc = 0x16B4D8u;
    // 0x16b4d8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x16b4d8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b4dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B4DCu;
    {
        const bool branch_taken_0x16b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4DCu;
        // 0x16b4e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4dc) {
            ctx->pc = 0x16B500u;
            goto label_16b500;
        }
    }
    ctx->pc = 0x16B4E4u;
label_16b4e4:
    // 0x16b4e4: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x16b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x16b4e8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x16b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x16b4ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16b4f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b4f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b4f4: 0x0  nop
    ctx->pc = 0x16b4f4u;
    // NOP
    // 0x16b4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16b4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b500:
    // 0x16b500: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16b500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16b504: 0x4600d600  add.s       $f24, $f26, $f0
    ctx->pc = 0x16b504u;
    ctx->f[24] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_16b508:
    // 0x16b508: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16b50c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B50Cu;
    {
        const bool branch_taken_0x16b50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B50Cu;
        // 0x16b510: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b50c) {
            ctx->pc = 0x16B550u;
            goto label_16b550;
        }
    }
    ctx->pc = 0x16B514u;
    // 0x16b514: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16b514u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16b518: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16B518u;
    SET_GPR_U32(ctx, 31, 0x16B520u);
    ctx->pc = 0x16B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B518u;
    // 0x16b51c: 0x34850040  ori         $a1, $a0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16B518u, 0x16B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B520u;
label_16b520:
    // 0x16b520: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x16b520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b524: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16b528: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16b52c: 0x34a40100  ori         $a0, $a1, 0x100
    ctx->pc = 0x16b52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x16b530: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16b530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16b534: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16B534u;
    SET_GPR_U32(ctx, 31, 0x16B53Cu);
    ctx->pc = 0x16B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B534u;
    // 0x16b538: 0x34a702a0  ori         $a3, $a1, 0x2A0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16B534u, 0x16B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B53Cu;
label_16b53c:
    // 0x16b53c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16B590u;
            goto label_16b590;
        }
    }
    ctx->pc = 0x16B544u;
    // 0x16b544: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x16B544u;
    {
        const bool branch_taken_0x16b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B544u;
        // 0x16b548: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b544) {
            ctx->pc = 0x16BC90u;
            goto label_16bc90;
        }
    }
    ctx->pc = 0x16B54Cu;
    // 0x16b54c: 0x0  nop
    ctx->pc = 0x16b54cu;
    // NOP
label_16b550:
    // 0x16b550: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b554: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b554u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b558: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16b558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16b55c: 0x34820010  ori         $v0, $a0, 0x10
    ctx->pc = 0x16b55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x16b560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b564: 0xe42002a0  swc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700002A0u, bits); }
    // 0x16b568: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x16b568u;
    SET_GPR_VEC(ctx, 5, runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16b56c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16b570: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16b570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16b574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b578: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x16b578u;
    runtime->Store128(rdram, ctx, 0x70000000u, GPR_VEC(ctx, 5));
    // 0x16b57c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b580: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x16b580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16b584: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16b584u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x16b588: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16b588u;
    runtime->Store128(rdram, ctx, 0x70000100u, GPR_VEC(ctx, 2));
    // 0x16b58c: 0x0  nop
    ctx->pc = 0x16b58cu;
    // NOP
label_16b590:
    // 0x16b590: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x16b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x16b594: 0x34436595  ori         $v1, $v0, 0x6595
    ctx->pc = 0x16b594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26005);
    // 0x16b598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b59c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b5a0: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x16b5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16b5a4: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x16b5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16b5a8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x16b5a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x16b5ac: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16B5ACu;
    SET_GPR_U32(ctx, 31, 0x16B5B4u);
    ctx->pc = 0x16B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5ACu;
    // 0x16b5b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16B5ACu, 0x16B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5B4u;
label_16b5b4:
    // 0x16b5b4: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x16b5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b5bc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16b5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16b5c0: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x16b5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16b5c4: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16b5c8: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x16b5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16b5cc: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16B5CCu;
    SET_GPR_U32(ctx, 31, 0x16B5D4u);
    ctx->pc = 0x16B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5CCu;
    // 0x16b5d0: 0x344702a4  ori         $a3, $v0, 0x2A4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16B5CCu, 0x16B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5D4u;
label_16b5d4:
    // 0x16b5d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B5D4u;
    {
        const bool branch_taken_0x16b5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b5d4) {
            ctx->pc = 0x16B5E8u;
            goto label_16b5e8;
        }
    }
    ctx->pc = 0x16B5DCu;
    // 0x16b5dc: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x16B5DCu;
    {
        const bool branch_taken_0x16b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5DCu;
        // 0x16b5e0: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5dc) {
            ctx->pc = 0x16BC90u;
            goto label_16bc90;
        }
    }
    ctx->pc = 0x16B5E4u;
    // 0x16b5e4: 0x0  nop
    ctx->pc = 0x16b5e4u;
    // NOP
label_16b5e8:
    // 0x16b5e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b5ec: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16b5f0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16b5f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b5f8: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x16b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16b5fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16b600: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16b600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b604: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B604u;
    {
        const bool branch_taken_0x16b604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b604) {
            ctx->pc = 0x16B618u;
            goto label_16b618;
        }
    }
    ctx->pc = 0x16B60Cu;
    // 0x16b60c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B60Cu;
    {
        const bool branch_taken_0x16b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b60c) {
            ctx->pc = 0x16B620u;
            goto label_16b620;
        }
    }
    ctx->pc = 0x16B614u;
    // 0x16b614: 0x0  nop
    ctx->pc = 0x16b614u;
    // NOP
label_16b618:
    // 0x16b618: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x16b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x16b61c: 0x0  nop
    ctx->pc = 0x16b61cu;
    // NOP
label_16b620:
    // 0x16b620: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16b620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16b624: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16b624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16b628: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x16b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x16b62c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16b630: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x16b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x16b634: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16b634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b638: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16b638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16b63c: 0x34c40020  ori         $a0, $a2, 0x20
    ctx->pc = 0x16b63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x16b640: 0x34c50300  ori         $a1, $a2, 0x300
    ctx->pc = 0x16b640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x16b644: 0xc041442  jal         func_105108
    ctx->pc = 0x16B644u;
    SET_GPR_U32(ctx, 31, 0x16B64Cu);
    ctx->pc = 0x16B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B644u;
    // 0x16b648: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16B644u, 0x16B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B64Cu;
label_16b64c:
    // 0x16b64c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16b650: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B650u;
    {
        const bool branch_taken_0x16b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B650u;
        // 0x16b654: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b650) {
            ctx->pc = 0x16B6A0u;
            goto label_16b6a0;
        }
    }
    ctx->pc = 0x16B658u;
    // 0x16b658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b65c: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x16b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 272))); // MMIO: 0x70000110
    // 0x16b660: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x16b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x16b664: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b668: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16b66c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b670: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16b674: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16b678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b67c: 0x0  nop
    ctx->pc = 0x16b67cu;
    // NOP
    // 0x16b680: 0x46800720  cvt.s.w     $f28, $f0
    ctx->pc = 0x16b680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x16b684: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b688: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16b68c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b694: 0x0  nop
    ctx->pc = 0x16b694u;
    // NOP
    // 0x16b698: 0x468006e0  cvt.s.w     $f27, $f0
    ctx->pc = 0x16b698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x16b69c: 0x0  nop
    ctx->pc = 0x16b69cu;
    // NOP
label_16b6a0:
    // 0x16b6a0: 0x461ce01a  mula.s      $f28, $f28
    ctx->pc = 0x16b6a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x16b6a4: 0x461bd81c  madd.s      $f0, $f27, $f27
    ctx->pc = 0x16b6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[27]));
    // 0x16b6a8: 0x46000744  c1          0x744
    ctx->pc = 0x16b6a8u;
    ctx->f[29] = FPU_SQRT_S(ctx->f[0]);
    // 0x16b6ac: 0x0  nop
    ctx->pc = 0x16b6acu;
    // NOP
    // 0x16b6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b6b4: 0x0  nop
    ctx->pc = 0x16b6b4u;
    // NOP
    // 0x16b6b8: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x16b6b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b6bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16B6BCu;
    {
        const bool branch_taken_0x16b6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6BCu;
        // 0x16b6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6bc) {
            ctx->pc = 0x16B6D0u;
            goto label_16b6d0;
        }
    }
    ctx->pc = 0x16B6C4u;
    // 0x16b6c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B6C4u;
    {
        const bool branch_taken_0x16b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6C4u;
        // 0x16b6c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6c4) {
            ctx->pc = 0x16B708u;
            goto label_16b708;
        }
    }
    ctx->pc = 0x16B6CCu;
    // 0x16b6cc: 0x0  nop
    ctx->pc = 0x16b6ccu;
    // NOP
label_16b6d0:
    // 0x16b6d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b6d4: 0xc4220028  lwc1        $f2, 0x28($at)
    ctx->pc = 0x16b6d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b6e0: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x16b6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x16b6e4: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x16b6e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x16b6e8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16b6e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b6ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16b6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16b6f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16b6f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16b6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16b6f8: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x16b6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x16b6fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16b6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16b700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16b704: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16b704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16b708:
    // 0x16b708: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x16b708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16b70c: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x16b70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x16b710: 0x172600  sll         $a0, $s7, 24
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x16b714: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x16b714u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16b718: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16b71c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16b720: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b724: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x16b724u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16b728: 0x34c40030  ori         $a0, $a2, 0x30
    ctx->pc = 0x16b728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x16b72c: 0x34c50300  ori         $a1, $a2, 0x300
    ctx->pc = 0x16b72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x16b730: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x16b730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x16b734: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b738: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b73c: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x16b73cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x16b740: 0x8c270104  lw          $a3, 0x104($at)
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16b744: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16b744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b748: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b74c: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x16b74cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x16b750: 0x8c270108  lw          $a3, 0x108($at)
    ctx->pc = 0x16b750u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16b754: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x16b754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x16b758: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b75c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b75cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b760: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16b760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16b764: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b768: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16b76c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b76cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b770: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16b770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16b774: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b778: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16b77c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b77cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b780: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16b780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16b784: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b788: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16b788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16b78c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16b790: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16b794: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16b798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b79c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16b79cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b7a0: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16b7a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b7a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b7ac: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16b7acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b7b0: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16b7b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16b7b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b7bc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b7bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7c0: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16b7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16b7c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b7c8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16b7cc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b7ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7d0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16b7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16b7d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b7d8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16b7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16b7dc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16b7dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7e0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16b7e4: 0xc041442  jal         func_105108
    ctx->pc = 0x16B7E4u;
    SET_GPR_U32(ctx, 31, 0x16B7ECu);
    ctx->pc = 0x16B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7E4u;
    // 0x16b7e8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16B7E4u, 0x16B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7ECu;
label_16b7ec:
    // 0x16b7ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b7f0: 0x0  nop
    ctx->pc = 0x16b7f0u;
    // NOP
    // 0x16b7f4: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x16b7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b7f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7F8u;
    {
        const bool branch_taken_0x16b7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7F8u;
        // 0x16b7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7f8) {
            ctx->pc = 0x16B808u;
            goto label_16b808;
        }
    }
    ctx->pc = 0x16B800u;
    // 0x16b800: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16B800u;
    {
        const bool branch_taken_0x16b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B800u;
        // 0x16b804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b800) {
            ctx->pc = 0x16B840u;
            goto label_16b840;
        }
    }
    ctx->pc = 0x16B808u;
label_16b808:
    // 0x16b808: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b80c: 0xc4220038  lwc1        $f2, 0x38($at)
    ctx->pc = 0x16b80cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b810: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b818: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x16b818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x16b81c: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x16b81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x16b820: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16b820u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16b824: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16b824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16b828: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16b82c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16b82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16b830: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x16b830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x16b834: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16b834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16b838: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16b83c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16b83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16b840:
    // 0x16b840: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x16b844: 0x973021  addu        $a2, $a0, $s7
    ctx->pc = 0x16b844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x16b848: 0x3c05cccc  lui         $a1, 0xCCCC
    ctx->pc = 0x16b848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52428 << 16));
    // 0x16b84c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x16b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b850: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b854: 0x4619c600  add.s       $f24, $f24, $f25
    ctx->pc = 0x16b854u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x16b858: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x16b858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b85c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16b860: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x16b860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x16b864: 0x860019  multu       $a0, $a2
    ctx->pc = 0x16b864u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16b868: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x16b868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16b86c: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x16b86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x16b870: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b874: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x16b874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x16b878: 0x2010  mfhi        $a0
    ctx->pc = 0x16b878u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16b87c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x16b880: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x16b880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x16b884: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x16b884u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16b888: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16b888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16b88c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16b890: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x16b890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b894: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b898: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x16b898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b89c: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x16b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16b8a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b8a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8a8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16b8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b8ac: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x16b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16b8b0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16b8b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8b8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b8b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b8bc: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16b8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16b8c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8c4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16b8c8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b8c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b8cc: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16b8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16b8d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8d4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16b8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16b8d8: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b8d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b8dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16b8e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8e4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16b8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16b8e8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16b8ec: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16b8f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b8f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b8f8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16b8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b8fc: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16b900: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b904: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b908: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16b908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16b90c: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16b910: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16b914: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b918: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b918u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b91c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16b91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16b920: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b924: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16b928: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b928u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b92c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16b92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16b930: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b934: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16b934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16b938: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16b938u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b93c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16b93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16b940: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x16B940u;
    {
        const bool branch_taken_0x16b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B940u;
        // 0x16b944: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b940) {
            ctx->pc = 0x16BBF0u;
            goto label_16bbf0;
        }
    }
    ctx->pc = 0x16B948u;
label_16b948:
    // 0x16b948: 0x2fc1000a  sltiu       $at, $fp, 0xA
    ctx->pc = 0x16b948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16b94c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B94Cu;
    {
        const bool branch_taken_0x16b94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B94Cu;
        // 0x16b950: 0x3c033d08  lui         $v1, 0x3D08 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b94c) {
            ctx->pc = 0x16B9A0u;
            goto label_16b9a0;
        }
    }
    ctx->pc = 0x16B954u;
    // 0x16b954: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16b958: 0x34646595  ori         $a0, $v1, 0x6595
    ctx->pc = 0x16b958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26005);
    // 0x16b95c: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x16b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x16b960: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b964: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16b964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b968: 0x2e32818  mult        $a1, $s7, $v1
    ctx->pc = 0x16b968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16b96c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x16b96cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x16b970: 0x705e2018  mult1       $a0, $v0, $fp
    ctx->pc = 0x16b970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16b974: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x16b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x16b978: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16b97c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x16b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16b980: 0x640019  multu       $v1, $a0
    ctx->pc = 0x16b980u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16b984: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x16b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16b988: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x16b98c: 0x1810  mfhi        $v1
    ctx->pc = 0x16b98cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16b990: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x16b990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x16b994: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x16b994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16b998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B998u;
    {
        const bool branch_taken_0x16b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B998u;
        // 0x16b99c: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b998) {
            ctx->pc = 0x16B9B8u;
            goto label_16b9b8;
        }
    }
    ctx->pc = 0x16B9A0u;
label_16b9a0:
    // 0x16b9a0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b9a4: 0x121a3c  dsll32      $v1, $s2, 8
    ctx->pc = 0x16b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16b9a8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16b9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x16b9ac: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x16b9acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x16b9b0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x16b9b4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x16b9b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16b9b8:
    // 0x16b9b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9c0: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x16b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16b9c4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x16b9c4u;
    SET_GPR_VEC(ctx, 6, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x16b9c8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16b9cc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16b9d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16b9d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16b9d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b9d8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x16b9d8u;
    runtime->Store128(rdram, ctx, 0x70000100u, GPR_VEC(ctx, 6));
    // 0x16b9dc: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x16b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16b9e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b9e4: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16B9E4u;
    SET_GPR_U32(ctx, 31, 0x16B9ECu);
    ctx->pc = 0x16B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9E4u;
    // 0x16b9e8: 0x34450040  ori         $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16B9E4u, 0x16B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9ECu;
label_16b9ec:
    // 0x16b9ec: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x16b9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16b9f4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16b9f8: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16b9fc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16b9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16ba00: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x16ba00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16ba04: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16BA04u;
    SET_GPR_U32(ctx, 31, 0x16BA0Cu);
    ctx->pc = 0x16BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA04u;
    // 0x16ba08: 0x344702a4  ori         $a3, $v0, 0x2A4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16BA04u, 0x16BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA0Cu;
label_16ba0c:
    // 0x16ba0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA0Cu;
    {
        const bool branch_taken_0x16ba0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ba0c) {
            ctx->pc = 0x16BA20u;
            goto label_16ba20;
        }
    }
    ctx->pc = 0x16BA14u;
    // 0x16ba14: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x16BA14u;
    {
        const bool branch_taken_0x16ba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA14u;
        // 0x16ba18: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba14) {
            ctx->pc = 0x16BC00u;
            goto label_16bc00;
        }
    }
    ctx->pc = 0x16BA1Cu;
    // 0x16ba1c: 0x0  nop
    ctx->pc = 0x16ba1cu;
    // NOP
label_16ba20:
    // 0x16ba20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba24: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16ba28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16ba2c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ba2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ba30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BA30u;
    {
        const bool branch_taken_0x16ba30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba30) {
            ctx->pc = 0x16BA40u;
            goto label_16ba40;
        }
    }
    ctx->pc = 0x16BA38u;
    // 0x16ba38: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x16ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x16ba3c: 0x0  nop
    ctx->pc = 0x16ba3cu;
    // NOP
label_16ba40:
    // 0x16ba40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba44: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x16ba44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16ba48: 0x34450300  ori         $a1, $v0, 0x300
    ctx->pc = 0x16ba48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x16ba4c: 0xc041442  jal         func_105108
    ctx->pc = 0x16BA4Cu;
    SET_GPR_U32(ctx, 31, 0x16BA54u);
    ctx->pc = 0x16BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA4Cu;
    // 0x16ba50: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16BA4Cu, 0x16BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA54u;
label_16ba54:
    // 0x16ba54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba58: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16ba5c: 0x4600e024  .word       0x4600E024                   # cvt.w.s     $f0, $f28 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16ba5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[28]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16ba60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba64: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16ba68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16ba68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16ba6c: 0x4600d824  .word       0x4600D824                   # cvt.w.s     $f0, $f27 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16ba6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[27]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16ba70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba74: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x16ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16ba78: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16ba7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16ba80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ba84: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16ba88: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ba8c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x16ba90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ba90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ba94: 0x0  nop
    ctx->pc = 0x16ba94u;
    // NOP
    // 0x16ba98: 0x46800f20  cvt.s.w     $f28, $f1
    ctx->pc = 0x16ba98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x16ba9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16ba9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16baa0: 0x461ce01a  mula.s      $f28, $f28
    ctx->pc = 0x16baa0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x16baa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16baa8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16baac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16baacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16bab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16bab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bab4: 0x0  nop
    ctx->pc = 0x16bab4u;
    // NOP
    // 0x16bab8: 0x46800ee0  cvt.s.w     $f27, $f1
    ctx->pc = 0x16bab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x16babc: 0x461bd85c  madd.s      $f1, $f27, $f27
    ctx->pc = 0x16babcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[27], ctx->f[27]));
    // 0x16bac0: 0x46010744  c1          0x10744
    ctx->pc = 0x16bac0u;
    ctx->f[29] = FPU_SQRT_S(ctx->f[1]);
    // 0x16bac4: 0x0  nop
    ctx->pc = 0x16bac4u;
    // NOP
    // 0x16bac8: 0x0  nop
    ctx->pc = 0x16bac8u;
    // NOP
    // 0x16bacc: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x16baccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16bad0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16BAD0u;
    {
        const bool branch_taken_0x16bad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAD0u;
        // 0x16bad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bad0) {
            ctx->pc = 0x16BAE0u;
            goto label_16bae0;
        }
    }
    ctx->pc = 0x16BAD8u;
    // 0x16bad8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16BAD8u;
    {
        const bool branch_taken_0x16bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAD8u;
        // 0x16badc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bad8) {
            ctx->pc = 0x16BB18u;
            goto label_16bb18;
        }
    }
    ctx->pc = 0x16BAE0u;
label_16bae0:
    // 0x16bae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bae4: 0xc4220038  lwc1        $f2, 0x38($at)
    ctx->pc = 0x16bae4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16bae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16baec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16baecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16baf0: 0x461bf802  mul.s       $f0, $f31, $f27
    ctx->pc = 0x16baf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[27]);
    // 0x16baf4: 0x4602e882  mul.s       $f2, $f29, $f2
    ctx->pc = 0x16baf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[29], ctx->f[2]);
    // 0x16baf8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16baf8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16bafc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16bafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16bb00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16bb04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16bb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16bb08: 0x461cf002  mul.s       $f0, $f30, $f28
    ctx->pc = 0x16bb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x16bb0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16bb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16bb10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bb10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16bb14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16bb14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16bb18:
    // 0x16bb18: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16bb1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb20: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16bb24: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16bb28: 0x4619c600  add.s       $f24, $f24, $f25
    ctx->pc = 0x16bb28u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x16bb2c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x16bb30: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16bb34: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x16bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x16bb38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb3c: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16bb40: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x16bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16bb44: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16bb48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bb4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb50: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16bb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16bb54: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x16bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16bb58: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16bb5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb60: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bb60u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb64: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16bb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16bb68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb6c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16bb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16bb70: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bb70u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb74: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16bb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16bb78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb7c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16bb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16bb80: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bb80u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb84: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16bb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16bb88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb8c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16bb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16bb90: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16bb94: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16bb98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bb9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bba0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bba4: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16bba8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bbac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bbb0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16bbb4: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16bbb8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16bbbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bbc0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bbc0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bbc4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16bbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16bbc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bbcc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16bbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16bbd0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bbd0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bbd4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16bbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16bbd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16bbdc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16bbe0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16bbe0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bbe4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16bbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16bbe8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16bbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16bbec: 0x0  nop
    ctx->pc = 0x16bbecu;
    // NOP
label_16bbf0:
    // 0x16bbf0: 0x2fc1000b  sltiu       $at, $fp, 0xB
    ctx->pc = 0x16bbf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16bbf4: 0x1420ff54  bnez        $at, . + 4 + (-0xAC << 2)
    ctx->pc = 0x16BBF4u;
    {
        const bool branch_taken_0x16bbf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bbf4) {
            ctx->pc = 0x16B948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b948;
        }
    }
    ctx->pc = 0x16BBFCu;
    // 0x16bbfc: 0x0  nop
    ctx->pc = 0x16bbfcu;
    // NOP
label_16bc00:
    // 0x16bc00: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16bc04: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x16bc08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16bc0c: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x16bc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x16bc10: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16bc14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc18: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x16bc1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16bc20: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16bc24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16bc28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16bc2c: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x16bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x16bc30: 0x3442005c  ori         $v0, $v0, 0x5C
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)92);
    // 0x16bc34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16bc38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16bc3c: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x16bc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x16bc40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16bc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16bc48: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16bc4c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16bc4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bc50: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16bc54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16bc58: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16bc5c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x16bc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x16bc60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bc64: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16bc68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16bc70: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x16bc70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16bc74: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x16bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16bc78: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16bc7c: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x16bc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16bc80: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x16bc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x16bc84: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16BC84u;
    SET_GPR_U32(ctx, 31, 0x16BC8Cu);
    ctx->pc = 0x16BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC84u;
    // 0x16bc88: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16BC84u, 0x16BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC8Cu;
label_16bc8c:
    // 0x16bc8c: 0x0  nop
    ctx->pc = 0x16bc8cu;
    // NOP
label_16bc90:
    // 0x16bc90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16bc94: 0x0  nop
    ctx->pc = 0x16bc94u;
    // NOP
label_16bc98:
    // 0x16bc98: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x16bc98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x16bc9c: 0x1460fda8  bnez        $v1, . + 4 + (-0x258 << 2)
    ctx->pc = 0x16BC9Cu;
    {
        const bool branch_taken_0x16bc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC9Cu;
        // 0x16bca0: 0x2604000f  addiu       $a0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc9c) {
            ctx->pc = 0x16B340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b340;
        }
    }
    ctx->pc = 0x16BCA4u;
    // 0x16bca4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16bca8: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x16bca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16bcac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16bcb0: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x16bcb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x16bcb4: 0x0  nop
    ctx->pc = 0x16bcb4u;
    // NOP
label_16bcb8:
    // 0x16bcb8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x16bcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16bcbc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x16bcbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16bcc0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x16bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x16bcc4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bcc8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x16bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x16bccc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x16bcccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16bcd0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x16bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x16bcd4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16bcd8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x16bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x16bcdc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16bcdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16bce0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x16bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x16bce4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16bce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16bce8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x16bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x16bcec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16bcecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bcf0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x16bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x16bcf4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16bcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bcf8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16bcfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16bcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bd00: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16bd04: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16bd08: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16bd0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD10u;
        // 0x16bd14: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD18u;
}
