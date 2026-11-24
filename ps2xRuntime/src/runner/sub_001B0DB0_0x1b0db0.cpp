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

// Function: sub_001B0DB0
// Address: 0x1b0db0 - 0x1b1328
void sub_001B0DB0_0x1b0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0DB0_0x1b0db0");
#endif

    switch (ctx->pc) {
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1278u: goto label_1b1278;
        case 0x1b128cu: goto label_1b128c;
        case 0x1b12b0u: goto label_1b12b0;
        case 0x1b12c4u: goto label_1b12c4;
        case 0x1b12dcu: goto label_1b12dc;
        default: break;
    }

    ctx->pc = 0x1b0db0u;

    // 0x1b0db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b0db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b0db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0db8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b0db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b0dbc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b0dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b0dc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b0dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b0dc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b0dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b0dc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b0dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b0dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b0dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b0dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b0dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b0ddc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1b0ddcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b0de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0de4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b0de4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b0de8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b0de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b0dec: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B0DECu;
    SET_GPR_U32(ctx, 31, 0x1B0DF4u);
    ctx->pc = 0x1B0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DECu;
    // 0x1b0df0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B0DECu, 0x1B0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DF4u;
label_1b0df4:
    // 0x1b0df4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b0df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dfc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0e00: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b0e04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0E04u;
    SET_GPR_U32(ctx, 31, 0x1B0E0Cu);
    ctx->pc = 0x1B0E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E04u;
    // 0x1b0e08: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0E04u, 0x1B0E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E0Cu;
label_1b0e0c:
    // 0x1b0e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e10: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B0E10u;
    SET_GPR_U32(ctx, 31, 0x1B0E18u);
    ctx->pc = 0x1B0E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E10u;
    // 0x1b0e14: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B0E10u, 0x1B0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E18u;
label_1b0e18:
    // 0x1b0e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0e24: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1B0E24u;
    SET_GPR_U32(ctx, 31, 0x1B0E2Cu);
    ctx->pc = 0x1B0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E24u;
    // 0x1b0e28: 0x28eb8  dsll        $s1, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1B0E24u, 0x1B0E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E2Cu;
label_1b0e2c:
    // 0x1b0e2c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b0e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0e38: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1b0e3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b0e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b0e40: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b0e44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b0e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0e48: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B0E48u;
    SET_GPR_U32(ctx, 31, 0x1B0E50u);
    ctx->pc = 0x1B0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E48u;
    // 0x1b0e4c: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B0E48u, 0x1B0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E50u;
label_1b0e50:
    // 0x1b0e50: 0x9e0378d0  lwu         $v1, 0x78D0($s0)
    ctx->pc = 0x1b0e50u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 30928)));
    // 0x1b0e54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0e58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0e5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b0e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0e60: 0x227b8  dsll        $a0, $v0, 30
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 30);
    // 0x1b0e64: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0e68: 0x913025  or          $a2, $a0, $s1
    ctx->pc = 0x1b0e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x1b0e6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e74: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b0e78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b0e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b0e7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x1B0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E7Cu;
    // 0x1b0e80: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0E7Cu, 0x1B0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B0E84u;
    SET_GPR_U32(ctx, 31, 0x1B0E8Cu);
    ctx->pc = 0x1B0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E84u;
    // 0x1b0e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B0E84u, 0x1B0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E8Cu;
label_1b0e8c:
    // 0x1b0e8c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b0e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e94: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b0e98: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b0e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b0e9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0ea0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b0ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0ea8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b0ea8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b0eac: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b0eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b0eb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0EB0u;
    SET_GPR_U32(ctx, 31, 0x1B0EB8u);
    ctx->pc = 0x1B0EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EB0u;
    // 0x1b0eb4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0EB0u, 0x1B0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EB8u;
label_1b0eb8:
    // 0x1b0eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ebc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b0ec0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0ec4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b0ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ecc: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b0ed0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0ED0u;
    SET_GPR_U32(ctx, 31, 0x1B0ED8u);
    ctx->pc = 0x1B0ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0ED0u;
    // 0x1b0ed4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0ED0u, 0x1B0ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0ED8u;
