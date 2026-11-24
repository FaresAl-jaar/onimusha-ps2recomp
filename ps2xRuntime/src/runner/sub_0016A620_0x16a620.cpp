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

// Function: sub_0016A620
// Address: 0x16a620 - 0x16b0dc
void sub_0016A620_0x16a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A620_0x16a620");
#endif

    switch (ctx->pc) {
        case 0x16a810u: goto label_16a810;
        case 0x16a828u: goto label_16a828;
        case 0x16a848u: goto label_16a848;
        case 0x16a8b0u: goto label_16a8b0;
        case 0x16a8d8u: goto label_16a8d8;
        case 0x16a97cu: goto label_16a97c;
        case 0x16a9a4u: goto label_16a9a4;
        case 0x16aa60u: goto label_16aa60;
        case 0x16aa7cu: goto label_16aa7c;
        case 0x16aaa0u: goto label_16aaa0;
        case 0x16aabcu: goto label_16aabc;
        case 0x16ab50u: goto label_16ab50;
        case 0x16ab6cu: goto label_16ab6c;
        case 0x16ab90u: goto label_16ab90;
        case 0x16abacu: goto label_16abac;
        case 0x16ad98u: goto label_16ad98;
        case 0x16ae28u: goto label_16ae28;
        case 0x16ae44u: goto label_16ae44;
        case 0x16ae68u: goto label_16ae68;
        case 0x16ae84u: goto label_16ae84;
        case 0x16b064u: goto label_16b064;
        default: break;
    }

    ctx->pc = 0x16a620u;

    // 0x16a620: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x16a624: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x16a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x16a628: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x16a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x16a62c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x16a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x16a630: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x16a630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x16a634: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x16a638: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x16a63c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16a640: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16a644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16a648: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a64c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x16a64cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16a650: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x16a650u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16a654: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16a654u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16a658: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16a658u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16a65c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16a65cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16a660: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16a660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16a664: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16a664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16a668: 0x8c940034  lw          $s4, 0x34($a0)
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16a66c: 0x9292000a  lbu         $s2, 0xA($s4)
    ctx->pc = 0x16a66cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x16a670: 0x12400287  beqz        $s2, . + 4 + (0x287 << 2)
    ctx->pc = 0x16A670u;
    {
        const bool branch_taken_0x16a670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A670u;
        // 0x16a674: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a670) {
            ctx->pc = 0x16B090u;
            goto label_16b090;
        }
    }
    ctx->pc = 0x16A678u;
    // 0x16a678: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x16a67c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a680: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16a680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a684: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x16a688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a68c: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x16a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16a690: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x16a690u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a694: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16a698: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x16a698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x16a69c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x16a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16a6a0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x16a6a4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x16a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x16a6a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x16a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16a6ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x16a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16a6b0: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x16a6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16a6b4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x16a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16a6b8: 0xa42804  sllv        $a1, $a0, $a1
    ctx->pc = 0x16a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16a6bc: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x16a6c0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x16a6c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16a6c4: 0x0  nop
    ctx->pc = 0x16a6c4u;
    // NOP
    // 0x16a6c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16a6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16a6cc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x16a6d0: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x16a6d4: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x16a6d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16a6d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a6d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6dc: 0x0  nop
    ctx->pc = 0x16a6dcu;
    // NOP
    // 0x16a6e0: 0x46020d43  div.s       $f21, $f1, $f2
    ctx->pc = 0x16a6e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16a6e4: 0x0  nop
    ctx->pc = 0x16a6e4u;
    // NOP
    // 0x16a6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a6ec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x16a6ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16a6f0: 0x0  nop
    ctx->pc = 0x16a6f0u;
    // NOP
    // 0x16a6f4: 0x0  nop
    ctx->pc = 0x16a6f4u;
    // NOP
    // 0x16a6f8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A70Cu;
            goto label_16a70c;
        }
    }
    ctx->pc = 0x16A700u;
    // 0x16a700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A704u;
        // 0x16a708: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A728u;
            goto label_16a728;
        }
    }
    ctx->pc = 0x16A70Cu;
label_16a70c:
    // 0x16a70c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16a710: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16a710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16a714: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16a714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16a718: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a71c: 0x0  nop
    ctx->pc = 0x16a71cu;
    // NOP
    // 0x16a720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a724: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16a724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16a728:
    // 0x16a728: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x16a728u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16a72c: 0x46150682  mul.s       $f26, $f0, $f21
    ctx->pc = 0x16a72cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16a730: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x16a734: 0x94e50006  lhu         $a1, 0x6($a3)
    ctx->pc = 0x16a734u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x16a738: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x16a73c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x16a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16a740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a744: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16a748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a74c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x16a74cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16a750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a754: 0x0  nop
    ctx->pc = 0x16a754u;
    // NOP
    // 0x16a758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a75c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A75Cu;
    {
        const bool branch_taken_0x16a75c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x16A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A75Cu;
        // 0x16a760: 0x4600a642  mul.s       $f25, $f20, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a75c) {
            ctx->pc = 0x16A770u;
            goto label_16a770;
        }
    }
    ctx->pc = 0x16A764u;
    // 0x16a764: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x16a764u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A768u;
    {
        const bool branch_taken_0x16a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A768u;
        // 0x16a76c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a768) {
            ctx->pc = 0x16A78Cu;
            goto label_16a78c;
        }
    }
    ctx->pc = 0x16A770u;
