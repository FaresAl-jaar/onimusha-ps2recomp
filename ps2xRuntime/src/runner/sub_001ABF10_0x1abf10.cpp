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

// Function: sub_001ABF10
// Address: 0x1abf10 - 0x1acd94
void sub_001ABF10_0x1abf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABF10_0x1abf10");
#endif

    switch (ctx->pc) {
        case 0x1abf6cu: goto label_1abf6c;
        case 0x1abf78u: goto label_1abf78;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abff8u: goto label_1abff8;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac05cu: goto label_1ac05c;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc50u: goto label_1acc50;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accf0u: goto label_1accf0;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd24u: goto label_1acd24;
        case 0x1acd34u: goto label_1acd34;
        case 0x1acd44u: goto label_1acd44;
        case 0x1acd64u: goto label_1acd64;
        default: break;
    }

    ctx->pc = 0x1abf10u;

    // 0x1abf10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1abf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1abf14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1abf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1abf18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1abf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1abf1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1abf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1abf20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1abf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1abf24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1abf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1abf28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1abf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1abf2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1abf2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1abf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1abf34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1abf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1abf3c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1abf3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abf44: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1abf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1abf48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abf4c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1abf4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf50: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x1abf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
    // 0x1abf54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf58: 0xafa90158  sw          $t1, 0x158($sp)
    ctx->pc = 0x1abf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 9));
    // 0x1abf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf60: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x1abf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
    // 0x1abf64: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1ABF64u;
    SET_GPR_U32(ctx, 31, 0x1ABF6Cu);
    ctx->pc = 0x1ABF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF64u;
    // 0x1abf68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1ABF64u, 0x1ABF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF6Cu;
label_1abf6c:
    // 0x1abf6c: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x1abf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1abf70: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABF70u;
    SET_GPR_U32(ctx, 31, 0x1ABF78u);
    ctx->pc = 0x1ABF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF70u;
    // 0x1abf74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABF70u, 0x1ABF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF78u;
label_1abf78:
    // 0x1abf78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abf7c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1abf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1abf80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1abf84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf88: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1abf88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1abf8c: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x1abf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1abf90: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1abf94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abf98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1abf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf9c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1abf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1abfa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abfa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1abfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1abfa8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1abfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1abfac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1abfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1abfb0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABFB0u;
    SET_GPR_U32(ctx, 31, 0x1ABFB8u);
    ctx->pc = 0x1ABFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFB0u;
    // 0x1abfb4: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABFB0u, 0x1ABFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFB8u;
label_1abfb8:
    // 0x1abfb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1abfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abfbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1abfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1abfc0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abfc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1abfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1abfc8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1abfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1abfcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abfd0: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1abfd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1abfd4: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1abfd4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1abfd8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1abfd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1abfdc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1abfe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1abfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abfe8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1abfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1abfec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1abfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1abff0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABFF0u;
    SET_GPR_U32(ctx, 31, 0x1ABFF8u);
    ctx->pc = 0x1ABFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFF0u;
    // 0x1abff4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABFF0u, 0x1ABFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFF8u;
label_1abff8:
    // 0x1abff8: 0x9fa2015c  lwu         $v0, 0x15C($sp)
    ctx->pc = 0x1abff8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1abffc: 0x14b982  srl         $s7, $s4, 6
    ctx->pc = 0x1abffcu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x1ac000: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1ac004: 0x9fa60168  lwu         $a2, 0x168($sp)
    ctx->pc = 0x1ac004u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1ac008: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac00c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ac010: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac014: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x1ac014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x1ac018: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x1ac018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x1ac01c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac020: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1ac020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1ac024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac028: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x1ac028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    // 0x1ac02c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac030: 0xffa200a0  sd          $v0, 0xA0($sp)
    ctx->pc = 0x1ac030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    // 0x1ac034: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC034u;
    SET_GPR_U32(ctx, 31, 0x1AC03Cu);
    ctx->pc = 0x1AC038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC034u;
    // 0x1ac038: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC034u, 0x1AC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC03Cu;
label_1ac03c:
    // 0x1ac03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac040: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1ac040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1ac044: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac048: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1ac048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1ac04c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac050: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ac050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ac054: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC054u;
    SET_GPR_U32(ctx, 31, 0x1AC05Cu);
    ctx->pc = 0x1AC058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC054u;
    // 0x1ac058: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC054u, 0x1AC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC05Cu;
label_1ac05c:
    // 0x1ac05c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac060: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ac060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ac064: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC064u;
    SET_GPR_U32(ctx, 31, 0x1AC06Cu);
    ctx->pc = 0x1AC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC064u;
    // 0x1ac068: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC064u, 0x1AC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC06Cu;
label_1ac06c:
    // 0x1ac06c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac070: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ac070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ac074: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC074u;
    SET_GPR_U32(ctx, 31, 0x1AC07Cu);
    ctx->pc = 0x1AC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC074u;
    // 0x1ac078: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC074u, 0x1AC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC07Cu;
label_1ac07c:
    // 0x1ac07c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac080: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac084: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ac088: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ac088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac08c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac094: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac098: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1ac098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1ac09c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1ac09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1ac0a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ac0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac0a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac0a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac0ac: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1ac0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1ac0b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC0B0u;
    SET_GPR_U32(ctx, 31, 0x1AC0B8u);
    ctx->pc = 0x1AC0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0B0u;
    // 0x1ac0b4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC0B0u, 0x1AC0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0B8u;
