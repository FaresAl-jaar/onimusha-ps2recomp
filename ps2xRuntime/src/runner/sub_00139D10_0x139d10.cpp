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

// Function: sub_00139D10
// Address: 0x139d10 - 0x139fe8
void sub_00139D10_0x139d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D10_0x139d10");
#endif

    switch (ctx->pc) {
        case 0x139da0u: goto label_139da0;
        case 0x139db8u: goto label_139db8;
        case 0x139dc8u: goto label_139dc8;
        case 0x139e38u: goto label_139e38;
        case 0x139f14u: goto label_139f14;
        case 0x139f48u: goto label_139f48;
        default: break;
    }

    ctx->pc = 0x139d10u;

    // 0x139d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x139d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x139d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x139d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x139d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139d24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x139d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139d2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x139d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139d34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x139d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139d3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x139d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d40: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x139d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x139d44: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139D44u;
    {
        const bool branch_taken_0x139d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D44u;
        // 0x139d48: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d44) {
            ctx->pc = 0x139D58u;
            goto label_139d58;
        }
    }
    ctx->pc = 0x139D4Cu;
    // 0x139d4c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x139D4Cu;
    {
        const bool branch_taken_0x139d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d4c) {
            ctx->pc = 0x139FC8u;
            goto label_139fc8;
        }
    }
    ctx->pc = 0x139D54u;
    // 0x139d54: 0x0  nop
    ctx->pc = 0x139d54u;
    // NOP
label_139d58:
    // 0x139d58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x139d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x139d5c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x139d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x139d60: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x139d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x139d64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139d68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x139D68u;
    {
        const bool branch_taken_0x139d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139d68) {
            ctx->pc = 0x139D88u;
            goto label_139d88;
        }
    }
    ctx->pc = 0x139D70u;
    // 0x139d70: 0x8e830fbc  lw          $v1, 0xFBC($s4)
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4028)));
    // 0x139d74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x139d78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139D7Cu;
    {
        const bool branch_taken_0x139d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d7c) {
            ctx->pc = 0x139D90u;
            goto label_139d90;
        }
    }
    ctx->pc = 0x139D84u;
    // 0x139d84: 0x0  nop
    ctx->pc = 0x139d84u;
    // NOP
label_139d88:
    // 0x139d88: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x139D88u;
    {
        const bool branch_taken_0x139d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D88u;
        // 0x139d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d88) {
            ctx->pc = 0x139FC8u;
            goto label_139fc8;
        }
    }
    ctx->pc = 0x139D90u;
label_139d90:
    // 0x139d90: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x139d94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d98: 0xc0414d0  jal         func_105340
    ctx->pc = 0x139D98u;
    SET_GPR_U32(ctx, 31, 0x139DA0u);
    ctx->pc = 0x139D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D98u;
    // 0x139d9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x139D98u, 0x139DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DA0u;
label_139da0:
    // 0x139da0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x139da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x139da4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x139da8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x139da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x139dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x139dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139db0: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x139DB0u;
    SET_GPR_U32(ctx, 31, 0x139DB8u);
    ctx->pc = 0x139DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DB0u;
    // 0x139db4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x139DB0u, 0x139DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DB8u;
label_139db8:
    // 0x139db8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x139dbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dc0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x139DC0u;
    SET_GPR_U32(ctx, 31, 0x139DC8u);
    ctx->pc = 0x139DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DC0u;
    // 0x139dc4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x139DC0u, 0x139DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DC8u;
