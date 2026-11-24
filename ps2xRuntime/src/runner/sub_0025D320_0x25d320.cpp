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

// Function: sub_0025D320
// Address: 0x25d320 - 0x25d524
void sub_0025D320_0x25d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D320_0x25d320");
#endif

    switch (ctx->pc) {
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3f4u: goto label_25d3f4;
        case 0x25d3fcu: goto label_25d3fc;
        case 0x25d430u: goto label_25d430;
        case 0x25d440u: goto label_25d440;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d498u: goto label_25d498;
        case 0x25d4a4u: goto label_25d4a4;
        case 0x25d4acu: goto label_25d4ac;
        case 0x25d4c4u: goto label_25d4c4;
        case 0x25d4ecu: goto label_25d4ec;
        default: break;
    }

    ctx->pc = 0x25d320u;

    // 0x25d320: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x25d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25d324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d328: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25d32c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x25d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x25d330: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x25d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x25d334: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25d334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d338: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x25d33c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25d33cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d340: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x25d344: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25d348: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25d34c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25d34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d350: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d354: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x25d354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d358: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x25d358u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25d35c: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x25d35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x25d360: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25d360u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25d364: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25d364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d368: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25d368u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25d36c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d370: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25d370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d374: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25d374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d378: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x25d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d37c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x25d37cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x25d380: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x25d380u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x25d384: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x25d384u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x25d388: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x25d388u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x25d38c: 0x46008506  mov.s       $f20, $f16
    ctx->pc = 0x25d38cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[16]);
    // 0x25d390: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x25d394: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x25d394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x25d398: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x25d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d39c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25d3a0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25D3A0u;
    SET_GPR_U32(ctx, 31, 0x25D3A8u);
    ctx->pc = 0x25D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3A0u;
    // 0x25d3a4: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25D3A0u, 0x25D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3A8u;
label_25d3a8:
    // 0x25d3a8: 0x4617b001  sub.s       $f0, $f22, $f23
    ctx->pc = 0x25d3a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x25d3ac: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x25d3acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d3b0: 0x4600c0c2  mul.s       $f3, $f24, $f0
    ctx->pc = 0x25d3b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x25d3b4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x25d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x25d3b8: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x25d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d3bc: 0x4603b8c0  add.s       $f3, $f23, $f3
    ctx->pc = 0x25d3bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x25d3c0: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x25d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d3c4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25d3c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25d3c8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25d3c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x25d3cc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x25d3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x25d3d0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d3d4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x25d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d3d8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x25d3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25d3dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d3e0: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x25D3E0u;
    {
        const bool branch_taken_0x25d3e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E0u;
        // 0x25d3e4: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d3e0) {
            ctx->pc = 0x25D450u;
            goto label_25d450;
        }
    }
    ctx->pc = 0x25D3E8u;
    // 0x25d3e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3ec: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25D3ECu;
    SET_GPR_U32(ctx, 31, 0x25D3F4u);
    ctx->pc = 0x25D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3ECu;
    // 0x25d3f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25D3ECu, 0x25D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3F4u;
label_25d3f4:
    // 0x25d3f4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x25D3F4u;
    SET_GPR_U32(ctx, 31, 0x25D3FCu);
    ctx->pc = 0x25D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D3F4u;
    // 0x25d3f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x25D3F4u, 0x25D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D3FCu;
label_25d3fc:
    // 0x25d3fc: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x25d3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d400: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D400u;
    {
        const bool branch_taken_0x25d400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d400) {
            ctx->pc = 0x25D410u;
            goto label_25d410;
        }
    }
    ctx->pc = 0x25D408u;
    // 0x25d408: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x25d408u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x25d40c: 0x0  nop
    ctx->pc = 0x25d40cu;
    // NOP
