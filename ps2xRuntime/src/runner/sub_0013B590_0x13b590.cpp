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

// Function: sub_0013B590
// Address: 0x13b590 - 0x13bb5c
void sub_0013B590_0x13b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B590_0x13b590");
#endif

    switch (ctx->pc) {
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b868u: goto label_13b868;
        case 0x13b8a0u: goto label_13b8a0;
        case 0x13b940u: goto label_13b940;
        case 0x13b950u: goto label_13b950;
        case 0x13b9d4u: goto label_13b9d4;
        case 0x13b9e0u: goto label_13b9e0;
        case 0x13bab4u: goto label_13bab4;
        default: break;
    }

    ctx->pc = 0x13b590u;

    // 0x13b590: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x13b594: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13b598: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x13b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x13b59c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x13b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13b5a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x13b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x13b5a4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x13b5a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13b5ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13b5b0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13b5b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13b5b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13b5bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13b5c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13b5c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b5c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13b5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13b5d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x13b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x13b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x13b5d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13b5dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B5DCu;
    {
        const bool branch_taken_0x13b5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5DCu;
        // 0x13b5e0: 0xafa0013c  sw          $zero, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5dc) {
            ctx->pc = 0x13B5F0u;
            goto label_13b5f0;
        }
    }
    ctx->pc = 0x13B5E4u;
    // 0x13b5e4: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x13B5E4u;
    {
        const bool branch_taken_0x13b5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5E4u;
        // 0x13b5e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5e4) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13B5ECu;
    // 0x13b5ec: 0x0  nop
    ctx->pc = 0x13b5ecu;
    // NOP
label_13b5f0:
    // 0x13b5f0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x13b5f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13b5f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B5F4u;
    {
        const bool branch_taken_0x13b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5F4u;
        // 0x13b5f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5f4) {
            ctx->pc = 0x13B608u;
            goto label_13b608;
        }
    }
    ctx->pc = 0x13B5FCu;
    // 0x13b5fc: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x13B5FCu;
    {
        const bool branch_taken_0x13b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b5fc) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13B604u;
    // 0x13b604: 0x0  nop
    ctx->pc = 0x13b604u;
    // NOP
label_13b608:
    // 0x13b608: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x13b60c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b610: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13b610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13b614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b618: 0x94236ad2  lhu         $v1, 0x6AD2($at)
    ctx->pc = 0x13b618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13b61c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13b620: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x13b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x13b624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13b624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b628: 0x0  nop
    ctx->pc = 0x13b628u;
    // NOP
    // 0x13b62c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x13b62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x13b630: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x13b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b634: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x13b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b638: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b63c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13b63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13b640: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x13b640u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x13b644: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13b644u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13b648: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x13b648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13b64c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x13b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b650: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x13b650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x13b654: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x13b654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x13b658: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x13b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b65c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b660: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b664: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x13b664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13b668: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x13b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b66c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x13b66cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x13b670: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x13b670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x13b674: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x13b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b678: 0x3012  mflo        $a2
    ctx->pc = 0x13b678u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x13b67c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13b67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13b680: 0x0  nop
    ctx->pc = 0x13b680u;
    // NOP
    // 0x13b684: 0x7043001a  div1        $zero, $v0, $v1
    ctx->pc = 0x13b684u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x13b688: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x13b688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x13b68c: 0x0  nop
    ctx->pc = 0x13b68cu;
    // NOP
    // 0x13b690: 0x70001012  mflo1       $v0
    ctx->pc = 0x13b690u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x13b694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13b698: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13b69c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13b69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b6a0: 0x2a410040  slti        $at, $s2, 0x40
    ctx->pc = 0x13b6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13b6a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B6A4u;
    {
        const bool branch_taken_0x13b6a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6A4u;
        // 0x13b6a8: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6a4) {
            ctx->pc = 0x13B6B0u;
            goto label_13b6b0;
        }
    }
    ctx->pc = 0x13B6ACu;
    // 0x13b6ac: 0x6412003f  daddiu      $s2, $zero, 0x3F
    ctx->pc = 0x13b6acu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)63);
