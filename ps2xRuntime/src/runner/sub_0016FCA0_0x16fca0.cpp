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

// Function: sub_0016FCA0
// Address: 0x16fca0 - 0x17045c
void sub_0016FCA0_0x16fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FCA0_0x16fca0");
#endif

    switch (ctx->pc) {
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fe30u: goto label_16fe30;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x17002cu: goto label_17002c;
        case 0x170090u: goto label_170090;
        case 0x170100u: goto label_170100;
        case 0x17016cu: goto label_17016c;
        case 0x1703ecu: goto label_1703ec;
        default: break;
    }

    ctx->pc = 0x16fca0u;

    // 0x16fca0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16fca4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fca8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16fcac: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x16fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x16fcb0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x16fcb4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x16fcb8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16fcbc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16fcc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16fcc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16fcc8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x16fcc8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16fccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcd0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16fcd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16fcd4: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x16fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x16fcd8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16fcd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16fcdc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16fcdcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16fce0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16fce0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16fce4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16fce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16fce8: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x16fce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16fcec: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x16FCECu;
    SET_GPR_U32(ctx, 31, 0x16FCF4u);
    ctx->pc = 0x16FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCECu;
    // 0x16fcf0: 0x34440200  ori         $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x16FCECu, 0x16FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCF4u;
label_16fcf4:
    // 0x16fcf4: 0xc6390008  lwc1        $f25, 0x8($s1)
    ctx->pc = 0x16fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x16fcf8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16fcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16fcfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd00: 0x34c40010  ori         $a0, $a2, 0x10
    ctx->pc = 0x16fd00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x16fd04: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x16fd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x16fd08: 0xac20000c  sw          $zero, 0xC($at)
    ctx->pc = 0x16fd08u;
    runtime->Store32(rdram, ctx, 0x7000000Cu, GPR_U32(ctx, 0)); // MMIO: 0x7000000c
    // 0x16fd0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd10: 0xac200008  sw          $zero, 0x8($at)
    ctx->pc = 0x16fd10u;
    runtime->Store32(rdram, ctx, 0x70000008u, GPR_U32(ctx, 0)); // MMIO: 0x70000008
    // 0x16fd14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd18: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x16fd18u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x16fd1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd20: 0xc041442  jal         func_105108
    ctx->pc = 0x16FD20u;
    SET_GPR_U32(ctx, 31, 0x16FD28u);
    ctx->pc = 0x16FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD20u;
    // 0x16fd24: 0xe4390004  swc1        $f25, 0x4($at) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16FD20u, 0x16FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD28u;
label_16fd28:
    // 0x16fd28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd2c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x16fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16fd30: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16fd34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16fd34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16fd38: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16fd38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fd3c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16fd3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16fd40: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x16fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16fd44: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16fd48: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16fd4c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd50: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16fd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16fd54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd58: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x16fd58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16fd5c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd60: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x16fd60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16fd64: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x16fd64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16fd68: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16fd68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16fd6c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16FD6Cu;
    SET_GPR_U32(ctx, 31, 0x16FD74u);
    ctx->pc = 0x16FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD6Cu;
    // 0x16fd70: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16FD6Cu, 0x16FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD74u;
label_16fd74:
    // 0x16fd74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fd78: 0xac22010c  sw          $v0, 0x10C($at)
    ctx->pc = 0x16fd78u;
    runtime->Store32(rdram, ctx, 0x7000010Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000010c
    // 0x16fd7c: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x16fd7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16fd80: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16fd84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FD84u;
    {
        const bool branch_taken_0x16fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fd84) {
            ctx->pc = 0x16FD98u;
            goto label_16fd98;
        }
    }
    ctx->pc = 0x16FD8Cu;
    // 0x16fd8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16FD8Cu;
    {
        const bool branch_taken_0x16fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD8Cu;
        // 0x16fd90: 0xc638000c  lwc1        $f24, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd8c) {
            ctx->pc = 0x16FDA8u;
            goto label_16fda8;
        }
    }
    ctx->pc = 0x16FD94u;
    // 0x16fd94: 0x0  nop
    ctx->pc = 0x16fd94u;
    // NOP
