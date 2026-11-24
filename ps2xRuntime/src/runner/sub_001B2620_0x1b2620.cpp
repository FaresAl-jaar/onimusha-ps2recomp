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

// Function: sub_001B2620
// Address: 0x1b2620 - 0x1b3184
void sub_001B2620_0x1b2620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2620_0x1b2620");
#endif

    switch (ctx->pc) {
        case 0x1b2668u: goto label_1b2668;
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26d4u: goto label_1b26d4;
        case 0x1b26e8u: goto label_1b26e8;
        case 0x1b2718u: goto label_1b2718;
        case 0x1b2728u: goto label_1b2728;
        case 0x1b2758u: goto label_1b2758;
        case 0x1b2768u: goto label_1b2768;
        case 0x1b2798u: goto label_1b2798;
        case 0x1b27b0u: goto label_1b27b0;
        case 0x1b27bcu: goto label_1b27bc;
        case 0x1b27c8u: goto label_1b27c8;
        case 0x1b2830u: goto label_1b2830;
        case 0x1b28e0u: goto label_1b28e0;
        case 0x1b28e8u: goto label_1b28e8;
        case 0x1b2900u: goto label_1b2900;
        case 0x1b291cu: goto label_1b291c;
        case 0x1b2938u: goto label_1b2938;
        case 0x1b2978u: goto label_1b2978;
        case 0x1b29b0u: goto label_1b29b0;
        case 0x1b29c0u: goto label_1b29c0;
        case 0x1b29d0u: goto label_1b29d0;
        case 0x1b2a24u: goto label_1b2a24;
        case 0x1b2a88u: goto label_1b2a88;
        case 0x1b2ab4u: goto label_1b2ab4;
        case 0x1b2ac8u: goto label_1b2ac8;
        case 0x1b2aecu: goto label_1b2aec;
        case 0x1b2b00u: goto label_1b2b00;
        case 0x1b2b10u: goto label_1b2b10;
        case 0x1b2b48u: goto label_1b2b48;
        case 0x1b2b58u: goto label_1b2b58;
        case 0x1b2b68u: goto label_1b2b68;
        case 0x1b2bb4u: goto label_1b2bb4;
        case 0x1b2bbcu: goto label_1b2bbc;
        case 0x1b2be8u: goto label_1b2be8;
        case 0x1b2bf4u: goto label_1b2bf4;
        case 0x1b2c1cu: goto label_1b2c1c;
        case 0x1b2c5cu: goto label_1b2c5c;
        case 0x1b2c6cu: goto label_1b2c6c;
        case 0x1b2c88u: goto label_1b2c88;
        case 0x1b2ca0u: goto label_1b2ca0;
        case 0x1b2cf4u: goto label_1b2cf4;
        case 0x1b2d30u: goto label_1b2d30;
        case 0x1b2d44u: goto label_1b2d44;
        case 0x1b2d50u: goto label_1b2d50;
        case 0x1b2dc4u: goto label_1b2dc4;
        case 0x1b2de0u: goto label_1b2de0;
        case 0x1b2df8u: goto label_1b2df8;
        case 0x1b2e04u: goto label_1b2e04;
        case 0x1b2e4cu: goto label_1b2e4c;
        case 0x1b2ed8u: goto label_1b2ed8;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b3144u: goto label_1b3144;
        case 0x1b3150u: goto label_1b3150;
        default: break;
    }

    ctx->pc = 0x1b2620u;

    // 0x1b2620: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1b2620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1b2624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2628: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b2628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b262c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b262cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b2630: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1b2630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1b2634: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1b2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1b2638: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1b263c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1b2640: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1b2644: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b2644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b2648: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b264c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2650: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2658: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b265c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b265cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2660: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B2660u;
    SET_GPR_U32(ctx, 31, 0x1B2668u);
    ctx->pc = 0x1B2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2660u;
    // 0x1b2664: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B2660u, 0x1B2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2668u;
label_1b2668:
    // 0x1b2668: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1b266c: 0x24170200  addiu       $s7, $zero, 0x200
    ctx->pc = 0x1b266cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2670: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2670u;
    {
        const bool branch_taken_0x1b2670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2670u;
        // 0x1b2674: 0x241e00e0  addiu       $fp, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2670) {
            ctx->pc = 0x1B2680u;
            goto label_1b2680;
        }
    }
    ctx->pc = 0x1B2678u;
    // 0x1b2678: 0x17b842  srl         $s7, $s7, 1
    ctx->pc = 0x1b2678u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
    // 0x1b267c: 0x1ef042  srl         $fp, $fp, 1
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_1b2680:
    // 0x1b2680: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b2680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2684: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B2684u;
    {
        const bool branch_taken_0x1b2684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2684u;
        // 0x1b2688: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2684) {
            ctx->pc = 0x1B2760u;
            goto label_1b2760;
        }
    }
    ctx->pc = 0x1B268Cu;
    // 0x1b268c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B268Cu;
    {
        const bool branch_taken_0x1b268c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b268c) {
            ctx->pc = 0x1B2720u;
            goto label_1b2720;
        }
    }
    ctx->pc = 0x1B2694u;
    // 0x1b2694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2698: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2698u;
    {
        const bool branch_taken_0x1b2698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2698) {
            ctx->pc = 0x1B26E0u;
            goto label_1b26e0;
        }
    }
    ctx->pc = 0x1B26A0u;
    // 0x1b26a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B26A0u;
    {
        const bool branch_taken_0x1b26a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26a0) {
            ctx->pc = 0x1B26B0u;
            goto label_1b26b0;
        }
    }
    ctx->pc = 0x1B26A8u;
    // 0x1b26a8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B26A8u;
    {
        const bool branch_taken_0x1b26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26a8) {
            ctx->pc = 0x1B2798u;
            goto label_1b2798;
        }
    }
    ctx->pc = 0x1B26B0u;
