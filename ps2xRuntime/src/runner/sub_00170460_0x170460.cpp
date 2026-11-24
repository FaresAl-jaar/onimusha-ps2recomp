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

// Function: sub_00170460
// Address: 0x170460 - 0x170b18
void sub_00170460_0x170460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170460_0x170460");
#endif

    switch (ctx->pc) {
        case 0x1704acu: goto label_1704ac;
        case 0x1704e0u: goto label_1704e0;
        case 0x17052cu: goto label_17052c;
        case 0x170594u: goto label_170594;
        case 0x1705e8u: goto label_1705e8;
        case 0x1707b0u: goto label_1707b0;
        case 0x17081cu: goto label_17081c;
        case 0x170880u: goto label_170880;
        case 0x1708f4u: goto label_1708f4;
        case 0x170960u: goto label_170960;
        case 0x170accu: goto label_170acc;
        default: break;
    }

    ctx->pc = 0x170460u;

    // 0x170460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x170460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x170464: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170468: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x170468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17046c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x170470: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x170470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x170474: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x170474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x170478: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x170478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17047c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x170480: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x170480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170484: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x170484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x170488: 0x26a50048  addiu       $a1, $s5, 0x48
    ctx->pc = 0x170488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x17048c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x170490: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x170494: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170498: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x170498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17049c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17049cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1704a0: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x1704a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1704a4: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x1704A4u;
    SET_GPR_U32(ctx, 31, 0x1704ACu);
    ctx->pc = 0x1704A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704A4u;
    // 0x1704a8: 0x34440200  ori         $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x1704A4u, 0x1704ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704ACu;
label_1704ac:
    // 0x1704ac: 0xc6750008  lwc1        $f21, 0x8($s3)
    ctx->pc = 0x1704acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1704b0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1704b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1704b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1704b8: 0x34c40010  ori         $a0, $a2, 0x10
    ctx->pc = 0x1704b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x1704bc: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x1704bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x1704c0: 0xac20000c  sw          $zero, 0xC($at)
    ctx->pc = 0x1704c0u;
    runtime->Store32(rdram, ctx, 0x7000000Cu, GPR_U32(ctx, 0)); // MMIO: 0x7000000c
    // 0x1704c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1704c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1704c8: 0xac200008  sw          $zero, 0x8($at)
    ctx->pc = 0x1704c8u;
    runtime->Store32(rdram, ctx, 0x70000008u, GPR_U32(ctx, 0)); // MMIO: 0x70000008
    // 0x1704cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1704ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1704d0: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x1704d0u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x1704d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1704d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1704d8: 0xc041442  jal         func_105108
    ctx->pc = 0x1704D8u;
    SET_GPR_U32(ctx, 31, 0x1704E0u);
    ctx->pc = 0x1704DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704D8u;
    // 0x1704dc: 0xe4350004  swc1        $f21, 0x4($at) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1704D8u, 0x1704E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704E0u;
label_1704e0:
    // 0x1704e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1704e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1704e4: 0x26a30050  addiu       $v1, $s5, 0x50
    ctx->pc = 0x1704e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1704e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1704e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1704ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1704ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x1704f0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1704f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1704f4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1704f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1704f8: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1704f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1704fc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1704fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170500: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170504: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170508: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x170508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x17050c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170510: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x170510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x170514: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170518: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x17051c: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x170520: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x170520u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x170524: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170524u;
    SET_GPR_U32(ctx, 31, 0x17052Cu);
    ctx->pc = 0x170528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170524u;
    // 0x170528: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170524u, 0x17052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17052Cu;
label_17052c:
    // 0x17052c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170530: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x170530u;
    {
        const bool branch_taken_0x170530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170530u;
        // 0x170534: 0xac22010c  sw          $v0, 0x10C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170530) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170538u;
    // 0x170538: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x170538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17053c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x170540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170540u;
    {
        const bool branch_taken_0x170540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170540) {
            ctx->pc = 0x170550u;
            goto label_170550;
        }
    }
    ctx->pc = 0x170548u;
    // 0x170548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x170548u;
    {
        const bool branch_taken_0x170548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170548u;
        // 0x17054c: 0xc674000c  lwc1        $f20, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170548) {
            ctx->pc = 0x170560u;
            goto label_170560;
        }
    }
    ctx->pc = 0x170550u;