label_16a770:
    // 0x16a770: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x16a774: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x16a774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x16a778: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16a778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16a77c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a77cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a780: 0x0  nop
    ctx->pc = 0x16a780u;
    // NOP
    // 0x16a784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a788: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16a788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16a78c:
    // 0x16a78c: 0x46140602  mul.s       $f24, $f0, $f20
    ctx->pc = 0x16a78cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16a790: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x16a794: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x16a794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x16a798: 0x461a0841  sub.s       $f1, $f1, $f26
    ctx->pc = 0x16a798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x16a79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a7a0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A7B4u;
            goto label_16a7b4;
        }
    }
    ctx->pc = 0x16A7A8u;
    // 0x16a7a8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x16a7a8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a7ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A7ACu;
    {
        const bool branch_taken_0x16a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7ACu;
        // 0x16a7b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7ac) {
            ctx->pc = 0x16A7D0u;
            goto label_16a7d0;
        }
    }
    ctx->pc = 0x16A7B4u;
label_16a7b4:
    // 0x16a7b4: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x16a7b8: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x16a7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x16a7bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16a7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16a7c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a7c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a7c4: 0x0  nop
    ctx->pc = 0x16a7c4u;
    // NOP
    // 0x16a7c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a7cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16a7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16a7d0:
    // 0x16a7d0: 0x0  nop
    ctx->pc = 0x16a7d0u;
    // NOP
    // 0x16a7d4: 0x0  nop
    ctx->pc = 0x16a7d4u;
    // NOP
    // 0x16a7d8: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x16a7d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16a7dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16a7e0: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x16a7e4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16a7e8: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x16a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16a7ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16a7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7f0: 0x86be002c  lh          $fp, 0x2C($s5)
    ctx->pc = 0x16a7f0u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16a7f4: 0x58a3c  dsll32      $s1, $a1, 8
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 8));
    // 0x16a7f8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16a7fc: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x16a7fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x16a800: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x16a800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x16a804: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x16A804u;
    {
        const bool branch_taken_0x16a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0x838024  and         $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a804) {
            ctx->pc = 0x16B070u;
            goto label_16b070;
        }
    }
    ctx->pc = 0x16A80Cu;
    // 0x16a80c: 0x0  nop
    ctx->pc = 0x16a80cu;
    // NOP
label_16a810:
    // 0x16a810: 0x1660001d  bnez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x16A810u;
    {
        const bool branch_taken_0x16a810 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a810) {
            ctx->pc = 0x16A888u;
            goto label_16a888;
        }
    }
    ctx->pc = 0x16A818u;
    // 0x16a818: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a81c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a820: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A820u;
    SET_GPR_U32(ctx, 31, 0x16A828u);
    ctx->pc = 0x16A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A820u;
    // 0x16a824: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A820u, 0x16A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A828u;
label_16a828:
    // 0x16a828: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x16a828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16a82c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a830: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x16a830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x16a834: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a83c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16a840: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A840u;
    SET_GPR_U32(ctx, 31, 0x16A848u);
    ctx->pc = 0x16A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A840u;
    // 0x16a844: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A840u, 0x16A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A848u;
label_16a848:
    // 0x16a848: 0x92b70023  lbu         $s7, 0x23($s5)
    ctx->pc = 0x16a848u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16a84c: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x16a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x16a850: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16a854: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x16a854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x16a858: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16a858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16a85c: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x16a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16a860: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x16a860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16a864: 0x4600d586  mov.s       $f22, $f26
    ctx->pc = 0x16a864u;
    ctx->f[22] = FPU_MOV_S(ctx->f[26]);
    // 0x16a868: 0x2e41018  mult        $v0, $s7, $a0
    ctx->pc = 0x16a868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a86c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a870: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x16a870u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16a874: 0x0  nop
    ctx->pc = 0x16a874u;
    // NOP
    // 0x16a878: 0x0  nop
    ctx->pc = 0x16a878u;
    // NOP
    // 0x16a87c: 0x1012  mflo        $v0
    ctx->pc = 0x16a87cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16a880: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x16A880u;
    {
        const bool branch_taken_0x16a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A880u;
        // 0x16a884: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a880) {
            ctx->pc = 0x16AA48u;
            goto label_16aa48;
        }
    }
    ctx->pc = 0x16A888u;
