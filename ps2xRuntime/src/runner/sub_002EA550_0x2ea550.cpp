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

// Function: sub_002EA550
// Address: 0x2ea550 - 0x2eae54
void sub_002EA550_0x2ea550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA550_0x2ea550");
#endif

    switch (ctx->pc) {
        case 0x2ea6fcu: goto label_2ea6fc;
        case 0x2ea7f4u: goto label_2ea7f4;
        case 0x2ea8e0u: goto label_2ea8e0;
        case 0x2ea9d4u: goto label_2ea9d4;
        case 0x2eaac0u: goto label_2eaac0;
        case 0x2eabb4u: goto label_2eabb4;
        case 0x2eac20u: goto label_2eac20;
        case 0x2eac98u: goto label_2eac98;
        case 0x2ead10u: goto label_2ead10;
        case 0x2ead88u: goto label_2ead88;
        case 0x2eae00u: goto label_2eae00;
        default: break;
    }

    ctx->pc = 0x2ea550u;

    // 0x2ea550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ea554: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea558: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ea558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ea55c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ea560: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ea560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2ea564: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ea564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ea568: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea56c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ea56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ea570: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ea570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ea574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ea574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea578: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ea578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ea57c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ea57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea580: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ea580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ea584: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2ea584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea588: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x2ea588u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ea58c: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x2ea58cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ea590: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2ea590u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ea594: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2ea594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ea598: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x2ea598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x2ea59c: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x2ea59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2ea5a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ea5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea5a4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EA5A4u;
    {
        const bool branch_taken_0x2ea5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5A4u;
        // 0x2ea5a8: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5a4) {
            ctx->pc = 0x2EA5E0u;
            goto label_2ea5e0;
        }
    }
    ctx->pc = 0x2EA5ACu;
    // 0x2ea5ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea5b0: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2ea5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2ea5b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ea5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ea5b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA5B8u;
    {
        const bool branch_taken_0x2ea5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5B8u;
        // 0x2ea5bc: 0x3c0241c8  lui         $v0, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5b8) {
            ctx->pc = 0x2EA5E0u;
            goto label_2ea5e0;
        }
    }
    ctx->pc = 0x2EA5C0u;
    // 0x2ea5c0: 0x3c033f92  lui         $v1, 0x3F92
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16274 << 16));
    // 0x2ea5c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ea5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ea5c8: 0x34634925  ori         $v1, $v1, 0x4925
    ctx->pc = 0x2ea5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18725);
    // 0x2ea5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea5d0: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x2ea5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2ea5d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea5d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2ea5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2ea5dc: 0x0  nop
    ctx->pc = 0x2ea5dcu;
    // NOP
label_2ea5e0:
    // 0x2ea5e0: 0x82630233  lb          $v1, 0x233($s3)
    ctx->pc = 0x2ea5e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 563)));
    // 0x2ea5e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ea5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea5e8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA5E8u;
    {
        const bool branch_taken_0x2ea5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5E8u;
        // 0x2ea5ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5e8) {
            ctx->pc = 0x2EA608u;
            goto label_2ea608;
        }
    }
    ctx->pc = 0x2EA5F0u;
    // 0x2ea5f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA5F0u;
    {
        const bool branch_taken_0x2ea5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ea5f0) {
            ctx->pc = 0x2EA608u;
            goto label_2ea608;
        }
    }
    ctx->pc = 0x2EA5F8u;
    // 0x2ea5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea5fc: 0x146200ba  bne         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x2EA5FCu;
    {
        const bool branch_taken_0x2ea5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea5fc) {
            ctx->pc = 0x2EA8E8u;
            goto label_2ea8e8;
        }
    }
    ctx->pc = 0x2EA604u;
    // 0x2ea604: 0x0  nop
    ctx->pc = 0x2ea604u;
    // NOP