label_170550:
    // 0x170550: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x170550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170554: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x170554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170558: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x170558u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17055c: 0x0  nop
    ctx->pc = 0x17055cu;
    // NOP
label_170560:
    // 0x170560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170564: 0xac20002c  sw          $zero, 0x2C($at)
    ctx->pc = 0x170564u;
    runtime->Store32(rdram, ctx, 0x7000002Cu, GPR_U32(ctx, 0)); // MMIO: 0x7000002c
    // 0x170568: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17056c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17056cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170570: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x170570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x170574: 0xac200028  sw          $zero, 0x28($at)
    ctx->pc = 0x170574u;
    runtime->Store32(rdram, ctx, 0x70000028u, GPR_U32(ctx, 0)); // MMIO: 0x70000028
    // 0x170578: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x170578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x17057c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170580: 0x34460020  ori         $a2, $v0, 0x20
    ctx->pc = 0x170580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170584: 0xac200020  sw          $zero, 0x20($at)
    ctx->pc = 0x170584u;
    runtime->Store32(rdram, ctx, 0x70000020u, GPR_U32(ctx, 0)); // MMIO: 0x70000020
    // 0x170588: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17058c: 0xc041442  jal         func_105108
    ctx->pc = 0x17058Cu;
    SET_GPR_U32(ctx, 31, 0x170594u);
    ctx->pc = 0x170590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17058Cu;
    // 0x170590: 0xe4340024  swc1        $f20, 0x24($at) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x17058Cu, 0x170594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170594u;
label_170594:
    // 0x170594: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170598: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17059c: 0x34640030  ori         $a0, $v1, 0x30
    ctx->pc = 0x17059cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x1705a0: 0x34430030  ori         $v1, $v0, 0x30
    ctx->pc = 0x1705a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1705a4: 0x26a20050  addiu       $v0, $s5, 0x50
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1705a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1705a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x1705ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1705acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705b0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1705b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1705b4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1705b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1705b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1705bc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1705c0: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1705c4: 0x34440120  ori         $a0, $v0, 0x120
    ctx->pc = 0x1705c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
    // 0x1705c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1705cc: 0x34450030  ori         $a1, $v0, 0x30
    ctx->pc = 0x1705ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1705d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1705d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1705d4: 0x344702a8  ori         $a3, $v0, 0x2A8
    ctx->pc = 0x1705d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)680);
    // 0x1705d8: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1705dc: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x1705dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1705e0: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1705E0u;
    SET_GPR_U32(ctx, 31, 0x1705E8u);
    ctx->pc = 0x1705E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705E0u;
    // 0x1705e4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1705E0u, 0x1705E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705E8u;
label_1705e8:
    // 0x1705e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1705e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1705ec: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x1705ECu;
    {
        const bool branch_taken_0x1705ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705ECu;
        // 0x1705f0: 0xac22012c  sw          $v0, 0x12C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705ec) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x1705F4u;
    // 0x1705f4: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x1705f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1705f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1705fc: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x170600: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x170604: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x170604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170608: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17060c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x17060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x170610: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17061c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170620: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x170620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170624: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x170628: 0xa4220298  sh          $v0, 0x298($at)
    ctx->pc = 0x170628u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 664), (uint16_t)GPR_U32(ctx, 2));
    // 0x17062c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170630: 0xa4220290  sh          $v0, 0x290($at)
    ctx->pc = 0x170630u;
    runtime->Store16(rdram, ctx, 0x70000290u, (uint16_t)GPR_U32(ctx, 2));
    // 0x170634: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x170634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170638: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17063c: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x170640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170644: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x170648: 0xa422029c  sh          $v0, 0x29C($at)
    ctx->pc = 0x170648u;
    runtime->Store16(rdram, ctx, 0x7000029Cu, (uint16_t)GPR_U32(ctx, 2));
    // 0x17064c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170650: 0xa4220294  sh          $v0, 0x294($at)
    ctx->pc = 0x170650u;
    runtime->Store16(rdram, ctx, 0x70000294u, (uint16_t)GPR_U32(ctx, 2));
    // 0x170654: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x170654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x170658: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x170658u;
    {
        const bool branch_taken_0x170658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170658) {
            ctx->pc = 0x170698u;
            goto label_170698;
        }
    }
    ctx->pc = 0x170660u;
    // 0x170660: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x170660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x170664: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170668: 0xa4220296  sh          $v0, 0x296($at)
    ctx->pc = 0x170668u;
    runtime->Store16(rdram, ctx, 0x70000296u, (uint16_t)GPR_U32(ctx, 2));
    // 0x17066c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17066cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170670: 0xa4220292  sh          $v0, 0x292($at)
    ctx->pc = 0x170670u;
    runtime->Store16(rdram, ctx, 0x70000292u, (uint16_t)GPR_U32(ctx, 2));
    // 0x170674: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x170674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x170678: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17067c: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x17067cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x170680: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170684: 0xa422029e  sh          $v0, 0x29E($at)
    ctx->pc = 0x170684u;
    runtime->Store16(rdram, ctx, 0x7000029Eu, (uint16_t)GPR_U32(ctx, 2));
    // 0x170688: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17068c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17068Cu;
    {
        const bool branch_taken_0x17068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17068Cu;
        // 0x170690: 0xa422029a  sh          $v0, 0x29A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 666), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17068c) {
            ctx->pc = 0x1706C8u;
            goto label_1706c8;
        }
    }
    ctx->pc = 0x170694u;
    // 0x170694: 0x0  nop
    ctx->pc = 0x170694u;
    // NOP
