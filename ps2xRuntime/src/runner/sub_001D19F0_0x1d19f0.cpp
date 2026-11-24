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

// Function: sub_001D19F0
// Address: 0x1d19f0 - 0x1d285c
void sub_001D19F0_0x1d19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D19F0_0x1d19f0");
#endif

    switch (ctx->pc) {
        case 0x1d1a9cu: goto label_1d1a9c;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1ce8u: goto label_1d1ce8;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d21c8u: goto label_1d21c8;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d2824u: goto label_1d2824;
        default: break;
    }

    ctx->pc = 0x1d19f0u;

    // 0x1d19f0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x1d19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x1d19f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d19f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d19fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d19fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d1a00: 0x7f183  sra         $fp, $a3, 6
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1d1a04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d1a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d1a08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d1a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d1a0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d1a10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d1a10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1a18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d1a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1a20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1d1a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1a28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1a30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d1a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a34: 0xafa5024c  sw          $a1, 0x24C($sp)
    ctx->pc = 0x1d1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 5));
    // 0x1d1a38: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x1d1a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a3c: 0xafa90248  sw          $t1, 0x248($sp)
    ctx->pc = 0x1d1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 9));
    // 0x1d1a40: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A40u;
    {
        const bool branch_taken_0x1d1a40 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1D1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A40u;
        // 0x1d1a44: 0xafaa0244  sw          $t2, 0x244($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a40) {
            ctx->pc = 0x1D1A50u;
            goto label_1d1a50;
        }
    }
    ctx->pc = 0x1D1A48u;
    // 0x1d1a48: 0x2682003f  addiu       $v0, $s4, 0x3F
    ctx->pc = 0x1d1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 63));
    // 0x1d1a4c: 0x2f183  sra         $fp, $v0, 6
    ctx->pc = 0x1d1a4cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 6));
label_1d1a50:
    // 0x1d1a50: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x1d1a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x1d1a54: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x1d1a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1d1a58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1a58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1a5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d1a64: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1d1a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1d1a68: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x1d1a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x1d1a6c: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x1d1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1d1a70: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d1a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d1a74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d1a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1a78: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1d1a78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d1a7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1a7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1a80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1a84: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1d1a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1d1a88: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x1d1a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x1d1a8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d1a90: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1d1a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1d1a94: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1A94u;
    SET_GPR_U32(ctx, 31, 0x1D1A9Cu);
    ctx->pc = 0x1D1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A94u;
    // 0x1d1a98: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1A94u, 0x1D1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A9Cu;
label_1d1a9c:
    // 0x1d1a9c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1aa0: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x1d1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1aa4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1d1aa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d1aac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d1aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d1ab0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d1ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d1ab4: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D1AB4u;
    SET_GPR_U32(ctx, 31, 0x1D1ABCu);
    ctx->pc = 0x1D1AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB4u;
    // 0x1d1ab8: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D1AB4u, 0x1D1ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ABCu;
label_1d1abc:
    // 0x1d1abc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d1abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1ac0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1ac4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d1ac4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d1ac8: 0x42eb8  dsll        $a1, $a0, 26
    ctx->pc = 0x1d1ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 26);
    // 0x1d1acc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1ACCu;
    {
        const bool branch_taken_0x1d1acc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1D1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ACCu;
        // 0x1d1ad0: 0x21983  sra         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1acc) {
            ctx->pc = 0x1D1ADCu;
            goto label_1d1adc;
        }
    }
    ctx->pc = 0x1D1AD4u;
    // 0x1d1ad4: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1d1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1d1ad8: 0x21983  sra         $v1, $v0, 6
    ctx->pc = 0x1d1ad8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 6));
label_1d1adc:
    // 0x1d1adc: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x1d1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1ae0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1ae4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1ae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1ae8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1d1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1d1aec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1af0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1d1af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1d1af4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d1af8: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D1AF8u;
    SET_GPR_U32(ctx, 31, 0x1D1B00u);
    ctx->pc = 0x1D1AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF8u;
    // 0x1d1afc: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D1AF8u, 0x1D1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B00u;
label_1d1b00:
    // 0x1d1b00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1b04: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1d1b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d1b08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1b0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1b10: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1d1b14: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1d1b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1d1b18: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x1d1b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1d1b1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d1b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1b20: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d1b24: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d1b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d1b28: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d1b2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d1b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1b30: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1b34: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x1d1b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d1b38: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1B38u;
    SET_GPR_U32(ctx, 31, 0x1D1B40u);
    ctx->pc = 0x1D1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B38u;
    // 0x1d1b3c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1B38u, 0x1D1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B40u;
label_1d1b40:
    // 0x1d1b40: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1b44: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1b48: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1b4c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1d1b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1d1b50: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1b54: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1d1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d1b58: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1B58u;
    SET_GPR_U32(ctx, 31, 0x1D1B60u);
    ctx->pc = 0x1D1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B58u;
    // 0x1d1b5c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1B58u, 0x1D1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B60u;