label_13b6b0:
    // 0x13b6b0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x13b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x13b6b4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B6B4u;
    {
        const bool branch_taken_0x13b6b4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x13b6b4) {
            ctx->pc = 0x13B6C0u;
            goto label_13b6c0;
        }
    }
    ctx->pc = 0x13B6BCu;
    // 0x13b6bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13b6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b6c0:
    // 0x13b6c0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x13b6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x13b6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b6c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13b6c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6cc: 0x821814  dsllv       $v1, $v0, $a0
    ctx->pc = 0x13b6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x13b6d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13b6d4: 0xff838538  sd          $v1, -0x7AC8($gp)
    ctx->pc = 0x13b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 3));
    // 0x13b6d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13b6dc: 0x8c530ad0  lw          $s3, 0xAD0($v0)
    ctx->pc = 0x13b6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
    // 0x13b6e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13b6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13b6e4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x13B6E4u;
    {
        const bool branch_taken_0x13b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6E4u;
        // 0x13b6e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6e4) {
            ctx->pc = 0x13BA70u;
            goto label_13ba70;
        }
    }
    ctx->pc = 0x13B6ECu;
    // 0x13b6ec: 0x0  nop
    ctx->pc = 0x13b6ecu;
    // NOP
label_13b6f0:
    // 0x13b6f0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x13b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b6f4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x13b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b6f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b6fc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x13B6FCu;
    {
        const bool branch_taken_0x13b6fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b6fc) {
            ctx->pc = 0x13B728u;
            goto label_13b728;
        }
    }
    ctx->pc = 0x13B704u;
    // 0x13b704: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b708: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b70c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13B70Cu;
    {
        const bool branch_taken_0x13b70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b70c) {
            ctx->pc = 0x13B728u;
            goto label_13b728;
        }
    }
    ctx->pc = 0x13B714u;
    // 0x13b714: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b718: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b71c: 0x450000d0  bc1f        . + 4 + (0xD0 << 2)
    ctx->pc = 0x13B71Cu;
    {
        const bool branch_taken_0x13b71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b71c) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B724u;
    // 0x13b724: 0x0  nop
    ctx->pc = 0x13b724u;
    // NOP
label_13b728:
    // 0x13b728: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x13b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b72c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x13b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b734: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13B734u;
    {
        const bool branch_taken_0x13b734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b734) {
            ctx->pc = 0x13B760u;
            goto label_13b760;
        }
    }
    ctx->pc = 0x13B73Cu;
    // 0x13b73c: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x13b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b744: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13B744u;
    {
        const bool branch_taken_0x13b744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b744) {
            ctx->pc = 0x13B760u;
            goto label_13b760;
        }
    }
    ctx->pc = 0x13B74Cu;
    // 0x13b74c: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x13b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b754: 0x450100c2  bc1t        . + 4 + (0xC2 << 2)
    ctx->pc = 0x13B754u;
    {
        const bool branch_taken_0x13b754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b754) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B75Cu;
    // 0x13b75c: 0x0  nop
    ctx->pc = 0x13b75cu;
    // NOP
label_13b760:
    // 0x13b760: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x13b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b764: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b768: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b76c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B76Cu;
    {
        const bool branch_taken_0x13b76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b76c) {
            ctx->pc = 0x13B778u;
            goto label_13b778;
        }
    }
    ctx->pc = 0x13B774u;
    // 0x13b774: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b774u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b778:
    // 0x13b778: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b77c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b780: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B780u;
    {
        const bool branch_taken_0x13b780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b780) {
            ctx->pc = 0x13B790u;
            goto label_13b790;
        }
    }
    ctx->pc = 0x13B788u;
    // 0x13b788: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b788u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13b78c: 0x0  nop
    ctx->pc = 0x13b78cu;
    // NOP
label_13b790:
    // 0x13b790: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x13b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b798: 0x450100b1  bc1t        . + 4 + (0xB1 << 2)
    ctx->pc = 0x13B798u;
    {
        const bool branch_taken_0x13b798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b798) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B7A0u;
    // 0x13b7a0: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x13b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b7a4: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x13b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b7a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B7ACu;
    {
        const bool branch_taken_0x13b7ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7ac) {
            ctx->pc = 0x13B7B8u;
            goto label_13b7b8;
        }
    }
    ctx->pc = 0x13B7B4u;
    // 0x13b7b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b7b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b7b8:
    // 0x13b7b8: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x13b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B7C0u;
    {
        const bool branch_taken_0x13b7c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7c0) {
            ctx->pc = 0x13B7D0u;
            goto label_13b7d0;
        }
    }
    ctx->pc = 0x13B7C8u;
    // 0x13b7c8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b7c8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13b7cc: 0x0  nop
    ctx->pc = 0x13b7ccu;
    // NOP