label_1b0ed8:
    // 0x1b0ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0edc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b0edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b0ee0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0EE0u;
    SET_GPR_U32(ctx, 31, 0x1B0EE8u);
    ctx->pc = 0x1B0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EE0u;
    // 0x1b0ee4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0EE0u, 0x1B0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EE8u;
label_1b0ee8:
    // 0x1b0ee8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b0eec: 0x9e0678c0  lwu         $a2, 0x78C0($s0)
    ctx->pc = 0x1b0eecu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 30912)));
    // 0x1b0ef0: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1b0ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1b0ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef8: 0x8e0278c4  lw          $v0, 0x78C4($s0)
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30916)));
    // 0x1b0efc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b0f00: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1b0f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1b0f04: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b0f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b0f08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b0f0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0f10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0f14: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b0f18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0F18u;
    SET_GPR_U32(ctx, 31, 0x1B0F20u);
    ctx->pc = 0x1B0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F18u;
    // 0x1b0f1c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0F18u, 0x1B0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F20u;
label_1b0f20:
    // 0x1b0f20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b0f24: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b0f28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f30: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b0f34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0F34u;
    SET_GPR_U32(ctx, 31, 0x1B0F3Cu);
    ctx->pc = 0x1B0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F34u;
    // 0x1b0f38: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0F34u, 0x1B0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F3Cu;
label_1b0f3c:
    // 0x1b0f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f40: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B0F40u;
    SET_GPR_U32(ctx, 31, 0x1B0F48u);
    ctx->pc = 0x1B0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F40u;
    // 0x1b0f44: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B0F40u, 0x1B0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0f4c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1b0f50: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b0f54: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b0f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b0f5c: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1b0f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0f64: 0x0  nop
    ctx->pc = 0x1b0f64u;
    // NOP
    // 0x1b0f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b0f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0f6c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1b0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1b0f70: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1b0f74: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b0f78: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1b0f78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b0f7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b0f80: 0x0  nop
    ctx->pc = 0x1b0f80u;
    // NOP
    // 0x1b0f84: 0x0  nop
    ctx->pc = 0x1b0f84u;
    // NOP
    // 0x1b0f88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0f8c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1B0F8Cu;
    {
        const bool branch_taken_0x1b0f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F8Cu;
        // 0x1b0f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f8c) {
            ctx->pc = 0x1B11A0u;
            goto label_1b11a0;
        }
    }
    ctx->pc = 0x1B0F94u;
    // 0x1b0f94: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b0f98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0F98u;
    SET_GPR_U32(ctx, 31, 0x1B0FA0u);
    ctx->pc = 0x1B0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F98u;
    // 0x1b0f9c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0F98u, 0x1B0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fa8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0FA8u;
    SET_GPR_U32(ctx, 31, 0x1B0FB0u);
    ctx->pc = 0x1B0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FA8u;
    // 0x1b0fac: 0x24060256  addiu       $a2, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0FA8u, 0x1B0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FB0u;
label_1b0fb0:
    // 0x1b0fb0: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x1b0fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b0fb4: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x1b0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x1b0fb8: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x1b0fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fc0: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x1b0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0fc4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1b0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0fc8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b0fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b0fcc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b0fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b0fd0: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1b0fd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b0fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b0fd8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b0fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b0fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b0fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b0fe4: 0x46032503  div.s       $f20, $f4, $f3
    ctx->pc = 0x1b0fe4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1b0fe8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1b0fe8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1b0fec: 0x46030dc3  div.s       $f23, $f1, $f3
    ctx->pc = 0x1b0fecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1b0ff0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b0ff0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1b0ff4: 0x0  nop
    ctx->pc = 0x1b0ff4u;
    // NOP
    // 0x1b0ff8: 0x0  nop
    ctx->pc = 0x1b0ff8u;
    // NOP
    // 0x1b0ffc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b0ffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1000: 0x102000bd  beqz        $at, . + 4 + (0xBD << 2)
    ctx->pc = 0x1B1000u;
    {
        const bool branch_taken_0x1b1000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1000) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B1008u;
    // 0x1b1008: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b1008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b100c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1010: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b1014: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1018: 0x4600ad80  add.s       $f22, $f21, $f0
    ctx->pc = 0x1b1018u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1b101c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b101cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1020: 0x0  nop
    ctx->pc = 0x1b1020u;
    // NOP
    // 0x1b1024: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x1b1024u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b1028:
    // 0x1b1028: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b1028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b102c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1030: 0x9e0678c0  lwu         $a2, 0x78C0($s0)
    ctx->pc = 0x1b1030u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 30912)));
    // 0x1b1034: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b1034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b1038: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1b1038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b103c: 0x8e0278c4  lw          $v0, 0x78C4($s0)
    ctx->pc = 0x1b103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30916)));
    // 0x1b1040: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b1040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b1044: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b1044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b1048: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1050: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b1050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b1054: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b1054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b1058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b105c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1060: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1064: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1068: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1068u;
    SET_GPR_U32(ctx, 31, 0x1B1070u);
    ctx->pc = 0x1B106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1068u;
    // 0x1b106c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1068u, 0x1B1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1070u;