label_25d410:
    // 0x25d410: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x25d410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d414: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25D414u;
    {
        const bool branch_taken_0x25d414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d414) {
            ctx->pc = 0x25D420u;
            goto label_25d420;
        }
    }
    ctx->pc = 0x25D41Cu;
    // 0x25d41c: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x25d41cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_25d420:
    // 0x25d420: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d424: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25d424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x25d428: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25D428u;
    SET_GPR_U32(ctx, 31, 0x25D430u);
    ctx->pc = 0x25D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D428u;
    // 0x25d42c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25D428u, 0x25D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D430u;
label_25d430:
    // 0x25d430: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d434: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25d434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d438: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x25D438u;
    SET_GPR_U32(ctx, 31, 0x25D440u);
    ctx->pc = 0x25D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D438u;
    // 0x25d43c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x25D438u, 0x25D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D440u;
label_25d440:
    // 0x25d440: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x25d440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d444: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x25d444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x25d448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D448u;
    {
        const bool branch_taken_0x25d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D448u;
        // 0x25d44c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d448) {
            ctx->pc = 0x25D458u;
            goto label_25d458;
        }
    }
    ctx->pc = 0x25D450u;
label_25d450:
    // 0x25d450: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x25d450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x25d454: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x25d454u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25d458:
    // 0x25d458: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D458u;
    {
        const bool branch_taken_0x25d458 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D458u;
        // 0x25d45c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d458) {
            ctx->pc = 0x25D480u;
            goto label_25d480;
        }
    }
    ctx->pc = 0x25D460u;
    // 0x25d460: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x25d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x25d464: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x25D464u;
    SET_GPR_U32(ctx, 31, 0x25D46Cu);
    ctx->pc = 0x25D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D464u;
    // 0x25d468: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x25D464u, 0x25D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D46Cu;
label_25d46c:
    // 0x25d46c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D46Cu;
    {
        const bool branch_taken_0x25d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d46c) {
            ctx->pc = 0x25D480u;
            goto label_25d480;
        }
    }
    ctx->pc = 0x25D474u;
    // 0x25d474: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x25d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d478: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25d478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25d47c: 0x0  nop
    ctx->pc = 0x25d47cu;
    // NOP
label_25d480:
    // 0x25d480: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x25d484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d488: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x25d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d48c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d490: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x25D490u;
    SET_GPR_U32(ctx, 31, 0x25D498u);
    ctx->pc = 0x25D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D490u;
    // 0x25d494: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x25D490u, 0x25D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D498u;
label_25d498:
    // 0x25d498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d49c: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25D49Cu;
    SET_GPR_U32(ctx, 31, 0x25D4A4u);
    ctx->pc = 0x25D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D49Cu;
    // 0x25d4a0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25D49Cu, 0x25D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4A4u;
label_25d4a4:
    // 0x25d4a4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x25D4A4u;
    SET_GPR_U32(ctx, 31, 0x25D4ACu);
    ctx->pc = 0x25D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4A4u;
    // 0x25d4a8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x25D4A4u, 0x25D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4ACu;
label_25d4ac:
    // 0x25d4ac: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x25d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d4b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d4b4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x25d4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x25d4b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x25d4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x25d4bc: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x25D4BCu;
    SET_GPR_U32(ctx, 31, 0x25D4C4u);
    ctx->pc = 0x25D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4BCu;
    // 0x25d4c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x25D4BCu, 0x25D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4C4u;
label_25d4c4:
    // 0x25d4c4: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x25d4c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x25d4c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25d4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d4d0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x25d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25d4d4: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x25d4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25d4d8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x25d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d4dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d4dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25d4e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d4e4: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x25D4E4u;
    SET_GPR_U32(ctx, 31, 0x25D4ECu);
    ctx->pc = 0x25D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4E4u;
    // 0x25d4e8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x25D4E4u, 0x25D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4ECu;
label_25d4ec:
    // 0x25d4ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25d4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d4f0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x25d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25d4f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x25d4f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d4f8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25d4fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25d4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d500: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25d504: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25d504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d508: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d50c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25d50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d510: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d514: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25d514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d518: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d51c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D51Cu;
        // 0x25d520: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D524u;
}
