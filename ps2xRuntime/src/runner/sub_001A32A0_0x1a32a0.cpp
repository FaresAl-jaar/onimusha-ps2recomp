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

// Function: sub_001A32A0
// Address: 0x1a32a0 - 0x1a3758
void sub_001A32A0_0x1a32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A32A0_0x1a32a0");
#endif

    switch (ctx->pc) {
        case 0x1a333cu: goto label_1a333c;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36d0u: goto label_1a36d0;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a3718u: goto label_1a3718;
        case 0x1a3728u: goto label_1a3728;
        default: break;
    }

    ctx->pc = 0x1a32a0u;

    // 0x1a32a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a32a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a32a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a32ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a32acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a32b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a32b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a32b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a32b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a32bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a32c0: 0x34531000  ori         $s3, $v0, 0x1000
    ctx->pc = 0x1a32c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1a32c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a32c8: 0x34522000  ori         $s2, $v0, 0x2000
    ctx->pc = 0x1a32c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a32cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a32d0: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x1a32d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1a32d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1a32d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a32d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a32d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a32dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a32dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a32e0: 0xc49502b4  lwc1        $f21, 0x2B4($a0)
    ctx->pc = 0x1a32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a32e4: 0x8c9402a0  lw          $s4, 0x2A0($a0)
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 672)));
    // 0x1a32e8: 0xc48002b8  lwc1        $f0, 0x2B8($a0)
    ctx->pc = 0x1a32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a32ec: 0xc49602a4  lwc1        $f22, 0x2A4($a0)
    ctx->pc = 0x1a32ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a32f0: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A32F0u;
    {
        const bool branch_taken_0x1a32f0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x1A32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32F0u;
        // 0x1a32f4: 0x4600a841  sub.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32f0) {
            ctx->pc = 0x1A3304u;
            goto label_1a3304;
        }
    }
    ctx->pc = 0x1A32F8u;
    // 0x1a32f8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1a32f8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a32fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A32FCu;
    {
        const bool branch_taken_0x1a32fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32FCu;
        // 0x1a3300: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32fc) {
            ctx->pc = 0x1A3320u;
            goto label_1a3320;
        }
    }
    ctx->pc = 0x1A3304u;
label_1a3304:
    // 0x1a3304: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1a3304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x1a3308: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1a3308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1a330c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a3310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a3310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3314: 0x0  nop
    ctx->pc = 0x1a3314u;
    // NOP
    // 0x1a3318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a331c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a331cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a3320:
    // 0x1a3320: 0x0  nop
    ctx->pc = 0x1a3320u;
    // NOP
    // 0x1a3324: 0x0  nop
    ctx->pc = 0x1a3324u;
    // NOP
    // 0x1a3328: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1a3328u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a332c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3330: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a3330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3334: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x1A3334u;
    SET_GPR_U32(ctx, 31, 0x1A333Cu);
    ctx->pc = 0x1A3338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3334u;
    // 0x1a3338: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x1A3334u, 0x1A333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A333Cu;
label_1a333c:
    // 0x1a333c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3340: 0x26a50140  addiu       $a1, $s5, 0x140
    ctx->pc = 0x1a3340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x1a3344: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x1A3344u;
    SET_GPR_U32(ctx, 31, 0x1A334Cu);
    ctx->pc = 0x1A3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3344u;
    // 0x1a3348: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x1A3344u, 0x1A334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A334Cu;
