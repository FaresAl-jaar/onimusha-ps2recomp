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

// Function: sub_002A32C0
// Address: 0x2a32c0 - 0x2a38a4
void sub_002A32C0_0x2a32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A32C0_0x2a32c0");
#endif

    switch (ctx->pc) {
        case 0x2a3308u: goto label_2a3308;
        case 0x2a332cu: goto label_2a332c;
        case 0x2a3654u: goto label_2a3654;
        case 0x2a3680u: goto label_2a3680;
        case 0x2a3690u: goto label_2a3690;
        case 0x2a369cu: goto label_2a369c;
        default: break;
    }

    ctx->pc = 0x2a32c0u;

    // 0x2a32c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a32c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a32c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a32cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a32d0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a32d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a32d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a32d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a32d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a32dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a32e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a32e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a32e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a32e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a32e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a32f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a32f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a32f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a32f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a32fc: 0x8c91013c  lw          $s1, 0x13C($a0)
    ctx->pc = 0x2a32fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a3300: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x2A3300u;
    SET_GPR_U32(ctx, 31, 0x2A3308u);
    ctx->pc = 0x2A3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3300u;
    // 0x2a3304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x2A3300u, 0x2A3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3308u;
label_2a3308:
    // 0x2a3308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a330c: 0x16000086  bnez        $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2A330Cu;
    {
        const bool branch_taken_0x2a330c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a330c) {
            ctx->pc = 0x2A3528u;
            goto label_2a3528;
        }
    }
    ctx->pc = 0x2A3314u;
    // 0x2a3314: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x2a3314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x2a3318: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3318u;
    {
        const bool branch_taken_0x2a3318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3318u;
        // 0x2a331c: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3318) {
            ctx->pc = 0x2A3350u;
            goto label_2a3350;
        }
    }
    ctx->pc = 0x2A3320u;
    // 0x2a3320: 0x92660025  lbu         $a2, 0x25($s3)
    ctx->pc = 0x2a3320u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x2a3324: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x2A3324u;
    SET_GPR_U32(ctx, 31, 0x2A332Cu);
    ctx->pc = 0x2A3328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3324u;
    // 0x2a3328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x2A3324u, 0x2A332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A332Cu;
label_2a332c:
    // 0x2a332c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3330: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2a3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2a3334: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a3334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a3338: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a3338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a333c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a3340: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a3340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a3344: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2a3344u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2a3348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a334c: 0xffa200b8  sd          $v0, 0xB8($sp)
    ctx->pc = 0x2a334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
label_2a3350:
    // 0x2a3350: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x2a3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3354: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a3354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a3358: 0x92820024  lbu         $v0, 0x24($s4)
    ctx->pc = 0x2a3358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2a335c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A335Cu;
    {
        const bool branch_taken_0x2a335c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A335Cu;
        // 0x2a3360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a335c) {
            ctx->pc = 0x2A3370u;
            goto label_2a3370;
        }
    }
    ctx->pc = 0x2A3364u;
    // 0x2a3364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3368u;
    {
        const bool branch_taken_0x2a3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3368u;
        // 0x2a336c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3368) {
            ctx->pc = 0x2A3388u;
            goto label_2a3388;
        }
    }
    ctx->pc = 0x2A3370u;
label_2a3370:
    // 0x2a3370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a3370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a3374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a3374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a337c: 0x0  nop
    ctx->pc = 0x2a337cu;
    // NOP
    // 0x2a3380: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2a3380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a3384: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a3384u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a3388:
    // 0x2a3388: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2a3388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a338c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2a338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2a3390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3394: 0x0  nop
    ctx->pc = 0x2a3394u;
    // NOP
    // 0x2a3398: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a3398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a339c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a339cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a33a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A33A0u;
    {
        const bool branch_taken_0x2a33a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a33a0) {
            ctx->pc = 0x2A33B8u;
            goto label_2a33b8;
        }
    }
    ctx->pc = 0x2A33A8u;
    // 0x2a33a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a33a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a33ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a33acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a33b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A33B0u;
    {
        const bool branch_taken_0x2a33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33B0u;
        // 0x2a33b4: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33b0) {
            ctx->pc = 0x2A33D4u;
            goto label_2a33d4;
        }
    }
    ctx->pc = 0x2A33B8u;
