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

// Function: sub_001B0AE0
// Address: 0x1b0ae0 - 0x1b0db0
void sub_001B0AE0_0x1b0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0AE0_0x1b0ae0");
#endif

    switch (ctx->pc) {
        case 0x1b0b30u: goto label_1b0b30;
        case 0x1b0b50u: goto label_1b0b50;
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0c14u: goto label_1b0c14;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c68u: goto label_1b0c68;
        case 0x1b0ce0u: goto label_1b0ce0;
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d60u: goto label_1b0d60;
        case 0x1b0d84u: goto label_1b0d84;
        default: break;
    }

    ctx->pc = 0x1b0ae0u;

    // 0x1b0ae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b0ae4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b0ae8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b0ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b0aec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b0af0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1b0af0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0af4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b0af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b0af8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b0af8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0afc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b0b00: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1b0b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0b08: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b0b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b0b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0b14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b0b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0b1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b0b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0b28: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B0B28u;
    SET_GPR_U32(ctx, 31, 0x1B0B30u);
    ctx->pc = 0x1B0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B28u;
    // 0x1b0b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B0B28u, 0x1B0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B30u;
label_1b0b30:
    // 0x1b0b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0b34: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b0b38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0b3c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b0b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b44: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b0b48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0B48u;
    SET_GPR_U32(ctx, 31, 0x1B0B50u);
    ctx->pc = 0x1B0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B48u;
    // 0x1b0b4c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0B48u, 0x1B0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B50u;
label_1b0b50:
    // 0x1b0b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b54: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b0b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b0b58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0B58u;
    SET_GPR_U32(ctx, 31, 0x1B0B60u);
    ctx->pc = 0x1B0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B58u;
    // 0x1b0b5c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0B58u, 0x1B0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B60u;
label_1b0b60:
    // 0x1b0b60: 0x16a182  srl         $s4, $s6, 6
    ctx->pc = 0x1b0b60u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 22), 6));
    // 0x1b0b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b68: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b0b6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b70: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B0B70u;
    SET_GPR_U32(ctx, 31, 0x1B0B78u);
    ctx->pc = 0x1B0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B70u;
    // 0x1b0b74: 0x13983e  dsrl32      $s3, $s3, 0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B0B70u, 0x1B0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B78u;
label_1b0b78:
    // 0x1b0b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0b7c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b0b80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b88: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1b0b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1b0b8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b0b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b90: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0b94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0b98: 0x131bb8  dsll        $v1, $s3, 14
    ctx->pc = 0x1b0b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << 14);
    // 0x1b0b9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b0b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0ba0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B0BA0u;
    SET_GPR_U32(ctx, 31, 0x1B0BA8u);
    ctx->pc = 0x1B0BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BA0u;
    // 0x1b0ba4: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B0BA0u, 0x1B0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BA8u;
label_1b0ba8:
    // 0x1b0ba8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0bac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0bb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b0bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b0bb4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b0bb8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b0bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0bc0: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1b0bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1b0bc4: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1b0bc4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1b0bc8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b0bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b0bcc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0bd8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b0bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b0bdc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b0be0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0BE0u;
    SET_GPR_U32(ctx, 31, 0x1B0BE8u);
    ctx->pc = 0x1B0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BE0u;
    // 0x1b0be4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0BE0u, 0x1B0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BE8u;
label_1b0be8:
    // 0x1b0be8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1b0be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1b0bec: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1b0becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b0bf0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0bf4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b0bf8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c00: 0x131438  dsll        $v0, $s3, 16
    ctx->pc = 0x1b0c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << 16);
    // 0x1b0c04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0c08: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b0c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b0c0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C14u);
    ctx->pc = 0x1B0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C0Cu;
    // 0x1b0c10: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0C0Cu, 0x1B0C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C14u;
label_1b0c14:
    // 0x1b0c14: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x1b0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1b0c18: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1b0c1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0c20: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x1b0c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0c24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0c28: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b0c28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1b0c2c: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1b0c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1b0c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c34: 0x1010bc  dsll32      $v0, $s0, 2
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 2));
    // 0x1b0c38: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1b0c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1b0c3c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b0c3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0c40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0C40u;
    SET_GPR_U32(ctx, 31, 0x1B0C48u);
    ctx->pc = 0x1B0C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C40u;
    // 0x1b0c44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0C40u, 0x1B0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C48u;