label_1a334c:
    // 0x1a334c: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1a3350: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a3350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a3354: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1a3354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1a3358: 0x8c24ceb0  lw          $a0, -0x3150($at)
    ctx->pc = 0x1a3358u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB0u));
    // 0x1a335c: 0x3c02bd75  lui         $v0, 0xBD75
    ctx->pc = 0x1a335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48501 << 16));
    // 0x1a3360: 0x8ea602a8  lw          $a2, 0x2A8($s5)
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x1a3364: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1a3364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1a3368: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1a336c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a336cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3370: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x1a3374: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1a3374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a3378: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a337c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a337cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3380: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a3380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a3384: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1a3384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1a3388: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1a3388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1a338c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1a338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1a3390: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1a3390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a3394: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a3394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a3398: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a3398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a339c: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1a339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a33a0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1a33a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a33a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a33a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a33a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a33acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a33b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a33b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a33b8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x1a33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a33bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a33bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a33c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a33c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a33c4: 0xe4230010  swc1        $f3, 0x10($at)
    ctx->pc = 0x1a33c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16), bits); }
    // 0x1a33c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1a33c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1a33cc: 0xac200014  sw          $zero, 0x14($at)
    ctx->pc = 0x1a33ccu;
    runtime->Store32(rdram, ctx, 0x70000014u, GPR_U32(ctx, 0)); // MMIO: 0x70000014
    // 0x1a33d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a33d4: 0x8c22ceb0  lw          $v0, -0x3150($at)
    ctx->pc = 0x1a33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB0u));
    // 0x1a33d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a33dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1a33e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a33e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a33e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a33e8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1a33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1a33ec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a33ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a33f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a33f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a33f8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a33f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a33fc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a33fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a3400: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a3400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a3404: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a3404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a3408: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x1a3408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 24), bits); }
    // 0x1a340c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1a340cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3410: 0xac20001c  sw          $zero, 0x1C($at)
    ctx->pc = 0x1a3410u;
    runtime->Store32(rdram, ctx, 0x7000001Cu, GPR_U32(ctx, 0)); // MMIO: 0x7000001c
    // 0x1a3414: 0x93828784  lbu         $v0, -0x787C($gp)
    ctx->pc = 0x1a3414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1a3418: 0x8f85877c  lw          $a1, -0x7884($gp)
    ctx->pc = 0x1a3418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
    // 0x1a341c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1a341cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a3420: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x1a3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x1a3424: 0xc041442  jal         func_105108
    ctx->pc = 0x1A3424u;
    SET_GPR_U32(ctx, 31, 0x1A342Cu);
    ctx->pc = 0x1A3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3424u;
    // 0x1a3428: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A3424u, 0x1A342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A342Cu;
label_1a342c:
    // 0x1a342c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1A342Cu;
    {
        const bool branch_taken_0x1a342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A342Cu;
        // 0x1a3430: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a342c) {
            ctx->pc = 0x1A3700u;
            goto label_1a3700;
        }
    }
    ctx->pc = 0x1A3434u;
    // 0x1a3434: 0x0  nop
    ctx->pc = 0x1a3434u;
    // NOP
label_1a3438:
    // 0x1a3438: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a343c: 0xc6ac02ac  lwc1        $f12, 0x2AC($s5)
    ctx->pc = 0x1a343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3440: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a3440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a3444: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a3444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a3448: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A3448u;
    SET_GPR_U32(ctx, 31, 0x1A3450u);
    ctx->pc = 0x1A344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3448u;
    // 0x1a344c: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A3448u, 0x1A3450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3450u;
label_1a3450:
    // 0x1a3450: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3454: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1a3454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1a3458: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1a3458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a345c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a3460: 0xc6a202b0  lwc1        $f2, 0x2B0($s5)
    ctx->pc = 0x1a3460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3464: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a3464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a3468: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a346c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a3470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3474: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x1a3474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1a3478: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x1a3478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x1a347c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a347cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a3480: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1a3480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a3484: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x1a3484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x1a3488: 0x8c22ceb0  lw          $v0, -0x3150($at)
    ctx->pc = 0x1a3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954672)));
    // 0x1a348c: 0x531c0  sll         $a2, $a1, 7
    ctx->pc = 0x1a348cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1a3490: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a3494: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1a3494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a3498: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a3498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a349c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a34a0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1a34a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a34a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a34a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a34a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a34a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a34ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a34acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a34b0: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1a34b4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a34b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1a34b8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a34b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1a34bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a34c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a34c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a34c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a34cc: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x1a34ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a34d0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1A34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D0u;
        // 0x1a34d4: 0xc4450000  lwc1        $f5, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A34E4u;
            goto label_1a34e4;
        }
    }
    ctx->pc = 0x1A34D8u;
    // 0x1a34d8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1a34d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a34dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A34DCu;
    {
        const bool branch_taken_0x1a34dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34DCu;
        // 0x1a34e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34dc) {
            ctx->pc = 0x1A3500u;
            goto label_1a3500;
        }
    }
    ctx->pc = 0x1A34E4u;