label_2a33b8:
    // 0x2a33b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a33b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a33bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a33c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a33c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a33c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2a33c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a33c8: 0x0  nop
    ctx->pc = 0x2a33c8u;
    // NOP
    // 0x2a33cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a33ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a33d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a33d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a33d4:
    // 0x2a33d4: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2a33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2a33d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2a33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2a33dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a33dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a33e0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A33E0u;
    {
        const bool branch_taken_0x2a33e0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33E0u;
        // 0x2a33e4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33e0) {
            ctx->pc = 0x2A33F4u;
            goto label_2a33f4;
        }
    }
    ctx->pc = 0x2A33E8u;
    // 0x2a33e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a33e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A33ECu;
    {
        const bool branch_taken_0x2a33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33ECu;
        // 0x2a33f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33ec) {
            ctx->pc = 0x2A340Cu;
            goto label_2a340c;
        }
    }
    ctx->pc = 0x2A33F4u;
label_2a33f4:
    // 0x2a33f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a33f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a33f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a33f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a33fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a33fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3400: 0x0  nop
    ctx->pc = 0x2a3400u;
    // NOP
    // 0x2a3404: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2a3404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a3408: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a3408u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a340c:
    // 0x2a340c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2a340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3410: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2a3414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3418: 0x0  nop
    ctx->pc = 0x2a3418u;
    // NOP
    // 0x2a341c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a341cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a3420: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a3420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3424: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3424u;
    {
        const bool branch_taken_0x2a3424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3424) {
            ctx->pc = 0x2A343Cu;
            goto label_2a343c;
        }
    }
    ctx->pc = 0x2A342Cu;
    // 0x2a342c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a342cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a3430: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a3430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a3434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3434u;
    {
        const bool branch_taken_0x2a3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3434u;
        // 0x2a3438: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3434) {
            ctx->pc = 0x2A3458u;
            goto label_2a3458;
        }
    }
    ctx->pc = 0x2A343Cu;
label_2a343c:
    // 0x2a343c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a343cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a3440: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a3440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a3444: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a3444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a3448: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a3448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a344c: 0x0  nop
    ctx->pc = 0x2a344cu;
    // NOP
    // 0x2a3450: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a3450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a3454: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2a3454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2a3458:
    // 0x2a3458: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2a345c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a3460: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3460u;
    {
        const bool branch_taken_0x2a3460 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3460u;
        // 0x2a3464: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3460) {
            ctx->pc = 0x2A3474u;
            goto label_2a3474;
        }
    }
    ctx->pc = 0x2A3468u;
    // 0x2a3468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a346c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A346Cu;
    {
        const bool branch_taken_0x2a346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A346Cu;
        // 0x2a3470: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a346c) {
            ctx->pc = 0x2A3490u;
            goto label_2a3490;
        }
    }
    ctx->pc = 0x2A3474u;
label_2a3474:
    // 0x2a3474: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2a3474u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a3478: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a3478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a347c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a347cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a3480: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3484: 0x0  nop
    ctx->pc = 0x2a3484u;
    // NOP
    // 0x2a3488: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2a3488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a348c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a348cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a3490:
    // 0x2a3490: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2a3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3494: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2a3498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a349c: 0x0  nop
    ctx->pc = 0x2a349cu;
    // NOP
    // 0x2a34a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2a34a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a34a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a34a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a34a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A34A8u;
    {
        const bool branch_taken_0x2a34a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a34a8) {
            ctx->pc = 0x2A34C0u;
            goto label_2a34c0;
        }
    }
    ctx->pc = 0x2A34B0u;
    // 0x2a34b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a34b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a34b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a34b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a34b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A34B8u;
    {
        const bool branch_taken_0x2a34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34B8u;
        // 0x2a34bc: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34b8) {
            ctx->pc = 0x2A34DCu;
            goto label_2a34dc;
        }
    }
    ctx->pc = 0x2A34C0u;
