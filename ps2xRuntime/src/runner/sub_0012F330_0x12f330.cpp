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

// Function: sub_0012F330
// Address: 0x12f330 - 0x12f504
void sub_0012F330_0x12f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F330_0x12f330");
#endif

    switch (ctx->pc) {
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f404u: goto label_12f404;
        case 0x12f414u: goto label_12f414;
        case 0x12f424u: goto label_12f424;
        case 0x12f470u: goto label_12f470;
        case 0x12f480u: goto label_12f480;
        case 0x12f490u: goto label_12f490;
        case 0x12f4a4u: goto label_12f4a4;
        case 0x12f4c0u: goto label_12f4c0;
        case 0x12f4dcu: goto label_12f4dc;
        case 0x12f4e8u: goto label_12f4e8;
        default: break;
    }

    ctx->pc = 0x12f330u;

    // 0x12f330: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12f334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12f338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12f33c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f340: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f348: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12f348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f350: 0x27b10098  addiu       $s1, $sp, 0x98
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x12f354: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f358: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x12f358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x12f35c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x12f35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f360: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f364: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x12f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12f368: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x12f368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x12f36c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x12f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f370: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x12f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f374: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f378: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12f378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12f37c: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x12f37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x12f380: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x12f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f384: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x12f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f388: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f38c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12f390: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x12f390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x12f394: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f398: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x12f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f39c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x12F39Cu;
    SET_GPR_U32(ctx, 31, 0x12F3A4u);
    ctx->pc = 0x12F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F39Cu;
    // 0x12f3a0: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x12F39Cu, 0x12F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3A4u;
label_12f3a4:
    // 0x12f3a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f3a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12f3a8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f3ac: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x12f3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x12f3b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f3b4: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x12f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f3b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f3bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12f3c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f3c8: 0x0  nop
    ctx->pc = 0x12f3c8u;
    // NOP
    // 0x12f3cc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12f3ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12f3d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f3d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12f3d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f3d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f3d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f3dc: 0x0  nop
    ctx->pc = 0x12f3dcu;
    // NOP
    // 0x12f3e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f3e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12f3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12f3e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12f3ec: 0xa6620022  sh          $v0, 0x22($s3)
    ctx->pc = 0x12f3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f3f0: 0x86620022  lh          $v0, 0x22($s3)
    ctx->pc = 0x12f3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x12f3f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12f3f8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x12f3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f3fc: 0xc04d594  jal         func_135650
    ctx->pc = 0x12F3FCu;
    SET_GPR_U32(ctx, 31, 0x12F404u);
    ctx->pc = 0x12F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F3FCu;
    // 0x12f400: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x12F3FCu, 0x12F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F404u;
label_12f404:
    // 0x12f404: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12f408: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12f408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f40c: 0xc041442  jal         func_105108
    ctx->pc = 0x12F40Cu;
    SET_GPR_U32(ctx, 31, 0x12F414u);
    ctx->pc = 0x12F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F40Cu;
    // 0x12f410: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F40Cu, 0x12F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F414u;
label_12f414:
    // 0x12f414: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f418: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x12f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f41c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x12F41Cu;
    SET_GPR_U32(ctx, 31, 0x12F424u);
    ctx->pc = 0x12F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F41Cu;
    // 0x12f420: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x12F41Cu, 0x12F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x12f424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x12f428: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f42c: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x12f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f430: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x12f434: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f438: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12f43c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f444: 0x0  nop
    ctx->pc = 0x12f444u;
    // NOP
    // 0x12f448: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12f448u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12f44c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f44cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12f450: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f454: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f458: 0x0  nop
    ctx->pc = 0x12f458u;
    // NOP
    // 0x12f45c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12f460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12f464: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12f468: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x12F468u;
    SET_GPR_U32(ctx, 31, 0x12F470u);
    ctx->pc = 0x12F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F468u;
    // 0x12f46c: 0xa6620020  sh          $v0, 0x20($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x12F468u, 0x12F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F470u;
label_12f470:
    // 0x12f470: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x12f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x12f474: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x12f474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x12f478: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12F478u;
    SET_GPR_U32(ctx, 31, 0x12F480u);
    ctx->pc = 0x12F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F478u;
    // 0x12f47c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12F478u, 0x12F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F480u;
label_12f480:
    // 0x12f480: 0x86650020  lh          $a1, 0x20($s3)
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x12f484: 0x86660022  lh          $a2, 0x22($s3)
    ctx->pc = 0x12f484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x12f488: 0xc04d548  jal         func_135520
    ctx->pc = 0x12F488u;
    SET_GPR_U32(ctx, 31, 0x12F490u);
    ctx->pc = 0x12F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F488u;
    // 0x12f48c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x12F488u, 0x12F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F490u;
label_12f490:
    // 0x12f490: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x12f494: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x12f498: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f49c: 0xc041442  jal         func_105108
    ctx->pc = 0x12F49Cu;
    SET_GPR_U32(ctx, 31, 0x12F4A4u);
    ctx->pc = 0x12F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F49Cu;
    // 0x12f4a0: 0x24c664c0  addiu       $a2, $a2, 0x64C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F49Cu, 0x12F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F4A4u;
    {
        const bool branch_taken_0x12f4a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f4a4) {
            ctx->pc = 0x12F4C8u;
            goto label_12f4c8;
        }
    }
    ctx->pc = 0x12F4ACu;
    // 0x12f4ac: 0xc66c0038  lwc1        $f12, 0x38($s3)
    ctx->pc = 0x12f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f4b0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f4b4: 0x24845a40  addiu       $a0, $a0, 0x5A40
    ctx->pc = 0x12f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    // 0x12f4b8: 0xc050cf0  jal         func_1433C0
    ctx->pc = 0x12F4B8u;
    SET_GPR_U32(ctx, 31, 0x12F4C0u);
    ctx->pc = 0x12F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F4B8u;
    // 0x12f4bc: 0x26650060  addiu       $a1, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1433C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1433C0u, 0x12F4B8u, 0x12F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4C0u;
label_12f4c0:
    // 0x12f4c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F4C0u;
    {
        const bool branch_taken_0x12f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f4c0) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F4C8u;
label_12f4c8:
    // 0x12f4c8: 0x86660024  lh          $a2, 0x24($s3)
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x12f4cc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x12f4d0: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x12f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x12f4d4: 0xc050cd4  jal         func_143350
    ctx->pc = 0x12F4D4u;
    SET_GPR_U32(ctx, 31, 0x12F4DCu);
    ctx->pc = 0x12F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F4D4u;
    // 0x12f4d8: 0x24845a40  addiu       $a0, $a0, 0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143350u, 0x12F4D4u, 0x12F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4DCu;
label_12f4dc:
    // 0x12f4dc: 0x0  nop
    ctx->pc = 0x12f4dcu;
    // NOP
label_12f4e0:
    // 0x12f4e0: 0xc04be24  jal         func_12F890
    ctx->pc = 0x12F4E0u;
    SET_GPR_U32(ctx, 31, 0x12F4E8u);
    ctx->pc = 0x12F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F4E0u;
    // 0x12f4e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x12F4E0u, 0x12F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4E8u;
label_12f4e8:
    // 0x12f4e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f4ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f4ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f4f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f4f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4FCu;
        // 0x12f500: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F504u;
}