label_1d1b60:
    // 0x1d1b60: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1b64: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1d1b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1d1b68: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1b6c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1d1b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x1d1b70: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1B70u;
    SET_GPR_U32(ctx, 31, 0x1D1B78u);
    ctx->pc = 0x1D1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B70u;
    // 0x1d1b74: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1B70u, 0x1D1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B78u;
label_1d1b78:
    // 0x1d1b78: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1b7c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d1b80: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1d1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1b84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1b88: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d1b8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d1b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1b90: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d1b94: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1B94u;
    SET_GPR_U32(ctx, 31, 0x1D1B9Cu);
    ctx->pc = 0x1D1B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B94u;
    // 0x1d1b98: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1B94u, 0x1D1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B9Cu;
label_1d1b9c:
    // 0x1d1b9c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1ba0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1d1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d1ba4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1bac: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d1bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d1bb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d1bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1bb4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1d1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1d1bb8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1d1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1d1bbc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1BBCu;
    SET_GPR_U32(ctx, 31, 0x1D1BC4u);
    ctx->pc = 0x1D1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BBCu;
    // 0x1d1bc0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1BBCu, 0x1D1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BC4u;
label_1d1bc4:
    // 0x1d1bc4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1bc8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d1bcc: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1bd0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1bd4: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d1bd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1bdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1be0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1be4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1d1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1d1be8: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x1d1be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1d1bec: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1bf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1bf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1bf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1bf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1bfc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d1bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1d1c00: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1C00u;
    SET_GPR_U32(ctx, 31, 0x1D1C08u);
    ctx->pc = 0x1D1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C00u;
    // 0x1d1c04: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1C00u, 0x1D1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C08u;
label_1d1c08:
    // 0x1d1c08: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1c0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d1c10: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1c14: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1d1c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d1c18: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1C18u;
    SET_GPR_U32(ctx, 31, 0x1D1C20u);
    ctx->pc = 0x1D1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C18u;
    // 0x1d1c1c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1C18u, 0x1D1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C20u;
label_1d1c20:
    // 0x1d1c20: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1c24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1c28: 0x120201ed  beq         $s0, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x1D1C28u;
    {
        const bool branch_taken_0x1d1c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1c28) {
            ctx->pc = 0x1D23E0u;
            goto label_1d23e0;
        }
    }
    ctx->pc = 0x1D1C30u;
    // 0x1d1c30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1c34: 0x120200d6  beq         $s0, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x1D1C34u;
    {
        const bool branch_taken_0x1d1c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C34u;
        // 0x1d1c38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c34) {
            ctx->pc = 0x1D1F90u;
            goto label_1d1f90;
        }
    }
    ctx->pc = 0x1D1C3Cu;
    // 0x1d1c3c: 0x12020092  beq         $s0, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1D1C3Cu;
    {
        const bool branch_taken_0x1d1c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1c3c) {
            ctx->pc = 0x1D1E88u;
            goto label_1d1e88;
        }
    }
    ctx->pc = 0x1D1C44u;
    // 0x1d1c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1c48: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D1C48u;
    {
        const bool branch_taken_0x1d1c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1c48) {
            ctx->pc = 0x1D1D70u;
            goto label_1d1d70;
        }
    }
    ctx->pc = 0x1D1C50u;
    // 0x1d1c50: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1C50u;
    {
        const bool branch_taken_0x1d1c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c50) {
            ctx->pc = 0x1D1C60u;
            goto label_1d1c60;
        }
    }
    ctx->pc = 0x1D1C58u;
    // 0x1d1c58: 0x100002ed  b           . + 4 + (0x2ED << 2)
    ctx->pc = 0x1D1C58u;
    {
        const bool branch_taken_0x1d1c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c58) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1C60u;
label_1d1c60:
    // 0x1d1c60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c64: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1C64u;
    {
        const bool branch_taken_0x1d1c64 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1D1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C64u;
        // 0x1d1c68: 0x14b943  sra         $s7, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c64) {
            ctx->pc = 0x1D1C74u;
            goto label_1d1c74;
        }
    }
    ctx->pc = 0x1D1C6Cu;
    // 0x1d1c6c: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x1d1c70: 0x2b943  sra         $s7, $v0, 5
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 5));
label_1d1c74:
    // 0x1d1c74: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1d1c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d1c78: 0x102002e5  beqz        $at, . + 4 + (0x2E5 << 2)
    ctx->pc = 0x1D1C78u;
    {
        const bool branch_taken_0x1d1c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c78) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1C80u;
    // 0x1d1c80: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1c84: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1d1c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d1c88: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d1c88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1c90: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1c94: 0x247e0009  addiu       $fp, $v1, 0x9
    ctx->pc = 0x1d1c94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1d1c98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1c9c: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1d1ca0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d1ca4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d1ca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1cac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1cb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1cb4: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1d1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
label_1d1cb8:
    // 0x1d1cb8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1cbc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1cc0: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1d1cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d1cc4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1d1cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d1cc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1cc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1ccc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1cccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1cd0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d1cd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d1cd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1cdc: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1d1cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d1ce0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1CE0u;
    SET_GPR_U32(ctx, 31, 0x1D1CE8u);
    ctx->pc = 0x1D1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CE0u;
    // 0x1d1ce4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1CE0u, 0x1D1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CE8u;