label_16fd98:
    // 0x16fd98: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x16fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fd9c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x16fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fda0: 0x46000e00  add.s       $f24, $f1, $f0
    ctx->pc = 0x16fda0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16fda4: 0x0  nop
    ctx->pc = 0x16fda4u;
    // NOP
label_16fda8:
    // 0x16fda8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fdac: 0xac20002c  sw          $zero, 0x2C($at)
    ctx->pc = 0x16fdacu;
    runtime->Store32(rdram, ctx, 0x7000002Cu, GPR_U32(ctx, 0)); // MMIO: 0x7000002c
    // 0x16fdb0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fdb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fdb8: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x16fdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16fdbc: 0xac200028  sw          $zero, 0x28($at)
    ctx->pc = 0x16fdbcu;
    runtime->Store32(rdram, ctx, 0x70000028u, GPR_U32(ctx, 0)); // MMIO: 0x70000028
    // 0x16fdc0: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x16fdc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x16fdc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fdc8: 0x34460020  ori         $a2, $v0, 0x20
    ctx->pc = 0x16fdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16fdcc: 0xac200020  sw          $zero, 0x20($at)
    ctx->pc = 0x16fdccu;
    runtime->Store32(rdram, ctx, 0x70000020u, GPR_U32(ctx, 0)); // MMIO: 0x70000020
    // 0x16fdd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fdd4: 0xc041442  jal         func_105108
    ctx->pc = 0x16FDD4u;
    SET_GPR_U32(ctx, 31, 0x16FDDCu);
    ctx->pc = 0x16FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDD4u;
    // 0x16fdd8: 0xe4380024  swc1        $f24, 0x24($at) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16FDD4u, 0x16FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDDCu;
label_16fddc:
    // 0x16fddc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16fde0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fde4: 0x34640030  ori         $a0, $v1, 0x30
    ctx->pc = 0x16fde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x16fde8: 0x34430030  ori         $v1, $v0, 0x30
    ctx->pc = 0x16fde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16fdec: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16fdf0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16fdf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x16fdf4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16fdf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fdf8: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16fdf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16fdfc: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16fe00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fe04: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16fe08: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16fe0c: 0x34440120  ori         $a0, $v0, 0x120
    ctx->pc = 0x16fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
    // 0x16fe10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fe14: 0x34450030  ori         $a1, $v0, 0x30
    ctx->pc = 0x16fe14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16fe18: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fe1c: 0x344702a8  ori         $a3, $v0, 0x2A8
    ctx->pc = 0x16fe1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)680);
    // 0x16fe20: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x16fe20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16fe24: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16fe24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16fe28: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16FE28u;
    SET_GPR_U32(ctx, 31, 0x16FE30u);
    ctx->pc = 0x16FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE28u;
    // 0x16fe2c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16FE28u, 0x16FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE30u;
