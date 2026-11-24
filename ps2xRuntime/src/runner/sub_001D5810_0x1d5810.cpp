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

// Function: sub_001D5810
// Address: 0x1d5810 - 0x1d5b54
void sub_001D5810_0x1d5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5810_0x1d5810");
#endif

    switch (ctx->pc) {
        case 0x1d588cu: goto label_1d588c;
        case 0x1d5898u: goto label_1d5898;
        case 0x1d58bcu: goto label_1d58bc;
        case 0x1d5904u: goto label_1d5904;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5954u: goto label_1d5954;
        case 0x1d5960u: goto label_1d5960;
        default: break;
    }

    ctx->pc = 0x1d5810u;

    // 0x1d5810: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d5814: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d5814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d5818: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d5818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d581c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d5820: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1d5820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5824: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d5824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d5828: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d5828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d582c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1d582cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5830: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d5830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d5834: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1d5834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5838: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d583c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d583cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5840: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d5840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d5844: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d5844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5848: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d584c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1d584cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d5854: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d5854u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d5858: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d585c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d585cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d5860: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5864: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d5868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d586c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d586cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d5870: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x1d5870u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x1d5874: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1d5874u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1d5878: 0x46008d86  mov.s       $f22, $f17
    ctx->pc = 0x1d5878u;
    ctx->f[22] = FPU_MOV_S(ctx->f[17]);
    // 0x1d587c: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x1d587cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x1d5880: 0x46008306  mov.s       $f12, $f16
    ctx->pc = 0x1d5880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[16]);
    // 0x1d5884: 0xc0768f8  jal         func_1DA3E0
    ctx->pc = 0x1D5884u;
    SET_GPR_U32(ctx, 31, 0x1D588Cu);
    ctx->pc = 0x1D5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5884u;
    // 0x1d5888: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3E0u, 0x1D5884u, 0x1D588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D588Cu;
label_1d588c:
    // 0x1d588c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d588cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d5890: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D5890u;
    SET_GPR_U32(ctx, 31, 0x1D5898u);
    ctx->pc = 0x1D5894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5890u;
    // 0x1d5894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D5890u, 0x1D5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5898u;
label_1d5898:
    // 0x1d5898: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1D5898u;
    {
        const bool branch_taken_0x1d5898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5898u;
        // 0x1d589c: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5898) {
            ctx->pc = 0x1D5B10u;
            goto label_1d5b10;
        }
    }
    ctx->pc = 0x1D58A0u;
    // 0x1d58a0: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x1d58a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x1d58a4: 0xc4206ce8  lwc1        $f0, 0x6CE8($at)
    ctx->pc = 0x1d58a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 27880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d58a8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1d58a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d58ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1d58acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1d58b0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d58b4: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D58B4u;
    SET_GPR_U32(ctx, 31, 0x1D58BCu);
    ctx->pc = 0x1D58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58B4u;
    // 0x1d58b8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D58B4u, 0x1D58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58BCu;
label_1d58bc:
    // 0x1d58bc: 0x4616a002  mul.s       $f0, $f20, $f22
    ctx->pc = 0x1d58bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x1d58c0: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x1d58c4: 0x8f828800  lw          $v0, -0x7800($gp)
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
    // 0x1d58c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d58cc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d58d0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d58d4: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1d58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x1d58d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d58d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58dc: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1d58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x1d58e0: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x1d58e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1d58e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d58e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d58ec: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1d58ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d58f0: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x1d58f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x1d58f4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x1d58f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1d58f8: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1d58f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d58fc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1D58FCu;
    SET_GPR_U32(ctx, 31, 0x1D5904u);
    ctx->pc = 0x1D5900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58FCu;
    // 0x1d5900: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1D58FCu, 0x1D5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5904u;
label_1d5904:
    // 0x1d5904: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d5908: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D5908u;
    SET_GPR_U32(ctx, 31, 0x1D5910u);
    ctx->pc = 0x1D590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5908u;
    // 0x1d590c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D5908u, 0x1D5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5910u;
label_1d5910:
    // 0x1d5910: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d5914: 0x27b700d4  addiu       $s7, $sp, 0xD4
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1d5918: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d591c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d5920: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d5920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d5924: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d5928: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d5928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d592c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d5930: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d5934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5938: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d593c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1d593cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1d5940: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1d5940u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1d5944: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1d5944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5948: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d5948u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d594c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1D594Cu;
    SET_GPR_U32(ctx, 31, 0x1D5954u);
    ctx->pc = 0x1D5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D594Cu;
    // 0x1d5950: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1D594Cu, 0x1D5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5954u;