label_1d1ce8:
    // 0x1d1ce8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1cec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d1cf0: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d1cf4: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d1cf8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1cfc: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d1cfcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1d00: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d1d04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1d08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1d0c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d1d0cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1d10: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d1d14: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d1d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1d18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d1d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1d20: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d1d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d1d24: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x1d1d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1d28: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1d2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d1d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d30: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1d34: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d1d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d38: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d1d3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d1d3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d40: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d1d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d1d44: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D1D44u;
    SET_GPR_U32(ctx, 31, 0x1D1D4Cu);
    ctx->pc = 0x1D1D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D44u;
    // 0x1d1d48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D1D44u, 0x1D1D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D4Cu;
label_1d1d4c:
    // 0x1d1d4c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d54: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x1d1d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d1d58: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d1d5c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D1D5Cu;
    {
        const bool branch_taken_0x1d1d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D5Cu;
        // 0x1d1d60: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d5c) {
            ctx->pc = 0x1D1CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1cb8;
        }
    }
    ctx->pc = 0x1D1D64u;
    // 0x1d1d64: 0x100002aa  b           . + 4 + (0x2AA << 2)
    ctx->pc = 0x1D1D64u;
    {
        const bool branch_taken_0x1d1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d64) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1D6Cu;
    // 0x1d1d6c: 0x0  nop
    ctx->pc = 0x1d1d6cu;
    // NOP
label_1d1d70:
    // 0x1d1d70: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1d74: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1d78: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d1d7c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D84u);
    ctx->pc = 0x1D1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D7Cu;
    // 0x1d1d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1D7Cu, 0x1D1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D84u;
label_1d1d84:
    // 0x1d1d84: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1d1d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d1d88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1d8c: 0x102002a0  beqz        $at, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x1D1D8Cu;
    {
        const bool branch_taken_0x1d1d8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D8Cu;
        // 0x1d1d90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d8c) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1D94u;
    // 0x1d1d94: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1d98: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d1d9c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d1d9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1da0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1da4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1da8: 0x24770009  addiu       $s7, $v1, 0x9
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1d1dac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1db0: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1d1db4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1d1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1d1db8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d1dbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1dc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1dc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1dc8: 0xffa20120  sd          $v0, 0x120($sp)
    ctx->pc = 0x1d1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 2));
    // 0x1d1dcc: 0x0  nop
    ctx->pc = 0x1d1dccu;
    // NOP
label_1d1dd0:
    // 0x1d1dd0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1dd4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1dd8: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1d1dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d1ddc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1d1ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1d1de0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1de0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1de4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1de8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d1dec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d1df0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1df4: 0xdfa20120  ld          $v0, 0x120($sp)
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d1df8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1DF8u;
    SET_GPR_U32(ctx, 31, 0x1D1E00u);
    ctx->pc = 0x1D1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DF8u;
    // 0x1d1dfc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1DF8u, 0x1D1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E00u;
label_1d1e00:
    // 0x1d1e00: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1e04: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d1e08: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d1e0c: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d1e10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1e14: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d1e14u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1e18: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d1e1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1e20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1e24: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d1e24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1e28: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d1e2c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d1e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1e30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d1e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1e38: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d1e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d1e3c: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d1e40: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1e44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d1e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e48: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1e4c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1d1e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e50: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d1e54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d1e54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e58: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d1e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d1e5c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D1E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1E64u);
    ctx->pc = 0x1D1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E5Cu;
    // 0x1d1e60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D1E5Cu, 0x1D1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E64u;
label_1d1e64:
    // 0x1d1e64: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1e68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1e6c: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x1d1e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d1e70: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d1e74: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D1E74u;
    {
        const bool branch_taken_0x1d1e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E74u;
        // 0x1d1e78: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e74) {
            ctx->pc = 0x1D1DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1dd0;
        }
    }
    ctx->pc = 0x1D1E7Cu;
    // 0x1d1e7c: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x1D1E7Cu;
    {
        const bool branch_taken_0x1d1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e7c) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1E84u;
    // 0x1d1e84: 0x0  nop
    ctx->pc = 0x1d1e84u;
    // NOP
label_1d1e88:
    // 0x1d1e88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e8c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1E8Cu;
    {
        const bool branch_taken_0x1d1e8c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1D1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E8Cu;
        // 0x1d1e90: 0x14b943  sra         $s7, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e8c) {
            ctx->pc = 0x1D1E9Cu;
            goto label_1d1e9c;
        }
    }
    ctx->pc = 0x1D1E94u;
    // 0x1d1e94: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x1d1e98: 0x2b943  sra         $s7, $v0, 5
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 5));
label_1d1e9c:
    // 0x1d1e9c: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1d1e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d1ea0: 0x1020025b  beqz        $at, . + 4 + (0x25B << 2)
    ctx->pc = 0x1D1EA0u;
    {
        const bool branch_taken_0x1d1ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ea0) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1EA8u;
    // 0x1d1ea8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1eac: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d1eb0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d1eb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1eb4: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1d1eb4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1eb8: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1ebc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1ec0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1d1ec4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d1ec8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1ecc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1ed0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1ed4: 0xffa20140  sd          $v0, 0x140($sp)
    ctx->pc = 0x1d1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 2));