label_16fe30:
    // 0x16fe30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fe34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16fe38: 0xac22012c  sw          $v0, 0x12C($at)
    ctx->pc = 0x16fe38u;
    runtime->Store32(rdram, ctx, 0x7000012Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000012c
    // 0x16fe3c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16fe3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16fe40: 0x8e0a0014  lw          $t2, 0x14($s0)
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16fe44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fe48: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16fe4c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x16fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16fe50: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x16fe50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16fe54: 0x9145000b  lbu         $a1, 0xB($t2)
    ctx->pc = 0x16fe54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 11)));
    // 0x16fe58: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16fe5c: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x16fe5cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fe60: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x16fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16fe64: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x16fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x16fe68: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x16fe68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16fe6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16fe6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16fe70: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x16fe70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x16fe74: 0x9144000c  lbu         $a0, 0xC($t2)
    ctx->pc = 0x16fe74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16fe78: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x16fe7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16fe7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16fe80: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x16fe84: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16fe88: 0x1274021  addu        $t0, $t1, $a3
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x16fe8c: 0x95070004  lhu         $a3, 0x4($t0)
    ctx->pc = 0x16fe8cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16fe90: 0x85050008  lh          $a1, 0x8($t0)
    ctx->pc = 0x16fe90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16fe94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16fe98: 0x46011903  div.s       $f4, $f3, $f1
    ctx->pc = 0x16fe98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x16fe9c: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x16fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x16fea0: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16fea4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16fea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fea8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x16fea8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16feac: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x16feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x16feb0: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x16feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x16feb4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16feb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16feb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16feb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16febc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16febcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16fec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16fec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16fec4: 0x460415c2  mul.s       $f23, $f2, $f4
    ctx->pc = 0x16fec4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x16fec8: 0x46012582  mul.s       $f22, $f4, $f1
    ctx->pc = 0x16fec8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x16fecc: 0x46001903  div.s       $f4, $f3, $f0
    ctx->pc = 0x16feccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x16fed0: 0x0  nop
    ctx->pc = 0x16fed0u;
    // NOP
    // 0x16fed4: 0x0  nop
    ctx->pc = 0x16fed4u;
    // NOP
    // 0x16fed8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16FED8u;
    {
        const bool branch_taken_0x16fed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fed8) {
            ctx->pc = 0x16FF38u;
            goto label_16ff38;
        }
    }
    ctx->pc = 0x16FEE0u;
    // 0x16fee0: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x16fee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x16fee4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FEE4u;
    {
        const bool branch_taken_0x16fee4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x16FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEE4u;
        // 0x16fee8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fee4) {
            ctx->pc = 0x16FEF8u;
            goto label_16fef8;
        }
    }
    ctx->pc = 0x16FEECu;
    // 0x16feec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16feecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fef0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16FEF0u;
    {
        const bool branch_taken_0x16fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEF0u;
        // 0x16fef4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fef0) {
            ctx->pc = 0x16FF10u;
            goto label_16ff10;
        }
    }
    ctx->pc = 0x16FEF8u;
label_16fef8:
    // 0x16fef8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16fef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16fefc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16fefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16ff00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16ff00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ff04: 0x0  nop
    ctx->pc = 0x16ff04u;
    // NOP
    // 0x16ff08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ff08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ff0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16ff0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16ff10:
    // 0x16ff10: 0x95040006  lhu         $a0, 0x6($t0)
    ctx->pc = 0x16ff10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x16ff14: 0x46040542  mul.s       $f21, $f0, $f4
    ctx->pc = 0x16ff14u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x16ff18: 0x8503000a  lh          $v1, 0xA($t0)
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x16ff1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ff20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ff20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ff24: 0x0  nop
    ctx->pc = 0x16ff24u;
    // NOP
    // 0x16ff28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ff28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ff2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16FF2Cu;
    {
        const bool branch_taken_0x16ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF2Cu;
        // 0x16ff30: 0x46002502  mul.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff2c) {
            ctx->pc = 0x16FF88u;
            goto label_16ff88;
        }
    }
    ctx->pc = 0x16FF34u;
    // 0x16ff34: 0x0  nop
    ctx->pc = 0x16ff34u;
    // NOP
label_16ff38:
    // 0x16ff38: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x16ff38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x16ff3c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FF3Cu;
    {
        const bool branch_taken_0x16ff3c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x16FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF3Cu;
        // 0x16ff40: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff3c) {
            ctx->pc = 0x16FF50u;
            goto label_16ff50;
        }
    }
    ctx->pc = 0x16FF44u;
    // 0x16ff44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ff44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ff48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16FF48u;
    {
        const bool branch_taken_0x16ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF48u;
        // 0x16ff4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff48) {
            ctx->pc = 0x16FF68u;
            goto label_16ff68;
        }
    }
    ctx->pc = 0x16FF50u;
