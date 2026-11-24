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

// Function: sub_002590D0
// Address: 0x2590d0 - 0x2594c0
void sub_002590D0_0x2590d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002590D0_0x2590d0");
#endif

    switch (ctx->pc) {
        case 0x2591c4u: goto label_2591c4;
        case 0x2591d4u: goto label_2591d4;
        case 0x259220u: goto label_259220;
        case 0x259260u: goto label_259260;
        case 0x259268u: goto label_259268;
        case 0x259274u: goto label_259274;
        case 0x2593c8u: goto label_2593c8;
        default: break;
    }

    ctx->pc = 0x2590d0u;

    // 0x2590d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2590d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2590d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2590d8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2590d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2590dc: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x2590dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x2590e0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2590e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2590e4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2590e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2590e8: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2590e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590ec: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2590ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2590f0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2590f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590f4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2590f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2590f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2590f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2590fc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2590fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x259100: 0x460d7801  sub.s       $f0, $f15, $f13
    ctx->pc = 0x259100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x259104: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x259104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x259108: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x259108u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25910c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25910cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259110: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x259110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x259114: 0x2f31823  subu        $v1, $s7, $s3
    ctx->pc = 0x259114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x259118: 0x3d61023  subu        $v0, $fp, $s6
    ctx->pc = 0x259118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x25911c: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x25911cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x259120: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x259120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x259124: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x259124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x259128: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x259128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25912c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25912cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259130: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x259130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259134: 0x26b10010  addiu       $s1, $s5, 0x10
    ctx->pc = 0x259134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x259138: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x259138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25913c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25913cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259144: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x259144u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x259148: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x259148u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25914c: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x25914cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x259150: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x259150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259154: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x259154u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x259158: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x259158u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25915c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x25915cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x259160: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x259160u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x259164: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x259164u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x259168: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x259168u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25916c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25916cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x259170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259174: 0x46011742  mul.s       $f29, $f2, $f1
    ctx->pc = 0x259174u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x259178: 0x46001702  mul.s       $f28, $f2, $f0
    ctx->pc = 0x259178u;
    ctx->f[28] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25917c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25917cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259180: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x259180u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259184: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x259184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x259188: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x259188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25918c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25918cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259194: 0xafab00dc  sw          $t3, 0xDC($sp)
    ctx->pc = 0x259194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
    // 0x259198: 0x460c25c0  add.s       $f23, $f4, $f12
    ctx->pc = 0x259198u;
    ctx->f[23] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x25919c: 0x460d1d80  add.s       $f22, $f3, $f13
    ctx->pc = 0x25919cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2591a0: 0x4601ed40  add.s       $f21, $f29, $f1
    ctx->pc = 0x2591a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[29], ctx->f[1]);
    // 0x2591a4: 0x4600e500  add.s       $f20, $f28, $f0
    ctx->pc = 0x2591a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
    // 0x2591a8: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x2591a8u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x2591ac: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x2591acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2591b0: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x2591b0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x2591b4: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x2591b4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x2591b8: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2591b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2591bc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x2591BCu;
    SET_GPR_U32(ctx, 31, 0x2591C4u);
    ctx->pc = 0x2591C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591BCu;
    // 0x2591c0: 0x46031b1c  madd.s      $f12, $f3, $f3 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x2591BCu, 0x2591C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591C4u;
label_2591c4:
    // 0x2591c4: 0x461de81a  mula.s      $f29, $f29
    ctx->pc = 0x2591c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[29], ctx->f[29]));
    // 0x2591c8: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x2591c8u;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    // 0x2591cc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x2591CCu;
    SET_GPR_U32(ctx, 31, 0x2591D4u);
    ctx->pc = 0x2591D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591CCu;
    // 0x2591d0: 0x461ce31c  madd.s      $f12, $f28, $f28 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[28], ctx->f[28]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x2591CCu, 0x2591D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591D4u;
label_2591d4:
    // 0x2591d4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2591d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2591d8: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x2591d8u;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
    // 0x2591dc: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2591dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2591e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2591e4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2591e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2591e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2591e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591ec: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2591ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2591f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2591f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2591f4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2591f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2591f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2591f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2591fc: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x2591fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x259200: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x259200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x259204: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x259204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x259208: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x259208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25920c: 0x0  nop
    ctx->pc = 0x25920cu;
    // NOP
    // 0x259210: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x259210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x259214: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x259214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x259218: 0xc075140  jal         func_1D4500
    ctx->pc = 0x259218u;
    SET_GPR_U32(ctx, 31, 0x259220u);
    ctx->pc = 0x25921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259218u;
    // 0x25921c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x259218u, 0x259220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259220u;