label_1d1ed8:
    // 0x1d1ed8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1edc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1ee0: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1d1ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d1ee4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1d1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1d1ee8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1ee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1eec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1eecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1ef0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d1ef4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d1ef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d1ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d1efc: 0xdfa20140  ld          $v0, 0x140($sp)
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d1f00: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D1F00u;
    SET_GPR_U32(ctx, 31, 0x1D1F08u);
    ctx->pc = 0x1D1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F00u;
    // 0x1d1f04: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D1F00u, 0x1D1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F08u;
label_1d1f08:
    // 0x1d1f08: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1f0c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d1f10: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d1f14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1f18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1f1c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d1f1cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1f20: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d1f24: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d1f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1f28: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d1f2c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d1f2cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1f30: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d1f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d1f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1f40: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d1f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d1f44: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d1f48: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f50: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1f54: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d1f54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f58: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d1f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d1f5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d1f5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f60: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d1f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d1f64: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D1F64u;
    SET_GPR_U32(ctx, 31, 0x1D1F6Cu);
    ctx->pc = 0x1D1F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F64u;
    // 0x1d1f68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D1F64u, 0x1D1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F6Cu;
label_1d1f6c:
    // 0x1d1f6c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1f70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1f74: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x1d1f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d1f78: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d1f7c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D1F7Cu;
    {
        const bool branch_taken_0x1d1f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F7Cu;
        // 0x1d1f80: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f7c) {
            ctx->pc = 0x1D1ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ed8;
        }
    }
    ctx->pc = 0x1D1F84u;
    // 0x1d1f84: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x1D1F84u;
    {
        const bool branch_taken_0x1d1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1f84) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D1F8Cu;
    // 0x1d1f8c: 0x0  nop
    ctx->pc = 0x1d1f8cu;
    // NOP
label_1d1f90:
    // 0x1d1f90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f94: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1F94u;
    {
        const bool branch_taken_0x1d1f94 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1D1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F94u;
        // 0x1d1f98: 0x148943  sra         $s1, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f94) {
            ctx->pc = 0x1D1FA4u;
            goto label_1d1fa4;
        }
    }
    ctx->pc = 0x1D1F9Cu;
    // 0x1d1f9c: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x1d1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x1d1fa0: 0x28943  sra         $s1, $v0, 5
    ctx->pc = 0x1d1fa0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 5));
label_1d1fa4:
    // 0x1d1fa4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d1fa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d1fa8: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D1FA8u;
    {
        const bool branch_taken_0x1d1fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FA8u;
        // 0x1d1fac: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fa8) {
            ctx->pc = 0x1D2090u;
            goto label_1d2090;
        }
    }
    ctx->pc = 0x1D1FB0u;
    // 0x1d1fb0: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d1fb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1fb8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d1fb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1fc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1fc4: 0xffa20160  sd          $v0, 0x160($sp)
    ctx->pc = 0x1d1fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 2));
    // 0x1d1fc8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d1fcc: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1d1fccu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1fd0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d1fd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1fd8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1d1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1d1fdc: 0x0  nop
    ctx->pc = 0x1d1fdcu;
    // NOP
label_1d1fe0:
    // 0x1d1fe0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1fe4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d1fe8: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d1fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d1fec: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d1fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d1ff0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d1ff4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d1ff8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d1ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d1ffc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d1ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2004: 0xdfa20160  ld          $v0, 0x160($sp)
    ctx->pc = 0x1d2004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d2008: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2008u;
    SET_GPR_U32(ctx, 31, 0x1D2010u);
    ctx->pc = 0x1D200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2008u;
    // 0x1d200c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2008u, 0x1D2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2010u;
label_1d2010:
    // 0x1d2010: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2014: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d2014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d2018: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d201c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2020: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2024: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d2024u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2028: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d202c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d202cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2030: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2034: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d2034u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2038: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d203c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d203cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2040: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d2044: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2048: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d2048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d204c: 0x8fa80150  lw          $t0, 0x150($sp)
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d2050: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2058: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d205c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d205cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2060: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d2060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d2064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2068: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d2068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d206c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D206Cu;
    SET_GPR_U32(ctx, 31, 0x1D2074u);
    ctx->pc = 0x1D2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D206Cu;
    // 0x1d2070: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D206Cu, 0x1D2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2074u;
label_1d2074:
    // 0x1d2074: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d207c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d207cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d2080: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d2080u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d2084: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D2084u;
    {
        const bool branch_taken_0x1d2084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2084u;
        // 0x1d2088: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2084) {
            ctx->pc = 0x1D1FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1fe0;
        }
    }
    ctx->pc = 0x1D208Cu;
    // 0x1d208c: 0x0  nop
    ctx->pc = 0x1d208cu;
    // NOP
label_1d2090:
    // 0x1d2090: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2094: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2098: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d209c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d20a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d20a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d20a4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d20a8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A8u;
    // 0x1d20ac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D20A8u, 0x1D20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20B0u;