label_2a34c0:
    // 0x2a34c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a34c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a34c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a34c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a34c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a34cc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a34ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a34d0: 0x0  nop
    ctx->pc = 0x2a34d0u;
    // NOP
    // 0x2a34d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a34d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a34d8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a34d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a34dc:
    // 0x2a34dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2a34dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a34e0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2a34e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a34e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a34e8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2a34e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2a34ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2a34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a34f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a34f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a34f8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2a34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2a34fc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2a34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2a3500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a3504: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3504u;
    {
        const bool branch_taken_0x2a3504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3504u;
        // 0x2a3508: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3504) {
            ctx->pc = 0x2A3520u;
            goto label_2a3520;
        }
    }
    ctx->pc = 0x2A350Cu;
    // 0x2a350c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a3510: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a3510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a3514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a3514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a3518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3518u;
    {
        const bool branch_taken_0x2a3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3518u;
        // 0x2a351c: 0xffa200c0  sd          $v0, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3518) {
            ctx->pc = 0x2A3528u;
            goto label_2a3528;
        }
    }
    ctx->pc = 0x2A3520u;
label_2a3520:
    // 0x2a3520: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2a3520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a3524: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x2a3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_2a3528:
    // 0x2a3528: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2a3528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2a352c: 0x34470003  ori         $a3, $v0, 0x3
    ctx->pc = 0x2a352cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a3530: 0x8ea80140  lw          $t0, 0x140($s5)
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x2a3534: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a3538: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x2a3538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x2a353c: 0x344b0003  ori         $t3, $v0, 0x3
    ctx->pc = 0x2a353cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a3540: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a3544: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a3544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a3548: 0x34450003  ori         $a1, $v0, 0x3
    ctx->pc = 0x2a3548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a354c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a354cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3550: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2a3550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2a3554: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x2a3554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2a3558: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x2a3558u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a355c: 0x8113c  dsll32      $v0, $t0, 4
    ctx->pc = 0x2a355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 4));
    // 0x2a3560: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3564: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a3564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a3568: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a356c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2a356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2a3570: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2a3570u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2a3574: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2a3574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a3578: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x2a3578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x2a357c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2a357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a3580: 0xae4b000c  sw          $t3, 0xC($s2)
    ctx->pc = 0x2a3580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 11));
    // 0x2a3584: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2a3584u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3588: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x2a3588u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x2a358c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a3590: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2a3590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2a3594: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x2a3594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2a3598: 0xae4b001c  sw          $t3, 0x1C($s2)
    ctx->pc = 0x2a3598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 11));
    // 0x2a359c: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x2a35a0: 0xfe4a0020  sd          $t2, 0x20($s2)
    ctx->pc = 0x2a35a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 10));
    // 0x2a35a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a35a8: 0xfe490028  sd          $t1, 0x28($s2)
    ctx->pc = 0x2a35a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 9));
    // 0x2a35ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a35b0: 0xfe480030  sd          $t0, 0x30($s2)
    ctx->pc = 0x2a35b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 8));
    // 0x2a35b4: 0x344203e8  ori         $v0, $v0, 0x3E8
    ctx->pc = 0x2a35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1000);
    // 0x2a35b8: 0xfe470038  sd          $a3, 0x38($s2)
    ctx->pc = 0x2a35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 7));
    // 0x2a35bc: 0x26480060  addiu       $t0, $s2, 0x60
    ctx->pc = 0x2a35bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2a35c0: 0xfe460040  sd          $a2, 0x40($s2)
    ctx->pc = 0x2a35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 6));
    // 0x2a35c4: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x2a35c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x2a35c8: 0xfe450048  sd          $a1, 0x48($s2)
    ctx->pc = 0x2a35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 5));
    // 0x2a35cc: 0x24e76aa0  addiu       $a3, $a3, 0x6AA0
    ctx->pc = 0x2a35ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27296));
    // 0x2a35d0: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x2a35d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x2a35d4: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x2a35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x2a35d8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2a35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2a35dc: 0x78e90000  lq          $t1, 0x0($a3)
    ctx->pc = 0x2a35dcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x696AA0u));
    // 0x2a35e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a35e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a35e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a35e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a35ec: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x2a35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2a35f0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a35f4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2a35f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a35f8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2a35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a35fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3600: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x2a3600u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x2a3604: 0x78e90010  lq          $t1, 0x10($a3)
    ctx->pc = 0x2a3604u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a3608: 0x7d090010  sq          $t1, 0x10($t0)
    ctx->pc = 0x2a3608u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 9));
    // 0x2a360c: 0x78e90020  lq          $t1, 0x20($a3)
    ctx->pc = 0x2a360cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2a3610: 0x7d090020  sq          $t1, 0x20($t0)
    ctx->pc = 0x2a3610u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 9));
    // 0x2a3614: 0x78e90030  lq          $t1, 0x30($a3)
    ctx->pc = 0x2a3614u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2a3618: 0x7d090030  sq          $t1, 0x30($t0)
    ctx->pc = 0x2a3618u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 9));
    // 0x2a361c: 0xfe4600a0  sd          $a2, 0xA0($s2)
    ctx->pc = 0x2a361cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 6));
    // 0x2a3620: 0xfe4300a8  sd          $v1, 0xA8($s2)
    ctx->pc = 0x2a3620u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 168), GPR_U64(ctx, 3));
    // 0x2a3624: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x2a3624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a3628: 0xfe4300b0  sd          $v1, 0xB0($s2)
    ctx->pc = 0x2a3628u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 176), GPR_U64(ctx, 3));
    // 0x2a362c: 0xfe4200b8  sd          $v0, 0xB8($s2)
    ctx->pc = 0x2a362cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 184), GPR_U64(ctx, 2));
    // 0x2a3630: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2a3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3634: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x2a3634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
    // 0x2a3638: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x2a3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a363c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a3640: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2a3640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3644: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a3648: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x2a3648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a364c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2A364Cu;
    SET_GPR_U32(ctx, 31, 0x2A3654u);
    ctx->pc = 0x2A3650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A364Cu;
    // 0x2a3650: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2A364Cu, 0x2A3654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3654u;