label_1a34e4:
    // 0x1a34e4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1a34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1a34e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1a34e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a34ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a34ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a34f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a34f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a34f4: 0x0  nop
    ctx->pc = 0x1a34f4u;
    // NOP
    // 0x1a34f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a34f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a34fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a34fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a3500:
    // 0x1a3500: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1a3500u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a3504: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a3504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3508: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x1a350c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a3510: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1a3510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1a3514: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x1a3514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a3518: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x1a351c: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x1a351cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1a3520: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3520u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3524: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a3528: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a3528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a352c: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x1a352cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a3530: 0x46030100  add.s       $f4, $f0, $f3
    ctx->pc = 0x1a3530u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a3534: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3538: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1a3538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a353c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3540: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1a3540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a3544: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x1a3544u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x1a3548: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x1a3548u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a354c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1a354cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3550: 0x0  nop
    ctx->pc = 0x1a3550u;
    // NOP
    // 0x1a3554: 0x460618dc  madd.s      $f3, $f3, $f6
    ctx->pc = 0x1a3554u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x1a3558: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a3558u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a355c: 0xc6a102bc  lwc1        $f1, 0x2BC($s5)
    ctx->pc = 0x1a355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3560: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1a3560u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a3564: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1a3564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a3568: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1a3568u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a356c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3570: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a3570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a3574: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a3574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a3578: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a3578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a357c: 0xc6ac02bc  lwc1        $f12, 0x2BC($s5)
    ctx->pc = 0x1a357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3580: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A3580u;
    SET_GPR_U32(ctx, 31, 0x1A3588u);
    ctx->pc = 0x1A3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3580u;
    // 0x1a3584: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A3580u, 0x1A3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3588u;
label_1a3588:
    // 0x1a3588: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a358c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3590: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1a3590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a3594: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x1a3594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1a3598: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A3598u;
    SET_GPR_U32(ctx, 31, 0x1A35A0u);
    ctx->pc = 0x1A359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3598u;
    // 0x1a359c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A3598u, 0x1A35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35A0u;
label_1a35a0:
    // 0x1a35a0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a35a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1a35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1a35a8: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1a35a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a35ac: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a35b0: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x1a35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
    // 0x1a35b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a35b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a35b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a35bc: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1a35c0: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x1a35c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a35c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a35c8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1A35C8u;
    SET_GPR_U32(ctx, 31, 0x1A35D0u);
    ctx->pc = 0x1A35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35C8u;
    // 0x1a35cc: 0x34440020  ori         $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1A35C8u, 0x1A35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35D0u;
label_1a35d0:
    // 0x1a35d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a35d4: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1A35D4u;
    SET_GPR_U32(ctx, 31, 0x1A35DCu);
    ctx->pc = 0x1A35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35D4u;
    // 0x1a35d8: 0x34440020  ori         $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FC0u, 0x1A35D4u, 0x1A35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35DCu;