label_13b7d0:
    // 0x13b7d0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x13b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b7d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7d8: 0x450000a1  bc1f        . + 4 + (0xA1 << 2)
    ctx->pc = 0x13B7D8u;
    {
        const bool branch_taken_0x13b7d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7d8) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B7E0u;
    // 0x13b7e0: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x13b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b7e4: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B7ECu;
    {
        const bool branch_taken_0x13b7ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7ec) {
            ctx->pc = 0x13B7F8u;
            goto label_13b7f8;
        }
    }
    ctx->pc = 0x13B7F4u;
    // 0x13b7f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b7f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b7f8:
    // 0x13b7f8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b7fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b800: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B800u;
    {
        const bool branch_taken_0x13b800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b800) {
            ctx->pc = 0x13B810u;
            goto label_13b810;
        }
    }
    ctx->pc = 0x13B808u;
    // 0x13b808: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b808u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13b80c: 0x0  nop
    ctx->pc = 0x13b80cu;
    // NOP
label_13b810:
    // 0x13b810: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x13b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b814: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b818: 0x45010091  bc1t        . + 4 + (0x91 << 2)
    ctx->pc = 0x13B818u;
    {
        const bool branch_taken_0x13b818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b818) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B820u;
    // 0x13b820: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x13b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b824: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x13b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b828: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b82c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B82Cu;
    {
        const bool branch_taken_0x13b82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b82c) {
            ctx->pc = 0x13B838u;
            goto label_13b838;
        }
    }
    ctx->pc = 0x13B834u;
    // 0x13b834: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b834u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13b838:
    // 0x13b838: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x13b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b83c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b83cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b840: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B840u;
    {
        const bool branch_taken_0x13b840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b840) {
            ctx->pc = 0x13B850u;
            goto label_13b850;
        }
    }
    ctx->pc = 0x13B848u;
    // 0x13b848: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13b848u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13b84c: 0x0  nop
    ctx->pc = 0x13b84cu;
    // NOP
label_13b850:
    // 0x13b850: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x13b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b854: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b858: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x13B858u;
    {
        const bool branch_taken_0x13b858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B858u;
        // 0x13b85c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b858) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B860u;
    // 0x13b860: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13B860u;
    {
        const bool branch_taken_0x13b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b860) {
            ctx->pc = 0x13B8D0u;
            goto label_13b8d0;
        }
    }
    ctx->pc = 0x13B868u;
label_13b868:
    // 0x13b868: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b86c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b870: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13b870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13b874: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13b878: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x13b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13b87c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x13b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x13b880: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13b880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b884: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13b884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b888: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13b888u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13b88c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13b890: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x13b894: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13b898: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13B898u;
    SET_GPR_U32(ctx, 31, 0x13B8A0u);
    ctx->pc = 0x13B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B898u;
    // 0x13b89c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13B898u, 0x13B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8A0u;
label_13b8a0:
    // 0x13b8a0: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x13b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b8a4: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b8a8: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x13b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b8b0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x13b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13b8b4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x13b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13b8b8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x13b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b8bc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x13b8bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b8c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13b8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b8c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x13b8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13b8c8: 0xe4600130  swc1        $f0, 0x130($v1)
    ctx->pc = 0x13b8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 304), bits); }
    // 0x13b8cc: 0x0  nop
    ctx->pc = 0x13b8ccu;
    // NOP