label_16ff50:
    // 0x16ff50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16ff54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16ff54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16ff58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16ff58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ff5c: 0x0  nop
    ctx->pc = 0x16ff5cu;
    // NOP
    // 0x16ff60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ff60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ff64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16ff64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16ff68:
    // 0x16ff68: 0x95040006  lhu         $a0, 0x6($t0)
    ctx->pc = 0x16ff68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x16ff6c: 0x46040502  mul.s       $f20, $f0, $f4
    ctx->pc = 0x16ff6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x16ff70: 0x8503000a  lh          $v1, 0xA($t0)
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x16ff74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ff78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ff78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ff7c: 0x0  nop
    ctx->pc = 0x16ff7cu;
    // NOP
    // 0x16ff80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ff80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ff84: 0x46002542  mul.s       $f21, $f4, $f0
    ctx->pc = 0x16ff84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_16ff88:
    // 0x16ff88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16ff8c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x16ff8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ff90: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16ff94: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16ff98: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ff9c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ffa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16ffa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffa4: 0x839807  srav        $s3, $v1, $a0
    ctx->pc = 0x16ffa4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x16ffa8: 0x92a804  sllv        $s5, $s2, $a0
    ctx->pc = 0x16ffa8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x16ffac: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x16ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16ffb0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x16ffb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb4: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x16FFB4u;
    {
        const bool branch_taken_0x16ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFB4u;
        // 0x16ffb8: 0x658824  and         $s1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffb4) {
            ctx->pc = 0x170400u;
            goto label_170400;
        }
    }
    ctx->pc = 0x16FFBCu;
    // 0x16ffbc: 0x0  nop
    ctx->pc = 0x16ffbcu;
    // NOP
label_16ffc0:
    // 0x16ffc0: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x16ffc4: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FFC4u;
    {
        const bool branch_taken_0x16ffc4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ffc4) {
            ctx->pc = 0x16FFD0u;
            goto label_16ffd0;
        }
    }
    ctx->pc = 0x16FFCCu;
    // 0x16ffcc: 0x24141000  addiu       $s4, $zero, 0x1000
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_16ffd0:
    // 0x16ffd0: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x16ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x16ffd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16ffd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16ffd8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x16ffdc: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x16ffdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x16ffe0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16ffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16ffe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ffe8: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x16ffec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16fff0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x16fff4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fff8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x16fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x16fffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170000: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170004: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x170004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170008: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x170008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x17000c: 0x34c40010  ori         $a0, $a2, 0x10
    ctx->pc = 0x17000cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x170010: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x170010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x170014: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x170014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x170018: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17001c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170020: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x170020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x170024: 0xc041442  jal         func_105108
    ctx->pc = 0x170024u;
    SET_GPR_U32(ctx, 31, 0x17002Cu);
    ctx->pc = 0x170028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170024u;
    // 0x170028: 0xe4200004  swc1        $f0, 0x4($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x170024u, 0x17002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17002Cu;
label_17002c:
    // 0x17002c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170030: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170034: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x170034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x170038: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x170038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17003c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x17003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x170040: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x170044: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x170044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170048: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17004c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x17004cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170050: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170054: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x170054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170058: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x170058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17005c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170060: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170064: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x170064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170068: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17006c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170070: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x170070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x170074: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x170074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170078: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17007c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170080: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x170080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x170084: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x170084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x170088: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170088u;
    SET_GPR_U32(ctx, 31, 0x170090u);
    ctx->pc = 0x17008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170088u;
    // 0x17008c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170088u, 0x170090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170090u;
label_170090:
    // 0x170090: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x170094: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x170094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x170098: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x170098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x17009c: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x17009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x1700a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1700a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1700a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1700a8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1700a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1700ac: 0x30830fff  andi        $v1, $a0, 0xFFF
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1700b0: 0x24820400  addiu       $v0, $a0, 0x400
    ctx->pc = 0x1700b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1700b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1700b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1700b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1700b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1700bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1700bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1700c0: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1700c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1700c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1700c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1700c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1700cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1700d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1700d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1700d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1700d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1700d8: 0x34c40030  ori         $a0, $a2, 0x30
    ctx->pc = 0x1700d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x1700dc: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x1700dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x1700e0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1700e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x1700e4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1700e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1700e8: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x1700e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x1700ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1700ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1700f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1700f4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1700f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1700f8: 0xc041442  jal         func_105108
    ctx->pc = 0x1700F8u;
    SET_GPR_U32(ctx, 31, 0x170100u);
    ctx->pc = 0x1700FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1700F8u;
    // 0x1700fc: 0xe4200024  swc1        $f0, 0x24($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1700F8u, 0x170100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170100u;