label_1a35dc:
    // 0x1a35dc: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x1a35dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a35e0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1A35E0u;
    {
        const bool branch_taken_0x1a35e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E0u;
        // 0x1a35e4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e0) {
            ctx->pc = 0x1A3630u;
            goto label_1a3630;
        }
    }
    ctx->pc = 0x1A35E8u;
    // 0x1a35e8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1a35ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1a35f0: 0x34850020  ori         $a1, $a0, 0x20
    ctx->pc = 0x1a35f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1a35f4: 0x46160081  sub.s       $f2, $f0, $f22
    ctx->pc = 0x1a35f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a35f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a35f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a35fc: 0x0  nop
    ctx->pc = 0x1a35fcu;
    // NOP
    // 0x1a3600: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a3600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a3604: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a3604u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a3608: 0x0  nop
    ctx->pc = 0x1a3608u;
    // NOP
    // 0x1a360c: 0x0  nop
    ctx->pc = 0x1a360cu;
    // NOP
    // 0x1a3610: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A3610u;
    SET_GPR_U32(ctx, 31, 0x1A3618u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A3610u, 0x1A3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3618u;
label_1a3618:
    // 0x1a3618: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a361c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3620: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a3624: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A3624u;
    SET_GPR_U32(ctx, 31, 0x1A362Cu);
    ctx->pc = 0x1A3628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3624u;
    // 0x1a3628: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A3624u, 0x1A362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A362Cu;
label_1a362c:
    // 0x1a362c: 0x0  nop
    ctx->pc = 0x1a362cu;
    // NOP
label_1a3630:
    // 0x1a3630: 0xda22fff0  lqc2        $vf2, -0x10($s1)
    ctx->pc = 0x1a3630u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967280)));
    // 0x1a3634: 0xda23ffe0  lqc2        $vf3, -0x20($s1)
    ctx->pc = 0x1a3634u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x1a3638: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a3638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a363c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1a363cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a3640: 0x0  nop
    ctx->pc = 0x1a3640u;
    // NOP
    // 0x1a3644: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1a3644u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1a3648: 0x4be312fc  vsuba.xyzw  $ACC, $vf2, $vf3
    ctx->pc = 0x1a3648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1a364c: 0x4be010bf  vmaddaw.xyzw $ACC, $vf2, $vf0w
    ctx->pc = 0x1a364cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1a3650: 0x4be0090f  vmsubw.xyzw $vf4, $vf1, $vf0w
    ctx->pc = 0x1a3650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a3654: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x1a3654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1a3658: 0x4a0002ff  vnop
    ctx->pc = 0x1a3658u;
    // NOP operation, no action needed for VU0
    // 0x1a365c: 0x4a0002ff  vnop
    ctx->pc = 0x1a365cu;
    // NOP operation, no action needed for VU0
    // 0x1a3660: 0x4be02123  vmaddi.xyzw $vf4, $vf4, $I
    ctx->pc = 0x1a3660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_i)); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a3664: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a3664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a3668: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a366c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a3670: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a3674: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1a3678: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a367c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3680: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1A3680u;
    SET_GPR_U32(ctx, 31, 0x1A3688u);
    ctx->pc = 0x1A3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3680u;
    // 0x1a3684: 0x34440020  ori         $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1A3680u, 0x1A3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3688u;
label_1a3688:
    // 0x1a3688: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a3688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a368c: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1A368Cu;
    SET_GPR_U32(ctx, 31, 0x1A3694u);
    ctx->pc = 0x1A3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A368Cu;
    // 0x1a3690: 0x34440020  ori         $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FC0u, 0x1A368Cu, 0x1A3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x1a3694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a3698: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a369c: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1a369cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1a36a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a36a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36a4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a36a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a36a8: 0x0  nop
    ctx->pc = 0x1a36a8u;
    // NOP
    // 0x1a36ac: 0x0  nop
    ctx->pc = 0x1a36acu;
    // NOP
    // 0x1a36b0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A36B0u;
    SET_GPR_U32(ctx, 31, 0x1A36B8u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A36B0u, 0x1A36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36B8u;
label_1a36b8:
    // 0x1a36b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a36bc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a36c0: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1a36c4: 0x34460020  ori         $a2, $v0, 0x20
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1a36c8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A36C8u;
    SET_GPR_U32(ctx, 31, 0x1A36D0u);
    ctx->pc = 0x1A36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36C8u;
    // 0x1a36cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A36C8u, 0x1A36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36D0u;
label_1a36d0:
    // 0x1a36d0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a36d4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a36d8: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a36dc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1A36DCu;
    SET_GPR_U32(ctx, 31, 0x1A36E4u);
    ctx->pc = 0x1A36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36DCu;
    // 0x1a36e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1A36DCu, 0x1A36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36E4u;
label_1a36e4:
    // 0x1a36e4: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x1a36e4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x1a36e8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a36ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a36f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a36f4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a36f8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a36fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a36fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a3700:
    // 0x1a3700: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1a3700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1a3704: 0x1440ff4c  bnez        $v0, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3704u;
        // 0x1a3708: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3438;
        }
    }
    ctx->pc = 0x1A370Cu;
    // 0x1a370c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3710: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x1A3710u;
    SET_GPR_U32(ctx, 31, 0x1A3718u);
    ctx->pc = 0x1A3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3710u;
    // 0x1a3714: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x1A3710u, 0x1A3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3718u;
label_1a3718:
    // 0x1a3718: 0x26a40140  addiu       $a0, $s5, 0x140
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x1a371c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a371cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3720: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1A3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3720u;
    // 0x1a3724: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x1A3720u, 0x1A3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a3728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a372c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1a372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a3730: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a3730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3734: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3738: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a3738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a373c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3740: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3744: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a374c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a374cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3750: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3750u;
        // 0x1a3754: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3758u;
}