label_1ac0b8:
    // 0x1ac0b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC0C0u;
    SET_GPR_U32(ctx, 31, 0x1AC0C8u);
    ctx->pc = 0x1AC0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0C0u;
    // 0x1ac0c4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC0C0u, 0x1AC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0C8u;
label_1ac0c8:
    // 0x1ac0c8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ac0cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac0d0: 0x106201ef  beq         $v1, $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x1AC0D0u;
    {
        const bool branch_taken_0x1ac0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0D0u;
        // 0x1ac0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0d0) {
            ctx->pc = 0x1AC890u;
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC0D8u;
    // 0x1ac0d8: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1AC0D8u;
    {
        const bool branch_taken_0x1ac0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0d8) {
            ctx->pc = 0x1AC360u;
            goto label_1ac360;
        }
    }
    ctx->pc = 0x1AC0E0u;
    // 0x1ac0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac0e4: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1AC0E4u;
    {
        const bool branch_taken_0x1ac0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0e4) {
            ctx->pc = 0x1AC240u;
            goto label_1ac240;
        }
    }
    ctx->pc = 0x1AC0ECu;
    // 0x1ac0ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC0ECu;
    {
        const bool branch_taken_0x1ac0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac0ec) {
            ctx->pc = 0x1AC100u;
            goto label_1ac100;
        }
    }
    ctx->pc = 0x1AC0F4u;
    // 0x1ac0f4: 0x10000318  b           . + 4 + (0x318 << 2)
    ctx->pc = 0x1AC0F4u;
    {
        const bool branch_taken_0x1ac0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac0f4) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC0FCu;
    // 0x1ac0fc: 0x0  nop
    ctx->pc = 0x1ac0fcu;
    // NOP
label_1ac100:
    // 0x1ac100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac104: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ac104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ac108: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC108u;
    SET_GPR_U32(ctx, 31, 0x1AC110u);
    ctx->pc = 0x1AC10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC108u;
    // 0x1ac10c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC108u, 0x1AC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC110u;
label_1ac110:
    // 0x1ac110: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x1ac110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ac114: 0x10200310  beqz        $at, . + 4 + (0x310 << 2)
    ctx->pc = 0x1AC114u;
    {
        const bool branch_taken_0x1ac114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC114u;
        // 0x1ac118: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac114) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC11Cu;
    // 0x1ac11c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ac120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac124: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac128: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac12c: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1ac130: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac134: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac138: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac13c: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1ac13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1ac140: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac144: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac148: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ac148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ac14c: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac150: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x1ac150u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac154: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac158: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ac15c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac160: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1ac160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac164: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac16c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac170: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac174: 0x3b43c  dsll32      $s6, $v1, 16
    ctx->pc = 0x1ac174u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ac178: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac17c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac180: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac188: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac190: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac194: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac194u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac198: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ac198u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac19c: 0x0  nop
    ctx->pc = 0x1ac19cu;
    // NOP
label_1ac1a0:
    // 0x1ac1a0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1ac1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ac1a4: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1ac1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ac1a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac1ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac1b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac1b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ac1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac1b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1bc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac1c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC1C0u;
    SET_GPR_U32(ctx, 31, 0x1AC1C8u);
    ctx->pc = 0x1AC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1C0u;
    // 0x1ac1c4: 0x2c23025  or          $a2, $s6, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC1C0u, 0x1AC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1C8u;
label_1ac1c8:
    // 0x1ac1c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ac1cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac1d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC1D4u;
    SET_GPR_U32(ctx, 31, 0x1AC1DCu);
    ctx->pc = 0x1AC1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1D4u;
    // 0x1ac1d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC1D4u, 0x1AC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1DCu;
label_1ac1dc:
    // 0x1ac1dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac1e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac1e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac1e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac1ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac1f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac1f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC1F8u;
    SET_GPR_U32(ctx, 31, 0x1AC200u);
    ctx->pc = 0x1AC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1F8u;
    // 0x1ac1fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC1F8u, 0x1AC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC200u;
label_1ac200:
    // 0x1ac200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac204: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac208: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC208u;
    SET_GPR_U32(ctx, 31, 0x1AC210u);
    ctx->pc = 0x1AC20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC208u;
    // 0x1ac20c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC208u, 0x1AC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC210u;
label_1ac210:
    // 0x1ac210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac214: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac218: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC218u;
    SET_GPR_U32(ctx, 31, 0x1AC220u);
    ctx->pc = 0x1AC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC218u;
    // 0x1ac21c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC218u, 0x1AC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC220u;
label_1ac220:
    // 0x1ac220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ac224: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1ac224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1ac228: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x1ac228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ac22c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AC22Cu;
    {
        const bool branch_taken_0x1ac22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC22Cu;
        // 0x1ac230: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac22c) {
            ctx->pc = 0x1AC1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1a0;
        }
    }
    ctx->pc = 0x1AC234u;
    // 0x1ac234: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x1AC234u;
    {
        const bool branch_taken_0x1ac234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac234) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC23Cu;
    // 0x1ac23c: 0x0  nop
    ctx->pc = 0x1ac23cu;
    // NOP