label_170100:
    // 0x170100: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170104: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170108: 0x34640030  ori         $a0, $v1, 0x30
    ctx->pc = 0x170108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x17010c: 0x34430030  ori         $v1, $v0, 0x30
    ctx->pc = 0x17010cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x170110: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x170110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x170114: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x170118: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x170118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17011c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17011cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170120: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x170120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170124: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x170124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x170128: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x170128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17012c: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x17012cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170130: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170134: 0x8608002c  lh          $t0, 0x2C($s0)
    ctx->pc = 0x170134u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x170138: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17013c: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x17013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170140: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x170140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x170144: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x170144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170148: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x170148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17014c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170150: 0x344302a0  ori         $v1, $v0, 0x2A0
    ctx->pc = 0x170150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x170154: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x170154u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x170158: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17015c: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x17015cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x170160: 0x34450030  ori         $a1, $v0, 0x30
    ctx->pc = 0x170160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x170164: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170164u;
    SET_GPR_U32(ctx, 31, 0x17016Cu);
    ctx->pc = 0x170168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170164u;
    // 0x170168: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170164u, 0x17016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17016Cu;
label_17016c:
    // 0x17016c: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x17016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x170170: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170174: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x170174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170178: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x170178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x17017c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170180: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170184: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x170184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x170188: 0x8c23010c  lw          $v1, 0x10C($at)
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000010Cu)); // MMIO: 0x7000010c
    // 0x17018c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x17018Cu;
    {
        const bool branch_taken_0x17018c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17018Cu;
        // 0x170190: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17018c) {
            ctx->pc = 0x1703F0u;
            goto label_1703f0;
        }
    }
    ctx->pc = 0x170194u;
    // 0x170194: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x170194u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 284))); // MMIO: 0x7000011c
    // 0x170198: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x170198u;
    {
        const bool branch_taken_0x170198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170198) {
            ctx->pc = 0x1703F0u;
            goto label_1703f0;
        }
    }
    ctx->pc = 0x1701A0u;
    // 0x1701a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1701a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1701a4: 0x8c23012c  lw          $v1, 0x12C($at)
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x1701a8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1701A8u;
    {
        const bool branch_taken_0x1701a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701A8u;
        // 0x1701ac: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701a8) {
            ctx->pc = 0x1703F0u;
            goto label_1703f0;
        }
    }
    ctx->pc = 0x1701B0u;
    // 0x1701b0: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 316))); // MMIO: 0x7000013c
    // 0x1701b4: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x1701B4u;
    {
        const bool branch_taken_0x1701b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1701B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701B4u;
        // 0x1701b8: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701b4) {
            ctx->pc = 0x1703F0u;
            goto label_1703f0;
        }
    }
    ctx->pc = 0x1701BCu;
    // 0x1701bc: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x1701c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1701c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1701c4: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x1701c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x1701c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1701c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1701cc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1701ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1701d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1701d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1701d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1701d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1701d8: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x1701d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x1701dc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1701dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1701e0: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x1701e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000100u));
    // 0x1701e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1701e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1701e8: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x1701e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1701ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1701ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1701f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1701f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1701f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1701f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1701f8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1701f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1701fc: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x1701fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x170200: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x170200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x170204: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170208: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x170208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000110u));
    // 0x17020c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170210: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x170214: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x170214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x170218: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17021c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170220: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x170220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x170224: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x170228: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x170228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x17022c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17022cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170230: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x170230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000120u));
    // 0x170234: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170238: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x17023c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x170240: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170244: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x170244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170248: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x170248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x17024c: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x17024cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x170250: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x170250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x170254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170258: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x170258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000130u));
    // 0x17025c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17025cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170260: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x170260u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x170264: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x170264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x170268: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17026c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170270: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x170270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x170274: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x170274u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x170278: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x170278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x17027c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170280: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x170280u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170284: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x170284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x170288: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17028c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x17028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x170290: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x170290u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170294: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x170294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x170298: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17029c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x17029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1702a0: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x1702a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702a4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1702a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1702a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702ac: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1702acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702b0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1702b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1702b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702b8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1702b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1702bc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1702bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702c0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1702c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1702c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1702c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1702cc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1702ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702d0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1702d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1702d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702d8: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x1702d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702dc: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x1702dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1702e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702e4: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x1702e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1702e8: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x1702e8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1702ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1702f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1702f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1702f4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x1702f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1702f8: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x1702f8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702fc: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1702fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x170300: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170304: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x170304u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170308: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x170308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x17030c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170310: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x170310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x170314: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x170314u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170318: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x170318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17031c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17031cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170320: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x170320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x170324: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x170324u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170328: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x170328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x17032c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17032cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170330: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x170330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x170334: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x170334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17033c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170340: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x170340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170344: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x170344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x170348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17034c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17034cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x170350: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x170350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x170354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170358: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x170358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17035c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170360: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x170364: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x170364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x170368: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x170368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17036c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17036cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x170370: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x170370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x170374: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x170374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x170378: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x170378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x17037c: 0x8c230108  lw          $v1, 0x108($at)
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x170380: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170384: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x170388: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x170388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17038c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17038Cu;
    {
        const bool branch_taken_0x17038c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17038c) {
            ctx->pc = 0x1703A0u;
            goto label_1703a0;
        }
    }
    ctx->pc = 0x170394u;
    // 0x170394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170394u;
    {
        const bool branch_taken_0x170394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170394) {
            ctx->pc = 0x1703A8u;
            goto label_1703a8;
        }
    }
    ctx->pc = 0x17039Cu;
    // 0x17039c: 0x0  nop
    ctx->pc = 0x17039cu;
    // NOP