label_1b26b0:
    // 0x1b26b0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B26B0u;
    SET_GPR_U32(ctx, 31, 0x1B26B8u);
    ctx->pc = 0x1B26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26B0u;
    // 0x1b26b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B26B0u, 0x1B26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26B8u;
label_1b26b8:
    // 0x1b26b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b26b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b26bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b26c4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1b26c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b26c8: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1b26c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b26cc: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1B26CCu;
    SET_GPR_U32(ctx, 31, 0x1B26D4u);
    ctx->pc = 0x1B26D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26CCu;
    // 0x1b26d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1B26CCu, 0x1B26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26D4u;
label_1b26d4:
    // 0x1b26d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B26D4u;
    {
        const bool branch_taken_0x1b26d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26d4) {
            ctx->pc = 0x1B2798u;
            goto label_1b2798;
        }
    }
    ctx->pc = 0x1B26DCu;
    // 0x1b26dc: 0x0  nop
    ctx->pc = 0x1b26dcu;
    // NOP
label_1b26e0:
    // 0x1b26e0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B26E0u;
    SET_GPR_U32(ctx, 31, 0x1B26E8u);
    ctx->pc = 0x1B26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26E0u;
    // 0x1b26e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B26E0u, 0x1B26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26E8u;
label_1b26e8:
    // 0x1b26e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b26e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b26ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26f0: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b26f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b26f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b26f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b26fc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b26fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b2700: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b2700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b2704: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b2704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2708: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b270c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2710: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B2710u;
    SET_GPR_U32(ctx, 31, 0x1B2718u);
    ctx->pc = 0x1B2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2710u;
    // 0x1b2714: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B2710u, 0x1B2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2718u;
label_1b2718:
    // 0x1b2718: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B2718u;
    {
        const bool branch_taken_0x1b2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2718) {
            ctx->pc = 0x1B2798u;
            goto label_1b2798;
        }
    }
    ctx->pc = 0x1B2720u;
label_1b2720:
    // 0x1b2720: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B2720u;
    SET_GPR_U32(ctx, 31, 0x1B2728u);
    ctx->pc = 0x1B2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2720u;
    // 0x1b2724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B2720u, 0x1B2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2728u;
label_1b2728:
    // 0x1b2728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b272c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2730: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b2734: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b2734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b2738: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b273c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b2740: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b2744: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2748: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b274c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1b274cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2750: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B2750u;
    SET_GPR_U32(ctx, 31, 0x1B2758u);
    ctx->pc = 0x1B2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2750u;
    // 0x1b2754: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B2750u, 0x1B2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2758u;
label_1b2758:
    // 0x1b2758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B2758u;
    {
        const bool branch_taken_0x1b2758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2758) {
            ctx->pc = 0x1B2798u;
            goto label_1b2798;
        }
    }
    ctx->pc = 0x1B2760u;
label_1b2760:
    // 0x1b2760: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B2760u;
    SET_GPR_U32(ctx, 31, 0x1B2768u);
    ctx->pc = 0x1B2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2760u;
    // 0x1b2764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B2760u, 0x1B2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2768u;
label_1b2768:
    // 0x1b2768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b276c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2770: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b2774: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b2774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b2778: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b277c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b2780: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b2780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b2784: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b2784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2788: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b2788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b278c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1b278cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2790: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B2790u;
    SET_GPR_U32(ctx, 31, 0x1B2798u);
    ctx->pc = 0x1B2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2790u;
    // 0x1b2794: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B2790u, 0x1B2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2798u;
label_1b2798:
    // 0x1b2798: 0x8e4278b4  lw          $v0, 0x78B4($s2)
    ctx->pc = 0x1b2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1b279c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b27a0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b27a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b27a4: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B27A4u;
    {
        const bool branch_taken_0x1b27a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27A4u;
        // 0x1b27a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27a4) {
            ctx->pc = 0x1B28D0u;
            goto label_1b28d0;
        }
    }
    ctx->pc = 0x1B27ACu;
    // 0x1b27ac: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x1b27acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
label_1b27b0:
    // 0x1b27b0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1b27b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1b27b4: 0xc07051c  jal         func_1C1470
    ctx->pc = 0x1B27B4u;
    SET_GPR_U32(ctx, 31, 0x1B27BCu);
    ctx->pc = 0x1B27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27B4u;
    // 0x1b27b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1470u, 0x1B27B4u, 0x1B27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27BCu;
label_1b27bc:
    // 0x1b27bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b27bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27c0: 0xc070550  jal         func_1C1540
    ctx->pc = 0x1B27C0u;
    SET_GPR_U32(ctx, 31, 0x1B27C8u);
    ctx->pc = 0x1B27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27C0u;
    // 0x1b27c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1540u, 0x1B27C0u, 0x1B27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27C8u;