label_1ac240:
    // 0x1ac240: 0x148942  srl         $s1, $s4, 5
    ctx->pc = 0x1ac240u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x1ac244: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac248: 0x102002c3  beqz        $at, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x1AC248u;
    {
        const bool branch_taken_0x1ac248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC248u;
        // 0x1ac24c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac248) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC250u;
    // 0x1ac250: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac254: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac258: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac25c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac260: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac264: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac268: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac26c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac270: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac274: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ac274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ac278: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac27c: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x1ac27cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac280: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac284: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ac284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac288: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac28c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1ac28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac290: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac294: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac29c: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac2a0: 0x3bc3c  dsll32      $s7, $v1, 16
    ctx->pc = 0x1ac2a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ac2a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac2a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac2ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac2b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac2b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac2b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac2bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac2c0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac2c4: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ac2c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ac2c8:
    // 0x1ac2c8: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1ac2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac2cc: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1ac2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ac2d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac2d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac2d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac2dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ac2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac2e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2e4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac2e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1AC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2E8u;
    // 0x1ac2ec: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC2E8u, 0x1AC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac2f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC2F8u;
    SET_GPR_U32(ctx, 31, 0x1AC300u);
    ctx->pc = 0x1AC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2F8u;
    // 0x1ac2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC2F8u, 0x1AC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC300u;
label_1ac300:
    // 0x1ac300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac304: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac308: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac30c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac318: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac31c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC31Cu;
    SET_GPR_U32(ctx, 31, 0x1AC324u);
    ctx->pc = 0x1AC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC31Cu;
    // 0x1ac320: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC31Cu, 0x1AC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC324u;
label_1ac324:
    // 0x1ac324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac328: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac32c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC32Cu, 0x1AC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac338: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac33c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC33Cu;
    SET_GPR_U32(ctx, 31, 0x1AC344u);
    ctx->pc = 0x1AC340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC33Cu;
    // 0x1ac340: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC33Cu, 0x1AC344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC344u;
label_1ac344:
    // 0x1ac344: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ac348: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1ac348u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1ac34c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1ac34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac350: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AC350u;
    {
        const bool branch_taken_0x1ac350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC350u;
        // 0x1ac354: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac350) {
            ctx->pc = 0x1AC2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac2c8;
        }
    }
    ctx->pc = 0x1AC358u;
    // 0x1ac358: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x1AC358u;
    {
        const bool branch_taken_0x1ac358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac358) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC360u;
label_1ac360:
    // 0x1ac360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac368: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC368u;
    SET_GPR_U32(ctx, 31, 0x1AC370u);
    ctx->pc = 0x1AC36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC368u;
    // 0x1ac36c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC368u, 0x1AC370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC370u;
label_1ac370:
    // 0x1ac370: 0x148942  srl         $s1, $s4, 5
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x1ac374: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac374u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac378: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1AC378u;
    {
        const bool branch_taken_0x1ac378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC378u;
        // 0x1ac37c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac378) {
            ctx->pc = 0x1AC498u;
            goto label_1ac498;
        }
    }
    ctx->pc = 0x1AC380u;
    // 0x1ac380: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac384: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1ac384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac388: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac38c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ac38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac390: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac394: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ac394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac398: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac39c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac3a0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1ac3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ac3a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac3a8: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x1ac3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x1ac3ac: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac3b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac3b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac3b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac3bc: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac3c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac3c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac3c8: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x1ac3c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac3cc: 0x26630790  addiu       $v1, $s3, 0x790
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac3d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac3d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ac3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ac3d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac3dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac3e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac3e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac3e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac3ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac3f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac3f4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac3f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac3f8: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x1ac3f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac3fc: 0x0  nop
    ctx->pc = 0x1ac3fcu;
    // NOP
label_1ac400:
    // 0x1ac400: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1ac400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ac404: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1ac404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac408: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac40c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac410: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac418: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac41c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1ac41cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ac420: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac424: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC424u;
    SET_GPR_U32(ctx, 31, 0x1AC42Cu);
    ctx->pc = 0x1AC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC424u;
    // 0x1ac428: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC424u, 0x1AC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC42Cu;
label_1ac42c:
    // 0x1ac42c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac430: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac434: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC434u;
    SET_GPR_U32(ctx, 31, 0x1AC43Cu);
    ctx->pc = 0x1AC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC434u;
    // 0x1ac438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC434u, 0x1AC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC43Cu;
label_1ac43c:
    // 0x1ac43c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac440: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac444: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac448: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac44c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac454: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac458: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC458u;
    SET_GPR_U32(ctx, 31, 0x1AC460u);
    ctx->pc = 0x1AC45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC458u;
    // 0x1ac45c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC458u, 0x1AC460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC460u;
label_1ac460:
    // 0x1ac460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac464: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac468: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC468u;
    SET_GPR_U32(ctx, 31, 0x1AC470u);
    ctx->pc = 0x1AC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC468u;
    // 0x1ac46c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC468u, 0x1AC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC470u;