label_2ea608:
    // 0x2ea608: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x2ea608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2ea60c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ea60cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ea610: 0x7a43c  dsll32      $s4, $a3, 16
    ctx->pc = 0x2ea610u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2ea614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea618: 0x0  nop
    ctx->pc = 0x2ea618u;
    // NOP
    // 0x2ea61c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea620: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea624: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x2ea624u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2ea628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea62c: 0x0  nop
    ctx->pc = 0x2ea62cu;
    // NOP
    // 0x2ea630: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ea630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea634: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA634u;
    {
        const bool branch_taken_0x2ea634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA634u;
        // 0x2ea638: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea634) {
            ctx->pc = 0x2EA64Cu;
            goto label_2ea64c;
        }
    }
    ctx->pc = 0x2EA63Cu;
    // 0x2ea63c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea63cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea640: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea644: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA644u;
    {
        const bool branch_taken_0x2ea644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA644u;
        // 0x2ea648: 0xc7818078  lwc1        $f1, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea644) {
            ctx->pc = 0x2EA668u;
            goto label_2ea668;
        }
    }
    ctx->pc = 0x2EA64Cu;
label_2ea64c:
    // 0x2ea64c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2ea64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ea650: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea654: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea658: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea65c: 0x0  nop
    ctx->pc = 0x2ea65cu;
    // NOP
    // 0x2ea660: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ea660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ea664: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2ea664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ea668:
    // 0x2ea668: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea670: 0x0  nop
    ctx->pc = 0x2ea670u;
    // NOP
    // 0x2ea674: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea678: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA678u;
    {
        const bool branch_taken_0x2ea678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA678u;
        // 0x2ea67c: 0x8e670238  lw          $a3, 0x238($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea678) {
            ctx->pc = 0x2EA690u;
            goto label_2ea690;
        }
    }
    ctx->pc = 0x2EA680u;
    // 0x2ea680: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea684: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ea684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea688: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA688u;
    {
        const bool branch_taken_0x2ea688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea688) {
            ctx->pc = 0x2EA6A8u;
            goto label_2ea6a8;
        }
    }
    ctx->pc = 0x2EA690u;
label_2ea690:
    // 0x2ea690: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ea690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ea694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea698: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea69c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ea69cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea6a0: 0x0  nop
    ctx->pc = 0x2ea6a0u;
    // NOP
    // 0x2ea6a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ea6a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2ea6a8:
    // 0x2ea6a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ea6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ea6ac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2ea6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ea6b0: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2ea6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2ea6b4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2ea6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea6b8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ea6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ea6bc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ea6c0: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x2ea6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x2ea6c4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ea6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea6c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea6cc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea6d0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ea6d4: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2ea6d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ea6d8: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x2ea6d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2ea6dc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea6e0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea6e4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea6e8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ea6e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea6ec: 0x1012  mflo        $v0
    ctx->pc = 0x2ea6ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ea6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6f4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA6F4u;
    SET_GPR_U32(ctx, 31, 0x2EA6FCu);
    ctx->pc = 0x2EA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6F4u;
    // 0x2ea6f8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA6F4u, 0x2EA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6FCu;
label_2ea6fc:
    // 0x2ea6fc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2ea6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea700: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea708: 0x0  nop
    ctx->pc = 0x2ea708u;
    // NOP
    // 0x2ea70c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea710: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA710u;
    {
        const bool branch_taken_0x2ea710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea710) {
            ctx->pc = 0x2EA728u;
            goto label_2ea728;
        }
    }
    ctx->pc = 0x2EA718u;
    // 0x2ea718: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea718u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea71c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ea71cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA720u;
    {
        const bool branch_taken_0x2ea720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA720u;
        // 0x2ea724: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea720) {
            ctx->pc = 0x2EA744u;
            goto label_2ea744;
        }
    }
    ctx->pc = 0x2EA728u;
label_2ea728:
    // 0x2ea728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ea728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ea72c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea730: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea734: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ea734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea738: 0x0  nop
    ctx->pc = 0x2ea738u;
    // NOP
    // 0x2ea73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea740: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2ea744:
    // 0x2ea744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea748: 0x0  nop
    ctx->pc = 0x2ea748u;
    // NOP
    // 0x2ea74c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ea74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea750: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA750u;
    {
        const bool branch_taken_0x2ea750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea750) {
            ctx->pc = 0x2EA768u;
            goto label_2ea768;
        }
    }
    ctx->pc = 0x2EA758u;
    // 0x2ea758: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea75c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA760u;
    {
        const bool branch_taken_0x2ea760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea760) {
            ctx->pc = 0x2EA780u;
            goto label_2ea780;
        }
    }
    ctx->pc = 0x2EA768u;