label_1d5954:
    // 0x1d5954: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d5958: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D5958u;
    SET_GPR_U32(ctx, 31, 0x1D5960u);
    ctx->pc = 0x1D595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5958u;
    // 0x1d595c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D5958u, 0x1D5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5960u;
label_1d5960:
    // 0x1d5960: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5964: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1d5968: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d5968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d596c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d5970: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1d5974: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5978: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d597c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d5980: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d5980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d5984: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
    // 0x1d5988: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d5988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d598c: 0x7bc50000  lq          $a1, 0x0($fp)
    ctx->pc = 0x1d598cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d5990: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x1d5990u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x1d5994: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x1d5994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x1d5998: 0xae330014  sw          $s3, 0x14($s1)
    ctx->pc = 0x1d5998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 19));
    // 0x1d599c: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d599cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d59a0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1d59a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d59a4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d59a8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d59ac: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x1d59acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x1d59b0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d59b4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d59b8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d59bc: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1d59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1d59c0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d59c4: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1d59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1d59c8: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d59cc: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1d59ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d59d0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d59d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d59d4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1d59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1d59d8: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d59dc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1d59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d59e0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1d59e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d59e4: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x1d59e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x1d59e8: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d59ec: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1d59f0: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x1d59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x1d59f4: 0xae350030  sw          $s5, 0x30($s1)
    ctx->pc = 0x1d59f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 21));
    // 0x1d59f8: 0xae330034  sw          $s3, 0x34($s1)
    ctx->pc = 0x1d59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
    // 0x1d59fc: 0xfe200038  sd          $zero, 0x38($s1)
    ctx->pc = 0x1d59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
    // 0x1d5a00: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5a04: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5a08: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1d5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d5a0c: 0xae250040  sw          $a1, 0x40($s1)
    ctx->pc = 0x1d5a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 5));
    // 0x1d5a10: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d5a14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5a18: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1d5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d5a1c: 0xae250044  sw          $a1, 0x44($s1)
    ctx->pc = 0x1d5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
    // 0x1d5a20: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d5a24: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x1d5a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x1d5a28: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d5a2c: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x1d5a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d5a30: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x1d5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x1d5a34: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d5a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d5a38: 0xae340050  sw          $s4, 0x50($s1)
    ctx->pc = 0x1d5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 20));
    // 0x1d5a3c: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d5a40: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d5a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d5a44: 0xae360054  sw          $s6, 0x54($s1)
    ctx->pc = 0x1d5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 22));
    // 0x1d5a48: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d5a48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d5a4c: 0xfe200058  sd          $zero, 0x58($s1)
    ctx->pc = 0x1d5a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 0));
    // 0x1d5a50: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5a54: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5a58: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d5a5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5a60: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x1d5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x1d5a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5a68: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d5a6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5a70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1d5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1d5a74: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d5a78: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x1d5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x1d5a7c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1d5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1d5a80: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1d5a84: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5a88: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5a8c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d5a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d5a90: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d5a90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d5a94: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1d5a98: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d5a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d5a9c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1d5a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5aa0: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d5aa4: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1d5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x1d5aa8: 0xae350070  sw          $s5, 0x70($s1)
    ctx->pc = 0x1d5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 21));
    // 0x1d5aac: 0xae360074  sw          $s6, 0x74($s1)
    ctx->pc = 0x1d5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 22));
    // 0x1d5ab0: 0xfe200078  sd          $zero, 0x78($s1)
    ctx->pc = 0x1d5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 0));
    // 0x1d5ab4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5ab8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d5abc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5ac0: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1d5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x1d5ac4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d5ac8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d5acc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5ad0: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x1d5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x1d5ad4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d5ad8: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1d5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
    // 0x1d5adc: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x1d5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1d5ae0: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1d5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1d5ae4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5ae8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5aec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d5aecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d5af0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d5af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d5af4: 0x32030007  andi        $v1, $s0, 0x7
    ctx->pc = 0x1d5af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x1d5af8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d5af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d5afc: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d5b00: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x1d5b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x1d5b04: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x1d5b08: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1d5b0c: 0xaf838804  sw          $v1, -0x77FC($gp)
    ctx->pc = 0x1d5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 3));
label_1d5b10:
    // 0x1d5b10: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d5b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5b14: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d5b14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d5b18: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d5b1c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d5b1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5b20: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d5b24: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d5b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5b28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d5b2c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d5b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5b30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5b34: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d5b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5b38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5b3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5b40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d5b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5b44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d5b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5b48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d5b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B4Cu;
        // 0x1d5b50: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B54u;
}