label_1b27c8:
    // 0x1b27c8: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x1b27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b27cc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1b27d0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x1b27d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b27d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b27d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b27d8: 0x0  nop
    ctx->pc = 0x1b27d8u;
    // NOP
    // 0x1b27dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b27dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b27e0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b27e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1b27e4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b27e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b27e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b27e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b27ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b27ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b27f0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b27f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b27f4: 0x0  nop
    ctx->pc = 0x1b27f4u;
    // NOP
    // 0x1b27f8: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B27F8u;
    {
        const bool branch_taken_0x1b27f8 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x1b27f8) {
            ctx->pc = 0x1B2808u;
            goto label_1b2808;
        }
    }
    ctx->pc = 0x1B2800u;
    // 0x1b2800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2804: 0x0  nop
    ctx->pc = 0x1b2804u;
    // NOP
label_1b2808:
    // 0x1b2808: 0x29010100  slti        $at, $t0, 0x100
    ctx->pc = 0x1b2808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b280c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B280Cu;
    {
        const bool branch_taken_0x1b280c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b280c) {
            ctx->pc = 0x1B2818u;
            goto label_1b2818;
        }
    }
    ctx->pc = 0x1B2814u;
    // 0x1b2814: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1b2814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b2818:
    // 0x1b2818: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1b2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1b281c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1b281cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b2820: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b2820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2824: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B2824u;
    {
        const bool branch_taken_0x1b2824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2824u;
        // 0x1b2828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2824) {
            ctx->pc = 0x1B28B0u;
            goto label_1b28b0;
        }
    }
    ctx->pc = 0x1B282Cu;
    // 0x1b282c: 0x0  nop
    ctx->pc = 0x1b282cu;
    // NOP
label_1b2830:
    // 0x1b2830: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x1b2830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1b2834: 0x90c5003c  lbu         $a1, 0x3C($a2)
    ctx->pc = 0x1b2834u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1b2838: 0xa8082a  slt         $at, $a1, $t0
    ctx->pc = 0x1b2838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b283c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B283Cu;
    {
        const bool branch_taken_0x1b283c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b283c) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B2844u;
    // 0x1b2844: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2844u;
    {
        const bool branch_taken_0x1b2844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2844u;
        // 0x1b2848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2844) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B284Cu;
    // 0x1b284c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1b284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1b2850:
    // 0x1b2850: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b2854: 0x9082003c  lbu         $v0, 0x3C($a0)
    ctx->pc = 0x1b2854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b2858: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2858u;
    {
        const bool branch_taken_0x1b2858 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2858u;
        // 0x1b285c: 0x1021823  subu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2858) {
            ctx->pc = 0x1B2868u;
            goto label_1b2868;
        }
    }
    ctx->pc = 0x1B2860u;
    // 0x1b2860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2860u;
    {
        const bool branch_taken_0x1b2860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2860u;
        // 0x1b2864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2860) {
            ctx->pc = 0x1B2880u;
            goto label_1b2880;
        }
    }
    ctx->pc = 0x1B2868u;
label_1b2868:
    // 0x1b2868: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b286c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1b286cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1b2870: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b2870u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b2874: 0x0  nop
    ctx->pc = 0x1b2874u;
    // NOP
    // 0x1b2878: 0x0  nop
    ctx->pc = 0x1b2878u;
    // NOP
    // 0x1b287c: 0x2812  mflo        $a1
    ctx->pc = 0x1b287cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1b2880:
    // 0x1b2880: 0x9083002c  lbu         $v1, 0x2C($a0)
    ctx->pc = 0x1b2880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1b2884: 0x90c2002c  lbu         $v0, 0x2C($a2)
    ctx->pc = 0x1b2884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1b2888: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b2888u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b288c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1b288cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b2890: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1b2890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1b2894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2894u;
    {
        const bool branch_taken_0x1b2894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2894u;
        // 0x1b2898: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2894) {
            ctx->pc = 0x1B28B0u;
            goto label_1b28b0;
        }
    }
    ctx->pc = 0x1B289Cu;
    // 0x1b289c: 0x0  nop
    ctx->pc = 0x1b289cu;
    // NOP
label_1b28a0:
    // 0x1b28a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b28a4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1b28a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b28a8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1B28A8u;
    {
        const bool branch_taken_0x1b28a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28a8) {
            ctx->pc = 0x1B2830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2830;
        }
    }
    ctx->pc = 0x1B28B0u;
label_1b28b0:
    // 0x1b28b0: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1b28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1b28b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b28b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b28bc: 0x8e4278b4  lw          $v0, 0x78B4($s2)
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1b28c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b28c4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1b28c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b28c8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1B28C8u;
    {
        const bool branch_taken_0x1b28c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28C8u;
        // 0x1b28cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28c8) {
            ctx->pc = 0x1B27B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b27b0;
        }
    }
    ctx->pc = 0x1B28D0u;
label_1b28d0:
    // 0x1b28d0: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1b28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b28d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b28d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28d8: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B28D8u;
    SET_GPR_U32(ctx, 31, 0x1B28E0u);
    ctx->pc = 0x1B28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28D8u;
    // 0x1b28dc: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B28D8u, 0x1B28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28E0u;
label_1b28e0:
    // 0x1b28e0: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1B28E0u;
    SET_GPR_U32(ctx, 31, 0x1B28E8u);
    ctx->pc = 0x1B28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28E0u;
    // 0x1b28e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1B28E0u, 0x1B28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28E8u;