label_1b0c48:
    // 0x1b0c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c4c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b0c50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0C50u;
    SET_GPR_U32(ctx, 31, 0x1B0C58u);
    ctx->pc = 0x1B0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C50u;
    // 0x1b0c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0C50u, 0x1B0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C58u;
label_1b0c58:
    // 0x1b0c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0C60u;
    SET_GPR_U32(ctx, 31, 0x1B0C68u);
    ctx->pc = 0x1B0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C60u;
    // 0x1b0c64: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0C60u, 0x1B0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C68u;
label_1b0c68:
    // 0x1b0c68: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x1b0c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1b0c6c: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B0C6Cu;
    {
        const bool branch_taken_0x1b0c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C6Cu;
        // 0x1b0c70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c6c) {
            ctx->pc = 0x1B0D78u;
            goto label_1b0d78;
        }
    }
    ctx->pc = 0x1B0C74u;
    // 0x1b0c74: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1b0c78: 0x10bc3c  dsll32      $s7, $s0, 16
    ctx->pc = 0x1b0c78u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b0c7c: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1b0c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b0c80: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1b0c84: 0x26c20700  addiu       $v0, $s6, 0x700
    ctx->pc = 0x1b0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1792));
    // 0x1b0c88: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1b0c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0c8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0c90: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b0c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b0c94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b0c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c9c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1b0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1b0ca0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b0ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b0ca4: 0x24440009  addiu       $a0, $v0, 0x9
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b0ca8: 0x26a20790  addiu       $v0, $s5, 0x790
    ctx->pc = 0x1b0ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
    // 0x1b0cac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b0cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b0cb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0cb4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b0cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b0cb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0cbc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1b0cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1b0cc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0cc4: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b0cc8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b0cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b0ccc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b0cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0cd8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b0cd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b0cdc: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x1b0cdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b0ce0:
    // 0x1b0ce0: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b0ce4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1b0ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b0ce8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b0ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b0cec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b0cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b0cf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b0cf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cfc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b0d00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0D00u;
    SET_GPR_U32(ctx, 31, 0x1B0D08u);
    ctx->pc = 0x1B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D00u;
    // 0x1b0d04: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0D00u, 0x1B0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b0d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0d14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0D14u;
    SET_GPR_U32(ctx, 31, 0x1B0D1Cu);
    ctx->pc = 0x1B0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D14u;
    // 0x1b0d18: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0D14u, 0x1B0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D1Cu;
label_1b0d1c:
    // 0x1b0d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0d20: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b0d24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0d28: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b0d2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b0d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d34: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b0d38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0D38u;
    SET_GPR_U32(ctx, 31, 0x1B0D40u);
    ctx->pc = 0x1B0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D38u;
    // 0x1b0d3c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0D38u, 0x1B0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D40u;
label_1b0d40:
    // 0x1b0d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b0d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0d48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0D48u;
    SET_GPR_U32(ctx, 31, 0x1B0D50u);
    ctx->pc = 0x1B0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D48u;
    // 0x1b0d4c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0D48u, 0x1B0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D50u;
label_1b0d50:
    // 0x1b0d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b0d58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B0D58u;
    SET_GPR_U32(ctx, 31, 0x1B0D60u);
    ctx->pc = 0x1B0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D58u;
    // 0x1b0d5c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B0D58u, 0x1B0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D60u;
label_1b0d60:
    // 0x1b0d60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b0d60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b0d64: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1b0d68: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x1b0d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1b0d6c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B0D6Cu;
    {
        const bool branch_taken_0x1b0d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D6Cu;
        // 0x1b0d70: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d6c) {
            ctx->pc = 0x1B0CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ce0;
        }
    }
    ctx->pc = 0x1B0D74u;
    // 0x1b0d74: 0x0  nop
    ctx->pc = 0x1b0d74u;
    // NOP
label_1b0d78:
    // 0x1b0d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d7c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B0D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0D84u);
    ctx->pc = 0x1B0D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D7Cu;
    // 0x1b0d80: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B0D7Cu, 0x1B0D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D84u;
label_1b0d84:
    // 0x1b0d84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b0d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0d88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0d88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0d8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0d8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0d90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0d90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0d94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0d98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0d9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DA8u;
        // 0x1b0dac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0DB0u;
}
