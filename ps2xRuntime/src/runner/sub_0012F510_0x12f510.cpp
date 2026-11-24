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

// Function: sub_0012F510
// Address: 0x12f510 - 0x12f688
void sub_0012F510_0x12f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F510_0x12f510");
#endif

    switch (ctx->pc) {
        case 0x12f57cu: goto label_12f57c;
        case 0x12f5dcu: goto label_12f5dc;
        case 0x12f5ecu: goto label_12f5ec;
        case 0x12f5fcu: goto label_12f5fc;
        case 0x12f648u: goto label_12f648;
        case 0x12f658u: goto label_12f658;
        case 0x12f668u: goto label_12f668;
        case 0x12f670u: goto label_12f670;
        default: break;
    }

    ctx->pc = 0x12f510u;

    // 0x12f510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12f514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f528: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x12f528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x12f52c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f530: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x12f530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12f534: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x12f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f538: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f53c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x12f53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12f540: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x12f540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x12f544: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x12f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f548: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x12f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f54c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f54cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f550: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12f550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12f554: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x12f554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x12f558: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x12f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f55c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x12f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f560: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f564: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12f568: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x12f568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x12f56c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f570: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x12f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f574: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x12F574u;
    SET_GPR_U32(ctx, 31, 0x12F57Cu);
    ctx->pc = 0x12F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F574u;
    // 0x12f578: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x12F574u, 0x12F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F57Cu;
label_12f57c:
    // 0x12f57c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f57cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12f580: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f584: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x12f584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x12f588: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12f58c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x12f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f590: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f594: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12f598: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5a0: 0x0  nop
    ctx->pc = 0x12f5a0u;
    // NOP
    // 0x12f5a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12f5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12f5a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f5a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12f5ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f5acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f5b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f5b4: 0x0  nop
    ctx->pc = 0x12f5b4u;
    // NOP
    // 0x12f5b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f5bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12f5bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12f5c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12f5c4: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x12f5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f5c8: 0x86420022  lh          $v0, 0x22($s2)
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x12f5cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12f5d0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x12f5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f5d4: 0xc04d594  jal         func_135650
    ctx->pc = 0x12F5D4u;
    SET_GPR_U32(ctx, 31, 0x12F5DCu);
    ctx->pc = 0x12F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5D4u;
    // 0x12f5d8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x12F5D4u, 0x12F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5DCu;
label_12f5dc:
    // 0x12f5dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f5e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12f5e4: 0xc041442  jal         func_105108
    ctx->pc = 0x12F5E4u;
    SET_GPR_U32(ctx, 31, 0x12F5ECu);
    ctx->pc = 0x12F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5E4u;
    // 0x12f5e8: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F5E4u, 0x12F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5ECu;
label_12f5ec:
    // 0x12f5ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f5f0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x12f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f5f4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x12F5F4u;
    SET_GPR_U32(ctx, 31, 0x12F5FCu);
    ctx->pc = 0x12F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5F4u;
    // 0x12f5f8: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x12F5F4u, 0x12F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5FCu;
label_12f5fc:
    // 0x12f5fc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x12f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x12f600: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f604: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x12f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f608: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x12f60c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12f60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f610: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12f614: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f61c: 0x0  nop
    ctx->pc = 0x12f61cu;
    // NOP
    // 0x12f620: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12f620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12f624: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f624u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x12f628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f62c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f630: 0x0  nop
    ctx->pc = 0x12f630u;
    // NOP
    // 0x12f634: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12f634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12f638: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12f638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12f63c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12f640: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x12F640u;
    SET_GPR_U32(ctx, 31, 0x12F648u);
    ctx->pc = 0x12F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F640u;
    // 0x12f644: 0xa6420020  sh          $v0, 0x20($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x12F640u, 0x12F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F648u;
label_12f648:
    // 0x12f648: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x12f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x12f64c: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x12f64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x12f650: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12F650u;
    SET_GPR_U32(ctx, 31, 0x12F658u);
    ctx->pc = 0x12F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F650u;
    // 0x12f654: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12F650u, 0x12F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F658u;
label_12f658:
    // 0x12f658: 0x86450020  lh          $a1, 0x20($s2)
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12f65c: 0x86460022  lh          $a2, 0x22($s2)
    ctx->pc = 0x12f65cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x12f660: 0xc04d548  jal         func_135520
    ctx->pc = 0x12F660u;
    SET_GPR_U32(ctx, 31, 0x12F668u);
    ctx->pc = 0x12F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F660u;
    // 0x12f664: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x12F660u, 0x12F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F668u;
label_12f668:
    // 0x12f668: 0xc04be24  jal         func_12F890
    ctx->pc = 0x12F668u;
    SET_GPR_U32(ctx, 31, 0x12F670u);
    ctx->pc = 0x12F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F668u;
    // 0x12f66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x12F668u, 0x12F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F670u;
label_12f670:
    // 0x12f670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f680: 0x3e00008  jr          $ra
    ctx->pc = 0x12F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F680u;
        // 0x12f684: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F688u;
}