label_1b28e8:
    // 0x1b28e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b28ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b28f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b28f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b28f8: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1B28F8u;
    SET_GPR_U32(ctx, 31, 0x1B2900u);
    ctx->pc = 0x1B28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28F8u;
    // 0x1b28fc: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1B28F8u, 0x1B2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2900u;
label_1b2900:
    // 0x1b2900: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2908: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b290c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1b290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2910: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1b2910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1b2914: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2914u;
    SET_GPR_U32(ctx, 31, 0x1B291Cu);
    ctx->pc = 0x1B2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2914u;
    // 0x1b2918: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2914u, 0x1B291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B291Cu;
label_1b291c:
    // 0x1b291c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2924: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2928: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b2928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b292c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1b292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1b2930: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2930u;
    SET_GPR_U32(ctx, 31, 0x1B2938u);
    ctx->pc = 0x1B2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2930u;
    // 0x1b2934: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2930u, 0x1B2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2938u;
label_1b2938:
    // 0x1b2938: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b2938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b293c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2940: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2944: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b2944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b2948: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b2948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b294c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2950: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1b2950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1b2954: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b2954u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b2958: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b2958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b295c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b2960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2968: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b2968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b296c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2970: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2970u;
    SET_GPR_U32(ctx, 31, 0x1B2978u);
    ctx->pc = 0x1B2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2970u;
    // 0x1b2974: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2970u, 0x1B2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2978u;
label_1b2978:
    // 0x1b2978: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1b297c: 0x178182  srl         $s0, $s7, 6
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 23), 6));
    // 0x1b2980: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1b2980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2988: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1b2988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b298c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2990: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2994: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b2998: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1b2998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
    // 0x1b299c: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x1b299cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x1b29a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b29a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b29a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b29a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B29A8u;
    SET_GPR_U32(ctx, 31, 0x1B29B0u);
    ctx->pc = 0x1B29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29A8u;
    // 0x1b29ac: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B29A8u, 0x1B29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29B0u;
label_1b29b0:
    // 0x1b29b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b29b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b29b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B29B8u;
    SET_GPR_U32(ctx, 31, 0x1B29C0u);
    ctx->pc = 0x1B29BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29B8u;
    // 0x1b29bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B29B8u, 0x1B29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29C0u;
label_1b29c0:
    // 0x1b29c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b29c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b29c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B29C8u;
    SET_GPR_U32(ctx, 31, 0x1B29D0u);
    ctx->pc = 0x1B29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29C8u;
    // 0x1b29cc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B29C8u, 0x1B29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29D0u;
label_1b29d0:
    // 0x1b29d0: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1b29d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b29d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29d8: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1b29d8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b29dc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b29e0: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b29e4: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b29e4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b29e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b29ec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b29ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b29f0: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1b29f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1b29f4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b29f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b29f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b29fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b29fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2a00: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1b2a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1b2a04: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b2a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b2a08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2a0c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b2a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b2a10: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1b2a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1b2a14: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b2a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2a18: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b2a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b2a1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A24u);
    ctx->pc = 0x1B2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A1Cu;
    // 0x1b2a20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2A1Cu, 0x1B2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A24u;
label_1b2a24:
    // 0x1b2a24: 0x10082b  sltu        $at, $zero, $s0
    ctx->pc = 0x1b2a24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1b2a28: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B2A28u;
    {
        const bool branch_taken_0x1b2a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A28u;
        // 0x1b2a2c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a28) {
            ctx->pc = 0x1B2B28u;
            goto label_1b2b28;
        }
    }
    ctx->pc = 0x1B2A30u;
    // 0x1b2a30: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1b2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1b2a34: 0x26e20700  addiu       $v0, $s7, 0x700
    ctx->pc = 0x1b2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1792));
    // 0x1b2a38: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b2a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2a3c: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1b2a3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b2a40: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b2a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b2a44: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b2a48: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1b2a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1b2a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b2a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a50: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b2a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2a54: 0xffa20110  sd          $v0, 0x110($sp)
    ctx->pc = 0x1b2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 2));
    // 0x1b2a58: 0x27c30790  addiu       $v1, $fp, 0x790
    ctx->pc = 0x1b2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1936));
    // 0x1b2a5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2a60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2a64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2a68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b2a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2a6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b2a70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2a74: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b2a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b2a78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b2a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2a7c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b2a7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b2a80: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x1b2a80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2a84: 0x0  nop
    ctx->pc = 0x1b2a84u;
    // NOP
label_1b2a88:
    // 0x1b2a88: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b2a8c: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1b2a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b2a90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2a94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2a98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b2a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b2a9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b2a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa4: 0xdfa20110  ld          $v0, 0x110($sp)
    ctx->pc = 0x1b2aa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b2aa8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b2aac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2AACu;
    SET_GPR_U32(ctx, 31, 0x1B2AB4u);
    ctx->pc = 0x1B2AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AACu;
    // 0x1b2ab0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2AACu, 0x1B2AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AB4u;
label_1b2ab4:
    // 0x1b2ab4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b2ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2abc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2ac0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2AC0u;
    SET_GPR_U32(ctx, 31, 0x1B2AC8u);
    ctx->pc = 0x1B2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AC0u;
    // 0x1b2ac4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2AC0u, 0x1B2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AC8u;