label_1703a0:
    // 0x1703a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1703a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703a4: 0x0  nop
    ctx->pc = 0x1703a4u;
    // NOP
label_1703a8:
    // 0x1703a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1703a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1703ac: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x1703acu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x1703b0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1703b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1703B4u;
    {
        const bool branch_taken_0x1703b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703b4) {
            ctx->pc = 0x1703C0u;
            goto label_1703c0;
        }
    }
    ctx->pc = 0x1703BCu;
    // 0x1703bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1703bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1703c0:
    // 0x1703c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1703c4: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x1703c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1703c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1703cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1703CCu;
    {
        const bool branch_taken_0x1703cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703cc) {
            ctx->pc = 0x1703D8u;
            goto label_1703d8;
        }
    }
    ctx->pc = 0x1703D4u;
    // 0x1703d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1703d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1703d8:
    // 0x1703d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1703dc: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x1703dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1703e0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1703e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1703e4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1703E4u;
    SET_GPR_U32(ctx, 31, 0x1703ECu);
    ctx->pc = 0x1703E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703E4u;
    // 0x1703e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1703E4u, 0x1703ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703ECu;
label_1703ec:
    // 0x1703ec: 0x26310068  addiu       $s1, $s1, 0x68
    ctx->pc = 0x1703ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_1703f0:
    // 0x1703f0: 0x3a520001  xori        $s2, $s2, 0x1
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x1703f4: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x1703f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1703f8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1703fc: 0x0  nop
    ctx->pc = 0x1703fcu;
    // NOP
label_170400:
    // 0x170400: 0x2d5182b  sltu        $v1, $s6, $s5
    ctx->pc = 0x170400u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x170404: 0x1460feee  bnez        $v1, . + 4 + (-0x112 << 2)
    ctx->pc = 0x170404u;
    {
        const bool branch_taken_0x170404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170404u;
        // 0x170408: 0x2624000f  addiu       $a0, $s1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170404) {
            ctx->pc = 0x16FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ffc0;
        }
    }
    ctx->pc = 0x17040Cu;
    // 0x17040c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x170410: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x170410u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x170414: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x170418: 0xac31fc90  sw          $s1, -0x370($at)
    ctx->pc = 0x170418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x17041c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170420: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x170420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x170424: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x170424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170428: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x170428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17042c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x17042cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170430: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x170430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x170434: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x170434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170438: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x170438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17043c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17043cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170440: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x170440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170444: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x170444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170448: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x170448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17044c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17044cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170454: 0x3e00008  jr          $ra
    ctx->pc = 0x170454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170454u;
        // 0x170458: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17045Cu;
}
