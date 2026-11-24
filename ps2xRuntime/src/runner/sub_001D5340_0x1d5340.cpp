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

// Function: sub_001D5340
// Address: 0x1d5340 - 0x1d5540
void sub_001D5340_0x1d5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5340_0x1d5340");
#endif

    switch (ctx->pc) {
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c8u: goto label_1d53c8;
        default: break;
    }

    ctx->pc = 0x1d5340u;

    // 0x1d5340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d5344: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d5348: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d5348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d534c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d5350: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1d5350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5354: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d5358: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1d5358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d535c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d5360: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5364: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d5368: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d536c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5370: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d5370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5374: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d5374u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d5378: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d5378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d537c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d537cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d5380: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d5380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5384: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d5384u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d5388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d538c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d538cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d5390: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5390u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d5394: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d5398: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5398u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d539c: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d539cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d53a0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1d53a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1d53a4: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x1d53a4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x1d53a8: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x1d53a8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x1d53ac: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x1d53acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
    // 0x1d53b0: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x1d53b0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
    // 0x1d53b4: 0xc0768f8  jal         func_1DA3E0
    ctx->pc = 0x1D53B4u;
    SET_GPR_U32(ctx, 31, 0x1D53BCu);
    ctx->pc = 0x1D53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53B4u;
    // 0x1d53b8: 0x46008306  mov.s       $f12, $f16 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3E0u, 0x1D53B4u, 0x1D53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53BCu;
label_1d53bc:
    // 0x1d53bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d53bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d53c0: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D53C0u;
    SET_GPR_U32(ctx, 31, 0x1D53C8u);
    ctx->pc = 0x1D53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53C0u;
    // 0x1d53c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D53C0u, 0x1D53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53C8u;
label_1d53c8:
    // 0x1d53c8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1D53C8u;
    {
        const bool branch_taken_0x1d53c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C8u;
        // 0x1d53cc: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c8) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D53D0u;
    // 0x1d53d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d53d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d53d4: 0xc4206ce8  lwc1        $f0, 0x6CE8($at)
    ctx->pc = 0x1d53d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d53d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d53d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1d53dc: 0x461600c2  mul.s       $f3, $f0, $f22
    ctx->pc = 0x1d53dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1d53e0: 0x46170042  mul.s       $f1, $f0, $f23
    ctx->pc = 0x1d53e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1d53e4: 0x4601c802  mul.s       $f0, $f25, $f1
    ctx->pc = 0x1d53e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x1d53e8: 0x4603c082  mul.s       $f2, $f24, $f3
    ctx->pc = 0x1d53e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[3]);
    // 0x1d53ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d53ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d53f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d53f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1d53f4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d53f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d53f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d53fc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1d53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1d5400: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d5404: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1d5404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d5408: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x1d5408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d540c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5410: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5414: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d5418: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d541c: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1d5420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5424: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1d5424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1d5428: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d542c: 0x8f8487fc  lw          $a0, -0x7804($gp)
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d5430: 0x8f8387f8  lw          $v1, -0x7808($gp)
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
    // 0x1d5434: 0x7aa70000  lq          $a3, 0x0($s5)
    ctx->pc = 0x1d5434u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d5438: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d5438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d543c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d543cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5444: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5448: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x1d5448u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x1d544c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5450: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x1d5450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x1d5454: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d5458: 0xac720024  sw          $s2, 0x24($v1)
    ctx->pc = 0x1d5458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 18));
    // 0x1d545c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d5460: 0xfc600028  sd          $zero, 0x28($v1)
    ctx->pc = 0x1d5460u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 0));
    // 0x1d5464: 0x42983  sra         $a1, $a0, 6
    ctx->pc = 0x1d5464u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1d5468: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d5468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d546c: 0x4601d042  mul.s       $f1, $f26, $f1
    ctx->pc = 0x1d546cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x1d5470: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d5474: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1d5474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1d5478: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d547c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1d547cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d5480: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x1d5480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
    // 0x1d5484: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d5488: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d5488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d548c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1d548cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1d5490: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1d5490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d5494: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1d5494u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1d5498: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1d5498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1d549c: 0xac710040  sw          $s1, 0x40($v1)
    ctx->pc = 0x1d549cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 17));
    // 0x1d54a0: 0xac700044  sw          $s0, 0x44($v1)
    ctx->pc = 0x1d54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
    // 0x1d54a4: 0xfc600048  sd          $zero, 0x48($v1)
    ctx->pc = 0x1d54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 0));
    // 0x1d54a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d54ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d54b0: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x1d54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x1d54b4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1d54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d54b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d54bc: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x1d54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x1d54c0: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d54c4: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x1d54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x1d54c8: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x1d54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x1d54cc: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1d54d0: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d54d4: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d54d8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d54d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d54dc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1d54e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d54e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d54e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d54e8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d54ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D54ECu;
    {
        const bool branch_taken_0x1d54ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d54ec) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D54F4u;
    // 0x1d54f4: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x1d54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d54f8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1d54fc: 0xaf8387fc  sw          $v1, -0x7804($gp)
    ctx->pc = 0x1d54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 3));
label_1d5500:
    // 0x1d5500: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5504: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d5504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5508: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d5508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d550c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d550cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5510: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d5514: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d5514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5518: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d5518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d551c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d551cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5520: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d5524: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5528: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d552c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d552cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5530: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5534: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5538: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5538u;
        // 0x1d553c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5540u;
}