label_2ea768:
    // 0x2ea768: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2ea768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ea76c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea774: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea778: 0x0  nop
    ctx->pc = 0x2ea778u;
    // NOP
    // 0x2ea77c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ea77cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ea780:
    // 0x2ea780: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2ea780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2ea784: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2ea784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ea788: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x2ea788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x2ea78c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2ea78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea790: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2ea790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2ea794: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2ea794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ea798: 0x8e6c0238  lw          $t4, 0x238($s3)
    ctx->pc = 0x2ea798u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2ea79c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ea79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea7a0: 0x25900  sll         $t3, $v0, 4
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ea7a4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea7a8: 0x26820078  addiu       $v0, $s4, 0x78
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
    // 0x2ea7ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea7b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea7b4: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2ea7b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ea7b8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea7c4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea7c8: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x2ea7c8u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x2ea7cc: 0x0  nop
    ctx->pc = 0x2ea7ccu;
    // NOP
    // 0x2ea7d0: 0x0  nop
    ctx->pc = 0x2ea7d0u;
    // NOP
    // 0x2ea7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x2ea7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ea7d8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ea7d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea7dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ea7dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ea7e0: 0x0  nop
    ctx->pc = 0x2ea7e0u;
    // NOP
    // 0x2ea7e4: 0x0  nop
    ctx->pc = 0x2ea7e4u;
    // NOP
    // 0x2ea7e8: 0x1012  mflo        $v0
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ea7ec: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA7ECu;
    SET_GPR_U32(ctx, 31, 0x2EA7F4u);
    ctx->pc = 0x2EA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7ECu;
    // 0x2ea7f0: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA7ECu, 0x2EA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7F4u;
label_2ea7f4:
    // 0x2ea7f4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2ea7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea7f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea800: 0x0  nop
    ctx->pc = 0x2ea800u;
    // NOP
    // 0x2ea804: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea808: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA808u;
    {
        const bool branch_taken_0x2ea808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea808) {
            ctx->pc = 0x2EA820u;
            goto label_2ea820;
        }
    }
    ctx->pc = 0x2EA810u;
    // 0x2ea810: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea814: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ea814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ea818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA818u;
    {
        const bool branch_taken_0x2ea818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA818u;
        // 0x2ea81c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea818) {
            ctx->pc = 0x2EA83Cu;
            goto label_2ea83c;
        }
    }
    ctx->pc = 0x2EA820u;
label_2ea820:
    // 0x2ea820: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ea820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ea824: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ea824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea828: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea82c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ea82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ea830: 0x0  nop
    ctx->pc = 0x2ea830u;
    // NOP
    // 0x2ea834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea838: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ea838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2ea83c:
    // 0x2ea83c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea840: 0x0  nop
    ctx->pc = 0x2ea840u;
    // NOP
    // 0x2ea844: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ea844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea848: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA848u;
    {
        const bool branch_taken_0x2ea848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea848) {
            ctx->pc = 0x2EA860u;
            goto label_2ea860;
        }
    }
    ctx->pc = 0x2EA850u;
    // 0x2ea850: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea850u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2ea854: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x2ea854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA858u;
    {
        const bool branch_taken_0x2ea858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea858) {
            ctx->pc = 0x2EA878u;
            goto label_2ea878;
        }
    }
    ctx->pc = 0x2EA860u;