label_1ac470:
    // 0x1ac470: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac474: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac478: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC478u;
    SET_GPR_U32(ctx, 31, 0x1AC480u);
    ctx->pc = 0x1AC47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC478u;
    // 0x1ac47c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC478u, 0x1AC480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC480u;
label_1ac480:
    // 0x1ac480: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac484: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ac488: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1ac488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac48c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC48Cu;
        // 0x1ac490: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac400;
        }
    }
    ctx->pc = 0x1AC494u;
    // 0x1ac494: 0x0  nop
    ctx->pc = 0x1ac494u;
    // NOP
label_1ac498:
    // 0x1ac498: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ac49c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac4a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4a4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ac4a8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ac4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ac4ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC4ACu;
    SET_GPR_U32(ctx, 31, 0x1AC4B4u);
    ctx->pc = 0x1AC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4ACu;
    // 0x1ac4b0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC4ACu, 0x1AC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4B4u;
label_1ac4b4:
    // 0x1ac4b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC4BCu;
    SET_GPR_U32(ctx, 31, 0x1AC4C4u);
    ctx->pc = 0x1AC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4BCu;
    // 0x1ac4c0: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC4BCu, 0x1AC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4C4u;
label_1ac4c4:
    // 0x1ac4c4: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac4c8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1AC4C8u;
    {
        const bool branch_taken_0x1ac4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4C8u;
        // 0x1ac4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4c8) {
            ctx->pc = 0x1AC5E8u;
            goto label_1ac5e8;
        }
    }
    ctx->pc = 0x1AC4D0u;
    // 0x1ac4d0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac4d4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1ac4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac4d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac4dc: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ac4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac4e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac4e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ac4e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac4ec: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1ac4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ac4f0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1ac4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ac4f4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ac4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac4f8: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1ac4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1ac4fc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ac4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1ac500: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac504: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac508: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac50c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac510: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac514: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac518: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac51c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac520: 0xa3b825  or          $s7, $a1, $v1
    ctx->pc = 0x1ac520u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ac524: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1ac524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac528: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac52c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac530: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac538: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac540: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac544: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac548: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac548u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac54c: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x1ac54cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ac550:
    // 0x1ac550: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1ac550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ac554: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1ac554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac558: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac55c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac560: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac56c: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ac570: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac574: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC574u;
    SET_GPR_U32(ctx, 31, 0x1AC57Cu);
    ctx->pc = 0x1AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC574u;
    // 0x1ac578: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC574u, 0x1AC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC57Cu;
label_1ac57c:
    // 0x1ac57c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac580: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac584: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC584u;
    SET_GPR_U32(ctx, 31, 0x1AC58Cu);
    ctx->pc = 0x1AC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC584u;
    // 0x1ac588: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC584u, 0x1AC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC58Cu;
label_1ac58c:
    // 0x1ac58c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac590: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac594: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac598: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac59c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac5a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac5a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC5A8u;
    SET_GPR_U32(ctx, 31, 0x1AC5B0u);
    ctx->pc = 0x1AC5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5A8u;
    // 0x1ac5ac: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC5A8u, 0x1AC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5B0u;
label_1ac5b0:
    // 0x1ac5b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac5b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC5B8u;
    SET_GPR_U32(ctx, 31, 0x1AC5C0u);
    ctx->pc = 0x1AC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5B8u;
    // 0x1ac5bc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC5B8u, 0x1AC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5C0u;
label_1ac5c0:
    // 0x1ac5c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac5c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC5C8u;
    SET_GPR_U32(ctx, 31, 0x1AC5D0u);
    ctx->pc = 0x1AC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5C8u;
    // 0x1ac5cc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC5C8u, 0x1AC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5D0u;
label_1ac5d0:
    // 0x1ac5d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac5d4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ac5d8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1ac5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac5dc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AC5DCu;
    {
        const bool branch_taken_0x1ac5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5DCu;
        // 0x1ac5e0: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5dc) {
            ctx->pc = 0x1AC550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac550;
        }
    }
    ctx->pc = 0x1AC5E4u;
    // 0x1ac5e4: 0x0  nop
    ctx->pc = 0x1ac5e4u;
    // NOP
label_1ac5e8:
    // 0x1ac5e8: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1ac5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ac5ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac5f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ac5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ac5f8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ac5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ac5fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC5FCu;
    SET_GPR_U32(ctx, 31, 0x1AC604u);
    ctx->pc = 0x1AC600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5FCu;
    // 0x1ac600: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC5FCu, 0x1AC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC604u;
label_1ac604:
    // 0x1ac604: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac60c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC60Cu;
    SET_GPR_U32(ctx, 31, 0x1AC614u);
    ctx->pc = 0x1AC610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC60Cu;
    // 0x1ac610: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC60Cu, 0x1AC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC614u;
