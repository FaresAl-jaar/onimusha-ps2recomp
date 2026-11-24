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

// Function: sub_001D5540
// Address: 0x1d5540 - 0x1d5724
void sub_001D5540_0x1d5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5540_0x1d5540");
#endif

    switch (ctx->pc) {
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55c0u: goto label_1d55c0;
        default: break;
    }

    ctx->pc = 0x1d5540u;

    // 0x1d5540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d5544: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d5548: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d5548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d554c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d5550: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1d5550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5554: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d5558: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1d5558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d555c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d5560: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5564: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5568: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d556c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5570: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d5570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5574: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d5574u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d5578: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d5578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d557c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d557cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d5580: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d5580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5584: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d5584u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d5588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d558c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d558cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d5590: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5590u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d5594: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d5598: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x1d5598u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x1d559c: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x1d559cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x1d55a0: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x1d55a0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x1d55a4: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x1d55a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x1d55a8: 0x46008d46  mov.s       $f21, $f17
    ctx->pc = 0x1d55a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[17]);
    // 0x1d55ac: 0x46009506  mov.s       $f20, $f18
    ctx->pc = 0x1d55acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[18]);
    // 0x1d55b0: 0xc0768f8  jal         func_1DA3E0
    ctx->pc = 0x1D55B0u;
    SET_GPR_U32(ctx, 31, 0x1D55B8u);
    ctx->pc = 0x1D55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55B0u;
    // 0x1d55b4: 0x46008306  mov.s       $f12, $f16 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3E0u, 0x1D55B0u, 0x1D55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55B8u;
label_1d55b8:
    // 0x1d55b8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D55B8u;
    SET_GPR_U32(ctx, 31, 0x1D55C0u);
    ctx->pc = 0x1D55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55B8u;
    // 0x1d55bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D55B8u, 0x1D55C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55C0u;
label_1d55c0:
    // 0x1d55c0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D55C0u;
    {
        const bool branch_taken_0x1d55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C0u;
        // 0x1d55c4: 0x4615b802  mul.s       $f0, $f23, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c0) {
            ctx->pc = 0x1D56E8u;
            goto label_1d56e8;
        }
    }
    ctx->pc = 0x1D55C8u;
    // 0x1d55c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d55cc: 0x4614b082  mul.s       $f2, $f22, $f20
    ctx->pc = 0x1d55ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x1d55d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d55d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d55d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d55d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d55d8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d55d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d55dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d55e0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1d55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1d55e4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1d55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d55e8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1d55e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d55ec: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x1d55ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x1d55f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d55f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d55f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d55fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5600: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1d5600u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1d5604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5608: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1d5608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1d560c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d560cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5610: 0x8f8487fc  lw          $a0, -0x7804($gp)
    ctx->pc = 0x1d5610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d5614: 0x8f8387f8  lw          $v1, -0x7808($gp)
    ctx->pc = 0x1d5614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
    // 0x1d5618: 0x7aa70000  lq          $a3, 0x0($s5)
    ctx->pc = 0x1d5618u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d561c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d561cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d5620: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5628: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d562c: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x1d562cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x1d5630: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5634: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x1d5634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x1d5638: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d563c: 0xac720024  sw          $s2, 0x24($v1)
    ctx->pc = 0x1d563cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 18));
    // 0x1d5640: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5644: 0xfc600028  sd          $zero, 0x28($v1)
    ctx->pc = 0x1d5644u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 0));
    // 0x1d5648: 0x42983  sra         $a1, $a0, 6
    ctx->pc = 0x1d5648u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1d564c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d5650: 0x4615c842  mul.s       $f1, $f25, $f21
    ctx->pc = 0x1d5650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1d5654: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d5658: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1d5658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1d565c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1d565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d5660: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1d5660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d5664: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x1d5664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x1d5668: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1d5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d566c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d566cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d5670: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1d5670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1d5674: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d5678: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1d567c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d567cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d5680: 0xac710040  sw          $s1, 0x40($v1)
    ctx->pc = 0x1d5680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 17));
    // 0x1d5684: 0xac700044  sw          $s0, 0x44($v1)
    ctx->pc = 0x1d5684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
    // 0x1d5688: 0xfc600048  sd          $zero, 0x48($v1)
    ctx->pc = 0x1d5688u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 0));
    // 0x1d568c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d5690: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d5694: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x1d5694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x1d5698: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d569c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d56a0: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1d56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1d56a4: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1d56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d56a8: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x1d56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x1d56ac: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x1d56acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x1d56b0: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1d56b4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d56b8: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x1d56b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d56bc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d56c0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1d56c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d56c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d56c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d56c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d56cc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d56d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D56D0u;
    {
        const bool branch_taken_0x1d56d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d56d0) {
            ctx->pc = 0x1D56E8u;
            goto label_1d56e8;
        }
    }
    ctx->pc = 0x1D56D8u;
    // 0x1d56d8: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d56dc: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1d56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1d56e0: 0xaf8387fc  sw          $v1, -0x7804($gp)
    ctx->pc = 0x1d56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 3));
    // 0x1d56e4: 0x0  nop
    ctx->pc = 0x1d56e4u;
    // NOP
label_1d56e8:
    // 0x1d56e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d56e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d56ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d56ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d56f0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d56f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d56f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d56f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d56f8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d56f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d56fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d56fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5700: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d5700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d5704: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d5704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5708: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d570c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d570cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5710: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5714: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d5714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5718: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d571c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D571Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D571Cu;
        // 0x1d5720: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D571Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5724u;
}