label_2ea860:
    // 0x2ea860: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2ea860u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ea864: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ea864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea868: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2ea86c: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x2ea86cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea870: 0x0  nop
    ctx->pc = 0x2ea870u;
    // NOP
    // 0x2ea874: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ea874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2ea878:
    // 0x2ea878: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2ea878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2ea87c: 0x268300b4  addiu       $v1, $s4, 0xB4
    ctx->pc = 0x2ea87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 180));
    // 0x2ea880: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x2ea880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x2ea884: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2ea884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ea888: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2ea888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2ea88c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ea890: 0x8e6c0238  lw          $t4, 0x238($s3)
    ctx->pc = 0x2ea890u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2ea894: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ea894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea89c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea8a0: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2ea8a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ea8a4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea8ac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea8b0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea8b4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea8b8: 0x183001b  divu        $zero, $t4, $v1
    ctx->pc = 0x2ea8b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x2ea8bc: 0x0  nop
    ctx->pc = 0x2ea8bcu;
    // NOP
    // 0x2ea8c0: 0x0  nop
    ctx->pc = 0x2ea8c0u;
    // NOP
    // 0x2ea8c4: 0x1810  mfhi        $v1
    ctx->pc = 0x2ea8c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ea8c8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ea8c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ea8cc: 0x0  nop
    ctx->pc = 0x2ea8ccu;
    // NOP
    // 0x2ea8d0: 0x0  nop
    ctx->pc = 0x2ea8d0u;
    // NOP
    // 0x2ea8d4: 0x1012  mflo        $v0
    ctx->pc = 0x2ea8d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ea8d8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA8D8u;
    SET_GPR_U32(ctx, 31, 0x2EA8E0u);
    ctx->pc = 0x2EA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8D8u;
    // 0x2ea8dc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA8D8u, 0x2EA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8E0u;
label_2ea8e0:
    // 0x2ea8e0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2EA8E0u;
    {
        const bool branch_taken_0x2ea8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8e0) {
            ctx->pc = 0x2EABB8u;
            goto label_2eabb8;
        }
    }
    ctx->pc = 0x2EA8E8u;
label_2ea8e8:
    // 0x2ea8e8: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x2ea8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2ea8ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ea8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ea8f0: 0x7a43c  dsll32      $s4, $a3, 16
    ctx->pc = 0x2ea8f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2ea8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea8f8: 0x0  nop
    ctx->pc = 0x2ea8f8u;
    // NOP
    // 0x2ea8fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea900: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea904: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x2ea904u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2ea908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea90c: 0x0  nop
    ctx->pc = 0x2ea90cu;
    // NOP
    // 0x2ea910: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ea910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea914: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA914u;
    {
        const bool branch_taken_0x2ea914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA914u;
        // 0x2ea918: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea914) {
            ctx->pc = 0x2EA92Cu;
            goto label_2ea92c;
        }
    }
    ctx->pc = 0x2EA91Cu;
    // 0x2ea91c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea920: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA924u;
    {
        const bool branch_taken_0x2ea924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA924u;
        // 0x2ea928: 0xc7818078  lwc1        $f1, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea924) {
            ctx->pc = 0x2EA948u;
            goto label_2ea948;
        }
    }
    ctx->pc = 0x2EA92Cu;
label_2ea92c:
    // 0x2ea92c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2ea92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ea930: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea934: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea938: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ea938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ea93c: 0x0  nop
    ctx->pc = 0x2ea93cu;
    // NOP
    // 0x2ea940: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ea940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ea944: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2ea944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ea948:
    // 0x2ea948: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea950: 0x0  nop
    ctx->pc = 0x2ea950u;
    // NOP
    // 0x2ea954: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea958: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA958u;
    {
        const bool branch_taken_0x2ea958 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA958u;
        // 0x2ea95c: 0x8e650238  lw          $a1, 0x238($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea958) {
            ctx->pc = 0x2EA970u;
            goto label_2ea970;
        }
    }
    ctx->pc = 0x2EA960u;
    // 0x2ea960: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea964: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ea964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA968u;
    {
        const bool branch_taken_0x2ea968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA968u;
        // 0x2ea96c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea968) {
            ctx->pc = 0x2EA98Cu;
            goto label_2ea98c;
        }
    }
    ctx->pc = 0x2EA970u;
label_2ea970:
    // 0x2ea970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ea970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ea974: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea978: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea97c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ea97cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea980: 0x0  nop
    ctx->pc = 0x2ea980u;
    // NOP
    // 0x2ea984: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ea984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ea988: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2ea988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2ea98c:
    // 0x2ea98c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ea98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ea990: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ea990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea994: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2ea994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2ea998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ea998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea99c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ea99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ea9a0: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2ea9a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ea9a4: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x2ea9a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea9ac: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2ea9acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ea9b0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea9b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9b8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea9bc: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea9c0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea9c4: 0x1812  mflo        $v1
    ctx->pc = 0x2ea9c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ea9c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea9cc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA9CCu;
    SET_GPR_U32(ctx, 31, 0x2EA9D4u);
    ctx->pc = 0x2EA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9CCu;
    // 0x2ea9d0: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA9CCu, 0x2EA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9D4u;