label_1b1070:
    // 0x1b1070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1074: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1078: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b1078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b107c: 0xc07089c  jal         func_1C2270
    ctx->pc = 0x1B107Cu;
    SET_GPR_U32(ctx, 31, 0x1B1084u);
    ctx->pc = 0x1B1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B107Cu;
    // 0x1b1080: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2270u, 0x1B107Cu, 0x1B1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1084u;
label_1b1084:
    // 0x1b1084: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b1088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b108c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1098: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b109c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b109cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b10a0: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b10a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b10a4: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b10a8: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b10ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b10acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b10b0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b10b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b10b8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b10b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b10bc: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b10c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b10c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b10c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b10c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b10c8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b10c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b10cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b10ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b10d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B10D0u;
    SET_GPR_U32(ctx, 31, 0x1B10D8u);
    ctx->pc = 0x1B10D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10D0u;
    // 0x1b10d4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B10D0u, 0x1B10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10D8u;
label_1b10d8:
    // 0x1b10d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b10dc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b10e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b10e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b10e4: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b10e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b10e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b10ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b10ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b10f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B10F4u;
    SET_GPR_U32(ctx, 31, 0x1B10FCu);
    ctx->pc = 0x1B10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10F4u;
    // 0x1b10f8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B10F4u, 0x1B10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10FCu;
label_1b10fc:
    // 0x1b10fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b10fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1100: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1104: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b1104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b1108: 0xc07089c  jal         func_1C2270
    ctx->pc = 0x1B1108u;
    SET_GPR_U32(ctx, 31, 0x1B1110u);
    ctx->pc = 0x1B110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1108u;
    // 0x1b110c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2270u, 0x1B1108u, 0x1B1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1110u;
label_1b1110:
    // 0x1b1110: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x1b1110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b1114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b111c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1124: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b1124u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b1128: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b1128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b112c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b112cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1130: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b1134: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b1138: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b1138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b113c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b113cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b1140: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b1140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b1144: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b1144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b1148: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b1148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b114c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1150: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1154: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b1158: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b115c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B115Cu;
    SET_GPR_U32(ctx, 31, 0x1B1164u);
    ctx->pc = 0x1B1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B115Cu;
    // 0x1b1160: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B115Cu, 0x1B1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1164u;
label_1b1164:
    // 0x1b1164: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b1168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b116c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b1170: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1174: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1174u;
    SET_GPR_U32(ctx, 31, 0x1B117Cu);
    ctx->pc = 0x1B1178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1174u;
    // 0x1b1178: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1174u, 0x1B117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B117Cu;
label_1b117c:
    // 0x1b117c: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1b1180: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b1184: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1b1188: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b118c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1190: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1B1190u;
    {
        const bool branch_taken_0x1b1190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1190) {
            ctx->pc = 0x1B1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1028;
        }
    }
    ctx->pc = 0x1B1198u;
    // 0x1b1198: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B1198u;
    {
        const bool branch_taken_0x1b1198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1198) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B11A0u;