label_2a3654:
    // 0x2a3654: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a3654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a3658: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2a3658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2a365c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2a365cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2a3660: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3664: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x2a3664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x2a3668: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a3668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a366c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2a366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2a3670: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2a3670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2a3674: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2a3674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2a3678: 0xc041442  jal         func_105108
    ctx->pc = 0x2A3678u;
    SET_GPR_U32(ctx, 31, 0x2A3680u);
    ctx->pc = 0x2A367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3678u;
    // 0x2a367c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2A3678u, 0x2A3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3680u;
label_2a3680:
    // 0x2a3680: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a3680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a3684: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3688: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2A3688u;
    SET_GPR_U32(ctx, 31, 0x2A3690u);
    ctx->pc = 0x2A368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3688u;
    // 0x2a368c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2A3688u, 0x2A3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3690u;
label_2a3690:
    // 0x2a3690: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2a3690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2a3694: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2A3694u;
    SET_GPR_U32(ctx, 31, 0x2A369Cu);
    ctx->pc = 0x2A3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3694u;
    // 0x2a3698: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2A3694u, 0x2A369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A369Cu;
label_2a369c:
    // 0x2a369c: 0x8ea80078  lw          $t0, 0x78($s5)
    ctx->pc = 0x2a369cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2a36a0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2a36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a36a4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2a36a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2a36a8: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x2a36a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x2a36ac: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a36acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a36b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2a36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2a36b4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2a36b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a36b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a36bc: 0x34450404  ori         $a1, $v0, 0x404
    ctx->pc = 0x2a36bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2a36c0: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x2a36c0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2a36c4: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x2a36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x2a36c8: 0x344403f8  ori         $a0, $v0, 0x3F8
    ctx->pc = 0x2a36c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1016);
    // 0x2a36cc: 0x3c026e01  lui         $v0, 0x6E01
    ctx->pc = 0x2a36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28161 << 16));
    // 0x2a36d0: 0x344243ef  ori         $v0, $v0, 0x43EF
    ctx->pc = 0x2a36d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17391);
    // 0x2a36d4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2a36d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a36d8: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x2a36d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x2a36dc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2a36dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a36e0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2a36e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2a36e4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2a36e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2a36e8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a36e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a36ec: 0xfe4600c0  sd          $a2, 0xC0($s2)
    ctx->pc = 0x2a36ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 192), GPR_U64(ctx, 6));
    // 0x2a36f0: 0xae4500c8  sw          $a1, 0xC8($s2)
    ctx->pc = 0x2a36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 5));
    // 0x2a36f4: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x2a36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
    // 0x2a36f8: 0xfe4300d0  sd          $v1, 0xD0($s2)
    ctx->pc = 0x2a36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 3));
    // 0x2a36fc: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x2a36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
    // 0x2a3700: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a3704: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a3704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a3708: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3708u;
    {
        const bool branch_taken_0x2a3708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3708) {
            ctx->pc = 0x2A3730u;
            goto label_2a3730;
        }
    }
    ctx->pc = 0x2A3710u;
    // 0x2a3710: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a3714: 0x92820114  lbu         $v0, 0x114($s4)
    ctx->pc = 0x2a3714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2a3718: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2a3718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2a371c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2a371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2a3720: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a3724: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a3724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3728: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3728u;
    {
        const bool branch_taken_0x2a3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3728u;
        // 0x2a372c: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3728) {
            ctx->pc = 0x2A3750u;
            goto label_2a3750;
        }
    }
    ctx->pc = 0x2A3730u;