label_16a888:
    // 0x16a888: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x16a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16a88c: 0x16620034  bne         $s3, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x16A88Cu;
    {
        const bool branch_taken_0x16a88c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a88c) {
            ctx->pc = 0x16A960u;
            goto label_16a960;
        }
    }
    ctx->pc = 0x16A894u;
    // 0x16a894: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x16a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a898: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x16a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x16a89c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x16a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a8a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a8a4: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x16a8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16a8a8: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A8A8u;
    SET_GPR_U32(ctx, 31, 0x16A8B0u);
    ctx->pc = 0x16A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8A8u;
    // 0x16a8ac: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A8A8u, 0x16A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8B0u;
label_16a8b0:
    // 0x16a8b0: 0x92860000  lbu         $a2, 0x0($s4)
    ctx->pc = 0x16a8b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16a8b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a8b8: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x16a8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x16a8bc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a8c0: 0x2665fffe  addiu       $a1, $s3, -0x2
    ctx->pc = 0x16a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x16a8c4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x16a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16a8c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a8cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a8d0: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A8D0u;
    SET_GPR_U32(ctx, 31, 0x16A8D8u);
    ctx->pc = 0x16A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8D0u;
    // 0x16a8d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A8D0u, 0x16A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8D8u;
label_16a8d8:
    // 0x16a8d8: 0x92a50023  lbu         $a1, 0x23($s5)
    ctx->pc = 0x16a8d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16a8dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a8e0: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x16a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x16a8e4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16a8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16a8e8: 0x2532023  subu        $a0, $s2, $s3
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x16a8ec: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x16a8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16a8f0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16a8f4: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x16a8f8: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16a8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16a8fc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x16a8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16a900: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16a900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16a904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16a90c: 0x70531018  mult1       $v0, $v0, $s3
    ctx->pc = 0x16a90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a914: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x16a914u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16a918: 0x0  nop
    ctx->pc = 0x16a918u;
    // NOP
    // 0x16a91c: 0x0  nop
    ctx->pc = 0x16a91cu;
    // NOP
    // 0x16a920: 0xb812  mflo        $s7
    ctx->pc = 0x16a920u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x16a924: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A924u;
    {
        const bool branch_taken_0x16a924 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x16A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A924u;
        // 0x16a928: 0x46170042  mul.s       $f1, $f0, $f23 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a924) {
            ctx->pc = 0x16A938u;
            goto label_16a938;
        }
    }
    ctx->pc = 0x16A92Cu;
    // 0x16a92c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x16a92cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A930u;
    {
        const bool branch_taken_0x16a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A930u;
        // 0x16a934: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a930) {
            ctx->pc = 0x16A954u;
            goto label_16a954;
        }
    }
    ctx->pc = 0x16A938u;
label_16a938:
    // 0x16a938: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x16a938u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x16a93c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x16a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x16a940: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a948: 0x0  nop
    ctx->pc = 0x16a948u;
    // NOP
    // 0x16a94c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a950: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16a950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16a954:
    // 0x16a954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a958: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16A958u;
    {
        const bool branch_taken_0x16a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A958u;
        // 0x16a95c: 0x4600d580  add.s       $f22, $f26, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a958) {
            ctx->pc = 0x16AA48u;
            goto label_16aa48;
        }
    }
    ctx->pc = 0x16A960u;
label_16a960:
    // 0x16a960: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x16a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a964: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x16a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x16a968: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x16a968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a96c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a970: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x16a970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16a974: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A974u;
    SET_GPR_U32(ctx, 31, 0x16A97Cu);
    ctx->pc = 0x16A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A974u;
    // 0x16a978: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A974u, 0x16A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A97Cu;
label_16a97c:
    // 0x16a97c: 0x92860000  lbu         $a2, 0x0($s4)
    ctx->pc = 0x16a97cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16a980: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a984: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x16a988: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x16a988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a98c: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x16a990: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16a994: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a998: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a99c: 0xc04d834  jal         func_1360D0
    ctx->pc = 0x16A99Cu;
    SET_GPR_U32(ctx, 31, 0x16A9A4u);
    ctx->pc = 0x16A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A99Cu;
    // 0x16a9a0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360D0u, 0x16A99Cu, 0x16A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9A4u;