label_1b11a0:
    // 0x1b11a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b11a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B11A8u;
    SET_GPR_U32(ctx, 31, 0x1B11B0u);
    ctx->pc = 0x1B11ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11A8u;
    // 0x1b11ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B11A8u, 0x1B11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11B0u;
label_1b11b0:
    // 0x1b11b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b11b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b11b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B11B8u;
    SET_GPR_U32(ctx, 31, 0x1B11C0u);
    ctx->pc = 0x1B11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11B8u;
    // 0x1b11bc: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B11B8u, 0x1B11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11C0u;
label_1b11c0:
    // 0x1b11c0: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b11c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b11c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b11cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b11ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b11d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b11d4: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b11d8: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b11d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b11dc: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b11dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b11e0: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b11e4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b11e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b11e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b11e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b11ec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b11ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b11f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b11f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b11f4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b11f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b11f8: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b11fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b11fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1200: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1204: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b1204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b1208: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b120c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B120Cu;
    SET_GPR_U32(ctx, 31, 0x1B1214u);
    ctx->pc = 0x1B1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B120Cu;
    // 0x1b1210: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B120Cu, 0x1B1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1214u;
label_1b1214:
    // 0x1b1214: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1b1218: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b121c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1220: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B1220u;
    {
        const bool branch_taken_0x1b1220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1220u;
        // 0x1b1224: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1220) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B1228u;
    // 0x1b1228: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b122c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b122cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1230:
    // 0x1b1230: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b1230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b1234: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1238: 0x9e0678c0  lwu         $a2, 0x78C0($s0)
    ctx->pc = 0x1b1238u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 30912)));
    // 0x1b123c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b1240: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1b1240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b1244: 0x8e0278c4  lw          $v0, 0x78C4($s0)
    ctx->pc = 0x1b1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30916)));
    // 0x1b1248: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b1248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b124c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b124cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b1250: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b1254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1258: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b1258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b125c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1b125cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b1260: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1264: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1268: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b126c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1270: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1270u;
    SET_GPR_U32(ctx, 31, 0x1B1278u);
    ctx->pc = 0x1B1274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1270u;
    // 0x1b1274: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1270u, 0x1B1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1278u;
label_1b1278:
    // 0x1b1278: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b127c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1280: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1284: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1284u;
    SET_GPR_U32(ctx, 31, 0x1B128Cu);
    ctx->pc = 0x1B1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1284u;
    // 0x1b1288: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1284u, 0x1B128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B128Cu;
label_1b128c:
    // 0x1b128c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1290: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b1294: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1298: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b1298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b129c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b12a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b12a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b12a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B12A8u;
    SET_GPR_U32(ctx, 31, 0x1B12B0u);
    ctx->pc = 0x1B12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12A8u;
    // 0x1b12ac: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B12A8u, 0x1B12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12B0u;
label_1b12b0:
    // 0x1b12b0: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b12b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b12b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b12b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b12bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B12BCu;
    SET_GPR_U32(ctx, 31, 0x1B12C4u);
    ctx->pc = 0x1B12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12BCu;
    // 0x1b12c0: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B12BCu, 0x1B12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12C4u;
label_1b12c4:
    // 0x1b12c4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b12c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b12c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12cc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b12ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b12d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b12d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B12D4u;
    SET_GPR_U32(ctx, 31, 0x1B12DCu);
    ctx->pc = 0x1B12D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12D4u;
    // 0x1b12d8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B12D4u, 0x1B12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12DCu;
label_1b12dc:
    // 0x1b12dc: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1b12e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b12e4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1b12e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1b12e8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b12ec: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1b12ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b12f0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1B12F0u;
    {
        const bool branch_taken_0x1b12f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12F0u;
        // 0x1b12f4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12f0) {
            ctx->pc = 0x1B1230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1230;
        }
    }
    ctx->pc = 0x1B12F8u;
label_1b12f8:
    // 0x1b12f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b12f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b12fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b12fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1300: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1b1300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b1304: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b1304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1308: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1b1308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b130c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b130cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1310: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b1314: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1318: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b131c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1320: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1320u;
        // 0x1b1324: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1328u;
}
