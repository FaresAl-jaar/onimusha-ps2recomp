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

// Function: sub_003D36B0
// Address: 0x3d36b0 - 0x3d38d0
void sub_003D36B0_0x3d36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D36B0_0x3d36b0");
#endif

    switch (ctx->pc) {
        case 0x3d3718u: goto label_3d3718;
        case 0x3d3740u: goto label_3d3740;
        case 0x3d3768u: goto label_3d3768;
        case 0x3d379cu: goto label_3d379c;
        case 0x3d37acu: goto label_3d37ac;
        case 0x3d37c4u: goto label_3d37c4;
        case 0x3d37f0u: goto label_3d37f0;
        case 0x3d37f8u: goto label_3d37f8;
        case 0x3d3890u: goto label_3d3890;
        default: break;
    }

    ctx->pc = 0x3d36b0u;

    // 0x3d36b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d36b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3d36b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3d36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3d36bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d36bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d36c0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3d36c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d36c8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3d36c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d36ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d36d0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3d36d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d36d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d36d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d36d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d36e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d36e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d36e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d36e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d36ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d36f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3d36f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36f4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3d36f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d36f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d36fc: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d36fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d3700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d3700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3708: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x3d3708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x3d370c: 0x25083560  addiu       $t0, $t0, 0x3560
    ctx->pc = 0x3d370cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13664));
    // 0x3d3710: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D3710u;
    SET_GPR_U32(ctx, 31, 0x3D3718u);
    ctx->pc = 0x3D3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3710u;
    // 0x3d3714: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D3710u, 0x3D3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3718u;
label_3d3718:
    // 0x3d3718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d371c: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3D371Cu;
    {
        const bool branch_taken_0x3d371c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D371Cu;
        // 0x3d3720: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d371c) {
            ctx->pc = 0x3D3898u;
            goto label_3d3898;
        }
    }
    ctx->pc = 0x3D3724u;
    // 0x3d3724: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d3724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3728: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d3728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d372c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3730: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d3730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d3734: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3d3734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3d3738: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D3738u;
    SET_GPR_U32(ctx, 31, 0x3D3740u);
    ctx->pc = 0x3D373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3738u;
    // 0x3d373c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D3738u, 0x3D3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3740u;
label_3d3740:
    // 0x3d3740: 0xa6160526  sh          $s6, 0x526($s0)
    ctx->pc = 0x3d3740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 22));
    // 0x3d3744: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3d3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3d3748: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x3d3748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d374c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3750: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3d3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3d3754: 0xa602052a  sh          $v0, 0x52A($s0)
    ctx->pc = 0x3d3754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d375c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d375cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3760: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D3760u;
    SET_GPR_U32(ctx, 31, 0x3D3768u);
    ctx->pc = 0x3D3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3760u;
    // 0x3d3764: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D3760u, 0x3D3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3768u;
label_3d3768:
    // 0x3d3768: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3d3768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3d376c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d3770: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x3d3770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x3d3774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d3774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3778: 0xae020568  sw          $v0, 0x568($s0)
    ctx->pc = 0x3d3778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x3d377c: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3d377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d3780: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d3780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3d3784: 0xa217056c  sb          $s7, 0x56C($s0)
    ctx->pc = 0x3d3784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1388), (uint8_t)GPR_U32(ctx, 23));
    // 0x3d3788: 0xa21e056d  sb          $fp, 0x56D($s0)
    ctx->pc = 0x3d3788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1389), (uint8_t)GPR_U32(ctx, 30));
    // 0x3d378c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d378cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d3790: 0xae00057c  sw          $zero, 0x57C($s0)
    ctx->pc = 0x3d3790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 0));
    // 0x3d3794: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D3794u;
    SET_GPR_U32(ctx, 31, 0x3D379Cu);
    ctx->pc = 0x3D3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3794u;
    // 0x3d3798: 0xae000580  sw          $zero, 0x580($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D3794u, 0x3D379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D379Cu;
label_3d379c:
    // 0x3d379c: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3d379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d37a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d37a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d37a4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3D37A4u;
    SET_GPR_U32(ctx, 31, 0x3D37ACu);
    ctx->pc = 0x3D37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D37A4u;
    // 0x3d37a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3D37A4u, 0x3D37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D37ACu;
label_3d37ac:
    // 0x3d37ac: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d37acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d37b0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3d37b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3d37b4: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3d37b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d37b8: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x3d37b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
    // 0x3d37bc: 0xc0765e0  jal         func_1D9780
    ctx->pc = 0x3D37BCu;
    SET_GPR_U32(ctx, 31, 0x3D37C4u);
    ctx->pc = 0x3D37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D37BCu;
    // 0x3d37c0: 0x24c63270  addiu       $a2, $a2, 0x3270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9780u, 0x3D37BCu, 0x3D37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D37C4u;