label_16a9a4:
    // 0x16a9a4: 0x92a80023  lbu         $t0, 0x23($s5)
    ctx->pc = 0x16a9a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x16a9a8: 0x2533823  subu        $a3, $s2, $s3
    ctx->pc = 0x16a9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x16a9ac: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x16a9b0: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16a9b4: 0x34437efa  ori         $v1, $v0, 0x7EFA
    ctx->pc = 0x16a9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16a9b8: 0x92860001  lbu         $a2, 0x1($s4)
    ctx->pc = 0x16a9b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x16a9bc: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x16a9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16a9c0: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x16a9c4: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x16a9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32506);
    // 0x16a9c8: 0x2452023  subu        $a0, $s2, $a1
    ctx->pc = 0x16a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16a9cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16a9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16a9d0: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x16a9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x16a9d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16a9d8: 0x70d31818  mult1       $v1, $a2, $s3
    ctx->pc = 0x16a9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16a9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a9e0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16a9e4: 0x70c51018  mult1       $v0, $a2, $a1
    ctx->pc = 0x16a9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a9e8: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x16a9e8u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x16a9ec: 0x46170042  mul.s       $f1, $f0, $f23
    ctx->pc = 0x16a9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x16a9f0: 0x0  nop
    ctx->pc = 0x16a9f0u;
    // NOP
    // 0x16a9f4: 0xb812  mflo        $s7
    ctx->pc = 0x16a9f4u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x16a9f8: 0x1041818  mult        $v1, $t0, $a0
    ctx->pc = 0x16a9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16a9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aa00: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x16aa00u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16aa04: 0x0  nop
    ctx->pc = 0x16aa04u;
    // NOP
    // 0x16aa08: 0x0  nop
    ctx->pc = 0x16aa08u;
    // NOP
    // 0x16aa0c: 0x1012  mflo        $v0
    ctx->pc = 0x16aa0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16aa10: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA10u;
    {
        const bool branch_taken_0x16aa10 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x16AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA10u;
        // 0x16aa14: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa10) {
            ctx->pc = 0x16AA24u;
            goto label_16aa24;
        }
    }
    ctx->pc = 0x16AA18u;
    // 0x16aa18: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x16aa18u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aa1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16AA1Cu;
    {
        const bool branch_taken_0x16aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA1Cu;
        // 0x16aa20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa1c) {
            ctx->pc = 0x16AA40u;
            goto label_16aa40;
        }
    }
    ctx->pc = 0x16AA24u;
label_16aa24:
    // 0x16aa24: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x16aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x16aa28: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x16aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x16aa2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16aa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16aa30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16aa30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aa34: 0x0  nop
    ctx->pc = 0x16aa34u;
    // NOP
    // 0x16aa38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16aa38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16aa3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16aa3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16aa40:
    // 0x16aa40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16aa40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16aa44: 0x4600d580  add.s       $f22, $f26, $f0
    ctx->pc = 0x16aa44u;
    ctx->f[22] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_16aa48:
    // 0x16aa48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16aa4c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16AA4Cu;
    {
        const bool branch_taken_0x16aa4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA4Cu;
        // 0x16aa50: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa4c) {
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AA54u;
    // 0x16aa54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16aa54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16aa58: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AA58u;
    SET_GPR_U32(ctx, 31, 0x16AA60u);
    ctx->pc = 0x16AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA58u;
    // 0x16aa5c: 0x34850040  ori         $a1, $a0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AA58u, 0x16AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA60u;
label_16aa60:
    // 0x16aa60: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16aa64: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16aa68: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16aa6c: 0x34a40100  ori         $a0, $a1, 0x100
    ctx->pc = 0x16aa6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x16aa70: 0x34a702a0  ori         $a3, $a1, 0x2A0
    ctx->pc = 0x16aa70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)672);
    // 0x16aa74: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x16AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA74u;
    // 0x16aa78: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16AA74u, 0x16AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA7Cu;
label_16aa7c:
    // 0x16aa7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16AA90u;
            goto label_16aa90;
        }
    }
    ctx->pc = 0x16AA84u;
    // 0x16aa84: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x16AA84u;
    {
        const bool branch_taken_0x16aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA84u;
        // 0x16aa88: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa84) {
            ctx->pc = 0x16B068u;
            goto label_16b068;
        }
    }
    ctx->pc = 0x16AA8Cu;
    // 0x16aa8c: 0x0  nop
    ctx->pc = 0x16aa8cu;
    // NOP
label_16aa90:
    // 0x16aa90: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16aa94: 0x34850080  ori         $a1, $a0, 0x80
    ctx->pc = 0x16aa94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x16aa98: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AA98u;
    SET_GPR_U32(ctx, 31, 0x16AAA0u);
    ctx->pc = 0x16AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA98u;
    // 0x16aa9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AA98u, 0x16AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAA0u;
label_16aaa0:
    // 0x16aaa0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16aaa4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16aaa8: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16aaac: 0x34a40110  ori         $a0, $a1, 0x110
    ctx->pc = 0x16aaacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)272);
    // 0x16aab0: 0x34a702a4  ori         $a3, $a1, 0x2A4
    ctx->pc = 0x16aab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)676);
    // 0x16aab4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16AAB4u;
    SET_GPR_U32(ctx, 31, 0x16AABCu);
    ctx->pc = 0x16AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAB4u;
    // 0x16aab8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16AAB4u, 0x16AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AABCu;