label_1d20b0:
    // 0x1d20b0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d20b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d20b4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d20b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d20b8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D20B8u;
    {
        const bool branch_taken_0x1d20b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B8u;
        // 0x1d20bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b8) {
            ctx->pc = 0x1D21A8u;
            goto label_1d21a8;
        }
    }
    ctx->pc = 0x1D20C0u;
    // 0x1d20c0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d20c4: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d20c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d20cc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d20ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d20d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d20d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d20d8: 0xffa20180  sd          $v0, 0x180($sp)
    ctx->pc = 0x1d20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 2));
    // 0x1d20dc: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d20e0: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d20e4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d20e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d20ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d20f0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1d20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1d20f4: 0x0  nop
    ctx->pc = 0x1d20f4u;
    // NOP
label_1d20f8:
    // 0x1d20f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d20fc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2100: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d2104: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d2104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2108: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d210c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d210cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2110: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2114: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d2114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2118: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d211c: 0xdfa20180  ld          $v0, 0x180($sp)
    ctx->pc = 0x1d211cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d2120: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2120u;
    SET_GPR_U32(ctx, 31, 0x1D2128u);
    ctx->pc = 0x1D2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2120u;
    // 0x1d2124: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2120u, 0x1D2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2128u;
label_1d2128:
    // 0x1d2128: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d212c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d212cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d2130: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d2134: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2138: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d213c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d213cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2140: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d2144: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d2144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2148: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d214c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d214cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2150: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d2154: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d215c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d215cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2160: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d2160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d2164: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d2168: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d216c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d216cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2170: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2174: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d2174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2178: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d2178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d217c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d217cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2180: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d2180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d2184: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D2184u;
    SET_GPR_U32(ctx, 31, 0x1D218Cu);
    ctx->pc = 0x1D2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2184u;
    // 0x1d2188: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D2184u, 0x1D218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D218Cu;
label_1d218c:
    // 0x1d218c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d218cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d2194: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d2194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d2198: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d219c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D219Cu;
    {
        const bool branch_taken_0x1d219c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D219Cu;
        // 0x1d21a0: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d219c) {
            ctx->pc = 0x1D20F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d20f8;
        }
    }
    ctx->pc = 0x1D21A4u;
    // 0x1d21a4: 0x0  nop
    ctx->pc = 0x1d21a4u;
    // NOP
label_1d21a8:
    // 0x1d21a8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d21ac: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d21acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d21b0: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1d21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d21b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d21b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d21b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d21bc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d21c0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D21C0u;
    SET_GPR_U32(ctx, 31, 0x1D21C8u);
    ctx->pc = 0x1D21C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21C0u;
    // 0x1d21c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D21C0u, 0x1D21C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21C8u;
label_1d21c8:
    // 0x1d21c8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d21c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d21cc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d21d0: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D21D0u;
    {
        const bool branch_taken_0x1d21d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21D0u;
        // 0x1d21d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21d0) {
            ctx->pc = 0x1D22C0u;
            goto label_1d22c0;
        }
    }
    ctx->pc = 0x1D21D8u;
    // 0x1d21d8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d21dc: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d21dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d21e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d21e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d21e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d21e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d21e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d21ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d21ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d21f0: 0xffa201a0  sd          $v0, 0x1A0($sp)
    ctx->pc = 0x1d21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 2));
    // 0x1d21f4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d21f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d21fc: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d2200: 0x247e0010  addiu       $fp, $v1, 0x10
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2208: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d220c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1d220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_1d2210:
    // 0x1d2210: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2214: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2218: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d221c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2220: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2220u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2224: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2228: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d222c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2234: 0xdfa201a0  ld          $v0, 0x1A0($sp)
    ctx->pc = 0x1d2234u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d2238: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2238u;
    SET_GPR_U32(ctx, 31, 0x1D2240u);
    ctx->pc = 0x1D223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2238u;
    // 0x1d223c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2238u, 0x1D2240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2240u;
label_1d2240:
    // 0x1d2240: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2244: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d2244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2248: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d224c: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d2250: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2254: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d2254u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2258: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d225c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2260: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2264: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d2264u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2268: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d226c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d226cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2270: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d2274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2278: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d2278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d227c: 0x8fa80190  lw          $t0, 0x190($sp)
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1d2280: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2284: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d2284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2288: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d228c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d228cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2290: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d2294: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2294u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2298: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d2298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d229c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D229Cu;
    SET_GPR_U32(ctx, 31, 0x1D22A4u);
    ctx->pc = 0x1D22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D229Cu;
    // 0x1d22a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D229Cu, 0x1D22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22A4u;
label_1d22a4:
    // 0x1d22a4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d22a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d22a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d22a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d22ac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d22acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d22b0: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d22b4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D22B4u;
    {
        const bool branch_taken_0x1d22b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22B4u;
        // 0x1d22b8: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b4) {
            ctx->pc = 0x1D2210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2210;
        }
    }
    ctx->pc = 0x1D22BCu;
    // 0x1d22bc: 0x0  nop
    ctx->pc = 0x1d22bcu;
    // NOP
label_1d22c0:
    // 0x1d22c0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d22c4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d22c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d22cc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d22d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d22d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d22d4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d22d8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D22D8u;
    SET_GPR_U32(ctx, 31, 0x1D22E0u);
    ctx->pc = 0x1D22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22D8u;
    // 0x1d22dc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D22D8u, 0x1D22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22E0u;