label_170698:
    // 0x170698: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x170698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x17069c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1706a0: 0xa422029e  sh          $v0, 0x29E($at)
    ctx->pc = 0x1706a0u;
    runtime->Store16(rdram, ctx, 0x7000029Eu, (uint16_t)GPR_U32(ctx, 2));
    // 0x1706a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1706a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1706a8: 0xa422029a  sh          $v0, 0x29A($at)
    ctx->pc = 0x1706a8u;
    runtime->Store16(rdram, ctx, 0x7000029Au, (uint16_t)GPR_U32(ctx, 2));
    // 0x1706ac: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x1706acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1706b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1706b4: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1706b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1706b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1706bc: 0xa4220296  sh          $v0, 0x296($at)
    ctx->pc = 0x1706bcu;
    runtime->Store16(rdram, ctx, 0x70000296u, (uint16_t)GPR_U32(ctx, 2));
    // 0x1706c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1706c4: 0xa4220292  sh          $v0, 0x292($at)
    ctx->pc = 0x1706c4u;
    runtime->Store16(rdram, ctx, 0x70000292u, (uint16_t)GPR_U32(ctx, 2));
label_1706c8:
    // 0x1706c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1706c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1706cc: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1706d0: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1706d4: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1706d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1706dc: 0x34420114  ori         $v0, $v0, 0x114
    ctx->pc = 0x1706dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)276);
    // 0x1706e0: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1706e4: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1706e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1706ec: 0xa48824  and         $s1, $a1, $a0
    ctx->pc = 0x1706ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1706f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1706f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1706f4: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1706f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1706f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1706fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x170700: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x170704: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x170704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x170708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17070c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x170710: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x170710u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x170714: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170718: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x17071c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x17071cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x170720: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170724: 0x8c220290  lw          $v0, 0x290($at)
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000290u)); // MMIO: 0x70000290
    // 0x170728: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x170728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x17072c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170730: 0x8c220120  lw          $v0, 0x120($at)
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000120u)); // MMIO: 0x70000120
    // 0x170734: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x170734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x170738: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17073c: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x170740: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x170740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x170744: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170748: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x17074c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17074cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x170750: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170754: 0x8c220298  lw          $v0, 0x298($at)
    ctx->pc = 0x170754u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000298u)); // MMIO: 0x70000298
    // 0x170758: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x170758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17075c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17075cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170760: 0x8c320108  lw          $s2, 0x108($at)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x170764: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170768: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x17076c: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x17076cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x170770: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x170770u;
    {
        const bool branch_taken_0x170770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170770u;
        // 0x170774: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170770) {
            ctx->pc = 0x170780u;
            goto label_170780;
        }
    }
    ctx->pc = 0x170778u;
    // 0x170778: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170778u;
    {
        const bool branch_taken_0x170778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170778) {
            ctx->pc = 0x170788u;
            goto label_170788;
        }
    }
    ctx->pc = 0x170780u;
label_170780:
    // 0x170780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170784: 0x0  nop
    ctx->pc = 0x170784u;
    // NOP
