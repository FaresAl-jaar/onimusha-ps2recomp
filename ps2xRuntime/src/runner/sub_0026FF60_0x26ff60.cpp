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

// Function: sub_0026FF60
// Address: 0x26ff60 - 0x2701cc
void sub_0026FF60_0x26ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FF60_0x26ff60");
#endif

    switch (ctx->pc) {
        case 0x26fff0u: goto label_26fff0;
        case 0x27018cu: goto label_27018c;
        default: break;
    }

    ctx->pc = 0x26ff60u;

    // 0x26ff60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ff64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ff68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ff6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ff70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ff70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff74: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x26ff74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
    // 0x26ff78: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FF78u;
    {
        const bool branch_taken_0x26ff78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF78u;
        // 0x26ff7c: 0x261005e0  addiu       $s0, $s0, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff78) {
            ctx->pc = 0x26FF88u;
            goto label_26ff88;
        }
    }
    ctx->pc = 0x26FF80u;
    // 0x26ff80: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x26FF80u;
    {
        const bool branch_taken_0x26ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF80u;
        // 0x26ff84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff80) {
            ctx->pc = 0x2701B8u;
            goto label_2701b8;
        }
    }
    ctx->pc = 0x26FF88u;
label_26ff88:
    // 0x26ff88: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x26ff88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26ff8c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26FF8Cu;
    {
        const bool branch_taken_0x26ff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff8c) {
            ctx->pc = 0x26FFE0u;
            goto label_26ffe0;
        }
    }
    ctx->pc = 0x26FF94u;
    // 0x26ff94: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x26ff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ff98: 0x3c024008  lui         $v0, 0x4008
    ctx->pc = 0x26ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16392 << 16));
    // 0x26ff9c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x26ff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x26ffa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26ffa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ffa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26ffa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ffa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ffac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26ffacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ffb0: 0x0  nop
    ctx->pc = 0x26ffb0u;
    // NOP
    // 0x26ffb4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x26ffb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x26ffb8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x26ffb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x26ffbc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x26ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ffc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ffc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ffc4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x26ffc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ffc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26FFC8u;
    {
        const bool branch_taken_0x26ffc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFC8u;
        // 0x26ffcc: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffc8) {
            ctx->pc = 0x26FFE0u;
            goto label_26ffe0;
        }
    }
    ctx->pc = 0x26FFD0u;
    // 0x26ffd0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x26ffd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26ffd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ffd8: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x26ffd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ffdc: 0x0  nop
    ctx->pc = 0x26ffdcu;
    // NOP
label_26ffe0:
    // 0x26ffe0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26ffe4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26ffe8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x26FFE8u;
    SET_GPR_U32(ctx, 31, 0x26FFF0u);
    ctx->pc = 0x26FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFE8u;
    // 0x26ffec: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x26FFE8u, 0x26FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFF0u;
label_26fff0:
    // 0x26fff0: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x26FFF0u;
    {
        const bool branch_taken_0x26fff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fff0) {
            ctx->pc = 0x270190u;
            goto label_270190;
        }
    }
    ctx->pc = 0x26FFF8u;
    // 0x26fff8: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x26fff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fffc: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x26fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270004: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x270004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270008: 0x0  nop
    ctx->pc = 0x270008u;
    // NOP
    // 0x27000c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27000cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270010: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x270010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x270014: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x270014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x270018: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27001c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27001cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x270020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x270020u;
    {
        const bool branch_taken_0x270020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270020) {
            ctx->pc = 0x270030u;
            goto label_270030;
        }
    }
    ctx->pc = 0x270028u;
    // 0x270028: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x270028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x27002c: 0x0  nop
    ctx->pc = 0x27002cu;
    // NOP