label_1d22e0:
    // 0x1d22e0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d22e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d22e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d22e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d22e8: 0x10200149  beqz        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x1D22E8u;
    {
        const bool branch_taken_0x1d22e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E8u;
        // 0x1d22ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e8) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D22F0u;
    // 0x1d22f0: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d22f4: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d22f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d22f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d22f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d22fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2300: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d2304: 0x247e0010  addiu       $fp, $v1, 0x10
    ctx->pc = 0x1d2304u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2308: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d230c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1d230cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x1d2310: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d2314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2318: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d231c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d2320: 0xffa201c0  sd          $v0, 0x1C0($sp)
    ctx->pc = 0x1d2320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 2));
    // 0x1d2324: 0x0  nop
    ctx->pc = 0x1d2324u;
    // NOP
label_1d2328:
    // 0x1d2328: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d232c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2330: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d2334: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d2334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d233c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d233cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2340: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2344: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d2344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2348: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d234c: 0xdfa201c0  ld          $v0, 0x1C0($sp)
    ctx->pc = 0x1d234cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d2350: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2350u;
    SET_GPR_U32(ctx, 31, 0x1D2358u);
    ctx->pc = 0x1D2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2350u;
    // 0x1d2354: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2350u, 0x1D2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2358u;
label_1d2358:
    // 0x1d2358: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d235c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d235cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d2360: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d2364: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2368: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d236c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d236cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2370: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d2374: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d2374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2378: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d237c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d237cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2380: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d2384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d238c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d238cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2390: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d2390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d2394: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x1d2394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1d2398: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d239c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d239cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d23a0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d23a4: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d23a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23a8: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d23ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d23acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23b0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d23b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d23b4: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D23B4u;
    SET_GPR_U32(ctx, 31, 0x1D23BCu);
    ctx->pc = 0x1D23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23B4u;
    // 0x1d23b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D23B4u, 0x1D23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23BCu;
label_1d23bc:
    // 0x1d23bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d23c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d23c4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d23c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d23c8: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d23cc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D23CCu;
    {
        const bool branch_taken_0x1d23cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23CCu;
        // 0x1d23d0: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23cc) {
            ctx->pc = 0x1D2328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2328;
        }
    }
    ctx->pc = 0x1D23D4u;
    // 0x1d23d4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x1D23D4u;
    {
        const bool branch_taken_0x1d23d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d23d4) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D23DCu;
    // 0x1d23dc: 0x0  nop
    ctx->pc = 0x1d23dcu;
    // NOP
label_1d23e0:
    // 0x1d23e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d23e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23e4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D23E4u;
    {
        const bool branch_taken_0x1d23e4 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1D23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E4u;
        // 0x1d23e8: 0x148943  sra         $s1, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23e4) {
            ctx->pc = 0x1D23F4u;
            goto label_1d23f4;
        }
    }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x1d23f0: 0x28943  sra         $s1, $v0, 5
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 5));
label_1d23f4:
    // 0x1d23f4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d23f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d23f8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D23F8u;
    {
        const bool branch_taken_0x1d23f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d23f8) {
            ctx->pc = 0x1D24E8u;
            goto label_1d24e8;
        }
    }
    ctx->pc = 0x1D2400u;
    // 0x1d2400: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1d2404: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d2408: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d2408u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d240c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2410: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1d2414: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1d2418: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d241c: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1d241cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1d2420: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d2424: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2428: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d242c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d2430: 0xffa201f0  sd          $v0, 0x1F0($sp)
    ctx->pc = 0x1d2430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 2));
    // 0x1d2434: 0x0  nop
    ctx->pc = 0x1d2434u;
    // NOP
label_1d2438:
    // 0x1d2438: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d243c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2440: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d2444: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2448: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2448u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d244c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d244cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2450: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2454: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d2454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2458: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d245c: 0xdfa201f0  ld          $v0, 0x1F0($sp)
    ctx->pc = 0x1d245cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1d2460: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2460u;
    SET_GPR_U32(ctx, 31, 0x1D2468u);
    ctx->pc = 0x1D2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2460u;
    // 0x1d2464: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2460u, 0x1D2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2468u;
label_1d2468:
    // 0x1d2468: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d246c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d246cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d2470: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d2474: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d2474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2478: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d247c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d247cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2480: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d2484: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2488: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d248c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d248cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2490: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d2494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d249c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d249cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d24a0: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d24a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d24a4: 0x8fa801d0  lw          $t0, 0x1D0($sp)
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d24a8: 0x8fa901e0  lw          $t1, 0x1E0($sp)
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d24ac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d24b0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d24b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d24b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24b8: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d24bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d24bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24c0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d24c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d24c4: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D24C4u;
    SET_GPR_U32(ctx, 31, 0x1D24CCu);
    ctx->pc = 0x1D24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24C4u;
    // 0x1d24c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D24C4u, 0x1D24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24CCu;