label_13b8d0:
    // 0x13b8d0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b8d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13b8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13b8d8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13B8D8u;
    {
        const bool branch_taken_0x13b8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b8d8) {
            ctx->pc = 0x13B868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b868;
        }
    }
    ctx->pc = 0x13B8E0u;
    // 0x13b8e0: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x13b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b8e4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x13b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b8e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b8ec: 0x0  nop
    ctx->pc = 0x13b8ecu;
    // NOP
    // 0x13b8f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13b8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13b8f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b8f8: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x13B8F8u;
    {
        const bool branch_taken_0x13b8f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b8f8) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13B900u;
    // 0x13b900: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x13b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b904: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13b904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13b908: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x13b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b90c: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x13b90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x13b910: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13b914: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13b918: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x13b918u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x13b91c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x13b91cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x13b920: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x13b920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x13b924: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x13b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x13b928: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x13b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b92c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x13b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b930: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x13b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b934: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x13b934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13b938: 0xc0414c0  jal         func_105300
    ctx->pc = 0x13B938u;
    SET_GPR_U32(ctx, 31, 0x13B940u);
    ctx->pc = 0x13B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B938u;
    // 0x13b93c: 0x46010303  div.s       $f12, $f0, $f1 (Delay Slot)
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x13B938u, 0x13B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B940u;
label_13b940:
    // 0x13b940: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b944: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13B944u;
    {
        const bool branch_taken_0x13b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B944u;
        // 0x13b948: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b944) {
            ctx->pc = 0x13BA08u;
            goto label_13ba08;
        }
    }
    ctx->pc = 0x13B94Cu;
    // 0x13b94c: 0x0  nop
    ctx->pc = 0x13b94cu;
    // NOP
label_13b950:
    // 0x13b950: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13b954: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x13b954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b958: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13b95c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b960: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x13b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13b964: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13b964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b968: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b96c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b970: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13b974: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13b974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13b978: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13b97c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b980: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13b984: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13b988: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13b988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b98c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13b98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b990: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13b990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13b994: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13b994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13b998: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13b998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13b99c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b9a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13b9a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13b9a8: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x13b9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x13b9ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13b9b0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x13b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13b9b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13b9b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x13b9b8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13b9b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b9bc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13b9bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13b9c0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13b9c4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x13b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13b9c8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x13b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13b9cc: 0xc041460  jal         func_105180
    ctx->pc = 0x13B9CCu;
    SET_GPR_U32(ctx, 31, 0x13B9D4u);
    ctx->pc = 0x13B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9CCu;
    // 0x13b9d0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13B9CCu, 0x13B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9D4u;
label_13b9d4:
    // 0x13b9d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13b9d8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13B9D8u;
    SET_GPR_U32(ctx, 31, 0x13B9E0u);
    ctx->pc = 0x13B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9D8u;
    // 0x13b9dc: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13B9D8u, 0x13B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9E0u;
label_13b9e0:
    // 0x13b9e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13b9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b9e4: 0x0  nop
    ctx->pc = 0x13b9e4u;
    // NOP
    // 0x13b9e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13b9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b9ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13B9ECu;
    {
        const bool branch_taken_0x13b9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b9ec) {
            ctx->pc = 0x13BA00u;
            goto label_13ba00;
        }
    }
    ctx->pc = 0x13B9F4u;
    // 0x13b9f4: 0x64140003  daddiu      $s4, $zero, 0x3
    ctx->pc = 0x13b9f4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x13b9f8: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x13b9f8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13b9fc: 0x0  nop
    ctx->pc = 0x13b9fcu;
    // NOP
label_13ba00:
    // 0x13ba00: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x13ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13ba04: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x13ba04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13ba08:
    // 0x13ba08: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x13ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x13ba0c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x13ba0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13ba10: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x13BA10u;
    {
        const bool branch_taken_0x13ba10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba10) {
            ctx->pc = 0x13B950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b950;
        }
    }
    ctx->pc = 0x13BA18u;
    // 0x13ba18: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BA18u;
    {
        const bool branch_taken_0x13ba18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA18u;
        // 0x13ba1c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba18) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13BA20u;
    // 0x13ba20: 0xc4213004  lwc1        $f1, 0x3004($at)
    ctx->pc = 0x13ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ba24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ba24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ba28: 0x0  nop
    ctx->pc = 0x13ba28u;
    // NOP
    // 0x13ba2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ba2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ba30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA30u;
    {
        const bool branch_taken_0x13ba30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ba30) {
            ctx->pc = 0x13BA40u;
            goto label_13ba40;
        }
    }
    ctx->pc = 0x13BA38u;
    // 0x13ba38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ba3c: 0xe4203004  swc1        $f0, 0x3004($at)
    ctx->pc = 0x13ba3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003004u, bits); }