label_1b2ac8:
    // 0x1b2ac8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2acc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b2ad0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b2ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2ad4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b2ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b2ad8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ae0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b2ae4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2AE4u;
    SET_GPR_U32(ctx, 31, 0x1B2AECu);
    ctx->pc = 0x1B2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AE4u;
    // 0x1b2ae8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2AE4u, 0x1B2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AECu;
label_1b2aec:
    // 0x1b2aec: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b2af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2af4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2af8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2AF8u;
    SET_GPR_U32(ctx, 31, 0x1B2B00u);
    ctx->pc = 0x1B2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AF8u;
    // 0x1b2afc: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2AF8u, 0x1B2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B00u;
label_1b2b00:
    // 0x1b2b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2b08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2B08u;
    SET_GPR_U32(ctx, 31, 0x1B2B10u);
    ctx->pc = 0x1B2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B08u;
    // 0x1b2b0c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2B08u, 0x1B2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B10u;
label_1b2b10:
    // 0x1b2b10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b2b10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b2b14: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1b2b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1b2b18: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1b2b1c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1B2B1Cu;
    {
        const bool branch_taken_0x1b2b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B1Cu;
        // 0x1b2b20: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b1c) {
            ctx->pc = 0x1B2A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2a88;
        }
    }
    ctx->pc = 0x1B2B24u;
    // 0x1b2b24: 0x0  nop
    ctx->pc = 0x1b2b24u;
    // NOP
label_1b2b28:
    // 0x1b2b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2b2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b2b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b34: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b2b38: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b2b3c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b2b40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2B40u;
    SET_GPR_U32(ctx, 31, 0x1B2B48u);
    ctx->pc = 0x1B2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B40u;
    // 0x1b2b44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2B40u, 0x1B2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B48u;
label_1b2b48:
    // 0x1b2b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b4c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b2b50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2B50u;
    SET_GPR_U32(ctx, 31, 0x1B2B58u);
    ctx->pc = 0x1B2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B50u;
    // 0x1b2b54: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2B50u, 0x1B2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B58u;
label_1b2b58:
    // 0x1b2b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b5c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b2b60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2B60u;
    SET_GPR_U32(ctx, 31, 0x1B2B68u);
    ctx->pc = 0x1B2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B60u;
    // 0x1b2b64: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2B60u, 0x1B2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B68u;
label_1b2b68:
    // 0x1b2b68: 0x8e4778c8  lw          $a3, 0x78C8($s2)
    ctx->pc = 0x1b2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b2b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b70: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b2b74: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b2b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b2b78: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b2b78u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b2b7c: 0x9e4678cc  lwu         $a2, 0x78CC($s2)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1b2b80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b2b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b2b84: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b2b84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b2b88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2b8c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b2b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b2b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2b94: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1b2b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1b2b98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2b9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b2b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2ba0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b2ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b2ba4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b2ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2ba8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b2ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b2bac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2BACu;
    SET_GPR_U32(ctx, 31, 0x1B2BB4u);
    ctx->pc = 0x1B2BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BACu;
    // 0x1b2bb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2BACu, 0x1B2BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BB4u;
label_1b2bb4:
    // 0x1b2bb4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B2BB4u;
    SET_GPR_U32(ctx, 31, 0x1B2BBCu);
    ctx->pc = 0x1B2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BB4u;
    // 0x1b2bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B2BB4u, 0x1B2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BBCu;
label_1b2bbc:
    // 0x1b2bbc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b2bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2bc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bc4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b2bc8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b2bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b2bcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b2bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2bd0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b2bd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2bd8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b2bd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b2bdc: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b2bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b2be0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2BE0u;
    SET_GPR_U32(ctx, 31, 0x1B2BE8u);
    ctx->pc = 0x1B2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BE0u;
    // 0x1b2be4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2BE0u, 0x1B2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BE8u;
label_1b2be8:
    // 0x1b2be8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b2be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2BECu;
    SET_GPR_U32(ctx, 31, 0x1B2BF4u);
    ctx->pc = 0x1B2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BECu;
    // 0x1b2bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2BECu, 0x1B2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2BF4u;
label_1b2bf4:
    // 0x1b2bf4: 0xdfa30100  ld          $v1, 0x100($sp)
    ctx->pc = 0x1b2bf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2bf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2bfc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2c00: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b2c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c04: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1b2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1b2c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c0c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1b2c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1b2c10: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1b2c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1b2c14: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2C14u;
    SET_GPR_U32(ctx, 31, 0x1B2C1Cu);
    ctx->pc = 0x1B2C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C14u;
    // 0x1b2c18: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2C14u, 0x1B2C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C1Cu;
label_1b2c1c:
    // 0x1b2c1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b2c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2c20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b2c24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2c28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2c2c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b2c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b2c30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2c34: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1b2c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1b2c38: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1b2c38u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1b2c3c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b2c3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b2c40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b2c44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2c4c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b2c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b2c50: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b2c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2c54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2C54u;
    SET_GPR_U32(ctx, 31, 0x1B2C5Cu);
    ctx->pc = 0x1B2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C54u;
    // 0x1b2c58: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2C54u, 0x1B2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C5Cu;
label_1b2c5c:
    // 0x1b2c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2C64u;
    SET_GPR_U32(ctx, 31, 0x1B2C6Cu);
    ctx->pc = 0x1B2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C64u;
    // 0x1b2c68: 0x2406025c  addiu       $a2, $zero, 0x25C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2C64u, 0x1B2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C6Cu;