label_1d24cc:
    // 0x1d24cc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d24ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d24d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d24d4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d24d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d24d8: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d24dc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D24DCu;
    {
        const bool branch_taken_0x1d24dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24DCu;
        // 0x1d24e0: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24dc) {
            ctx->pc = 0x1D2438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2438;
        }
    }
    ctx->pc = 0x1D24E4u;
    // 0x1d24e4: 0x0  nop
    ctx->pc = 0x1d24e4u;
    // NOP
label_1d24e8:
    // 0x1d24e8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d24ec: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d24f0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1d24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1d24f4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1d24f8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d24fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d24fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2500: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1d2500u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d2504: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2508: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d250c: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x1d250cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d2510: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2510u;
    SET_GPR_U32(ctx, 31, 0x1D2518u);
    ctx->pc = 0x1D2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2510u;
    // 0x1d2514: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2510u, 0x1D2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2518u;
label_1d2518:
    // 0x1d2518: 0x1e183c  dsll32      $v1, $fp, 0
    ctx->pc = 0x1d2518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 0));
    // 0x1d251c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d251cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2520: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2520u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2528: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x1d2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x1d252c: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D252Cu;
    SET_GPR_U32(ctx, 31, 0x1D2534u);
    ctx->pc = 0x1D2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D252Cu;
    // 0x1d2530: 0xffa200a0  sd          $v0, 0xA0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D252Cu, 0x1D2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2534u;
label_1d2534:
    // 0x1d2534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2538: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1d253c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d253cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2540: 0x226b8  dsll        $a0, $v0, 26
    ctx->pc = 0x1d2540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 26);
    // 0x1d2544: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x1d2544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d2548: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x1d2548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d254c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2550: 0x448025  or          $s0, $v0, $a0
    ctx->pc = 0x1d2550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d2554: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D2554u;
    SET_GPR_U32(ctx, 31, 0x1D255Cu);
    ctx->pc = 0x1D2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2554u;
    // 0x1d2558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D2554u, 0x1D255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D255Cu;
label_1d255c:
    // 0x1d255c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2560: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d2564: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2568: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d256c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1d2570: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x1d2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x1d2574: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x1d2574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d257c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d257cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2580: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2584: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2584u;
    SET_GPR_U32(ctx, 31, 0x1D258Cu);
    ctx->pc = 0x1D2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2584u;
    // 0x1d2588: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2584u, 0x1D258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D258Cu;
label_1d258c:
    // 0x1d258c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2590: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d2594: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d2598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d259c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d259cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d25a0: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x1d25a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    // 0x1d25a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d25a8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d25ac: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1d25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d25b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d25b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d25b4: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1d25b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d25b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d25b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d25bc: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1d25bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1d25c0: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1d25c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1d25c4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d25c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1d25c8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D25C8u;
    SET_GPR_U32(ctx, 31, 0x1D25D0u);
    ctx->pc = 0x1D25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25C8u;
    // 0x1d25cc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D25C8u, 0x1D25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25D0u;
label_1d25d0:
    // 0x1d25d0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d25d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d25d4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d25d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d25d8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D25D8u;
    {
        const bool branch_taken_0x1d25d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25D8u;
        // 0x1d25dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25d8) {
            ctx->pc = 0x1D26B0u;
            goto label_1d26b0;
        }
    }
    ctx->pc = 0x1D25E0u;
    // 0x1d25e0: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1d25e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d25e4: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d25e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d25e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25ec: 0x13f100  sll         $fp, $s3, 4
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d25f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d25f4: 0xffa20210  sd          $v0, 0x210($sp)
    ctx->pc = 0x1d25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 2));
    // 0x1d25f8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1d25fc: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1d25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_1d2600:
    // 0x1d2600: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2604: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2608: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d260c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2610: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2614: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2618: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d261c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2624: 0xdfa20210  ld          $v0, 0x210($sp)
    ctx->pc = 0x1d2624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d2628: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2628u;
    SET_GPR_U32(ctx, 31, 0x1D2630u);
    ctx->pc = 0x1D262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2628u;
    // 0x1d262c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2628u, 0x1D2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2630u;
label_1d2630:
    // 0x1d2630: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2634: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d2634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d2638: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d263c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2640: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2644: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d2644u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2648: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d264c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d264cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d2650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d2650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d2654: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d2654u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2658: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d265c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d265cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2660: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d2664: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2668: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d2668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d266c: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d2670: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2678: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d267c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d267cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2680: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d2680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d2684: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2684u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2688: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d2688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d268c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D268Cu;
    SET_GPR_U32(ctx, 31, 0x1D2694u);
    ctx->pc = 0x1D2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D268Cu;
    // 0x1d2690: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D268Cu, 0x1D2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2694u;
label_1d2694:
    // 0x1d2694: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d269c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d269cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d26a0: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d26a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d26a4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D26A4u;
    {
        const bool branch_taken_0x1d26a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26A4u;
        // 0x1d26a8: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26a4) {
            ctx->pc = 0x1D2600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2600;
        }
    }
    ctx->pc = 0x1D26ACu;
    // 0x1d26ac: 0x0  nop
    ctx->pc = 0x1d26acu;
    // NOP