label_2a3730:
    // 0x2a3730: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a3730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a3734: 0x8e820150  lw          $v0, 0x150($s4)
    ctx->pc = 0x2a3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x2a3738: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2a3738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2a373c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2a373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2a3740: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a3744: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a3744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3748: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x2a3748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x2a374c: 0x0  nop
    ctx->pc = 0x2a374cu;
    // NOP
label_2a3750:
    // 0x2a3750: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2a3750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2a3754: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2a3754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a3758: 0x34c40005  ori         $a0, $a2, 0x5
    ctx->pc = 0x2a3758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x2a375c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2a375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a3760: 0xfe4400e0  sd          $a0, 0xE0($s2)
    ctx->pc = 0x2a3760u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 4));
    // 0x2a3764: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a3768: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x2a3768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x2a376c: 0x34440005  ori         $a0, $v0, 0x5
    ctx->pc = 0x2a376cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x2a3770: 0x344b0003  ori         $t3, $v0, 0x3
    ctx->pc = 0x2a3770u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a3774: 0xae4400ec  sw          $a0, 0xEC($s2)
    ctx->pc = 0x2a3774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 4));
    // 0x2a3778: 0x240fffdf  addiu       $t7, $zero, -0x21
    ctx->pc = 0x2a3778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2a377c: 0x7a8500f0  lq          $a1, 0xF0($s4)
    ctx->pc = 0x2a377cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x2a3780: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2a3780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3784: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x2a3784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2a3788: 0x34cd0003  ori         $t5, $a2, 0x3
    ctx->pc = 0x2a3788u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x2a378c: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x2a378cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a3790: 0x3c0e2000  lui         $t6, 0x2000
    ctx->pc = 0x2a3790u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)8192 << 16));
    // 0x2a3794: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2a3794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3798: 0x3c0c1100  lui         $t4, 0x1100
    ctx->pc = 0x2a3798u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4352 << 16));
    // 0x2a379c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2a379cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a37a0: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2a37a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a37a4: 0x26420160  addiu       $v0, $s2, 0x160
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x2a37a8: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a37ac: 0x7e4500f0  sq          $a1, 0xF0($s2)
    ctx->pc = 0x2a37acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 240), GPR_VEC(ctx, 5));
    // 0x2a37b0: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x2a37b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2a37b4: 0x7a910100  lq          $s1, 0x100($s4)
    ctx->pc = 0x2a37b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x2a37b8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x2a37b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x2a37bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a37bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a37c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2a37c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a37c4: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x2a37c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x2a37c8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2a37cc: 0x264201b0  addiu       $v0, $s2, 0x1B0
    ctx->pc = 0x2a37ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x2a37d0: 0x7e510100  sq          $s1, 0x100($s2)
    ctx->pc = 0x2a37d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 256), GPR_VEC(ctx, 17));
    // 0x2a37d4: 0x7a910110  lq          $s1, 0x110($s4)
    ctx->pc = 0x2a37d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2a37d8: 0x7e510110  sq          $s1, 0x110($s2)
    ctx->pc = 0x2a37d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 272), GPR_VEC(ctx, 17));
    // 0x2a37dc: 0x7a910120  lq          $s1, 0x120($s4)
    ctx->pc = 0x2a37dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x2a37e0: 0x7e510120  sq          $s1, 0x120($s2)
    ctx->pc = 0x2a37e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 288), GPR_VEC(ctx, 17));
    // 0x2a37e4: 0x7a910130  lq          $s1, 0x130($s4)
    ctx->pc = 0x2a37e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x2a37e8: 0x7e510130  sq          $s1, 0x130($s2)
    ctx->pc = 0x2a37e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 304), GPR_VEC(ctx, 17));
    // 0x2a37ec: 0xde100010  ld          $s0, 0x10($s0)
    ctx->pc = 0x2a37ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a37f0: 0xfe500110  sd          $s0, 0x110($s2)
    ctx->pc = 0x2a37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 272), GPR_U64(ctx, 16));
    // 0x2a37f4: 0x8e500130  lw          $s0, 0x130($s2)
    ctx->pc = 0x2a37f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x2a37f8: 0x20f7824  and         $t7, $s0, $t7
    ctx->pc = 0x2a37f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x2a37fc: 0xae4f0130  sw          $t7, 0x130($s2)
    ctx->pc = 0x2a37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 15));
    // 0x2a3800: 0x8e4f0130  lw          $t7, 0x130($s2)
    ctx->pc = 0x2a3800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x2a3804: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x2a3804u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
    // 0x2a3808: 0xae4f0130  sw          $t7, 0x130($s2)
    ctx->pc = 0x2a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 15));
    // 0x2a380c: 0x8eaf0118  lw          $t7, 0x118($s5)
    ctx->pc = 0x2a380cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x2a3810: 0x8def0024  lw          $t7, 0x24($t7)
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x2a3814: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x2a3814u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2a3818: 0xfe4f0140  sd          $t7, 0x140($s2)
    ctx->pc = 0x2a3818u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 15));
    // 0x2a381c: 0xae400148  sw          $zero, 0x148($s2)
    ctx->pc = 0x2a381cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
    // 0x2a3820: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x2a3820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x2a3824: 0x8c6f0078  lw          $t7, 0x78($v1)
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a3828: 0xf793c  dsll32      $t7, $t7, 4
    ctx->pc = 0x2a3828u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 4));
    // 0x2a382c: 0xf793e  dsrl32      $t7, $t7, 4
    ctx->pc = 0x2a382cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 4));
    // 0x2a3830: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x2a3830u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x2a3834: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x2a3834u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x2a3838: 0xfe4e0150  sd          $t6, 0x150($s2)
    ctx->pc = 0x2a3838u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 336), GPR_U64(ctx, 14));
    // 0x2a383c: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x2a383cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x2a3840: 0xae40015c  sw          $zero, 0x15C($s2)
    ctx->pc = 0x2a3840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 0));
    // 0x2a3844: 0xfe4d0160  sd          $t5, 0x160($s2)
    ctx->pc = 0x2a3844u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 352), GPR_U64(ctx, 13));
    // 0x2a3848: 0xae4c0168  sw          $t4, 0x168($s2)
    ctx->pc = 0x2a3848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 12));
    // 0x2a384c: 0xae4b016c  sw          $t3, 0x16C($s2)
    ctx->pc = 0x2a384cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 11));
    // 0x2a3850: 0xfe4a0170  sd          $t2, 0x170($s2)
    ctx->pc = 0x2a3850u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 10));
    // 0x2a3854: 0xfe490178  sd          $t1, 0x178($s2)
    ctx->pc = 0x2a3854u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 9));
    // 0x2a3858: 0xfe480180  sd          $t0, 0x180($s2)
    ctx->pc = 0x2a3858u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 384), GPR_U64(ctx, 8));
    // 0x2a385c: 0xfe470188  sd          $a3, 0x188($s2)
    ctx->pc = 0x2a385cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 392), GPR_U64(ctx, 7));
    // 0x2a3860: 0xfe400190  sd          $zero, 0x190($s2)
    ctx->pc = 0x2a3860u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 400), GPR_U64(ctx, 0));
    // 0x2a3864: 0xfe460198  sd          $a2, 0x198($s2)
    ctx->pc = 0x2a3864u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 408), GPR_U64(ctx, 6));
    // 0x2a3868: 0xfe4501a0  sd          $a1, 0x1A0($s2)
    ctx->pc = 0x2a3868u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 416), GPR_U64(ctx, 5));
    // 0x2a386c: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x2a386cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
    // 0x2a3870: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x2a3870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x2a3874: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a3874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a3878: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x2a3878u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x2a387c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3880: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a3880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3884: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a3884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3888: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a3888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a388c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a388cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a389c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A389Cu;
        // 0x2a38a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A38A4u;
}