label_270030:
    // 0x270030: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x270030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x270034: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x270034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270038: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27003c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x27003cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x270040: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x270040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x270044: 0x34650080  ori         $a1, $v1, 0x80
    ctx->pc = 0x270044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x270048: 0x9226000b  lbu         $a2, 0xB($s1)
    ctx->pc = 0x270048u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x27004c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27004cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x270050: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x270050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270054: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x270054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x270058: 0x9227000c  lbu         $a3, 0xC($s1)
    ctx->pc = 0x270058u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27005c: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x27005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270060: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x270060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x270064: 0x46050943  div.s       $f5, $f1, $f5
    ctx->pc = 0x270064u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x270068: 0x3c033fd9  lui         $v1, 0x3FD9
    ctx->pc = 0x270068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16345 << 16));
    // 0x27006c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x27006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x270070: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x270070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x270074: 0xc96004  sllv        $t4, $t1, $a2
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x270078: 0xe93804  sllv        $a3, $t1, $a3
    ctx->pc = 0x270078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x27007c: 0x24ebfff8  addiu       $t3, $a3, -0x8
    ctx->pc = 0x27007cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x270080: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x270080u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x270084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x270084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270088: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x270088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27008c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x27008cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x270090: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x270090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x270094: 0x46002140  add.s       $f5, $f4, $f0
    ctx->pc = 0x270094u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x270098: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x270098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27009c: 0xc2100  sll         $a0, $t4, 4
    ctx->pc = 0x27009cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2700a0: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x2700a0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2700a4: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x2700a4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2700a8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2700a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2700ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2700acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2700b0: 0x46052182  mul.s       $f6, $f4, $f5
    ctx->pc = 0x2700b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2700b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2700b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2700b8: 0x46050102  mul.s       $f4, $f0, $f5
    ctx->pc = 0x2700b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2700bc: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x2700bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x2700c0: 0x34660156  ori         $a2, $v1, 0x156
    ctx->pc = 0x2700c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)342);
    // 0x2700c4: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2700c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2700c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2700cc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2700ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2700d0: 0x34692000  ori         $t1, $v1, 0x2000
    ctx->pc = 0x2700d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2700d4: 0x46023003  div.s       $f0, $f6, $f2
    ctx->pc = 0x2700d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[6], ctx->f[2]); }
    // 0x2700d8: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2700dc: 0xb1d00  sll         $v1, $t3, 20
    ctx->pc = 0x2700dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
    // 0x2700e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2700e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2700e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2700e8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2700e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2700ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2700ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2700f0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2700f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2700f4: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2700f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2700f8: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x2700f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x2700fc: 0xa040000f  sb          $zero, 0xF($v0)
    ctx->pc = 0x2700fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x270100: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x270100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x270104: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x270104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x270108: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x270108u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x27010c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x27010cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x270110: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x270114: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x270114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x270118: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x270118u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x27011c: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x27011cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x270120: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x270120u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x270124: 0x25290700  addiu       $t1, $t1, 0x700
    ctx->pc = 0x270124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1792));
    // 0x270128: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x27012c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x27012cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x270130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x270130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270134: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x270138: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x270138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x27013c: 0x0  nop
    ctx->pc = 0x27013cu;
    // NOP
    // 0x270140: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x270140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x270144: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x270144u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x270148: 0x25290f20  addiu       $t1, $t1, 0xF20
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3872));
    // 0x27014c: 0x94cc0  sll         $t1, $t1, 19
    ctx->pc = 0x27014cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 19));
    // 0x270150: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x270150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x270154: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x270154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x270158: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27015c: 0xac480024  sw          $t0, 0x24($v0)
    ctx->pc = 0x27015cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 8));
    // 0x270160: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x270160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x270164: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x270164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x270168: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x270168u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x27016c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x27016cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x270170: 0x0  nop
    ctx->pc = 0x270170u;
    // NOP
    // 0x270174: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x270174u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x270178: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x270178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x27017c: 0xac480028  sw          $t0, 0x28($v0)
    ctx->pc = 0x27017cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 8));
    // 0x270180: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x270180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x270184: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x270184u;
    SET_GPR_U32(ctx, 31, 0x27018Cu);
    ctx->pc = 0x270188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270184u;
    // 0x270188: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x270184u, 0x27018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27018Cu;
label_27018c:
    // 0x27018c: 0x0  nop
    ctx->pc = 0x27018cu;
    // NOP
label_270190:
    // 0x270190: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x270190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270198: 0x0  nop
    ctx->pc = 0x270198u;
    // NOP
    // 0x27019c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27019cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2701a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2701A0u;
    {
        const bool branch_taken_0x2701a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2701A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701A0u;
        // 0x2701a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a0) {
            ctx->pc = 0x2701B0u;
            goto label_2701b0;
        }
    }
    ctx->pc = 0x2701A8u;
    // 0x2701a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2701A8u;
    {
        const bool branch_taken_0x2701a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2701a8) {
            ctx->pc = 0x2701B8u;
            goto label_2701b8;
        }
    }
    ctx->pc = 0x2701B0u;
label_2701b0:
    // 0x2701b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2701b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701b4: 0x0  nop
    ctx->pc = 0x2701b4u;
    // NOP
label_2701b8:
    // 0x2701b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2701b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2701bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2701bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2701c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2701c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2701c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2701C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2701C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701C4u;
        // 0x2701c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2701C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2701CCu;
}