label_170788:
    // 0x170788: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x170788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17078c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x17078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x170790: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x170790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170794: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x170794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x170798: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x170798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17079c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1707a0: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1707a4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1707A4u;
    {
        const bool branch_taken_0x1707a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707A4u;
        // 0x1707a8: 0x73f004  sllv        $fp, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707a4) {
            ctx->pc = 0x170A30u;
            goto label_170a30;
        }
    }
    ctx->pc = 0x1707ACu;
    // 0x1707ac: 0x0  nop
    ctx->pc = 0x1707acu;
    // NOP
label_1707b0:
    // 0x1707b0: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1707b4: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1707B4u;
    {
        const bool branch_taken_0x1707b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1707b4) {
            ctx->pc = 0x1707C0u;
            goto label_1707c0;
        }
    }
    ctx->pc = 0x1707BCu;
    // 0x1707bc: 0x24141000  addiu       $s4, $zero, 0x1000
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1707c0:
    // 0x1707c0: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1707c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1707c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1707c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1707c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1707c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1707cc: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x1707ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1707d0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1707d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1707d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1707d8: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1707dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1707dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1707e0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1707e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1707e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1707e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1707e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1707ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1707ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1707f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1707f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1707f8: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x1707f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x1707fc: 0x34c40010  ori         $a0, $a2, 0x10
    ctx->pc = 0x1707fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x170800: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x170800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x170804: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x170804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x170808: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17080c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17080cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170810: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x170810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x170814: 0xc041442  jal         func_105108
    ctx->pc = 0x170814u;
    SET_GPR_U32(ctx, 31, 0x17081Cu);
    ctx->pc = 0x170818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170814u;
    // 0x170818: 0xe4200004  swc1        $f0, 0x4($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x170814u, 0x17081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17081Cu;
label_17081c:
    // 0x17081c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17081cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170820: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170824: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x170824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x170828: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x170828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17082c: 0x26a20050  addiu       $v0, $s5, 0x50
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x170830: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x170834: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x170834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170838: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17083c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x17083cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170840: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170844: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x170844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170848: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17084c: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x17084cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x170850: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170854: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x170854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170858: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17085c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170860: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x170860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x170864: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x170864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170868: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x170868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x17086c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170870: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x170870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x170874: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x170874u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x170878: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170878u;
    SET_GPR_U32(ctx, 31, 0x170880u);
    ctx->pc = 0x17087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170878u;
    // 0x17087c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170878u, 0x170880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170880u;
label_170880:
    // 0x170880: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x170884: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x170884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x170888: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x170888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x17088c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170890: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x170890u;
    {
        const bool branch_taken_0x170890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170890u;
        // 0x170894: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170890) {
            ctx->pc = 0x170A40u;
            goto label_170a40;
        }
    }
    ctx->pc = 0x170898u;
    // 0x170898: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x170898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x17089c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1708a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1708a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1708a4: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1708a8: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x1708a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1708ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1708acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1708b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1708b4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1708b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1708bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1708bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1708c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1708c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1708c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1708c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1708cc: 0x34c50200  ori         $a1, $a2, 0x200
    ctx->pc = 0x1708ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    // 0x1708d0: 0x34c40030  ori         $a0, $a2, 0x30
    ctx->pc = 0x1708d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x1708d4: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1708d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x1708d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1708d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1708dc: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x1708dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 32), bits); }
    // 0x1708e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1708e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1708e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1708e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1708ec: 0xc041442  jal         func_105108
    ctx->pc = 0x1708ECu;
    SET_GPR_U32(ctx, 31, 0x1708F4u);
    ctx->pc = 0x1708F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708ECu;
    // 0x1708f0: 0xe4200024  swc1        $f0, 0x24($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1708ECu, 0x1708F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708F4u;
label_1708f4:
    // 0x1708f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1708f8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1708f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1708fc: 0x34640030  ori         $a0, $v1, 0x30
    ctx->pc = 0x1708fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
    // 0x170900: 0x34430030  ori         $v1, $v0, 0x30
    ctx->pc = 0x170900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x170904: 0x26a20050  addiu       $v0, $s5, 0x50
    ctx->pc = 0x170904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x170908: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x17090c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x17090cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170910: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170914: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x170914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170918: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x170918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x17091c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170920: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170924: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170928: 0x86a8002c  lh          $t0, 0x2C($s5)
    ctx->pc = 0x170928u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x17092c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170930: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x170930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170934: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x170934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x170938: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17093c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x17093cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170940: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170944: 0x344302a0  ori         $v1, $v0, 0x2A0
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x170948: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x170948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x17094c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170950: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x170954: 0x34450030  ori         $a1, $v0, 0x30
    ctx->pc = 0x170954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x170958: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170958u;
    SET_GPR_U32(ctx, 31, 0x170960u);
    ctx->pc = 0x17095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170958u;
    // 0x17095c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170958u, 0x170960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170960u;