label_13ba40:
    // 0x13ba40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ba44: 0xc4203004  lwc1        $f0, 0x3004($at)
    ctx->pc = 0x13ba44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ba48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13ba48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ba4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA4Cu;
    {
        const bool branch_taken_0x13ba4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ba4c) {
            ctx->pc = 0x13BA60u;
            goto label_13ba60;
        }
    }
    ctx->pc = 0x13BA54u;
    // 0x13ba54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13ba54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13ba58: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x13ba58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ba5c: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x13ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
label_13ba60:
    // 0x13ba60: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x13ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x13ba64: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x13ba64u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ba68: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x13ba68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x13ba6c: 0x0  nop
    ctx->pc = 0x13ba6cu;
    // NOP
label_13ba70:
    // 0x13ba70: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x13ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x13ba74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13ba78: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x13ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x13ba7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ba80: 0x9442085c  lhu         $v0, 0x85C($v0)
    ctx->pc = 0x13ba80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x13ba84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ba88: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x13BA88u;
    {
        const bool branch_taken_0x13ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ba88) {
            ctx->pc = 0x13B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b6f0;
        }
    }
    ctx->pc = 0x13BA90u;
    // 0x13ba90: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x13ba90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x13ba94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13BA94u;
    {
        const bool branch_taken_0x13ba94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA94u;
        // 0x13ba98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba94) {
            ctx->pc = 0x13BAF0u;
            goto label_13baf0;
        }
    }
    ctx->pc = 0x13BA9Cu;
    // 0x13ba9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13baa0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x13baa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13baa4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x13baa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13baa8: 0x27a8013c  addiu       $t0, $sp, 0x13C
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x13baac: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13BAACu;
    SET_GPR_U32(ctx, 31, 0x13BAB4u);
    ctx->pc = 0x13BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAACu;
    // 0x13bab0: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13BAACu, 0x13BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAB4u;
label_13bab4:
    // 0x13bab4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bab8: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13BAB8u;
    {
        const bool branch_taken_0x13bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13bab8) {
            ctx->pc = 0x13BAF0u;
            goto label_13baf0;
        }
    }
    ctx->pc = 0x13BAC0u;
    // 0x13bac0: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x13bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bac4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x13bac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bac8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13BAC8u;
    {
        const bool branch_taken_0x13bac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bac8) {
            ctx->pc = 0x13BAF0u;
            goto label_13baf0;
        }
    }
    ctx->pc = 0x13BAD0u;
    // 0x13bad0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BAD0u;
    {
        const bool branch_taken_0x13bad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAD0u;
        // 0x13bad4: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bad0) {
            ctx->pc = 0x13BAE8u;
            goto label_13bae8;
        }
    }
    ctx->pc = 0x13BAD8u;
    // 0x13bad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13badc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x13badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13bae0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13bae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bae4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x13bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_13bae8:
    // 0x13bae8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13BAE8u;
    {
        const bool branch_taken_0x13bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAE8u;
        // 0x13baec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bae8) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13BAF0u;
label_13baf0:
    // 0x13baf0: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x13BAF0u;
    {
        const bool branch_taken_0x13baf0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x13baf0) {
            ctx->pc = 0x13BB20u;
            goto label_13bb20;
        }
    }
    ctx->pc = 0x13BAF8u;
    // 0x13baf8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BAF8u;
    {
        const bool branch_taken_0x13baf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAF8u;
        // 0x13bafc: 0xe6d40000  swc1        $f20, 0x0($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baf8) {
            ctx->pc = 0x13BB18u;
            goto label_13bb18;
        }
    }
    ctx->pc = 0x13BB00u;
    // 0x13bb00: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13bb04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13bb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb08: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13bb0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13bb0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bb10: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x13bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x13bb14: 0x0  nop
    ctx->pc = 0x13bb14u;
    // NOP
label_13bb18:
    // 0x13bb18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB18u;
    {
        const bool branch_taken_0x13bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB18u;
        // 0x13bb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb18) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13BB20u;
label_13bb20:
    // 0x13bb20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb24: 0x0  nop
    ctx->pc = 0x13bb24u;
    // NOP
label_13bb28:
    // 0x13bb28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13bb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13bb2c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x13bb2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13bb30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13bb34: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13bb34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13bb38: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13bb38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bb3c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13bb3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bb40: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13bb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bb44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13bb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bb48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13bb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bb4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13bb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13bb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB54u;
        // 0x13bb58: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB5Cu;
}