label_259220:
    // 0x259220: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x259220u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259224: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x259224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x259228: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x259228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25922c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x25922cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x259230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259234: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x259234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x259238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x259238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25923c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25923cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x259240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259244: 0x4483e800  mtc1        $v1, $f29
    ctx->pc = 0x259244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x259248: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x259248u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25924c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x25924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x259250: 0x0  nop
    ctx->pc = 0x259250u;
    // NOP
    // 0x259254: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x259254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x259258: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x259258u;
    {
        const bool branch_taken_0x259258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259258u;
        // 0x25925c: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259258) {
            ctx->pc = 0x2593E8u;
            goto label_2593e8;
        }
    }
    ctx->pc = 0x259260u;
label_259260:
    // 0x259260: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x259260u;
    SET_GPR_U32(ctx, 31, 0x259268u);
    ctx->pc = 0x259264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259260u;
    // 0x259264: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x259260u, 0x259268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259268u;
label_259268:
    // 0x259268: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x259268u;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
    // 0x25926c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x25926Cu;
    SET_GPR_U32(ctx, 31, 0x259274u);
    ctx->pc = 0x259270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25926Cu;
    // 0x259270: 0x4600eb06  mov.s       $f12, $f29 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x25926Cu, 0x259274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259274u;
label_259274:
    // 0x259274: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259278: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x259278u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25927c: 0x0  nop
    ctx->pc = 0x25927cu;
    // NOP
    // 0x259280: 0x0  nop
    ctx->pc = 0x259280u;
    // NOP
    // 0x259284: 0x1010  mfhi        $v0
    ctx->pc = 0x259284u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x259288: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25928c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x25928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x259290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259294: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x259294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259298: 0x4601f880  add.s       $f2, $f31, $f1
    ctx->pc = 0x259298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], ctx->f[1]);
    // 0x25929c: 0x4602e042  mul.s       $f1, $f28, $f2
    ctx->pc = 0x25929cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[2]);
    // 0x2592a0: 0x4601bb00  add.s       $f12, $f23, $f1
    ctx->pc = 0x2592a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x2592a4: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2592a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2592a8: 0x461b6034  c.lt.s      $f12, $f27
    ctx->pc = 0x2592a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2592ACu;
    {
        const bool branch_taken_0x2592ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2592B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592ACu;
        // 0x2592b0: 0x4601b340  add.s       $f13, $f22, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592ac) {
            ctx->pc = 0x2592B8u;
            goto label_2592b8;
        }
    }
    ctx->pc = 0x2592B4u;
    // 0x2592b4: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x2592b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_2592b8:
    // 0x2592b8: 0x46196036  c.le.s      $f12, $f25
    ctx->pc = 0x2592b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2592BCu;
    {
        const bool branch_taken_0x2592bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2592bc) {
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x2592C4u;
    // 0x2592c4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2592c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_2592c8:
    // 0x2592c8: 0x461a6834  c.lt.s      $f13, $f26
    ctx->pc = 0x2592c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2592CCu;
    {
        const bool branch_taken_0x2592cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2592cc) {
            ctx->pc = 0x2592D8u;
            goto label_2592d8;
        }
    }
    ctx->pc = 0x2592D4u;
    // 0x2592d4: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x2592d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_2592d8:
    // 0x2592d8: 0x46186836  c.le.s      $f13, $f24
    ctx->pc = 0x2592d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2592DCu;
    {
        const bool branch_taken_0x2592dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2592dc) {
            ctx->pc = 0x2592E8u;
            goto label_2592e8;
        }
    }
    ctx->pc = 0x2592E4u;
    // 0x2592e4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x2592e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_2592e8:
    // 0x2592e8: 0x461ee042  mul.s       $f1, $f28, $f30
    ctx->pc = 0x2592e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[30]);
    // 0x2592ec: 0x461e0002  mul.s       $f0, $f0, $f30
    ctx->pc = 0x2592ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[30]);
    // 0x2592f0: 0x4601a880  add.s       $f2, $f21, $f1
    ctx->pc = 0x2592f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x2592f4: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2592f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2592f8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2592f8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2592fc: 0x0  nop
    ctx->pc = 0x2592fcu;
    // NOP
    // 0x259300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259304: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x259304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259308: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x259308u;
    {
        const bool branch_taken_0x259308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259308) {
            ctx->pc = 0x259318u;
            goto label_259318;
        }
    }
    ctx->pc = 0x259310u;
    // 0x259310: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x259310u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x259314: 0x0  nop
    ctx->pc = 0x259314u;
    // NOP
label_259318:
    // 0x259318: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x259318u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25931c: 0x0  nop
    ctx->pc = 0x25931cu;
    // NOP
    // 0x259320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259324: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x259324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259328: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x259328u;
    {
        const bool branch_taken_0x259328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259328) {
            ctx->pc = 0x259338u;
            goto label_259338;
        }
    }
    ctx->pc = 0x259330u;
    // 0x259330: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x259330u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x259334: 0x0  nop
    ctx->pc = 0x259334u;
    // NOP