label_170960:
    // 0x170960: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x170960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x170964: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x170964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x170968: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17096c: 0x34860100  ori         $a2, $a0, 0x100
    ctx->pc = 0x17096cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x170970: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170974: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x170974u;
    {
        const bool branch_taken_0x170974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170974u;
        // 0x170978: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170974) {
            ctx->pc = 0x170A40u;
            goto label_170a40;
        }
    }
    ctx->pc = 0x17097Cu;
    // 0x17097c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17097cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x170980: 0x34840290  ori         $a0, $a0, 0x290
    ctx->pc = 0x170980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)656);
    // 0x170984: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x170984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x170988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17098c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x17098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x170990: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x170994: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x170998: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17099c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x17099cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1709a0: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x1709a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1709a4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1709a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1709a8: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x1709a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1709ac: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1709b0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1709b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1709b8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1709b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1709bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1709c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1709c4: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1709c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1709c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1709cc: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x1709ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1709d0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1709d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1709d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1709d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1709dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1709dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1709e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1709e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1709e4: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1709e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1709E8u;
    {
        const bool branch_taken_0x1709e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709E8u;
        // 0x1709ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709e8) {
            ctx->pc = 0x1709F8u;
            goto label_1709f8;
        }
    }
    ctx->pc = 0x1709F0u;
    // 0x1709f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709f4: 0x0  nop
    ctx->pc = 0x1709f4u;
    // NOP
label_1709f8:
    // 0x1709f8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1709fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170a00: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170a04: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170a08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170a0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x170a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170a10: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170a14: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x170A14u;
    {
        const bool branch_taken_0x170a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170a14) {
            ctx->pc = 0x170A20u;
            goto label_170a20;
        }
    }
    ctx->pc = 0x170A1Cu;
    // 0x170a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170a20:
    // 0x170a20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x170a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x170a24: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x170a24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x170a28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x170a28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x170a2c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x170a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_170a30:
    // 0x170a30: 0x2de102b  sltu        $v0, $s6, $fp
    ctx->pc = 0x170a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x170a34: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x170A34u;
    {
        const bool branch_taken_0x170a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170a34) {
            ctx->pc = 0x1707B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1707b0;
        }
    }
    ctx->pc = 0x170A3Cu;
    // 0x170a3c: 0x0  nop
    ctx->pc = 0x170a3cu;
    // NOP
label_170a40:
    // 0x170a40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x170a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x170a44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x170a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x170a48: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x170a48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x170a4c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x170a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x170a50: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x170a54: 0x171cc0  sll         $v1, $s7, 19
    ctx->pc = 0x170a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 19));
    // 0x170a58: 0x34420154  ori         $v0, $v0, 0x154
    ctx->pc = 0x170a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x170a5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x170a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170a60: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x170a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x170a64: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x170a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x170a68: 0x123183  sra         $a2, $s2, 6
    ctx->pc = 0x170a68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 6));
    // 0x170a6c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x170a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x170a70: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x170a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x170a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a78: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x170a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x170a7c: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x170a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x170a80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x170a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170a88: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x170a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x170a8c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x170a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170a90: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x170a94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x170a98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x170a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x170a9c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x170a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x170aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170aa4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x170aa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170aac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x170ab0: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x170ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x170ab4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x170ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x170ab8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x170ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x170abc: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x170abcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x170ac0: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x170ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x170ac4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x170AC4u;
    SET_GPR_U32(ctx, 31, 0x170ACCu);
    ctx->pc = 0x170AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AC4u;
    // 0x170ac8: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x170AC4u, 0x170ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ACCu;
label_170acc:
    // 0x170acc: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x170accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x170ad0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x170ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x170ad4: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x170ad8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x170ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x170adc: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x170adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
label_170ae0:
    // 0x170ae0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x170ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x170ae4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x170ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170ae8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x170ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170aec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x170aecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170af0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x170af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170af4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x170af4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170af8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x170af8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170afc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x170afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170b00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x170b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170b04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x170b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170b08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x170b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b10: 0x3e00008  jr          $ra
    ctx->pc = 0x170B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B10u;
        // 0x170b14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B18u;
}