label_3d37c4:
    // 0x3d37c4: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3d37c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3d37c8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3d37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3d37cc: 0xc4203264  lwc1        $f0, 0x3264($at)
    ctx->pc = 0x3d37ccu;
    { uint32_t bits = FAST_READ32(0x683264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d37d0: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3d37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3d37d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d37d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d37d8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3d37d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3d37dc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3d37e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d37e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3d37e4: 0xe6000554  swc1        $f0, 0x554($s0)
    ctx->pc = 0x3d37e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x3d37e8: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3D37E8u;
    SET_GPR_U32(ctx, 31, 0x3D37F0u);
    ctx->pc = 0x3D37ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D37E8u;
    // 0x3d37ec: 0xae020574  sw          $v0, 0x574($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3D37E8u, 0x3D37F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D37F0u;
label_3d37f0:
    // 0x3d37f0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3D37F0u;
    SET_GPR_U32(ctx, 31, 0x3D37F8u);
    ctx->pc = 0x3D37F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D37F0u;
    // 0x3d37f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3D37F0u, 0x3D37F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D37F8u;
label_3d37f8:
    // 0x3d37f8: 0xc6040574  lwc1        $f4, 0x574($s0)
    ctx->pc = 0x3d37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d37fc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d3800: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3d3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d3804: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3d3804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3d3808: 0xc6030554  lwc1        $f3, 0x554($s0)
    ctx->pc = 0x3d3808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d380c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x3d380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d3810: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d3810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3814: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x3d3814u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3d3818: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3d3818u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3d381c: 0x0  nop
    ctx->pc = 0x3d381cu;
    // NOP
    // 0x3d3820: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x3d3820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3d3824: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d3824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d3828: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3828u;
    {
        const bool branch_taken_0x3d3828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d3828) {
            ctx->pc = 0x3D3834u;
            goto label_3d3834;
        }
    }
    ctx->pc = 0x3D3830u;
    // 0x3d3830: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3d3830u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3d3834:
    // 0x3d3834: 0x0  nop
    ctx->pc = 0x3d3834u;
    // NOP
    // 0x3d3838: 0x0  nop
    ctx->pc = 0x3d3838u;
    // NOP
    // 0x3d383c: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x3d383cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3d3840: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d3840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d3844: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3d3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d3848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d384c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d3850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d3850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3854: 0x0  nop
    ctx->pc = 0x3d3854u;
    // NOP
    // 0x3d3858: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d3858u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3d385c: 0xe6000578  swc1        $f0, 0x578($s0)
    ctx->pc = 0x3d385cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1400), bits); }
    // 0x3d3860: 0x87838ce0  lh          $v1, -0x7320($gp)
    ctx->pc = 0x3d3860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x3d3864: 0xa6030570  sh          $v1, 0x570($s0)
    ctx->pc = 0x3d3864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1392), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3868: 0x87838ce0  lh          $v1, -0x7320($gp)
    ctx->pc = 0x3d3868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x3d386c: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3d386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3d3870: 0xa7838ce0  sh          $v1, -0x7320($gp)
    ctx->pc = 0x3d3870u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937824), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3874: 0x87838ce0  lh          $v1, -0x7320($gp)
    ctx->pc = 0x3d3874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x3d3878: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3d3878u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d387c: 0x0  nop
    ctx->pc = 0x3d387cu;
    // NOP
    // 0x3d3880: 0x0  nop
    ctx->pc = 0x3d3880u;
    // NOP
    // 0x3d3884: 0x1010  mfhi        $v0
    ctx->pc = 0x3d3884u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d3888: 0xc0f4d7c  jal         func_3D35F0
    ctx->pc = 0x3D3888u;
    SET_GPR_U32(ctx, 31, 0x3D3890u);
    ctx->pc = 0x3D388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3888u;
    // 0x3d388c: 0xa7828ce0  sh          $v0, -0x7320($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937824), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D35F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D35F0u, 0x3D3888u, 0x3D3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3890u;
label_3d3890:
    // 0x3d3890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3890u;
    {
        const bool branch_taken_0x3d3890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3890u;
        // 0x3d3894: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3890) {
            ctx->pc = 0x3D38A0u;
            goto label_3d38a0;
        }
    }
    ctx->pc = 0x3D3898u;
label_3d3898:
    // 0x3d3898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d3898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d389c: 0x0  nop
    ctx->pc = 0x3d389cu;
    // NOP
label_3d38a0:
    // 0x3d38a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d38a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d38a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3d38a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d38a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d38a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d38ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d38acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d38b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d38b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d38b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d38b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d38b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d38b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d38bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d38bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d38c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d38c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d38c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d38c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d38c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D38C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38C8u;
        // 0x3d38cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D38C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D38D0u;
}