label_259338:
    // 0x259338: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x259338u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25933c: 0x0  nop
    ctx->pc = 0x25933cu;
    // NOP
    // 0x259340: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x259344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259348: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x259348u;
    {
        const bool branch_taken_0x259348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259348) {
            ctx->pc = 0x259358u;
            goto label_259358;
        }
    }
    ctx->pc = 0x259350u;
    // 0x259350: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259350u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x259354: 0x0  nop
    ctx->pc = 0x259354u;
    // NOP
label_259358:
    // 0x259358: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x259358u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25935c: 0x0  nop
    ctx->pc = 0x25935cu;
    // NOP
    // 0x259360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x259364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259368: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x259368u;
    {
        const bool branch_taken_0x259368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259368) {
            ctx->pc = 0x259378u;
            goto label_259378;
        }
    }
    ctx->pc = 0x259370u;
    // 0x259370: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x259370u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x259374: 0x0  nop
    ctx->pc = 0x259374u;
    // NOP
label_259378:
    // 0x259378: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x259378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25937c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25937cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x259380: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x259380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x259384: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x259384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259388: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x259388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25938c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x25938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x259390: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x259390u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259394: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x259394u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x259398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25939c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x25939cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2593a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2593a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2593a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2593a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2593a8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2593ac: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x2593acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x2593b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2593b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2593b4: 0x0  nop
    ctx->pc = 0x2593b4u;
    // NOP
    // 0x2593b8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2593b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2593bc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2593bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2593c0: 0xc075140  jal         func_1D4500
    ctx->pc = 0x2593C0u;
    SET_GPR_U32(ctx, 31, 0x2593C8u);
    ctx->pc = 0x2593C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2593C0u;
    // 0x2593c4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x2593C0u, 0x2593C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2593C8u;
label_2593c8:
    // 0x2593c8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2593c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2593cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2593ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2593d0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2593d4: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2593d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2593d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2593d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2593dc: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2593DCu;
    {
        const bool branch_taken_0x2593dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2593E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593DCu;
        // 0x2593e0: 0x4600ef40  add.s       $f29, $f29, $f0 (Delay Slot)
        ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593dc) {
            ctx->pc = 0x259260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259260;
        }
    }
    ctx->pc = 0x2593E4u;
    // 0x2593e4: 0x0  nop
    ctx->pc = 0x2593e4u;
    // NOP
label_2593e8:
    // 0x2593e8: 0x2351823  subu        $v1, $s1, $s5
    ctx->pc = 0x2593e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2593ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2593ECu;
    {
        const bool branch_taken_0x2593ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2593F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593ECu;
        // 0x2593f0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593ec) {
            ctx->pc = 0x2593FCu;
            goto label_2593fc;
        }
    }
    ctx->pc = 0x2593F4u;
    // 0x2593f4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2593f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2593f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2593f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2593fc:
    // 0x2593fc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259400: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x259400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x259404: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x259408: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x259408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x25940c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x25940cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x259410: 0x0  nop
    ctx->pc = 0x259410u;
    // NOP
    // 0x259414: 0x0  nop
    ctx->pc = 0x259414u;
    // NOP
    // 0x259418: 0x1010  mfhi        $v0
    ctx->pc = 0x259418u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25941c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259420: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x259420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x259424: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259424u;
    {
        const bool branch_taken_0x259424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259424u;
        // 0x259428: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259424) {
            ctx->pc = 0x259450u;
            goto label_259450;
        }
    }
    ctx->pc = 0x25942Cu;
    // 0x25942c: 0x3c0230ae  lui         $v0, 0x30AE
    ctx->pc = 0x25942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12462 << 16));
    // 0x259430: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x259430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x259434: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x259434u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x259438: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x259438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25943c: 0x24020531  addiu       $v0, $zero, 0x531
    ctx->pc = 0x25943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
    // 0x259440: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x259440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x259444: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x259444u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x259448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259448u;
    {
        const bool branch_taken_0x259448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259448u;
        // 0x25944c: 0xfea20008  sd          $v0, 0x8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259448) {
            ctx->pc = 0x259458u;
            goto label_259458;
        }
    }
    ctx->pc = 0x259450u;
label_259450:
    // 0x259450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259450u;
    {
        const bool branch_taken_0x259450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259450u;
        // 0x259454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259450) {
            ctx->pc = 0x259460u;
            goto label_259460;
        }
    }
    ctx->pc = 0x259458u;
label_259458:
    // 0x259458: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x259458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25945c: 0x0  nop
    ctx->pc = 0x25945cu;
    // NOP
label_259460:
    // 0x259460: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x259460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259464: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x259464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259468: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x259468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x25946c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x25946cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x259470: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x259470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x259474: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x259474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x259478: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x259478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x25947c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x25947cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x259480: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x259480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x259484: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x259484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259488: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x259488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x25948c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x25948cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259490: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x259490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x259494: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x259494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259498: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x259498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x25949c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25949cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2594a0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2594a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2594a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2594a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2594a8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2594a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2594ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2594acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2594b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2594b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2594b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2594b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2594b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2594B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2594BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B8u;
        // 0x2594bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2594B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2594C0u;
}