label_2ea9d4:
    // 0x2ea9d4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2ea9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea9d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9e0: 0x0  nop
    ctx->pc = 0x2ea9e0u;
    // NOP
    // 0x2ea9e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ea9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea9e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA9E8u;
    {
        const bool branch_taken_0x2ea9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea9e8) {
            ctx->pc = 0x2EAA00u;
            goto label_2eaa00;
        }
    }
    ctx->pc = 0x2EA9F0u;
    // 0x2ea9f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea9f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea9f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ea9f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ea9f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA9F8u;
    {
        const bool branch_taken_0x2ea9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9F8u;
        // 0x2ea9fc: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9f8) {
            ctx->pc = 0x2EAA1Cu;
            goto label_2eaa1c;
        }
    }
    ctx->pc = 0x2EAA00u;
label_2eaa00:
    // 0x2eaa00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eaa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eaa08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaa08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eaa0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2eaa0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eaa10: 0x0  nop
    ctx->pc = 0x2eaa10u;
    // NOP
    // 0x2eaa14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eaa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eaa18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2eaa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2eaa1c:
    // 0x2eaa1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eaa1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaa20: 0x0  nop
    ctx->pc = 0x2eaa20u;
    // NOP
    // 0x2eaa24: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2eaa24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaa28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAA28u;
    {
        const bool branch_taken_0x2eaa28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaa28) {
            ctx->pc = 0x2EAA40u;
            goto label_2eaa40;
        }
    }
    ctx->pc = 0x2EAA30u;
    // 0x2eaa30: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaa30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eaa34: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eaa34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eaa38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAA38u;
    {
        const bool branch_taken_0x2eaa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa38) {
            ctx->pc = 0x2EAA58u;
            goto label_2eaa58;
        }
    }
    ctx->pc = 0x2EAA40u;
label_2eaa40:
    // 0x2eaa40: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2eaa40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2eaa44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eaa48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaa48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eaa4c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eaa4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eaa50: 0x0  nop
    ctx->pc = 0x2eaa50u;
    // NOP
    // 0x2eaa54: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2eaa54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2eaa58:
    // 0x2eaa58: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2eaa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2eaa5c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2eaa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2eaa60: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x2eaa64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2eaa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eaa68: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2eaa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2eaa6c: 0x36080  sll         $t4, $v1, 2
    ctx->pc = 0x2eaa6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eaa70: 0x8e6d0238  lw          $t5, 0x238($s3)
    ctx->pc = 0x2eaa70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2eaa74: 0x26830064  addiu       $v1, $s4, 0x64
    ctx->pc = 0x2eaa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x2eaa78: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eaa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eaa7c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2eaa7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eaa80: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2eaa80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2eaa84: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eaa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eaa88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eaa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa8c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eaa8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eaa90: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eaa94: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eaa94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eaa98: 0x1ac001b  divu        $zero, $t5, $t4
    ctx->pc = 0x2eaa98u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2eaa9c: 0x0  nop
    ctx->pc = 0x2eaa9cu;
    // NOP
    // 0x2eaaa0: 0x0  nop
    ctx->pc = 0x2eaaa0u;
    // NOP
    // 0x2eaaa4: 0x1810  mfhi        $v1
    ctx->pc = 0x2eaaa4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eaaa8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2eaaa8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2eaaac: 0x0  nop
    ctx->pc = 0x2eaaacu;
    // NOP
    // 0x2eaab0: 0x0  nop
    ctx->pc = 0x2eaab0u;
    // NOP
    // 0x2eaab4: 0x1012  mflo        $v0
    ctx->pc = 0x2eaab4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2eaab8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAAB8u;
    SET_GPR_U32(ctx, 31, 0x2EAAC0u);
    ctx->pc = 0x2EAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAB8u;
    // 0x2eaabc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAAB8u, 0x2EAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAC0u;