label_139dc8:
    // 0x139dc8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x139dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139dcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139dd0: 0xe4203000  swc1        $f0, 0x3000($at)
    ctx->pc = 0x139dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003000u, bits); }
    // 0x139dd4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x139dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139dd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139ddc: 0xc6800fac  lwc1        $f0, 0xFAC($s4)
    ctx->pc = 0x139ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139de0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139de4: 0xe4203004  swc1        $f0, 0x3004($at)
    ctx->pc = 0x139de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003004u, bits); }
    // 0x139de8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x139de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139dec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139df0: 0xe4203008  swc1        $f0, 0x3008($at)
    ctx->pc = 0x139df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003008u, bits); }
    // 0x139df4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x139df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139df8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139dfc: 0xe4203010  swc1        $f0, 0x3010($at)
    ctx->pc = 0x139dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003010u, bits); }
    // 0x139e00: 0xc6810fac  lwc1        $f1, 0xFAC($s4)
    ctx->pc = 0x139e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139e04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139e08: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x139e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139e10: 0xe4203014  swc1        $f0, 0x3014($at)
    ctx->pc = 0x139e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003014u, bits); }
    // 0x139e14: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x139e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139e18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139e1c: 0xe4203018  swc1        $f0, 0x3018($at)
    ctx->pc = 0x139e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003018u, bits); }
    // 0x139e20: 0x8e850fa0  lw          $a1, 0xFA0($s4)
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4000)));
    // 0x139e24: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x139E24u;
    {
        const bool branch_taken_0x139e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e24) {
            ctx->pc = 0x139E80u;
            goto label_139e80;
        }
    }
    ctx->pc = 0x139E2Cu;
    // 0x139e2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139e30: 0xc041442  jal         func_105108
    ctx->pc = 0x139E30u;
    SET_GPR_U32(ctx, 31, 0x139E38u);
    ctx->pc = 0x139E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E30u;
    // 0x139e34: 0x26860f90  addiu       $a2, $s4, 0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x139E30u, 0x139E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E38u;
label_139e38:
    // 0x139e38: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139e3c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x139e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139e40: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x139e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x139e44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x139e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x139e48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x139e48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139e4c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139e50: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139e50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139e54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139e58: 0x34443010  ori         $a0, $v0, 0x3010
    ctx->pc = 0x139e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139e5c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139e60: 0x34433010  ori         $v1, $v0, 0x3010
    ctx->pc = 0x139e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139e64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x139e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139e68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x139e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003010u));
    // 0x139e6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x139e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139e70: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139e74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139E74u;
    {
        const bool branch_taken_0x139e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E74u;
        // 0x139e78: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e74) {
            ctx->pc = 0x139EC8u;
            goto label_139ec8;
        }
    }
    ctx->pc = 0x139E7Cu;
    // 0x139e7c: 0x0  nop
    ctx->pc = 0x139e7cu;
    // NOP
label_139e80:
    // 0x139e80: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139e84: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x139e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x139e88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139e8c: 0x34433000  ori         $v1, $v0, 0x3000
    ctx->pc = 0x139e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x139e90: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x139e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x139e94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x139e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x139e98: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x139e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139e9c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139ea0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x139ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139ea4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139ea8: 0x34443010  ori         $a0, $v0, 0x3010
    ctx->pc = 0x139ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139eac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139eb0: 0x34433010  ori         $v1, $v0, 0x3010
    ctx->pc = 0x139eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139eb4: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x139eb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x139eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003010u));
    // 0x139ebc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x139ebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139ec0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139ec4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x139ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_139ec8:
    // 0x139ec8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x139ecc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139ed0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x139ed4: 0xac23300c  sw          $v1, 0x300C($at)
    ctx->pc = 0x139ed4u;
    runtime->Store32(rdram, ctx, 0x7000300Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000300c
    // 0x139ed8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139edc: 0xac23301c  sw          $v1, 0x301C($at)
    ctx->pc = 0x139edcu;
    runtime->Store32(rdram, ctx, 0x7000301Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000301c
    // 0x139ee0: 0x8e8a0fc0  lw          $t2, 0xFC0($s4)
    ctx->pc = 0x139ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4032)));
    // 0x139ee4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x139ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x139ee8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x139EE8u;
    {
        const bool branch_taken_0x139ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ee8) {
            ctx->pc = 0x139F20u;
            goto label_139f20;
        }
    }
    ctx->pc = 0x139EF0u;
    // 0x139ef0: 0xc68c0fac  lwc1        $f12, 0xFAC($s4)
    ctx->pc = 0x139ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139ef4: 0x8e890fbc  lw          $t1, 0xFBC($s4)
    ctx->pc = 0x139ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4028)));
    // 0x139ef8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139efc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x139efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f04: 0x34463020  ori         $a2, $v0, 0x3020
    ctx->pc = 0x139f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x139f08: 0x34473010  ori         $a3, $v0, 0x3010
    ctx->pc = 0x139f08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139f0c: 0xc04f1f0  jal         func_13C7C0
    ctx->pc = 0x139F0Cu;
    SET_GPR_U32(ctx, 31, 0x139F14u);
    ctx->pc = 0x139F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F0Cu;
    // 0x139f10: 0x34483000  ori         $t0, $v0, 0x3000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7C0u, 0x139F0Cu, 0x139F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F14u;