label_1ac614:
    // 0x1ac614: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac618: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1AC618u;
    {
        const bool branch_taken_0x1ac618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC618u;
        // 0x1ac61c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac618) {
            ctx->pc = 0x1AC740u;
            goto label_1ac740;
        }
    }
    ctx->pc = 0x1AC620u;
    // 0x1ac620: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac624: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1ac624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac628: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac62c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ac62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac630: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac634: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ac634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac638: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac63c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ac640: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1ac640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ac644: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ac644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac648: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1ac648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
    // 0x1ac64c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1ac64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1ac650: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac654: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac658: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac65c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ac660: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac664: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac668: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac66c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac670: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac674: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac678: 0xa3b825  or          $s7, $a1, $v1
    ctx->pc = 0x1ac678u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1ac67c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac684: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac688: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac68c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac690: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac698: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac69c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac69cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac6a0: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac6a4: 0x0  nop
    ctx->pc = 0x1ac6a4u;
    // NOP
label_1ac6a8:
    // 0x1ac6a8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1ac6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ac6ac: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1ac6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac6b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac6b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac6b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac6bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac6c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6c4: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1ac6c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ac6c8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac6cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC6CCu;
    SET_GPR_U32(ctx, 31, 0x1AC6D4u);
    ctx->pc = 0x1AC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6CCu;
    // 0x1ac6d0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC6CCu, 0x1AC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6D4u;
label_1ac6d4:
    // 0x1ac6d4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ac6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ac6d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac6e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC6E0u;
    SET_GPR_U32(ctx, 31, 0x1AC6E8u);
    ctx->pc = 0x1AC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6E0u;
    // 0x1ac6e4: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC6E0u, 0x1AC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6E8u;
label_1ac6e8:
    // 0x1ac6e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac6ec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac6f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac6f4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac6f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac6fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac700: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac704: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC704u;
    SET_GPR_U32(ctx, 31, 0x1AC70Cu);
    ctx->pc = 0x1AC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC704u;
    // 0x1ac708: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC704u, 0x1AC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC70Cu;
label_1ac70c:
    // 0x1ac70c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac710: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac714: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC714u;
    SET_GPR_U32(ctx, 31, 0x1AC71Cu);
    ctx->pc = 0x1AC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC714u;
    // 0x1ac718: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC714u, 0x1AC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC71Cu;
label_1ac71c:
    // 0x1ac71c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac720: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac724: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC724u;
    SET_GPR_U32(ctx, 31, 0x1AC72Cu);
    ctx->pc = 0x1AC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC724u;
    // 0x1ac728: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC724u, 0x1AC72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC72Cu;
label_1ac72c:
    // 0x1ac72c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac730: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ac734: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1ac734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac738: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1AC738u;
    {
        const bool branch_taken_0x1ac738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC738u;
        // 0x1ac73c: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac738) {
            ctx->pc = 0x1AC6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac6a8;
        }
    }
    ctx->pc = 0x1AC740u;
label_1ac740:
    // 0x1ac740: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1ac740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ac744: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac748: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac74c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ac74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ac750: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ac754: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC754u;
    SET_GPR_U32(ctx, 31, 0x1AC75Cu);
    ctx->pc = 0x1AC758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC754u;
    // 0x1ac758: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC754u, 0x1AC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC75Cu;
label_1ac75c:
    // 0x1ac75c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac764: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC764u;
    SET_GPR_U32(ctx, 31, 0x1AC76Cu);
    ctx->pc = 0x1AC768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC764u;
    // 0x1ac768: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC764u, 0x1AC76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC76Cu;