label_2eaac0:
    // 0x2eaac0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2eaac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaac4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2eaac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaacc: 0x0  nop
    ctx->pc = 0x2eaaccu;
    // NOP
    // 0x2eaad0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2eaad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAAD4u;
    {
        const bool branch_taken_0x2eaad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaad4) {
            ctx->pc = 0x2EAAECu;
            goto label_2eaaec;
        }
    }
    ctx->pc = 0x2EAADCu;
    // 0x2eaadc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eaae0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2eaae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eaae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAAE4u;
    {
        const bool branch_taken_0x2eaae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAE4u;
        // 0x2eaae8: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaae4) {
            ctx->pc = 0x2EAB08u;
            goto label_2eab08;
        }
    }
    ctx->pc = 0x2EAAECu;
label_2eaaec:
    // 0x2eaaec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2eaaecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2eaaf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eaaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eaaf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eaaf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eaaf8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2eaaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2eaafc: 0x0  nop
    ctx->pc = 0x2eaafcu;
    // NOP
    // 0x2eab00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eab04: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2eab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2eab08:
    // 0x2eab08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eab08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eab0c: 0x0  nop
    ctx->pc = 0x2eab0cu;
    // NOP
    // 0x2eab10: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2eab10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eab14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAB14u;
    {
        const bool branch_taken_0x2eab14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eab14) {
            ctx->pc = 0x2EAB2Cu;
            goto label_2eab2c;
        }
    }
    ctx->pc = 0x2EAB1Cu;
    // 0x2eab1c: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eab1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2eab20: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x2eab20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eab24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAB24u;
    {
        const bool branch_taken_0x2eab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab24) {
            ctx->pc = 0x2EAB44u;
            goto label_2eab44;
        }
    }
    ctx->pc = 0x2EAB2Cu;
label_2eab2c:
    // 0x2eab2c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2eab2cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2eab30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eab34: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eab34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2eab38: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x2eab38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eab3c: 0x0  nop
    ctx->pc = 0x2eab3cu;
    // NOP
    // 0x2eab40: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2eab40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2eab44:
    // 0x2eab44: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2eab48: 0x268300a0  addiu       $v1, $s4, 0xA0
    ctx->pc = 0x2eab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x2eab4c: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x2eab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x2eab50: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2eab50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eab54: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2eab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2eab58: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2eab58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2eab5c: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x2eab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x2eab60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eab64: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eab68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eab68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab6c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eab6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eab70: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eab70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eab74: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eab74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eab78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2eab78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2eab7c: 0x0  nop
    ctx->pc = 0x2eab7cu;
    // NOP
    // 0x2eab80: 0x0  nop
    ctx->pc = 0x2eab80u;
    // NOP
    // 0x2eab84: 0x6010  mfhi        $t4
    ctx->pc = 0x2eab84u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x2eab88: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2eab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2eab8c: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x2eab8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2eab90: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2eab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2eab94: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2eab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2eab98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eab98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eab9c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2eab9cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2eaba0: 0x0  nop
    ctx->pc = 0x2eaba0u;
    // NOP
    // 0x2eaba4: 0x0  nop
    ctx->pc = 0x2eaba4u;
    // NOP
    // 0x2eaba8: 0x1012  mflo        $v0
    ctx->pc = 0x2eaba8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2eabac: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EABACu;
    SET_GPR_U32(ctx, 31, 0x2EABB4u);
    ctx->pc = 0x2EABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABACu;
    // 0x2eabb0: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EABACu, 0x2EABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABB4u;
label_2eabb4:
    // 0x2eabb4: 0x0  nop
    ctx->pc = 0x2eabb4u;
    // NOP
label_2eabb8:
    // 0x2eabb8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EABB8u;
    {
        const bool branch_taken_0x2eabb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eabb8) {
            ctx->pc = 0x2EABC8u;
            goto label_2eabc8;
        }
    }
    ctx->pc = 0x2EABC0u;
    // 0x2eabc0: 0x2412010c  addiu       $s2, $zero, 0x10C
    ctx->pc = 0x2eabc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2eabc4: 0x0  nop
    ctx->pc = 0x2eabc4u;
    // NOP
