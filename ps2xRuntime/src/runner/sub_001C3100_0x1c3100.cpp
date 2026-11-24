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

// Function: sub_001C3100
// Address: 0x1c3100 - 0x1c3368
void sub_001C3100_0x1c3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3100_0x1c3100");
#endif

    switch (ctx->pc) {
        case 0x1c3140u: goto label_1c3140;
        case 0x1c317cu: goto label_1c317c;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c31d8u: goto label_1c31d8;
        case 0x1c31e0u: goto label_1c31e0;
        case 0x1c320cu: goto label_1c320c;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c322cu: goto label_1c322c;
        case 0x1c323cu: goto label_1c323c;
        case 0x1c3280u: goto label_1c3280;
        case 0x1c32c8u: goto label_1c32c8;
        case 0x1c32dcu: goto label_1c32dc;
        case 0x1c3300u: goto label_1c3300;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c3328u: goto label_1c3328;
        default: break;
    }

    ctx->pc = 0x1c3100u;

    // 0x1c3100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c3104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c3108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c310c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c3110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c3110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c3118: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c3118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c311c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3120: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c3120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3128: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c3128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c312cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3134: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c3134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3138: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C3138u;
    SET_GPR_U32(ctx, 31, 0x1C3140u);
    ctx->pc = 0x1C313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3138u;
    // 0x1c313c: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C3138u, 0x1C3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3140u;
label_1c3140:
    // 0x1c3140: 0x132982  srl         $a1, $s3, 6
    ctx->pc = 0x1c3140u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
    // 0x1c3144: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1c3148: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1c3148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c314c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1c314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c3150: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3154: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1c3154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1c3158: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c315c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c3160: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1c3160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1c3164: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1c3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1c3168: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c3168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c316c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3170: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c3170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3174: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C3174u;
    SET_GPR_U32(ctx, 31, 0x1C317Cu);
    ctx->pc = 0x1C3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3174u;
    // 0x1c3178: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C3174u, 0x1C317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317Cu;
label_1c317c:
    // 0x1c317c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3184: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c318c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1c318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1c3190: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C3190u;
    SET_GPR_U32(ctx, 31, 0x1C3198u);
    ctx->pc = 0x1C3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3190u;
    // 0x1c3194: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C3190u, 0x1C3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3198u;
label_1c3198:
    // 0x1c3198: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c3198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c319c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c31a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c31a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c31a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c31a8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c31a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c31ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c31acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c31b0: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x1c31b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1c31b4: 0x9e0378d0  lwu         $v1, 0x78D0($s0)
    ctx->pc = 0x1c31b4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 30928)));
    // 0x1c31b8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c31b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c31bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c31c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c31c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c31c8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c31c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c31cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c31ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c31d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C31D0u;
    SET_GPR_U32(ctx, 31, 0x1C31D8u);
    ctx->pc = 0x1C31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D0u;
    // 0x1c31d4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C31D0u, 0x1C31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31D8u;
label_1c31d8:
    // 0x1c31d8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C31D8u;
    SET_GPR_U32(ctx, 31, 0x1C31E0u);
    ctx->pc = 0x1C31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D8u;
    // 0x1c31dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C31D8u, 0x1C31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1c31e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31e8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c31ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c31ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c31f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c31f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c31f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c31f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c31f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c31fc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1c31fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c3200: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1c3200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1c3204: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3204u;
    SET_GPR_U32(ctx, 31, 0x1C320Cu);
    ctx->pc = 0x1C3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3204u;
    // 0x1c3208: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3204u, 0x1C320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C320Cu;
label_1c320c:
    // 0x1c320c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3210: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c3214: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3214u;
    SET_GPR_U32(ctx, 31, 0x1C321Cu);
    ctx->pc = 0x1C3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3214u;
    // 0x1c3218: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3214u, 0x1C321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C321Cu;
label_1c321c:
    // 0x1c321c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3224: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3224u;
    SET_GPR_U32(ctx, 31, 0x1C322Cu);
    ctx->pc = 0x1C3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3224u;
    // 0x1c3228: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3224u, 0x1C322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322Cu;
label_1c322c:
    // 0x1c322c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3230: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c3230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3234: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3234u;
    SET_GPR_U32(ctx, 31, 0x1C323Cu);
    ctx->pc = 0x1C3238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3234u;
    // 0x1c3238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3234u, 0x1C323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C323Cu;
label_1c323c:
    // 0x1c323c: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1c323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1c3240: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c3244: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c3244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c3248: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1C3248u;
    {
        const bool branch_taken_0x1c3248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3248u;
        // 0x1c324c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3248) {
            ctx->pc = 0x1C3348u;
            goto label_1c3348;
        }
    }
    ctx->pc = 0x1C3250u;
    // 0x1c3250: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1c3250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1c3254: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c3258: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1c3258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1c325c: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1c3260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3264: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3268: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c326c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c3270: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c3270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3274: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c3278: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x1c3278u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c327c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c327cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3280:
    // 0x1c3280: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1c3280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1c3284: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3288: 0x9e0678c0  lwu         $a2, 0x78C0($s0)
    ctx->pc = 0x1c3288u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 30912)));
    // 0x1c328c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c328cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c3290: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1c3290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c3294: 0x8e0278c4  lw          $v0, 0x78C4($s0)
    ctx->pc = 0x1c3294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30916)));
    // 0x1c3298: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c3298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c329c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c329cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c32a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c32a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c32a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c32ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c32acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c32b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c32b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c32b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c32b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c32b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c32bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c32c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C32C0u;
    SET_GPR_U32(ctx, 31, 0x1C32C8u);
    ctx->pc = 0x1C32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32C0u;
    // 0x1c32c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C32C0u, 0x1C32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32C8u;
label_1c32c8:
    // 0x1c32c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c32cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c32d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C32D4u;
    SET_GPR_U32(ctx, 31, 0x1C32DCu);
    ctx->pc = 0x1C32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32D4u;
    // 0x1c32d8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C32D4u, 0x1C32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32DCu;
label_1c32dc:
    // 0x1c32dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c32e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c32e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c32e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c32e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c32e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c32ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c32ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c32f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c32f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C32F8u;
    SET_GPR_U32(ctx, 31, 0x1C3300u);
    ctx->pc = 0x1C32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32F8u;
    // 0x1c32fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C32F8u, 0x1C3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3300u;
label_1c3300:
    // 0x1c3300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3308: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3308u;
    SET_GPR_U32(ctx, 31, 0x1C3310u);
    ctx->pc = 0x1C330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3308u;
    // 0x1c330c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3308u, 0x1C3310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c3310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c3314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3318: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c3318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c331c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3320: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3320u;
    SET_GPR_U32(ctx, 31, 0x1C3328u);
    ctx->pc = 0x1C3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3320u;
    // 0x1c3324: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3320u, 0x1C3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3328u;
label_1c3328:
    // 0x1c3328: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1c3328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1c332c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c3330: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1c3330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1c3334: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c3334u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c3338: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c3338u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c333c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C333Cu;
    {
        const bool branch_taken_0x1c333c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C333Cu;
        // 0x1c3340: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c333c) {
            ctx->pc = 0x1C3280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3280;
        }
    }
    ctx->pc = 0x1C3344u;
    // 0x1c3344: 0x0  nop
    ctx->pc = 0x1c3344u;
    // NOP
label_1c3348:
    // 0x1c3348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c334c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c334cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c3350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c335c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3360: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3360u;
        // 0x1c3364: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3368u;
}