label_1b2c6c:
    // 0x1b2c6c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1b2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b2c70: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b2c74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b2c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c7c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b2c80: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2C80u;
    SET_GPR_U32(ctx, 31, 0x1B2C88u);
    ctx->pc = 0x1B2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C80u;
    // 0x1b2c84: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2C80u, 0x1B2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C88u;
label_1b2c88:
    // 0x1b2c88: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b2c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c90: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2c94: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b2c98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2C98u;
    SET_GPR_U32(ctx, 31, 0x1B2CA0u);
    ctx->pc = 0x1B2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C98u;
    // 0x1b2c9c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2C98u, 0x1B2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CA0u;
label_1b2ca0:
    // 0x1b2ca0: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1b2ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b2ca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2ca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2cb4: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b2cb8: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b2cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b2cbc: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b2cc0: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b2cc4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b2cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b2cc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b2ccc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b2cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b2cd0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b2cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b2cd4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b2cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2cd8: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b2cdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b2cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2ce0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2ce4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b2ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b2ce8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2cec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2CECu;
    SET_GPR_U32(ctx, 31, 0x1B2CF4u);
    ctx->pc = 0x1B2CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CECu;
    // 0x1b2cf0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2CECu, 0x1B2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CF4u;
label_1b2cf4:
    // 0x1b2cf4: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1b2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1b2cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2cfc: 0x9e4678c8  lwu         $a2, 0x78C8($s2)
    ctx->pc = 0x1b2cfcu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1b2d00: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b2d04: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1b2d04u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1b2d08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2d0c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1b2d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1b2d10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2d14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2d18: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x1b2d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x1b2d1c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b2d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b2d20: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b2d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b2d24: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b2d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b2d28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2D28u;
    SET_GPR_U32(ctx, 31, 0x1B2D30u);
    ctx->pc = 0x1B2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D28u;
    // 0x1b2d2c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2D28u, 0x1B2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D30u;
label_1b2d30:
    // 0x1b2d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b2d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2d3c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B2D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D44u);
    ctx->pc = 0x1B2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D3Cu;
    // 0x1b2d40: 0x24070052  addiu       $a3, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B2D3Cu, 0x1B2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D44u;
label_1b2d44:
    // 0x1b2d44: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x1b2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2d48: 0xc070524  jal         func_1C1490
    ctx->pc = 0x1B2D48u;
    SET_GPR_U32(ctx, 31, 0x1B2D50u);
    ctx->pc = 0x1B2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2D48u;
    // 0x1b2d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1490u, 0x1B2D48u, 0x1B2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D50u;
label_1b2d50:
    // 0x1b2d50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b2d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d54: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1b2d58: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1b2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1b2d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d60: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x1b2d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b2d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d68: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1b2d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b2d6c: 0x658004  sllv        $s0, $a1, $v1
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2d70: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b2d74: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1b2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b2d78: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1b2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x1b2d7c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1b2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b2d80: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2d84: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x1b2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2d88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2d8c: 0xae260060  sw          $a2, 0x60($s1)
    ctx->pc = 0x1b2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 6));
    // 0x1b2d90: 0x8e270064  lw          $a3, 0x64($s1)
    ctx->pc = 0x1b2d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1b2d94: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b2d98: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1b2d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1b2d9c: 0xae260064  sw          $a2, 0x64($s1)
    ctx->pc = 0x1b2d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 6));
    // 0x1b2da0: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x1b2da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b2da4: 0x8e260064  lw          $a2, 0x64($s1)
    ctx->pc = 0x1b2da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1b2da8: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1b2da8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1b2dac: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1b2dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1b2db0: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1b2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1b2db4: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1b2db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1b2db8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b2dbc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2DBCu;
    SET_GPR_U32(ctx, 31, 0x1B2DC4u);
    ctx->pc = 0x1B2DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DBCu;
    // 0x1b2dc0: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2DBCu, 0x1B2DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DC4u;
label_1b2dc4:
    // 0x1b2dc4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b2dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dcc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1b2dd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dd4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b2dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2dd8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2DD8u;
    SET_GPR_U32(ctx, 31, 0x1B2DE0u);
    ctx->pc = 0x1B2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DD8u;
    // 0x1b2ddc: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2DD8u, 0x1B2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE0u;
label_1b2de0:
    // 0x1b2de0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b2de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2de8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1b2dec: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b2decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2df0: 0xc070840  jal         func_1C2100
    ctx->pc = 0x1B2DF0u;
    SET_GPR_U32(ctx, 31, 0x1B2DF8u);
    ctx->pc = 0x1B2DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DF0u;
    // 0x1b2df4: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2100u, 0x1B2DF0u, 0x1B2DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DF8u;
label_1b2df8:
    // 0x1b2df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2dfc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2DFCu;
    SET_GPR_U32(ctx, 31, 0x1B2E04u);
    ctx->pc = 0x1B2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DFCu;
    // 0x1b2e00: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2DFCu, 0x1B2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E04u;