label_1d26b0:
    // 0x1d26b0: 0xdfa600b0  ld          $a2, 0xB0($sp)
    ctx->pc = 0x1d26b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d26b4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d26b8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1d26bc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D26BCu;
    SET_GPR_U32(ctx, 31, 0x1D26C4u);
    ctx->pc = 0x1D26C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26BCu;
    // 0x1d26c0: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D26BCu, 0x1D26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26C4u;
label_1d26c4:
    // 0x1d26c4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d26c8: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D26C8u;
    SET_GPR_U32(ctx, 31, 0x1D26D0u);
    ctx->pc = 0x1D26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26C8u;
    // 0x1d26cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D26C8u, 0x1D26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26D0u;
label_1d26d0:
    // 0x1d26d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d26d4: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1d26d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d26d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d26dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d26dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26e0: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x1d26e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x1d26e4: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x1d26e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d26e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d26ec: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x1D26ECu;
    SET_GPR_U32(ctx, 31, 0x1D26F4u);
    ctx->pc = 0x1D26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26ECu;
    // 0x1d26f0: 0x458025  or          $s0, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x1D26ECu, 0x1D26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26F4u;
label_1d26f4:
    // 0x1d26f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d26f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d26f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d26fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d26fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2700: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d2700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d2704: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1d2704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1d2708: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x1d2708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x1d270c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x1d270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d2714: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d2714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2718: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d271c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D271Cu;
    SET_GPR_U32(ctx, 31, 0x1D2724u);
    ctx->pc = 0x1D2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D271Cu;
    // 0x1d2720: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D271Cu, 0x1D2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2724u;
label_1d2724:
    // 0x1d2724: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d2724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d2728: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d272c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D272Cu;
    {
        const bool branch_taken_0x1d272c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D272Cu;
        // 0x1d2730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d272c) {
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D2734u;
    // 0x1d2734: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1d2734u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d2738: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d2738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d273c: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d2740: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d2740u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2744: 0x247e0010  addiu       $fp, $v1, 0x10
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d2748: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d2748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d274c: 0xffa20230  sd          $v0, 0x230($sp)
    ctx->pc = 0x1d274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 2));
    // 0x1d2750: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1d2754: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d2758: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x1d2758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x1d275c: 0x0  nop
    ctx->pc = 0x1d275cu;
    // NOP
label_1d2760:
    // 0x1d2760: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2764: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2768: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1d2768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1d276c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1d276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1d2770: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2774: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d2778: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d277c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d2780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2784: 0xdfa20230  ld          $v0, 0x230($sp)
    ctx->pc = 0x1d2784u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1d2788: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2788u;
    SET_GPR_U32(ctx, 31, 0x1D2790u);
    ctx->pc = 0x1D278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2788u;
    // 0x1d278c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2788u, 0x1D2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2790u;
label_1d2790:
    // 0x1d2790: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2794: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d2794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d2798: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x1d2798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
    // 0x1d279c: 0x27a20254  addiu       $v0, $sp, 0x254
    ctx->pc = 0x1d279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x1d27a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d27a4: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d27a4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d27a8: 0x27a20258  addiu       $v0, $sp, 0x258
    ctx->pc = 0x1d27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x1d27ac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d27acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d27b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d27b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d27b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d27b8: 0x27a2025c  addiu       $v0, $sp, 0x25C
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
    // 0x1d27bc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d27bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d27c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d27c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d27c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27c8: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1d27c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1d27cc: 0x8fa80220  lw          $t0, 0x220($sp)
    ctx->pc = 0x1d27ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1d27d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d27d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d27d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27d8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d27dc: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1d27dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e0: 0x27aa0250  addiu       $t2, $sp, 0x250
    ctx->pc = 0x1d27e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1d27e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d27e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1d27e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1d27ec: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1D27ECu;
    SET_GPR_U32(ctx, 31, 0x1D27F4u);
    ctx->pc = 0x1D27F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27ECu;
    // 0x1d27f0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1D27ECu, 0x1D27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F4u;
label_1d27f4:
    // 0x1d27f4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d27f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d27fc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1d27fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d2800: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1d2804: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D2804u;
    {
        const bool branch_taken_0x1d2804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2804u;
        // 0x1d2808: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2804) {
            ctx->pc = 0x1D2760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2760;
        }
    }
    ctx->pc = 0x1D280Cu;
    // 0x1d280c: 0x0  nop
    ctx->pc = 0x1d280cu;
    // NOP
label_1d2810:
    // 0x1d2810: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2814: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2818: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d2818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1d281c: 0xc074a48  jal         func_1D2920
    ctx->pc = 0x1D281Cu;
    SET_GPR_U32(ctx, 31, 0x1D2824u);
    ctx->pc = 0x1D2820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D281Cu;
    // 0x1d2820: 0x34458a55  ori         $a1, $v0, 0x8A55 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35413);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2920u, 0x1D281Cu, 0x1D2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2824u;
label_1d2824:
    // 0x1d2824: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d2828: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d2828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d282c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2830: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d2830u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2834: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d2834u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2838: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d2838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d283c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d283cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d2840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d284c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d284cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2854: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2854u;
        // 0x1d2858: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D285Cu;
}