label_16aabc:
    // 0x16aabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AABCu;
    {
        const bool branch_taken_0x16aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aabc) {
            ctx->pc = 0x16AAD0u;
            goto label_16aad0;
        }
    }
    ctx->pc = 0x16AAC4u;
    // 0x16aac4: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x16AAC4u;
    {
        const bool branch_taken_0x16aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAC4u;
        // 0x16aac8: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aac4) {
            ctx->pc = 0x16B068u;
            goto label_16b068;
        }
    }
    ctx->pc = 0x16AACCu;
    // 0x16aacc: 0x0  nop
    ctx->pc = 0x16aaccu;
    // NOP
label_16aad0:
    // 0x16aad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aad4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16AAD4u;
    {
        const bool branch_taken_0x16aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAD4u;
        // 0x16aad8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aad4) {
            ctx->pc = 0x16AB30u;
            goto label_16ab30;
        }
    }
    ctx->pc = 0x16AADCu;
    // 0x16aadc: 0x0  nop
    ctx->pc = 0x16aadcu;
    // NOP
label_16aae0:
    // 0x16aae0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16aae4: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16aae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16aae8: 0x34420120  ori         $v0, $v0, 0x120
    ctx->pc = 0x16aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
    // 0x16aaec: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x16aaecu;
    SET_GPR_VEC(ctx, 5, runtime->Load128(rdram, ctx, 0x70000120u));
    // 0x16aaf0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16aaf4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aaf8: 0x34630110  ori         $v1, $v1, 0x110
    ctx->pc = 0x16aaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)272);
    // 0x16aafc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x16aafcu;
    runtime->Store128(rdram, ctx, 0x70000100u, GPR_VEC(ctx, 5));
    // 0x16ab00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ab00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab04: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ab04u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ab08: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab0c: 0x34420130  ori         $v0, $v0, 0x130
    ctx->pc = 0x16ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)304);
    // 0x16ab10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab14: 0xe42002a0  swc1        $f0, 0x2A0($at)
    ctx->pc = 0x16ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700002A0u, bits); }
    // 0x16ab18: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16ab18u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000130u));
    // 0x16ab1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16ab20u;
    runtime->Store128(rdram, ctx, 0x70000110u, GPR_VEC(ctx, 2));
    // 0x16ab24: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ab24u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ab28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab2c: 0xe42002a4  swc1        $f0, 0x2A4($at)
    ctx->pc = 0x16ab2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x700002A4u, bits); }
label_16ab30:
    // 0x16ab30: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x16ab34: 0x34426595  ori         $v0, $v0, 0x6595
    ctx->pc = 0x16ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26005);
    // 0x16ab38: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ab40: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x16ab40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x16ab44: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x16ab44u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x16ab48: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AB48u;
    SET_GPR_U32(ctx, 31, 0x16AB50u);
    ctx->pc = 0x16AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB48u;
    // 0x16ab4c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AB48u, 0x16AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB50u;
label_16ab50:
    // 0x16ab50: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab54: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16ab58: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16ab5c: 0x34a40120  ori         $a0, $a1, 0x120
    ctx->pc = 0x16ab5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
    // 0x16ab60: 0x34a702a8  ori         $a3, $a1, 0x2A8
    ctx->pc = 0x16ab60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)680);
    // 0x16ab64: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16AB64u;
    SET_GPR_U32(ctx, 31, 0x16AB6Cu);
    ctx->pc = 0x16AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB64u;
    // 0x16ab68: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16AB64u, 0x16AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB6Cu;
label_16ab6c:
    // 0x16ab6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB6Cu;
    {
        const bool branch_taken_0x16ab6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab6c) {
            ctx->pc = 0x16AB80u;
            goto label_16ab80;
        }
    }
    ctx->pc = 0x16AB74u;
    // 0x16ab74: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x16AB74u;
    {
        const bool branch_taken_0x16ab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB74u;
        // 0x16ab78: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab74) {
            ctx->pc = 0x16B068u;
            goto label_16b068;
        }
    }
    ctx->pc = 0x16AB7Cu;
    // 0x16ab7c: 0x0  nop
    ctx->pc = 0x16ab7cu;
    // NOP
label_16ab80:
    // 0x16ab80: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab84: 0x34850080  ori         $a1, $a0, 0x80
    ctx->pc = 0x16ab84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x16ab88: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AB88u;
    SET_GPR_U32(ctx, 31, 0x16AB90u);
    ctx->pc = 0x16AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB88u;
    // 0x16ab8c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AB88u, 0x16AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB90u;
label_16ab90:
    // 0x16ab90: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16ab94: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16ab98: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16ab98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16ab9c: 0x34a40130  ori         $a0, $a1, 0x130
    ctx->pc = 0x16ab9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
    // 0x16aba0: 0x34a702ac  ori         $a3, $a1, 0x2AC
    ctx->pc = 0x16aba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)684);
    // 0x16aba4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16ABA4u;
    SET_GPR_U32(ctx, 31, 0x16ABACu);
    ctx->pc = 0x16ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABA4u;
    // 0x16aba8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16ABA4u, 0x16ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABACu;