label_1b2e04:
    // 0x1b2e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e08: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1b2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1b2e0c: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b2e10: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b2e14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b2e14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e20: 0x0  nop
    ctx->pc = 0x1b2e20u;
    // NOP
    // 0x1b2e24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b2e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e34: 0x0  nop
    ctx->pc = 0x1b2e34u;
    // NOP
    // 0x1b2e38: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1b2e38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b2e3c: 0x0  nop
    ctx->pc = 0x1b2e3cu;
    // NOP
    // 0x1b2e40: 0x0  nop
    ctx->pc = 0x1b2e40u;
    // NOP
    // 0x1b2e44: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2E44u;
    SET_GPR_U32(ctx, 31, 0x1B2E4Cu);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2E44u, 0x1B2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E4Cu;
label_1b2e4c:
    // 0x1b2e4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e50: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1b2e54: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1b2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b2e58: 0x10b023  negu        $s6, $s0
    ctx->pc = 0x1b2e58u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1b2e5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b2e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e68: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1b2e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2e6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2e70: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b2e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e78: 0x0  nop
    ctx->pc = 0x1b2e78u;
    // NOP
    // 0x1b2e7c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1b2e7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b2e80: 0x0  nop
    ctx->pc = 0x1b2e80u;
    // NOP
    // 0x1b2e84: 0x0  nop
    ctx->pc = 0x1b2e84u;
    // NOP
    // 0x1b2e88: 0x2ac100e1  slti        $at, $s6, 0xE1
    ctx->pc = 0x1b2e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b2e8c: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B2E8Cu;
    {
        const bool branch_taken_0x1b2e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e8c) {
            ctx->pc = 0x1B3130u;
            goto label_1b3130;
        }
    }
    ctx->pc = 0x1B2E94u;
    // 0x1b2e94: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2e98: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1b2e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b2e9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2ea0: 0x3703c  dsll32      $t6, $v1, 0
    ctx->pc = 0x1b2ea0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2ea4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1b2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b2ea8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b2eac: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1b2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1b2eb0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1b2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b2eb4: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x1b2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x1b2eb8: 0x26900  sll         $t5, $v0, 4
    ctx->pc = 0x1b2eb8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b2ebc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b2ec0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2ec4: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1b2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1b2ec8: 0x26100  sll         $t4, $v0, 4
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b2ecc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b2ed0: 0x2442f010  addiu       $v0, $v0, -0xFF0
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1b2ed4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1b2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1b2ed8:
    // 0x1b2ed8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b2edc: 0x8fb80130  lw          $t8, 0x130($sp)
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b2ee0: 0x2c2a021  addu        $s4, $s6, $v0
    ctx->pc = 0x1b2ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1b2ee4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2ee8: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x1b2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b2eec: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x1b2eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b2ef0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1b2ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b2ef4: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1b2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1b2ef8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b2efc: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x1b2efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b2f00: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1b2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b2f04: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1b2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2f08: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1b2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1b2f0c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1b2f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b2f10: 0x44c821  addu        $t9, $v0, $a0
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b2f14: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1b2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b2f18: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2f1c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1b2f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b2f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2f24: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b2f28: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f2c: 0x28410201  slti        $at, $v0, 0x201
    ctx->pc = 0x1b2f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1b2f30: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x1B2F30u;
    {
        const bool branch_taken_0x1b2f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F30u;
        // 0x1b2f34: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f30) {
            ctx->pc = 0x1B30D8u;
            goto label_1b30d8;
        }
    }
    ctx->pc = 0x1B2F38u;
    // 0x1b2f38: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1b2f3c: 0x26830790  addiu       $v1, $s4, 0x790
    ctx->pc = 0x1b2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x1b2f40: 0x244b0008  addiu       $t3, $v0, 0x8
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b2f44: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2f48: 0x25438  dsll        $t2, $v0, 16
    ctx->pc = 0x1b2f48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 16);
    // 0x1b2f4c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2f50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b2f54: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1b2f58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b2f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b2f5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2f60: 0xffa20120  sd          $v0, 0x120($sp)
    ctx->pc = 0x1b2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 2));
    // 0x1b2f64: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x1b2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1b2f68: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1b2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b2f6c: 0x0  nop
    ctx->pc = 0x1b2f6cu;
    // NOP