label_2eabc8:
    // 0x2eabc8: 0x15243c  dsll32      $a0, $s5, 16
    ctx->pc = 0x2eabc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2eabcc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2eabccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2eabd0: 0x11a63c  dsll32      $s4, $s1, 24
    ctx->pc = 0x2eabd0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2eabd4: 0x2483001a  addiu       $v1, $a0, 0x1A
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 26));
    // 0x2eabd8: 0x24820034  addiu       $v0, $a0, 0x34
    ctx->pc = 0x2eabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2eabdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eabdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eabe0: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x2eabe0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x2eabe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eabe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eabe8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2eabe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eabecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eabf0: 0x2483004e  addiu       $v1, $a0, 0x4E
    ctx->pc = 0x2eabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 78));
    // 0x2eabf4: 0x24820068  addiu       $v0, $a0, 0x68
    ctx->pc = 0x2eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x2eabf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eabf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eabfc: 0x46170d82  mul.s       $f22, $f1, $f23
    ctx->pc = 0x2eabfcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2eac00: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x2eac00u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2eac04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eac04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eac08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eac08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac0c: 0x0  nop
    ctx->pc = 0x2eac0cu;
    // NOP
    // 0x2eac10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eac10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eac14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eac14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eac18: 0x46170d02  mul.s       $f20, $f1, $f23
    ctx->pc = 0x2eac18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x2eac1c: 0x461705c2  mul.s       $f23, $f0, $f23
    ctx->pc = 0x2eac1cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_2eac20:
    // 0x2eac20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2eac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2eac24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eac24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac28: 0x0  nop
    ctx->pc = 0x2eac28u;
    // NOP
    // 0x2eac2c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2eac2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eac30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAC30u;
    {
        const bool branch_taken_0x2eac30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC30u;
        // 0x2eac34: 0x3251ffff  andi        $s1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac30) {
            ctx->pc = 0x2EAC48u;
            goto label_2eac48;
        }
    }
    ctx->pc = 0x2EAC38u;
    // 0x2eac38: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eac38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eac3c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eac3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eac40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAC40u;
    {
        const bool branch_taken_0x2eac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac40) {
            ctx->pc = 0x2EAC60u;
            goto label_2eac60;
        }
    }
    ctx->pc = 0x2EAC48u;
label_2eac48:
    // 0x2eac48: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2eac48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2eac4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2eac50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eac50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eac54: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eac54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eac58: 0x0  nop
    ctx->pc = 0x2eac58u;
    // NOP
    // 0x2eac5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2eac5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2eac60:
    // 0x2eac60: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eac64: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eac64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eac68: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eac6c: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2eac70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eac74: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eac78: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x2eac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x2eac7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eac80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac84: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eac84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eac88: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eac88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eac8c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eac8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eac90: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAC90u;
    SET_GPR_U32(ctx, 31, 0x2EAC98u);
    ctx->pc = 0x2EAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC90u;
    // 0x2eac94: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAC90u, 0x2EAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC98u;
label_2eac98:
    // 0x2eac98: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2eac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2eac9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eac9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaca0: 0x0  nop
    ctx->pc = 0x2eaca0u;
    // NOP
    // 0x2eaca4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2eaca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaca8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EACA8u;
    {
        const bool branch_taken_0x2eaca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaca8) {
            ctx->pc = 0x2EACC0u;
            goto label_2eacc0;
        }
    }
    ctx->pc = 0x2EACB0u;
    // 0x2eacb0: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eacb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eacb4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eacb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eacb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EACB8u;
    {
        const bool branch_taken_0x2eacb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacb8) {
            ctx->pc = 0x2EACD8u;
            goto label_2eacd8;
        }
    }
    ctx->pc = 0x2EACC0u;
label_2eacc0:
    // 0x2eacc0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2eacc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2eacc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2eacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2eacc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eacc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eaccc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eacccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eacd0: 0x0  nop
    ctx->pc = 0x2eacd0u;
    // NOP
    // 0x2eacd4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2eacd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2eacd8:
    // 0x2eacd8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eacdc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eace0: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eace4: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2eace4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2eace8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eacec: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eacf0: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x2eacf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eacf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacfc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eacfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ead00: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ead00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ead04: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ead08: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAD08u;
    SET_GPR_U32(ctx, 31, 0x2EAD10u);
    ctx->pc = 0x2EAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD08u;
    // 0x2ead0c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAD08u, 0x2EAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD10u;