label_1ac76c:
    // 0x1ac76c: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac76cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac770: 0x10200179  beqz        $at, . + 4 + (0x179 << 2)
    ctx->pc = 0x1AC770u;
    {
        const bool branch_taken_0x1ac770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC770u;
        // 0x1ac774: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac770) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC778u;
    // 0x1ac778: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac77c: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1ac77cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac780: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac784: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac788: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1ac788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ac78c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ac790: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac794: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1ac794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1ac798: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac79c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac7a0: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac7a8: 0x649025  or          $s2, $v1, $a0
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ac7ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac7b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac7b4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac7b8: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1ac7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac7bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac7c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac7c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac7c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac7cc: 0x3bc3c  dsll32      $s7, $v1, 16
    ctx->pc = 0x1ac7ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ac7d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac7d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac7d8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ac7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ac7dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ac7dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac7e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac7e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac7ec: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac7ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac7f0: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ac7f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac7f4: 0x0  nop
    ctx->pc = 0x1ac7f4u;
    // NOP
label_1ac7f8:
    // 0x1ac7f8: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1ac7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac7fc: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1ac7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ac800: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac804: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac808: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac80c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ac80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac810: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac814: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac818: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC818u;
    SET_GPR_U32(ctx, 31, 0x1AC820u);
    ctx->pc = 0x1AC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC818u;
    // 0x1ac81c: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC818u, 0x1AC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC820u;
label_1ac820:
    // 0x1ac820: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac824: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac828: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC828u;
    SET_GPR_U32(ctx, 31, 0x1AC830u);
    ctx->pc = 0x1AC82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC828u;
    // 0x1ac82c: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC828u, 0x1AC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC830u;
label_1ac830:
    // 0x1ac830: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac834: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac838: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac83c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac840: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac844: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac848: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac84c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC84Cu;
    SET_GPR_U32(ctx, 31, 0x1AC854u);
    ctx->pc = 0x1AC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC84Cu;
    // 0x1ac850: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC84Cu, 0x1AC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC854u;
label_1ac854:
    // 0x1ac854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac858: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac85c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC85Cu;
    SET_GPR_U32(ctx, 31, 0x1AC864u);
    ctx->pc = 0x1AC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC85Cu;
    // 0x1ac860: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC85Cu, 0x1AC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac868: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac86c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC86Cu;
    SET_GPR_U32(ctx, 31, 0x1AC874u);
    ctx->pc = 0x1AC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC86Cu;
    // 0x1ac870: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC86Cu, 0x1AC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ac878: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1ac87c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1ac87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac880: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AC880u;
    {
        const bool branch_taken_0x1ac880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac880) {
            ctx->pc = 0x1AC7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac7f8;
        }
    }
    ctx->pc = 0x1AC888u;
    // 0x1ac888: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x148942  srl         $s1, $s4, 5
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x1ac894: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1ac894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac898: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1AC898u;
    {
        const bool branch_taken_0x1ac898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC898u;
        // 0x1ac89c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac898) {
            ctx->pc = 0x1AC9B8u;
            goto label_1ac9b8;
        }
    }
    ctx->pc = 0x1AC8A0u;
    // 0x1ac8a0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ac8a4: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ac8a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ac8a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac8b0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1ac8b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac8b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac8bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac8c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac8c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac8c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac8cc: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x1ac8ccu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac8d0: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac8d4: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1ac8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1ac8d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac8dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac8e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac8e4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1ac8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ac8e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac8ec: 0xffa20120  sd          $v0, 0x120($sp)
    ctx->pc = 0x1ac8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 2));
    // 0x1ac8f0: 0x26630790  addiu       $v1, $s3, 0x790
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1ac8f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ac8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac8f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ac8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ac8fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac900: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac904: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ac908: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac90c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac910: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac914: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ac914u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ac918: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ac918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac91c: 0xffa20110  sd          $v0, 0x110($sp)
    ctx->pc = 0x1ac91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 2));
label_1ac920:
    // 0x1ac920: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1ac920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ac924: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1ac924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1ac928: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac92c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac930: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ac930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ac934: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac93c: 0xdfa20120  ld          $v0, 0x120($sp)
    ctx->pc = 0x1ac93cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ac940: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ac940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac944: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC944u;
    SET_GPR_U32(ctx, 31, 0x1AC94Cu);
    ctx->pc = 0x1AC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC944u;
    // 0x1ac948: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC944u, 0x1AC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC94Cu;
label_1ac94c:
    // 0x1ac94c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac950: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac954: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC954u;
    SET_GPR_U32(ctx, 31, 0x1AC95Cu);
    ctx->pc = 0x1AC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC954u;
    // 0x1ac958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC954u, 0x1AC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC95Cu;
label_1ac95c:
    // 0x1ac95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac960: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ac960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ac964: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac968: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ac96c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ac96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ac970: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac974: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ac978: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC978u;
    SET_GPR_U32(ctx, 31, 0x1AC980u);
    ctx->pc = 0x1AC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC978u;
    // 0x1ac97c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC978u, 0x1AC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC980u;
label_1ac980:
    // 0x1ac980: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac984: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac988: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC988u;
    SET_GPR_U32(ctx, 31, 0x1AC990u);
    ctx->pc = 0x1AC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC988u;
    // 0x1ac98c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC988u, 0x1AC990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC990u;
label_1ac990:
    // 0x1ac990: 0xdfa60110  ld          $a2, 0x110($sp)
    ctx->pc = 0x1ac990u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ac994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac998: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC998u;
    SET_GPR_U32(ctx, 31, 0x1AC9A0u);
    ctx->pc = 0x1AC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC998u;
    // 0x1ac99c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC998u, 0x1AC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9A0u;
label_1ac9a0:
    // 0x1ac9a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ac9a4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ac9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ac9a8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1ac9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac9ac: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AC9ACu;
    {
        const bool branch_taken_0x1ac9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ACu;
        // 0x1ac9b0: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9ac) {
            ctx->pc = 0x1AC920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac920;
        }
    }
    ctx->pc = 0x1AC9B4u;
    // 0x1ac9b4: 0x0  nop
    ctx->pc = 0x1ac9b4u;
    // NOP
label_1ac9b8:
    // 0x1ac9b8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1ac9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ac9bc: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1ac9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac9c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9c4: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1ac9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ac9c8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1ac9c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1ac9cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac9d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ac9d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac9d8: 0x1010bc  dsll32      $v0, $s0, 2
    ctx->pc = 0x1ac9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 2));
    // 0x1ac9dc: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1ac9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1ac9e0: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1ac9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1ac9e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AC9E4u;
    SET_GPR_U32(ctx, 31, 0x1AC9ECu);
    ctx->pc = 0x1AC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9E4u;
    // 0x1ac9e8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AC9E4u, 0x1AC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC9ECu;
label_1ac9ec:
    // 0x1ac9ec: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1ac9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1ac9f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac9f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ac9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9fc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1ac9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1aca00: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ACA00u;
    SET_GPR_U32(ctx, 31, 0x1ACA08u);
    ctx->pc = 0x1ACA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA00u;
    // 0x1aca04: 0xffa200b0  sd          $v0, 0xB0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ACA00u, 0x1ACA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA08u;