label_1b2f70:
    // 0x1b2f70: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1b2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b2f74: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x1b2f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1b2f78: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1b2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b2f7c: 0x1e21823  subu        $v1, $t7, $v0
    ctx->pc = 0x1b2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1b2f80: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b2f84: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x1b2f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b2f88: 0x24490008  addiu       $t1, $v0, 0x8
    ctx->pc = 0x1b2f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b2f8c: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x1b2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1b2f90: 0x24a20700  addiu       $v0, $a1, 0x700
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1792));
    // 0x1b2f94: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1b2f94u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2f98: 0x3242821  addu        $a1, $t9, $a0
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x1b2f9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b2fa0: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1b2fa0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2fa4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1b2fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1b2fa8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b2fac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1b2facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b2fb0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b2fb4: 0xe8f023  subu        $fp, $a3, $t0
    ctx->pc = 0x1b2fb4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b2fb8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1b2fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b2fbc: 0x3232021  addu        $a0, $t9, $v1
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x1b2fc0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1b2fc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2fc4: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1b2fc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2fc8: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b2fcc: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1b2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1b2fd0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1b2fd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2fd4: 0x4a1825  or          $v1, $v0, $t2
    ctx->pc = 0x1b2fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1b2fd8: 0x1c31825  or          $v1, $t6, $v1
    ctx->pc = 0x1b2fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x1b2fdc: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x1b2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x1b2fe0: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1b2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1b2fe4: 0xdfa30120  ld          $v1, 0x120($sp)
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b2fe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b2fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2fec: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b2ff0: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x1b2ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1b2ff4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1b2ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2ff8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1b2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1b2ffc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1b2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b3000: 0x8e57783c  lw          $s7, 0x783C($s2)
    ctx->pc = 0x1b3000u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3004: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b3004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b3008: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1b300c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b300cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3010: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x1b3010u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1b3014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3018: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1b3018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b301c: 0x2b010201  slti        $at, $t8, 0x201
    ctx->pc = 0x1b301cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1b3020: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b3020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b3024: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1b3024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1b3028: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1b3028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b302c: 0x8e43783c  lw          $v1, 0x783C($s2)
    ctx->pc = 0x1b302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3030: 0x709e2018  mult1       $a0, $a0, $fp
    ctx->pc = 0x1b3030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 30); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b3034: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1b3038: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1b3038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1b303c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b303cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3040: 0x0  nop
    ctx->pc = 0x1b3040u;
    // NOP
    // 0x1b3044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3048: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b304c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b3050: 0x8e44783c  lw          $a0, 0x783C($s2)
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3054: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1b3054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b3058: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1b3058u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1b305c: 0x8e43783c  lw          $v1, 0x783C($s2)
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3060: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b3064: 0xae43783c  sw          $v1, 0x783C($s2)
    ctx->pc = 0x1b3064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 3));
    // 0x1b3068: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1b3068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b306c: 0x8e43783c  lw          $v1, 0x783C($s2)
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3070: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1b3070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3074: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b3074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b3078: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1b307c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b307cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3080: 0x0  nop
    ctx->pc = 0x1b3080u;
    // NOP
    // 0x1b3084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3088: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b3088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b308c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b308cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b3090: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b3090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b3094: 0x8e43783c  lw          $v1, 0x783C($s2)
    ctx->pc = 0x1b3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3098: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1b3098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b309c: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1b309cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b30a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b30a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b30a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b30a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b30ac: 0x0  nop
    ctx->pc = 0x1b30acu;
    // NOP
    // 0x1b30b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b30b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b30b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b30b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30b8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b30b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b30bc: 0x8e43783c  lw          $v1, 0x783C($s2)
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b30c0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1b30c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b30c4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1b30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1b30c8: 0x8e42783c  lw          $v0, 0x783C($s2)
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b30cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b30d0: 0x1420ffa7  bnez        $at, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1B30D0u;
    {
        const bool branch_taken_0x1b30d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D0u;
        // 0x1b30d4: 0xae42783c  sw          $v0, 0x783C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d0) {
            ctx->pc = 0x1B2F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2f70;
        }
    }
    ctx->pc = 0x1B30D8u;
label_1b30d8:
    // 0x1b30d8: 0x26820790  addiu       $v0, $s4, 0x790
    ctx->pc = 0x1b30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x1b30dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b30e0: 0x8e44783c  lw          $a0, 0x783C($s2)
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b30e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b30e8: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1b30ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b30f0: 0x2ac100e1  slti        $at, $s6, 0xE1
    ctx->pc = 0x1b30f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b30f4: 0x1a21825  or          $v1, $t5, $v0
    ctx->pc = 0x1b30f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x1b30f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b30fc: 0x1c32825  or          $a1, $t6, $v1
    ctx->pc = 0x1b30fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x1b3100: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x1b3100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x1b3104: 0x1c21825  or          $v1, $t6, $v0
    ctx->pc = 0x1b3104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1b3108: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1b3108u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1b310c: 0x8e42783c  lw          $v0, 0x783C($s2)
    ctx->pc = 0x1b310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3110: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b3110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3114: 0xae42783c  sw          $v0, 0x783C($s2)
    ctx->pc = 0x1b3114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 2));
    // 0x1b3118: 0x8e42783c  lw          $v0, 0x783C($s2)
    ctx->pc = 0x1b3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b311c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1b311cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1b3120: 0x8e42783c  lw          $v0, 0x783C($s2)
    ctx->pc = 0x1b3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1b3124: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3128: 0x1420ff6b  bnez        $at, . + 4 + (-0x95 << 2)
    ctx->pc = 0x1B3128u;
    {
        const bool branch_taken_0x1b3128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3128u;
        // 0x1b312c: 0xae42783c  sw          $v0, 0x783C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3128) {
            ctx->pc = 0x1B2ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2ed8;
        }
    }
    ctx->pc = 0x1B3130u;
label_1b3130:
    // 0x1b3130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b313c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B313Cu;
    SET_GPR_U32(ctx, 31, 0x1B3144u);
    ctx->pc = 0x1B3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B313Cu;
    // 0x1b3140: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B313Cu, 0x1B3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3144u;
label_1b3144:
    // 0x1b3144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3148: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B3148u;
    SET_GPR_U32(ctx, 31, 0x1B3150u);
    ctx->pc = 0x1B314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3148u;
    // 0x1b314c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B3148u, 0x1B3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3150u;
label_1b3150:
    // 0x1b3150: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3154: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1b3154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3158: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b3158u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b315c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b315cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3160: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b3160u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3164: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b3164u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3168: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b3168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b316c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b316cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3170: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b3170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3174: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b3174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3178: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b317c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B317Cu;
        // 0x1b3180: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3184u;
}