label_16abac:
    // 0x16abac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16ABACu;
    {
        const bool branch_taken_0x16abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abac) {
            ctx->pc = 0x16ABC0u;
            goto label_16abc0;
        }
    }
    ctx->pc = 0x16ABB4u;
    // 0x16abb4: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x16ABB4u;
    {
        const bool branch_taken_0x16abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABB4u;
        // 0x16abb8: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abb4) {
            ctx->pc = 0x16B068u;
            goto label_16b068;
        }
    }
    ctx->pc = 0x16ABBCu;
    // 0x16abbc: 0x0  nop
    ctx->pc = 0x16abbcu;
    // NOP
label_16abc0:
    // 0x16abc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16abc4: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x16abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x16abc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16abcc: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x16abccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x16abd0: 0x111a3c  dsll32      $v1, $s1, 8
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 8));
    // 0x16abd4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16abd8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x16abdc: 0x171600  sll         $v0, $s7, 24
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x16abe0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16abe4: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x16abe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16abe8: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16abec: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x16abf0: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x16abf4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x16abf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16abf8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x16abf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abfc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ac00: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x16ac04: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16ac04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16ac08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ac10: 0x820019  multu       $a0, $v0
    ctx->pc = 0x16ac10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16ac14: 0x111a3c  dsll32      $v1, $s1, 8
    ctx->pc = 0x16ac14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 8));
    // 0x16ac18: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16ac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x16ac1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16ac20: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x16ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x16ac24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ac28: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x16ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x16ac2c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x16ac2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x16ac30: 0x1010  mfhi        $v0
    ctx->pc = 0x16ac30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16ac34: 0x8c240104  lw          $a0, 0x104($at)
    ctx->pc = 0x16ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 260)));
    // 0x16ac38: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x16ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x16ac3c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x16ac40: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ac44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac48: 0x8c240108  lw          $a0, 0x108($at)
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16ac4c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16ac50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac54: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16ac54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ac58: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16ac58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16ac5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac60: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16ac60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16ac64: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16ac64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ac68: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16ac68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16ac6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac70: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16ac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16ac74: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16ac74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ac78: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16ac7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac80: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16ac84: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16ac88: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16ac8c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x16ac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ac90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ac94: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16ac98: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16ac98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16ac9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aca0: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16aca4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16aca8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16acac: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16acacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16acb0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16acb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16acb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16acb8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16acb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16acbc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16acbcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16acc0: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x16acc0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x16acc4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16acc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16acc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16acc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16accc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16acccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16acd0: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16acd0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16acd4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16acd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16acdc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16ace0: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x16ace0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ace4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16ace8: 0x8c220120  lw          $v0, 0x120($at)
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000120u)); // MMIO: 0x70000120
    // 0x16acec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x16acecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16acf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16acf4: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16acf8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16acf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16acfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad00: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16ad04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16ad08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad0c: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ad0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad10: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16ad10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16ad14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad18: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16ad1c: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ad1cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad20: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16ad20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16ad24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad28: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16ad28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16ad2c: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ad2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad30: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16ad34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad38: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16ad3c: 0x8c220130  lw          $v0, 0x130($at)
    ctx->pc = 0x16ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000130u)); // MMIO: 0x70000130
    // 0x16ad40: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16ad40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16ad44: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x16ad44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ad48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad4c: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16ad50: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16ad50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ad54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad58: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16ad5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16ad60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad64: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ad64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad68: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16ad68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16ad6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad70: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16ad70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16ad74: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ad74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad78: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16ad78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16ad7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ad80: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16ad84: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ad84u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ad88: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16ad88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16ad8c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16ad90: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x16AD90u;
    {
        const bool branch_taken_0x16ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD90u;
        // 0x16ad94: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad90) {
            ctx->pc = 0x16AF68u;
            goto label_16af68;
        }
    }
    ctx->pc = 0x16AD98u;
label_16ad98:
    // 0x16ad98: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16ad9c: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x16ad9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16ada0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x16ADA0u;
    {
        const bool branch_taken_0x16ada0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADA0u;
        // 0x16ada4: 0x3c023d08  lui         $v0, 0x3D08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ada0) {
            ctx->pc = 0x16AE00u;
            goto label_16ae00;
        }
    }
    ctx->pc = 0x16ADA8u;
    // 0x16ada8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16adac: 0x34446595  ori         $a0, $v0, 0x6595
    ctx->pc = 0x16adacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26005);
    // 0x16adb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16adb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16adb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16adb8: 0x0  nop
    ctx->pc = 0x16adb8u;
    // NOP
    // 0x16adbc: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x16adbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x16adc0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16adc4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16adc8: 0x2e52818  mult        $a1, $s7, $a1
    ctx->pc = 0x16adc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16adcc: 0x70622018  mult1       $a0, $v1, $v0
    ctx->pc = 0x16adccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16add0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x16add0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x16add4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16add8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x16add8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16addc: 0x640019  multu       $v1, $a0
    ctx->pc = 0x16addcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16ade0: 0x11123c  dsll32      $v0, $s1, 8
    ctx->pc = 0x16ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 8));
    // 0x16ade4: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x16ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x16ade8: 0x1810  mfhi        $v1
    ctx->pc = 0x16ade8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16adec: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x16adecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x16adf0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x16adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16adf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16ADF4u;
    {
        const bool branch_taken_0x16adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADF4u;
        // 0x16adf8: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adf4) {
            ctx->pc = 0x16AE18u;
            goto label_16ae18;
        }
    }
    ctx->pc = 0x16ADFCu;
    // 0x16adfc: 0x0  nop
    ctx->pc = 0x16adfcu;
    // NOP