label_1aca08:
    // 0x1aca08: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1aca0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aca10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aca14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca18: 0x22eb8  dsll        $a1, $v0, 26
    ctx->pc = 0x1aca18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 26);
    // 0x1aca1c: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1aca1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1aca20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aca24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aca28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aca2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aca30: 0x459025  or          $s2, $v0, $a1
    ctx->pc = 0x1aca30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1aca34: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ACA34u;
    SET_GPR_U32(ctx, 31, 0x1ACA3Cu);
    ctx->pc = 0x1ACA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA34u;
    // 0x1aca38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ACA34u, 0x1ACA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA3Cu;
label_1aca3c:
    // 0x1aca3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aca3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aca40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aca44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aca48: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aca4c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aca50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aca54: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1aca54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1aca58: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1aca58u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aca5c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aca5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aca60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aca64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aca64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aca6c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aca70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aca74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACA74u;
    SET_GPR_U32(ctx, 31, 0x1ACA7Cu);
    ctx->pc = 0x1ACA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA74u;
    // 0x1aca78: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACA74u, 0x1ACA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA7Cu;
label_1aca7c:
    // 0x1aca7c: 0x9fa30160  lwu         $v1, 0x160($sp)
    ctx->pc = 0x1aca7cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aca80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aca84: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x1aca84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aca88: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aca8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aca90: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x1aca90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aca94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACA94u;
    SET_GPR_U32(ctx, 31, 0x1ACA9Cu);
    ctx->pc = 0x1ACA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA94u;
    // 0x1aca98: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACA94u, 0x1ACA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA9Cu;
label_1aca9c:
    // 0x1aca9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acaa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acaa4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACAA4u;
    SET_GPR_U32(ctx, 31, 0x1ACAACu);
    ctx->pc = 0x1ACAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACAA4u;
    // 0x1acaa8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACAA4u, 0x1ACAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAACu;
label_1acaac:
    // 0x1acaac: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1acaacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1acab0: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1ACAB0u;
    {
        const bool branch_taken_0x1acab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB0u;
        // 0x1acab4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acab0) {
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACAB8u;
    // 0x1acab8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1acab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1acabc: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1acac0: 0xffa20140  sd          $v0, 0x140($sp)
    ctx->pc = 0x1acac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 2));
    // 0x1acac4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1acac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acac8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1acac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1acacc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1acaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acad0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1acad4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1acad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1acad8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1acad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acadc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acae0: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1acae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1acae4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1acae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1acae8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1acaec: 0x83f025  or          $fp, $a0, $v1
    ctx->pc = 0x1acaecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1acaf0: 0x26630790  addiu       $v1, $s3, 0x790
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1acaf4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1acaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acaf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1acaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1acafc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1acafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1acb00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1acb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1acb04: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1acb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1acb08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acb0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1acb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acb10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1acb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1acb14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1acb18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1acb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1acb1c: 0xffa20130  sd          $v0, 0x130($sp)
    ctx->pc = 0x1acb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 2));
label_1acb20:
    // 0x1acb20: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1acb24: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1acb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1acb28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1acb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1acb2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acb30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1acb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1acb34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1acb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1acb38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb3c: 0xdfa20140  ld          $v0, 0x140($sp)
    ctx->pc = 0x1acb3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1acb40: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1acb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1acb44: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACB44u;
    SET_GPR_U32(ctx, 31, 0x1ACB4Cu);
    ctx->pc = 0x1ACB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB44u;
    // 0x1acb48: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACB44u, 0x1ACB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB4Cu;
label_1acb4c:
    // 0x1acb4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acb54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACB54u;
    SET_GPR_U32(ctx, 31, 0x1ACB5Cu);
    ctx->pc = 0x1ACB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB54u;
    // 0x1acb58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACB54u, 0x1ACB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB5Cu;
label_1acb5c:
    // 0x1acb5c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1acb60: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1acb64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1acb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1acb68: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1acb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1acb6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1acb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1acb74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACB74u;
    SET_GPR_U32(ctx, 31, 0x1ACB7Cu);
    ctx->pc = 0x1ACB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB74u;
    // 0x1acb78: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACB74u, 0x1ACB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB7Cu;
label_1acb7c:
    // 0x1acb7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1acb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acb84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACB84u;
    SET_GPR_U32(ctx, 31, 0x1ACB8Cu);
    ctx->pc = 0x1ACB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB84u;
    // 0x1acb88: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACB84u, 0x1ACB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB8Cu;
label_1acb8c:
    // 0x1acb8c: 0xdfa60130  ld          $a2, 0x130($sp)
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1acb90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb94: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACB94u;
    SET_GPR_U32(ctx, 31, 0x1ACB9Cu);
    ctx->pc = 0x1ACB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB94u;
    // 0x1acb98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACB94u, 0x1ACB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB9Cu;
label_1acb9c:
    // 0x1acb9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1acba0: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1acba4: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1acba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1acba8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1ACBA8u;
    {
        const bool branch_taken_0x1acba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBA8u;
        // 0x1acbac: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acba8) {
            ctx->pc = 0x1ACB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb20;
        }
    }
    ctx->pc = 0x1ACBB0u;