label_139f14:
    // 0x139f14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139F14u;
    {
        const bool branch_taken_0x139f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F14u;
        // 0x139f18: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f14) {
            ctx->pc = 0x139F50u;
            goto label_139f50;
        }
    }
    ctx->pc = 0x139F1Cu;
    // 0x139f1c: 0x0  nop
    ctx->pc = 0x139f1cu;
    // NOP
label_139f20:
    // 0x139f20: 0x8e890fbc  lw          $t1, 0xFBC($s4)
    ctx->pc = 0x139f20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4028)));
    // 0x139f24: 0xc68c0fac  lwc1        $f12, 0xFAC($s4)
    ctx->pc = 0x139f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139f28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x139f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x139f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x139f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f30: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x139f30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f38: 0x34463020  ori         $a2, $v0, 0x3020
    ctx->pc = 0x139f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x139f3c: 0x34473010  ori         $a3, $v0, 0x3010
    ctx->pc = 0x139f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12304);
    // 0x139f40: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x139F40u;
    SET_GPR_U32(ctx, 31, 0x139F48u);
    ctx->pc = 0x139F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F40u;
    // 0x139f44: 0x34483000  ori         $t0, $v0, 0x3000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x139F40u, 0x139F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F48u;
label_139f48:
    // 0x139f48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x139f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139f4c: 0x0  nop
    ctx->pc = 0x139f4cu;
    // NOP
label_139f50:
    // 0x139f50: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x139F50u;
    {
        const bool branch_taken_0x139f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f50) {
            ctx->pc = 0x139FC8u;
            goto label_139fc8;
        }
    }
    ctx->pc = 0x139F58u;
    // 0x139f58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139f5c: 0xc4203020  lwc1        $f0, 0x3020($at)
    ctx->pc = 0x139f5cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003020u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f60: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x139f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x139f64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139f68: 0xc4203024  lwc1        $f0, 0x3024($at)
    ctx->pc = 0x139f68u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003024u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f6c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x139f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x139f70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x139f74: 0xc4203028  lwc1        $f0, 0x3028($at)
    ctx->pc = 0x139f74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139f78: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x139f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x139f7c: 0x8e830fa0  lw          $v1, 0xFA0($s4)
    ctx->pc = 0x139f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4000)));
    // 0x139f80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x139F80u;
    {
        const bool branch_taken_0x139f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f80) {
            ctx->pc = 0x139FA0u;
            goto label_139fa0;
        }
    }
    ctx->pc = 0x139F88u;
    // 0x139f88: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x139f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139f8c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x139f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139f90: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x139f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139f94: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139f94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139F98u;
    {
        const bool branch_taken_0x139f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F98u;
        // 0x139f9c: 0xfa430000  sqc2        $vf3, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f98) {
            ctx->pc = 0x139FB8u;
            goto label_139fb8;
        }
    }
    ctx->pc = 0x139FA0u;
label_139fa0:
    // 0x139fa0: 0x26830f90  addiu       $v1, $s4, 0xF90
    ctx->pc = 0x139fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x139fa4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x139fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139fa8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x139fa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139fac: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139fb0: 0xfa430000  sqc2        $vf3, 0x0($s2)
    ctx->pc = 0x139fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139fb4: 0x0  nop
    ctx->pc = 0x139fb4u;
    // NOP
label_139fb8:
    // 0x139fb8: 0xc6810fac  lwc1        $f1, 0xFAC($s4)
    ctx->pc = 0x139fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139fbc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x139fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139fc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x139fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x139fc4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x139fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_139fc8:
    // 0x139fc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x139fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139fcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x139fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x139FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FE0u;
        // 0x139fe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FE8u;
}