label_2ead10:
    // 0x2ead10: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ead10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ead14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ead14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ead18: 0x0  nop
    ctx->pc = 0x2ead18u;
    // NOP
    // 0x2ead1c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ead1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ead20: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAD20u;
    {
        const bool branch_taken_0x2ead20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ead20) {
            ctx->pc = 0x2EAD38u;
            goto label_2ead38;
        }
    }
    ctx->pc = 0x2EAD28u;
    // 0x2ead28: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ead28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ead2c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ead2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ead30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAD30u;
    {
        const bool branch_taken_0x2ead30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead30) {
            ctx->pc = 0x2EAD50u;
            goto label_2ead50;
        }
    }
    ctx->pc = 0x2EAD38u;
label_2ead38:
    // 0x2ead38: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2ead38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ead3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ead3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ead40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ead40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ead44: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ead44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ead48: 0x0  nop
    ctx->pc = 0x2ead48u;
    // NOP
    // 0x2ead4c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ead4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ead50:
    // 0x2ead50: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ead50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ead54: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ead58: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2ead58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2ead5c: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2ead5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ead60: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ead60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ead64: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ead64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ead68: 0x8e62024c  lw          $v0, 0x24C($s3)
    ctx->pc = 0x2ead68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x2ead6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ead6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ead70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ead78: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ead78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ead7c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2ead7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ead80: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAD80u;
    SET_GPR_U32(ctx, 31, 0x2EAD88u);
    ctx->pc = 0x2EAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD80u;
    // 0x2ead84: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAD80u, 0x2EAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD88u;
label_2ead88:
    // 0x2ead88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ead88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ead8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ead8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ead90: 0x0  nop
    ctx->pc = 0x2ead90u;
    // NOP
    // 0x2ead94: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x2ead94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ead98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAD98u;
    {
        const bool branch_taken_0x2ead98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ead98) {
            ctx->pc = 0x2EADB0u;
            goto label_2eadb0;
        }
    }
    ctx->pc = 0x2EADA0u;
    // 0x2eada0: 0x4600b824  .word       0x4600B824                   # cvt.w.s     $f0, $f23 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eada0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[23]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eada4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eada4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eada8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EADA8u;
    {
        const bool branch_taken_0x2eada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eada8) {
            ctx->pc = 0x2EADC8u;
            goto label_2eadc8;
        }
    }
    ctx->pc = 0x2EADB0u;
label_2eadb0:
    // 0x2eadb0: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x2eadb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x2eadb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2eadb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2eadb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eadb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eadbc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2eadbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2eadc0: 0x0  nop
    ctx->pc = 0x2eadc0u;
    // NOP
    // 0x2eadc4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2eadc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2eadc8:
    // 0x2eadc8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eadcc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eadccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eadd0: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eadd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eadd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadd8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eaddc: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x2eaddcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2eade0: 0x8e620254  lw          $v0, 0x254($s3)
    ctx->pc = 0x2eade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    // 0x2eade4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eade8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eade8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eadecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eadf0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eadf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eadf4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eadf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eadf8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EADF8u;
    SET_GPR_U32(ctx, 31, 0x2EAE00u);
    ctx->pc = 0x2EADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EADF8u;
    // 0x2eadfc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EADF8u, 0x2EAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE00u;
label_2eae00:
    // 0x2eae00: 0x264300b6  addiu       $v1, $s2, 0xB6
    ctx->pc = 0x2eae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 182));
    // 0x2eae04: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2eae08: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2eae08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2eae0c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x2eae0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae10: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2eae10u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2eae14: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x2eae14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eae18: 0x1020ff81  beqz        $at, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2EAE18u;
    {
        const bool branch_taken_0x2eae18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE18u;
        // 0x2eae1c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae18) {
            ctx->pc = 0x2EAC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eac20;
        }
    }
    ctx->pc = 0x2EAE20u;
    // 0x2eae20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2eae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eae24: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x2eae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2eae28: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2eae28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eae2c: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x2eae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2eae30: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2eae30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eae34: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x2eae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2eae38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2eae38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eae3c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2eae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eae40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2eae40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eae44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2eae44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eae48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eae48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE4Cu;
        // 0x2eae50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAE54u;
}