label_1acbb0:
    // 0x1acbb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbb4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB4u;
    // 0x1acbb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ACBB4u, 0x1ACBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBBCu;
label_1acbbc:
    // 0x1acbbc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acbc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbc4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1acbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1acbc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acbcc: 0x336b8  dsll        $a2, $v1, 26
    ctx->pc = 0x1acbccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 26);
    // 0x1acbd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1acbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1acbd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1acbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acbdc: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1acbdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1acbe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acbe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1acbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1acbe8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ACBE8u;
    SET_GPR_U32(ctx, 31, 0x1ACBF0u);
    ctx->pc = 0x1ACBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBE8u;
    // 0x1acbec: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ACBE8u, 0x1ACBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACBF0u;
label_1acbf0:
    // 0x1acbf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acbf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1acbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1acbf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acbfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1acc00: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1acc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1acc04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1acc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acc08: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1acc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1acc0c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1acc0cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1acc10: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1acc10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1acc14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1acc18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acc20: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1acc24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1acc28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACC28u;
    SET_GPR_U32(ctx, 31, 0x1ACC30u);
    ctx->pc = 0x1ACC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC28u;
    // 0x1acc2c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACC28u, 0x1ACC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0xdfa600a0  ld          $a2, 0xA0($sp)
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1acc34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACC38u;
    SET_GPR_U32(ctx, 31, 0x1ACC40u);
    ctx->pc = 0x1ACC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC38u;
    // 0x1acc3c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACC38u, 0x1ACC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC40u;
label_1acc40:
    // 0x1acc40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACC48u;
    SET_GPR_U32(ctx, 31, 0x1ACC50u);
    ctx->pc = 0x1ACC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC48u;
    // 0x1acc4c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACC48u, 0x1ACC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC50u;
label_1acc50:
    // 0x1acc50: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1acc50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1acc54: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1ACC54u;
    {
        const bool branch_taken_0x1acc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC54u;
        // 0x1acc58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc54) {
            ctx->pc = 0x1ACD58u;
            goto label_1acd58;
        }
    }
    ctx->pc = 0x1ACC5Cu;
    // 0x1acc5c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1acc60: 0x10bc3c  dsll32      $s7, $s0, 16
    ctx->pc = 0x1acc60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1acc64: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1acc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1acc68: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1acc6c: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1acc70: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1acc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1acc74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1acc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1acc78: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1acc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1acc7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1acc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1acc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc84: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1acc88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1acc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1acc8c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1acc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1acc90: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1acc94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1acc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1acc98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1acc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1acc9c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1acc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1acca0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1acca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1acca4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1acca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1acca8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1acca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1accac: 0xa4a025  or          $s4, $a1, $a0
    ctx->pc = 0x1accacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1accb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1accb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1accb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1accb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1accb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1accb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1accbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1accbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1accc0: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1accc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1accc4: 0x0  nop
    ctx->pc = 0x1accc4u;
    // NOP
label_1accc8:
    // 0x1accc8: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1accc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1acccc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1accccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1accd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1accd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1accd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1accd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1accd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1accd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1accdc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1accdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1acce0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acce4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1acce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1acce8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACCE8u;
    SET_GPR_U32(ctx, 31, 0x1ACCF0u);
    ctx->pc = 0x1ACCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCE8u;
    // 0x1accec: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACCE8u, 0x1ACCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCF0u;
label_1accf0:
    // 0x1accf0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1accf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1accf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accf8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1accfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACCFCu;
    SET_GPR_U32(ctx, 31, 0x1ACD04u);
    ctx->pc = 0x1ACD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCFCu;
    // 0x1acd00: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACCFCu, 0x1ACD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD04u;
label_1acd04:
    // 0x1acd04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1acd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1acd08: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1acd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1acd0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1acd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1acd10: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1acd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1acd14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1acd1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACD1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD24u);
    ctx->pc = 0x1ACD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD1Cu;
    // 0x1acd20: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACD1Cu, 0x1ACD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD24u;
label_1acd24:
    // 0x1acd24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1acd2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACD2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD34u);
    ctx->pc = 0x1ACD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD2Cu;
    // 0x1acd30: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACD2Cu, 0x1ACD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD34u;
label_1acd34:
    // 0x1acd34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1acd3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ACD3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD44u);
    ctx->pc = 0x1ACD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD3Cu;
    // 0x1acd40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ACD3Cu, 0x1ACD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD44u;
label_1acd44:
    // 0x1acd44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1acd48: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1acd4c: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x1acd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1acd50: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1ACD50u;
    {
        const bool branch_taken_0x1acd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD50u;
        // 0x1acd54: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd50) {
            ctx->pc = 0x1ACCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1accc8;
        }
    }
    ctx->pc = 0x1ACD58u;
label_1acd58:
    // 0x1acd58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd5c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1ACD5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD64u);
    ctx->pc = 0x1ACD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD5Cu;
    // 0x1acd60: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1ACD5Cu, 0x1ACD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD64u;
label_1acd64:
    // 0x1acd64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1acd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1acd68: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1acd68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1acd6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1acd6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1acd70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1acd70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1acd74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1acd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acd78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1acd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1acd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1acd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1acd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1acd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD8Cu;
        // 0x1acd90: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD94u;
}