label_16ae00:
    // 0x16ae00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ae04: 0x111a3c  dsll32      $v1, $s1, 8
    ctx->pc = 0x16ae04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 8));
    // 0x16ae08: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16ae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x16ae0c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x16ae0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x16ae10: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x16ae14: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x16ae14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16ae18:
    // 0x16ae18: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16ae1c: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x16ae1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x16ae20: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AE20u;
    SET_GPR_U32(ctx, 31, 0x16AE28u);
    ctx->pc = 0x16AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE20u;
    // 0x16ae24: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AE20u, 0x16AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE28u;
label_16ae28:
    // 0x16ae28: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16ae2c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16ae2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16ae30: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16ae30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16ae34: 0x34a40120  ori         $a0, $a1, 0x120
    ctx->pc = 0x16ae34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
    // 0x16ae38: 0x34a702a8  ori         $a3, $a1, 0x2A8
    ctx->pc = 0x16ae38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)680);
    // 0x16ae3c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16AE3Cu;
    SET_GPR_U32(ctx, 31, 0x16AE44u);
    ctx->pc = 0x16AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE3Cu;
    // 0x16ae40: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16AE3Cu, 0x16AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE44u;
label_16ae44:
    // 0x16ae44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE44u;
    {
        const bool branch_taken_0x16ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae44) {
            ctx->pc = 0x16AE58u;
            goto label_16ae58;
        }
    }
    ctx->pc = 0x16AE4Cu;
    // 0x16ae4c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x16AE4Cu;
    {
        const bool branch_taken_0x16ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE4Cu;
        // 0x16ae50: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae4c) {
            ctx->pc = 0x16AF78u;
            goto label_16af78;
        }
    }
    ctx->pc = 0x16AE54u;
    // 0x16ae54: 0x0  nop
    ctx->pc = 0x16ae54u;
    // NOP
label_16ae58:
    // 0x16ae58: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16ae5c: 0x34850080  ori         $a1, $a0, 0x80
    ctx->pc = 0x16ae5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x16ae60: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x16AE60u;
    SET_GPR_U32(ctx, 31, 0x16AE68u);
    ctx->pc = 0x16AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE60u;
    // 0x16ae64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x16AE60u, 0x16AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE68u;
label_16ae68:
    // 0x16ae68: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x16ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16ae6c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16ae70: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16ae74: 0x34a40130  ori         $a0, $a1, 0x130
    ctx->pc = 0x16ae74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
    // 0x16ae78: 0x34a702ac  ori         $a3, $a1, 0x2AC
    ctx->pc = 0x16ae78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)684);
    // 0x16ae7c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16AE7Cu;
    SET_GPR_U32(ctx, 31, 0x16AE84u);
    ctx->pc = 0x16AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE7Cu;
    // 0x16ae80: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16AE7Cu, 0x16AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE84u;
label_16ae84:
    // 0x16ae84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE84u;
    {
        const bool branch_taken_0x16ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae84) {
            ctx->pc = 0x16AE98u;
            goto label_16ae98;
        }
    }
    ctx->pc = 0x16AE8Cu;
    // 0x16ae8c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x16AE8Cu;
    {
        const bool branch_taken_0x16ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE8Cu;
        // 0x16ae90: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae8c) {
            ctx->pc = 0x16AF78u;
            goto label_16af78;
        }
    }
    ctx->pc = 0x16AE94u;
    // 0x16ae94: 0x0  nop
    ctx->pc = 0x16ae94u;
    // NOP
label_16ae98:
    // 0x16ae98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ae9c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16aea0: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x16aea0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x16aea4: 0x8c230120  lw          $v1, 0x120($at)
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000120u)); // MMIO: 0x70000120
    // 0x16aea8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16aeac: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x16aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x16aeb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aeb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16aeb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16aebc: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x16aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x16aec0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16aec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16aec4: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16aec8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16aec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16aecc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aed0: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16aed4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16aed8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aedc: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16aedcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aee0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16aee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16aee4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aee8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16aee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16aeec: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16aeecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aef0: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16aef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16aef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aef8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16aefc: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16aefcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16af00: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16af00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16af04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af08: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16af08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16af0c: 0x8c220130  lw          $v0, 0x130($at)
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000130u)); // MMIO: 0x70000130
    // 0x16af10: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16af14: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x16af14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16af18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af1c: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16af20: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16af20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16af24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af28: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16af2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16af30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af34: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16af34u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16af38: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16af38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16af3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af40: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x16af40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x16af44: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16af44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16af48: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16af48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16af4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af50: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16af50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16af54: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16af54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16af58: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x16af58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x16af5c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x16af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x16af60: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x16af64: 0x0  nop
    ctx->pc = 0x16af64u;
    // NOP
label_16af68:
    // 0x16af68: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16af6c: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x16af6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16af70: 0x1420ff89  bnez        $at, . + 4 + (-0x77 << 2)
    ctx->pc = 0x16AF70u;
    {
        const bool branch_taken_0x16af70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af70) {
            ctx->pc = 0x16AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad98;
        }
    }
    ctx->pc = 0x16AF78u;
label_16af78:
    // 0x16af78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16af7c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x16af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x16af80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16af80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16af84: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x16af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x16af88: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x16af88u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x16af8c: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x16af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x16af90: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16af90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16af94: 0x3442005c  ori         $v0, $v0, 0x5C
    ctx->pc = 0x16af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)92);
    // 0x16af98: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16af9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16afa0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x16afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x16afa4: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x16afa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x16afa8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x16afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x16afac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16afb0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16afb4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16afb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16afb8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16afbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16afc0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x16afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x16afc4: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x16afc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x16afc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16afcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16afd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16afd4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16afd8: 0xa2c2000f  sb          $v0, 0xF($s6)
    ctx->pc = 0x16afd8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16afdc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x16afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16afe0: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x16afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x16afe4: 0xa6c00014  sh          $zero, 0x14($s6)
    ctx->pc = 0x16afe4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16afe8: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x16afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x16afec: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x16afecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16aff0: 0x8c230108  lw          $v1, 0x108($at)
    ctx->pc = 0x16aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16aff4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16aff8: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16affc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b000: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B000u;
    {
        const bool branch_taken_0x16b000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b000) {
            ctx->pc = 0x16B010u;
            goto label_16b010;
        }
    }
    ctx->pc = 0x16B008u;
    // 0x16b008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B008u;
    {
        const bool branch_taken_0x16b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b008) {
            ctx->pc = 0x16B018u;
            goto label_16b018;
        }
    }
    ctx->pc = 0x16B010u;
label_16b010:
    // 0x16b010: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16b010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b014: 0x0  nop
    ctx->pc = 0x16b014u;
    // NOP
label_16b018:
    // 0x16b018: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16b01c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16B01Cu;
    {
        const bool branch_taken_0x16b01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B01Cu;
        // 0x16b020: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b01c) {
            ctx->pc = 0x16B050u;
            goto label_16b050;
        }
    }
    ctx->pc = 0x16B024u;
    // 0x16b024: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 296))); // MMIO: 0x70000128
    // 0x16b028: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16b028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b02c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B02Cu;
    {
        const bool branch_taken_0x16b02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b02c) {
            ctx->pc = 0x16B038u;
            goto label_16b038;
        }
    }
    ctx->pc = 0x16B034u;
    // 0x16b034: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16b034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b038:
    // 0x16b038: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16b03c: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16b040: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b044: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B050u;
            goto label_16b050;
        }
    }
    ctx->pc = 0x16B04Cu;
    // 0x16b04c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16b04cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b050:
    // 0x16b050: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16b050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16b054: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x16b058: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b05c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x0  nop
    ctx->pc = 0x16b064u;
    // NOP
label_16b068:
    // 0x16b068: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16b068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16b06c: 0x0  nop
    ctx->pc = 0x16b06cu;
    // NOP
label_16b070:
    // 0x16b070: 0x272182b  sltu        $v1, $s3, $s2
    ctx->pc = 0x16b070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x16b074: 0x1460fde6  bnez        $v1, . + 4 + (-0x21A << 2)
    ctx->pc = 0x16B074u;
    {
        const bool branch_taken_0x16b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B074u;
        // 0x16b078: 0x2604000f  addiu       $a0, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b074) {
            ctx->pc = 0x16A810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a810;
        }
    }
    ctx->pc = 0x16B07Cu;
    // 0x16b07c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16b080: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x16b080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b084: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16b088: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x16b088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x16b08c: 0x0  nop
    ctx->pc = 0x16b08cu;
    // NOP
label_16b090:
    // 0x16b090: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x16b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b094: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x16b094u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b098: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x16b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x16b09c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x16b09cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b0a0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x16b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x16b0a4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x16b0a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b0a8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16b0ac: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x16b0acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b0b0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16b0b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16b0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b0b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16b0bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16b0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b0c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16b0c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16b0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b0c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b0cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b0d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16b0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D4u;
        // 0x16b0d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0DCu;
}
