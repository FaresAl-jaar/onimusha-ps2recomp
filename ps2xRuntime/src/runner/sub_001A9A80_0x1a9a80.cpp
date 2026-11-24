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

// Function: sub_001A9A80
// Address: 0x1a9a80 - 0x1aaa40
void sub_001A9A80_0x1a9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A80_0x1a9a80");
#endif

    switch (ctx->pc) {
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9accu: goto label_1a9acc;
        case 0x1a9af8u: goto label_1a9af8;
        case 0x1a9b08u: goto label_1a9b08;
        case 0x1a9b1cu: goto label_1a9b1c;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b8cu: goto label_1a9b8c;
        case 0x1a9ba0u: goto label_1a9ba0;
        case 0x1a9bc0u: goto label_1a9bc0;
        case 0x1a9bd0u: goto label_1a9bd0;
        case 0x1a9be0u: goto label_1a9be0;
        case 0x1a9c10u: goto label_1a9c10;
        case 0x1a9c24u: goto label_1a9c24;
        case 0x1a9c48u: goto label_1a9c48;
        case 0x1a9c5cu: goto label_1a9c5c;
        case 0x1a9c74u: goto label_1a9c74;
        case 0x1a9c94u: goto label_1a9c94;
        case 0x1a9cb0u: goto label_1a9cb0;
        case 0x1a9cc0u: goto label_1a9cc0;
        case 0x1a9cccu: goto label_1a9ccc;
        case 0x1a9cf0u: goto label_1a9cf0;
        case 0x1a9d30u: goto label_1a9d30;
        case 0x1a9d44u: goto label_1a9d44;
        case 0x1a9d64u: goto label_1a9d64;
        case 0x1a9d80u: goto label_1a9d80;
        case 0x1a9d90u: goto label_1a9d90;
        case 0x1a9da0u: goto label_1a9da0;
        case 0x1a9dd0u: goto label_1a9dd0;
        case 0x1a9de4u: goto label_1a9de4;
        case 0x1a9e08u: goto label_1a9e08;
        case 0x1a9e1cu: goto label_1a9e1c;
        case 0x1a9e34u: goto label_1a9e34;
        case 0x1a9e54u: goto label_1a9e54;
        case 0x1a9e68u: goto label_1a9e68;
        case 0x1a9e78u: goto label_1a9e78;
        case 0x1a9e84u: goto label_1a9e84;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9efcu: goto label_1a9efc;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa380u: goto label_1aa380;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3f0u: goto label_1aa3f0;
        case 0x1aa418u: goto label_1aa418;
        case 0x1aa434u: goto label_1aa434;
        case 0x1aa4b0u: goto label_1aa4b0;
        case 0x1aa4dcu: goto label_1aa4dc;
        case 0x1aa4f0u: goto label_1aa4f0;
        case 0x1aa500u: goto label_1aa500;
        case 0x1aa510u: goto label_1aa510;
        case 0x1aa520u: goto label_1aa520;
        case 0x1aa554u: goto label_1aa554;
        case 0x1aa5c8u: goto label_1aa5c8;
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa618u: goto label_1aa618;
        case 0x1aa628u: goto label_1aa628;
        case 0x1aa638u: goto label_1aa638;
        case 0x1aa66cu: goto label_1aa66c;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa76cu: goto label_1aa76c;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9f0u: goto label_1aa9f0;
        default: break;
    }

    ctx->pc = 0x1a9a80u;

    // 0x1a9a80: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x1a9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
    // 0x1a9a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9a88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a9a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a9a8c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1a9a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a9a90: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a9a94: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a9a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a9a98: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a9a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a9a9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a9a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a9aa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a9aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a9aa4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a9aa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9aa8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a9aac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a9ab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a9ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9ab8: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x1a9ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x1a9abc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A9ABCu;
    SET_GPR_U32(ctx, 31, 0x1A9AC4u);
    ctx->pc = 0x1A9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9ABCu;
    // 0x1a9ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A9ABCu, 0x1A9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AC4u;
label_1a9ac4:
    // 0x1a9ac4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A9AC4u;
    SET_GPR_U32(ctx, 31, 0x1A9ACCu);
    ctx->pc = 0x1A9AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AC4u;
    // 0x1a9ac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A9AC4u, 0x1A9ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9ACCu;
label_1a9acc:
    // 0x1a9acc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a9accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a9ad0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a9ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9adc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1a9adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a9ae0: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1a9ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a9ae4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a9ae8: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a9aec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9af0: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A9AF0u;
    SET_GPR_U32(ctx, 31, 0x1A9AF8u);
    ctx->pc = 0x1A9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AF0u;
    // 0x1a9af4: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A9AF0u, 0x1A9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AF8u;
label_1a9af8:
    // 0x1a9af8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9afc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a9afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a9b00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9B00u;
    SET_GPR_U32(ctx, 31, 0x1A9B08u);
    ctx->pc = 0x1A9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B00u;
    // 0x1a9b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9B00u, 0x1A9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B08u;
label_1a9b08:
    // 0x1a9b08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a9b0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b10: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a9b14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9B14u;
    SET_GPR_U32(ctx, 31, 0x1A9B1Cu);
    ctx->pc = 0x1A9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B14u;
    // 0x1a9b18: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9B14u, 0x1A9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B1Cu;
label_1a9b1c:
    // 0x1a9b1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b20: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9B20u;
    SET_GPR_U32(ctx, 31, 0x1A9B28u);
    ctx->pc = 0x1A9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B20u;
    // 0x1a9b24: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9B20u, 0x1A9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B28u;
label_1a9b28:
    // 0x1a9b28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9b34: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a9b38: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a9b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a9b3c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1a9b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1a9b40: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a9b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9b44: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9B44u;
    SET_GPR_U32(ctx, 31, 0x1A9B4Cu);
    ctx->pc = 0x1A9B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B44u;
    // 0x1a9b48: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9B44u, 0x1A9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B4Cu;
label_1a9b4c:
    // 0x1a9b4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9b50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a9b54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9b58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a9b5c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a9b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a9b60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9b64: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a9b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a9b68: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a9b68u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9b6c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a9b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9b70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a9b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9b7c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a9b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a9b80: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a9b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a9b84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9B84u;
    SET_GPR_U32(ctx, 31, 0x1A9B8Cu);
    ctx->pc = 0x1A9B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B84u;
    // 0x1a9b88: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9B84u, 0x1A9B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9B8Cu;
label_1a9b8c:
    // 0x1a9b8c: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1a9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1a9b90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b94: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a9b98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9B98u;
    SET_GPR_U32(ctx, 31, 0x1A9BA0u);
    ctx->pc = 0x1A9B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B98u;
    // 0x1a9b9c: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9B98u, 0x1A9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BA0u;
label_1a9ba0:
    // 0x1a9ba0: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1a9ba4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a9ba8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9bac: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1a9bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1a9bb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bb4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a9bb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9BB8u;
    SET_GPR_U32(ctx, 31, 0x1A9BC0u);
    ctx->pc = 0x1A9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BB8u;
    // 0x1a9bbc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9BB8u, 0x1A9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BC0u;
label_1a9bc0:
    // 0x1a9bc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9BC8u;
    SET_GPR_U32(ctx, 31, 0x1A9BD0u);
    ctx->pc = 0x1A9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BC8u;
    // 0x1a9bcc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9BC8u, 0x1A9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BD0u;
label_1a9bd0:
    // 0x1a9bd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bd4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a9bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a9bd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bdc: 0x0  nop
    ctx->pc = 0x1a9bdcu;
    // NOP
label_1a9be0:
    // 0x1a9be0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a9be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9be4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a9be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9be8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9bec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1a9bf0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9bf4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a9bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a9bf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9bfc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9c00: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9c04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9C08u;
    SET_GPR_U32(ctx, 31, 0x1A9C10u);
    ctx->pc = 0x1A9C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C08u;
    // 0x1a9c0c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9C08u, 0x1A9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C10u;
label_1a9c10:
    // 0x1a9c10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9c14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9c1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9C1Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C24u);
    ctx->pc = 0x1A9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C1Cu;
    // 0x1a9c20: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9C1Cu, 0x1A9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C24u;
label_1a9c24:
    // 0x1a9c24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9c28: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a9c2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9c30: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1a9c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1a9c34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9c38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c3c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9c40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9C40u;
    SET_GPR_U32(ctx, 31, 0x1A9C48u);
    ctx->pc = 0x1A9C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C40u;
    // 0x1a9c44: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9C40u, 0x1A9C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C48u;
label_1a9c48:
    // 0x1a9c48: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1a9c4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9c54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9C54u;
    SET_GPR_U32(ctx, 31, 0x1A9C5Cu);
    ctx->pc = 0x1A9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C54u;
    // 0x1a9c58: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9C54u, 0x1A9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C5Cu;
label_1a9c5c:
    // 0x1a9c5c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1a9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1a9c60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c64: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1a9c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a9c68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9c6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C74u);
    ctx->pc = 0x1A9C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C6Cu;
    // 0x1a9c70: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9C6Cu, 0x1A9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C74u;
label_1a9c74:
    // 0x1a9c74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a9c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a9c78: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a9c7c: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1a9c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a9c80: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A9C80u;
    {
        const bool branch_taken_0x1a9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C80u;
        // 0x1a9c84: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c80) {
            ctx->pc = 0x1A9BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9be0;
        }
    }
    ctx->pc = 0x1A9C88u;
    // 0x1a9c88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c8c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C94u);
    ctx->pc = 0x1A9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C8Cu;
    // 0x1a9c90: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A9C8Cu, 0x1A9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C94u;
label_1a9c94:
    // 0x1a9c94: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a9c98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c9c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1a9c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1a9ca0: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x1a9ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a9ca4: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a9ca8: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1A9CA8u;
    SET_GPR_U32(ctx, 31, 0x1A9CB0u);
    ctx->pc = 0x1A9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CA8u;
    // 0x1a9cac: 0x24470024  addiu       $a3, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1A9CA8u, 0x1A9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CB0u;
label_1a9cb0:
    // 0x1a9cb0: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9cb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cb8: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A9CB8u;
    SET_GPR_U32(ctx, 31, 0x1A9CC0u);
    ctx->pc = 0x1A9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CB8u;
    // 0x1a9cbc: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A9CB8u, 0x1A9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CC0u;
label_1a9cc0:
    // 0x1a9cc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cc4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9CC4u;
    SET_GPR_U32(ctx, 31, 0x1A9CCCu);
    ctx->pc = 0x1A9CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CC4u;
    // 0x1a9cc8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9CC4u, 0x1A9CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CCCu;
label_1a9ccc:
    // 0x1a9ccc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9cd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9cd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9cd8: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1a9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1a9cdc: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a9cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a9ce0: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1a9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1a9ce4: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a9ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9ce8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9CE8u;
    SET_GPR_U32(ctx, 31, 0x1A9CF0u);
    ctx->pc = 0x1A9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9CE8u;
    // 0x1a9cec: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9CE8u, 0x1A9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CF0u;
label_1a9cf0:
    // 0x1a9cf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9cf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a9cf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9cfc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a9d00: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a9d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a9d04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9d08: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a9d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a9d0c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a9d0cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9d10: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a9d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9d14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a9d18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9d20: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a9d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a9d24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a9d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a9d28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9D28u;
    SET_GPR_U32(ctx, 31, 0x1A9D30u);
    ctx->pc = 0x1A9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D28u;
    // 0x1a9d2c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9D28u, 0x1A9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D30u;
label_1a9d30:
    // 0x1a9d30: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a9d34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d38: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a9d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a9d3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D44u);
    ctx->pc = 0x1A9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D3Cu;
    // 0x1a9d40: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9D3Cu, 0x1A9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D44u;
label_1a9d44:
    // 0x1a9d44: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1a9d48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a9d4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9d50: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1a9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a9d54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a9d5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D64u);
    ctx->pc = 0x1A9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D5Cu;
    // 0x1a9d60: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9D5Cu, 0x1A9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D64u;
label_1a9d64:
    // 0x1a9d64: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9d68: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a9d6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9d70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d74: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a9d78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9D78u;
    SET_GPR_U32(ctx, 31, 0x1A9D80u);
    ctx->pc = 0x1A9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D78u;
    // 0x1a9d7c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9D78u, 0x1A9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D80u;
label_1a9d80:
    // 0x1a9d80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9D88u;
    SET_GPR_U32(ctx, 31, 0x1A9D90u);
    ctx->pc = 0x1A9D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9D88u;
    // 0x1a9d8c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9D88u, 0x1A9D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D90u;
label_1a9d90:
    // 0x1a9d90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d94: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a9d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d9c: 0x0  nop
    ctx->pc = 0x1a9d9cu;
    // NOP
label_1a9da0:
    // 0x1a9da0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a9da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9da4: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9da8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9dac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a9db0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9db4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a9db8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9dbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a9dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9dc0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9dc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9dc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9DC8u;
    SET_GPR_U32(ctx, 31, 0x1A9DD0u);
    ctx->pc = 0x1A9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DC8u;
    // 0x1a9dcc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9DC8u, 0x1A9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DD0u;
label_1a9dd0:
    // 0x1a9dd0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9dd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9dd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9ddc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9DDCu;
    SET_GPR_U32(ctx, 31, 0x1A9DE4u);
    ctx->pc = 0x1A9DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9DDCu;
    // 0x1a9de0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9DDCu, 0x1A9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DE4u;
label_1a9de4:
    // 0x1a9de4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9de8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a9dec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9df0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a9df4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9df8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9dfc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9e00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9E00u;
    SET_GPR_U32(ctx, 31, 0x1A9E08u);
    ctx->pc = 0x1A9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E00u;
    // 0x1a9e04: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9E00u, 0x1A9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E08u;
label_1a9e08:
    // 0x1a9e08: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1a9e0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9e14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9E14u;
    SET_GPR_U32(ctx, 31, 0x1A9E1Cu);
    ctx->pc = 0x1A9E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E14u;
    // 0x1a9e18: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9E14u, 0x1A9E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E1Cu;
label_1a9e1c:
    // 0x1a9e1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a9e20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e24: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a9e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a9e28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9e2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E34u);
    ctx->pc = 0x1A9E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E2Cu;
    // 0x1a9e30: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9E2Cu, 0x1A9E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E34u;
label_1a9e34:
    // 0x1a9e34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a9e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a9e38: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a9e3c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1a9e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a9e40: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A9E40u;
    {
        const bool branch_taken_0x1a9e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E40u;
        // 0x1a9e44: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e40) {
            ctx->pc = 0x1A9DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9da0;
        }
    }
    ctx->pc = 0x1A9E48u;
    // 0x1a9e48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e4c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A9E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E54u);
    ctx->pc = 0x1A9E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E4Cu;
    // 0x1a9e50: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A9E4Cu, 0x1A9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E54u;
label_1a9e54:
    // 0x1a9e54: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a9e58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e5c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1a9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1a9e60: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1A9E60u;
    SET_GPR_U32(ctx, 31, 0x1A9E68u);
    ctx->pc = 0x1A9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E60u;
    // 0x1a9e64: 0x24460044  addiu       $a2, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1A9E60u, 0x1A9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E68u;
label_1a9e68:
    // 0x1a9e68: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a9e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9e6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e70: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A9E70u;
    SET_GPR_U32(ctx, 31, 0x1A9E78u);
    ctx->pc = 0x1A9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E70u;
    // 0x1a9e74: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A9E70u, 0x1A9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E78u;
label_1a9e78:
    // 0x1a9e78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e7c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A9E84u);
    ctx->pc = 0x1A9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E7Cu;
    // 0x1a9e80: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9E7Cu, 0x1A9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E84u;
label_1a9e84:
    // 0x1a9e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9e88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9e8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9e90: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A9E90u;
    SET_GPR_U32(ctx, 31, 0x1A9E98u);
    ctx->pc = 0x1A9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E90u;
    // 0x1a9e94: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A9E90u, 0x1A9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E98u;
label_1a9e98:
    // 0x1a9e98: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9e9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ea0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9ea4: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1a9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1a9ea8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9eac: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1a9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a9eb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a9eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9eb4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9EB4u;
    SET_GPR_U32(ctx, 31, 0x1A9EBCu);
    ctx->pc = 0x1A9EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EB4u;
    // 0x1a9eb8: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9EB4u, 0x1A9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EBCu;
label_1a9ebc:
    // 0x1a9ebc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9ec0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a9ec4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9ec8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a9ecc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a9eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a9ed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9ed4: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1a9ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1a9ed8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a9ed8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9edc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a9edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9ee0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a9ee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9eec: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a9eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a9ef0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a9ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a9ef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9EF4u;
    SET_GPR_U32(ctx, 31, 0x1A9EFCu);
    ctx->pc = 0x1A9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9EF4u;
    // 0x1a9ef8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9EF4u, 0x1A9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EFCu;
label_1a9efc:
    // 0x1a9efc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a9f00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f04: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a9f08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9F08u;
    SET_GPR_U32(ctx, 31, 0x1A9F10u);
    ctx->pc = 0x1A9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F08u;
    // 0x1a9f0c: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9F08u, 0x1A9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F10u;
label_1a9f10:
    // 0x1a9f10: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1a9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1a9f14: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1a9f14u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1a9f18: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1a9f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a9f1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f20: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1a9f24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a9f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a9f28: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1a9f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1a9f2c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a9f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a9f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9f34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9f38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9f3c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1a9f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1a9f40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9F40u;
    SET_GPR_U32(ctx, 31, 0x1A9F48u);
    ctx->pc = 0x1A9F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F40u;
    // 0x1a9f44: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9F40u, 0x1A9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F48u;
label_1a9f48:
    // 0x1a9f48: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9f4c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a9f50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9f54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f58: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a9f5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F64u);
    ctx->pc = 0x1A9F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F5Cu;
    // 0x1a9f60: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9F5Cu, 0x1A9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F64u;
label_1a9f64:
    // 0x1a9f64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F74u);
    ctx->pc = 0x1A9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F6Cu;
    // 0x1a9f70: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9F6Cu, 0x1A9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F74u;
label_1a9f74:
    // 0x1a9f74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f78: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a9f7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F84u);
    ctx->pc = 0x1A9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F7Cu;
    // 0x1a9f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9F7Cu, 0x1A9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F84u;
label_1a9f84:
    // 0x1a9f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f88: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a9f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a9f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f90:
    // 0x1a9f90: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a9f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9f94: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a9f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9f98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a9fa0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9fa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a9fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a9fa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9fac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9fb0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9FB8u;
    SET_GPR_U32(ctx, 31, 0x1A9FC0u);
    ctx->pc = 0x1A9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FB8u;
    // 0x1a9fbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9FB8u, 0x1A9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FC0u;
label_1a9fc0:
    // 0x1a9fc0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9fc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9fcc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9FCCu;
    SET_GPR_U32(ctx, 31, 0x1A9FD4u);
    ctx->pc = 0x1A9FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FCCu;
    // 0x1a9fd0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9FCCu, 0x1A9FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FD4u;
label_1a9fd4:
    // 0x1a9fd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9fd8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a9fdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9fe0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a9fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a9fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9ff0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9FF0u;
    SET_GPR_U32(ctx, 31, 0x1A9FF8u);
    ctx->pc = 0x1A9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FF0u;
    // 0x1a9ff4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9FF0u, 0x1A9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FF8u;
label_1a9ff8:
    // 0x1a9ff8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1a9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1a9ffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa000: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa004: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA004u;
    SET_GPR_U32(ctx, 31, 0x1AA00Cu);
    ctx->pc = 0x1AA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA004u;
    // 0x1aa008: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA004u, 0x1AA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA00Cu;
label_1aa00c:
    // 0x1aa00c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1aa00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1aa010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa014: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1aa014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1aa018: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa01c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA01Cu;
    SET_GPR_U32(ctx, 31, 0x1AA024u);
    ctx->pc = 0x1AA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA01Cu;
    // 0x1aa020: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA01Cu, 0x1AA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA024u;
label_1aa024:
    // 0x1aa024: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1aa028: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1aa028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1aa02c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1aa02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aa030: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AA030u;
    {
        const bool branch_taken_0x1aa030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA030u;
        // 0x1aa034: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa030) {
            ctx->pc = 0x1A9F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9f90;
        }
    }
    ctx->pc = 0x1AA038u;
    // 0x1aa038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa03c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AA03Cu;
    SET_GPR_U32(ctx, 31, 0x1AA044u);
    ctx->pc = 0x1AA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA03Cu;
    // 0x1aa040: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AA03Cu, 0x1AA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA044u;
label_1aa044:
    // 0x1aa044: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa048: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1aa04c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA04Cu;
    {
        const bool branch_taken_0x1aa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA04Cu;
        // 0x1aa050: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa04c) {
            ctx->pc = 0x1AA068u;
            goto label_1aa068;
        }
    }
    ctx->pc = 0x1AA054u;
    // 0x1aa054: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1aa054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1aa058: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1aa058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1aa05c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AA05Cu;
    {
        const bool branch_taken_0x1aa05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA05Cu;
        // 0x1aa060: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa05c) {
            ctx->pc = 0x1AA0A8u;
            goto label_1aa0a8;
        }
    }
    ctx->pc = 0x1AA064u;
    // 0x1aa064: 0x0  nop
    ctx->pc = 0x1aa064u;
    // NOP
label_1aa068:
    // 0x1aa068: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aa068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1aa06c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aa06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1aa070: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa074: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1aa074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1aa078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa07c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1aa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1aa080: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1aa080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa084: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1aa084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1aa088: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1aa08c: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x1aa08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa090: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1aa090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1aa094: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x1aa094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1aa098: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa09c: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1AA09Cu;
    SET_GPR_U32(ctx, 31, 0x1AA0A4u);
    ctx->pc = 0x1AA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA09Cu;
    // 0x1aa0a0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1AA09Cu, 0x1AA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x0  nop
    ctx->pc = 0x1aa0a4u;
    // NOP
label_1aa0a8:
    // 0x1aa0a8: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa0ac: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1aa0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1aa0b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aa0b8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1aa0bc: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1aa0bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa0c0: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x1aa0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1aa0c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa0c8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1aa0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1aa0cc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1aa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1aa0d0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1aa0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1aa0d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa0d8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1aa0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1aa0dc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1aa0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa0e0: 0x67100a  movz        $v0, $v1, $a3
    ctx->pc = 0x1aa0e0u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1aa0e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA0E4u;
    SET_GPR_U32(ctx, 31, 0x1AA0ECu);
    ctx->pc = 0x1AA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0E4u;
    // 0x1aa0e8: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA0E4u, 0x1AA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0ECu;
label_1aa0ec:
    // 0x1aa0ec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1aa0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa0f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aa0f8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1aa0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aa0fc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa100: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x1aa100u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa104: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1aa104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1aa108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aa10c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa110: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa114: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1aa114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1aa118: 0x1010bc  dsll32      $v0, $s0, 2
    ctx->pc = 0x1aa118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 2));
    // 0x1aa11c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1aa11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1aa120: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1aa120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa124: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1aa124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1aa128: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA128u;
    SET_GPR_U32(ctx, 31, 0x1AA130u);
    ctx->pc = 0x1AA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA128u;
    // 0x1aa12c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA128u, 0x1AA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA130u;
label_1aa130:
    // 0x1aa130: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa138: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa13c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa140: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1aa144: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1aa144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1aa148: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1aa148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aa14c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1aa14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1aa150: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1aa154: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1aa154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1aa158: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1aa158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1aa15c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1aa15cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1aa160: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aa160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aa164: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1aa164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aa168: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1aa168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1aa16c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa170: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa174: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1aa174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1aa178: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aa178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aa17c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA17Cu;
    SET_GPR_U32(ctx, 31, 0x1AA184u);
    ctx->pc = 0x1AA180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA17Cu;
    // 0x1aa180: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA17Cu, 0x1AA184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA184u;
label_1aa184:
    // 0x1aa184: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa188: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1aa188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1aa18c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa194: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aa194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa198: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA198u;
    SET_GPR_U32(ctx, 31, 0x1AA1A0u);
    ctx->pc = 0x1AA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA198u;
    // 0x1aa19c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA198u, 0x1AA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1A0u;
label_1aa1a0:
    // 0x1aa1a0: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa1a4: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1aa1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x1aa1a8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1aa1ac: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1aa1acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aa1b0: 0x10200185  beqz        $at, . + 4 + (0x185 << 2)
    ctx->pc = 0x1AA1B0u;
    {
        const bool branch_taken_0x1aa1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1B0u;
        // 0x1aa1b4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1b0) {
            ctx->pc = 0x1AA7C8u;
            goto label_1aa7c8;
        }
    }
    ctx->pc = 0x1AA1B8u;
    // 0x1aa1b8: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x1aa1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x1aa1bc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa1c0: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1aa1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1aa1c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa1c8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1aa1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1aa1cc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa1d0: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1aa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1aa1d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa1d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1aa1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1aa1dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aa1e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1aa1e4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1aa1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1aa1e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1aa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aa1ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1aa1f0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1aa1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1aa1f4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa1f8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1aa1fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1aa1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa200: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa204: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa20c: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1aa210: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x1aa210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x1aa214: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1aa214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
    // 0x1aa218: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x1aa218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x1aa21c: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1aa21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1aa220: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1aa220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa224: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1aa224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa228: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa22c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1aa22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa230: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa234: 0x29142  srl         $s2, $v0, 5
    ctx->pc = 0x1aa234u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1aa238: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x1aa238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1aa23c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa240: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa248: 0x829825  or          $s3, $a0, $v0
    ctx->pc = 0x1aa248u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aa24c: 0x0  nop
    ctx->pc = 0x1aa24cu;
    // NOP
label_1aa250:
    // 0x1aa250: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa254: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AA254u;
    SET_GPR_U32(ctx, 31, 0x1AA25Cu);
    ctx->pc = 0x1AA258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA254u;
    // 0x1aa258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AA254u, 0x1AA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA25Cu;
label_1aa25c:
    // 0x1aa25c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa260: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1aa260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa264: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa268: 0x32eb8  dsll        $a1, $v1, 26
    ctx->pc = 0x1aa268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 26);
    // 0x1aa26c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1aa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1aa270: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa274: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1aa274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1aa278: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa280: 0x458025  or          $s0, $v0, $a1
    ctx->pc = 0x1aa280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1aa284: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1aa284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa288: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AA288u;
    SET_GPR_U32(ctx, 31, 0x1AA290u);
    ctx->pc = 0x1AA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA288u;
    // 0x1aa28c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AA288u, 0x1AA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA290u;
label_1aa290:
    // 0x1aa290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa294: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa29c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa2a0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aa2a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa2a8: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1aa2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1aa2ac: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1aa2acu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aa2b0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aa2b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aa2b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aa2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aa2b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa2c0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aa2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aa2c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aa2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aa2c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA2C8u;
    SET_GPR_U32(ctx, 31, 0x1AA2D0u);
    ctx->pc = 0x1AA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2C8u;
    // 0x1aa2cc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA2C8u, 0x1AA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2D0u;
label_1aa2d0:
    // 0x1aa2d0: 0x9fa20150  lwu         $v0, 0x150($sp)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1aa2d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2d8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aa2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aa2dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa2dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2e0: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1aa2e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1aa2e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA2E4u;
    SET_GPR_U32(ctx, 31, 0x1AA2ECu);
    ctx->pc = 0x1AA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2E4u;
    // 0x1aa2e8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA2E4u, 0x1AA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2ECu;
label_1aa2ec:
    // 0x1aa2ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA2F4u;
    SET_GPR_U32(ctx, 31, 0x1AA2FCu);
    ctx->pc = 0x1AA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2F4u;
    // 0x1aa2f8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA2F4u, 0x1AA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2FCu;
label_1aa2fc:
    // 0x1aa2fc: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1aa2fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa300: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AA300u;
    {
        const bool branch_taken_0x1aa300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA300u;
        // 0x1aa304: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa300) {
            ctx->pc = 0x1AA408u;
            goto label_1aa408;
        }
    }
    ctx->pc = 0x1AA308u;
    // 0x1aa308: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1aa308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1aa30c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1aa310: 0x5e2023  subu        $a0, $v0, $fp
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1aa314: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aa318: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa31c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1aa31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aa320: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa328: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa330: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa334: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1aa334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1aa338: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa33c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aa33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aa340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa344: 0x70022b89  pcpyld      $a1, $zero, $v0
    ctx->pc = 0x1aa344u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1aa348: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1aa348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aa34c: 0x65b025  or          $s6, $v1, $a1
    ctx->pc = 0x1aa34cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1aa350: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1aa350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aa354: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1aa354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1aa358: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1aa358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa35c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa360: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa364: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1aa364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa36c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa370: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa374: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1aa374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aa378: 0x45b825  or          $s7, $v0, $a1
    ctx->pc = 0x1aa378u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1aa37c: 0x0  nop
    ctx->pc = 0x1aa37cu;
    // NOP
label_1aa380:
    // 0x1aa380: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1aa380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aa384: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1aa384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1aa388: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa38c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa390: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa394: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa39c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1aa39cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1aa3a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aa3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aa3a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA3A4u;
    SET_GPR_U32(ctx, 31, 0x1AA3ACu);
    ctx->pc = 0x1AA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3A4u;
    // 0x1aa3a8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA3A4u, 0x1AA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3ACu;
label_1aa3ac:
    // 0x1aa3ac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aa3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa3b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA3B8u;
    SET_GPR_U32(ctx, 31, 0x1AA3C0u);
    ctx->pc = 0x1AA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3B8u;
    // 0x1aa3bc: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA3B8u, 0x1AA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3C0u;
label_1aa3c0:
    // 0x1aa3c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa3c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA3C8u;
    SET_GPR_U32(ctx, 31, 0x1AA3D0u);
    ctx->pc = 0x1AA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3C8u;
    // 0x1aa3cc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA3C8u, 0x1AA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3D0u;
label_1aa3d0:
    // 0x1aa3d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa3d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA3D8u;
    SET_GPR_U32(ctx, 31, 0x1AA3E0u);
    ctx->pc = 0x1AA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3D8u;
    // 0x1aa3dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA3D8u, 0x1AA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3E0u;
label_1aa3e0:
    // 0x1aa3e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa3e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA3E8u;
    SET_GPR_U32(ctx, 31, 0x1AA3F0u);
    ctx->pc = 0x1AA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3E8u;
    // 0x1aa3ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA3E8u, 0x1AA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3F0u;
label_1aa3f0:
    // 0x1aa3f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1aa3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1aa3f4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1aa3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1aa3f8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1aa3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa3fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AA3FCu;
    {
        const bool branch_taken_0x1aa3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3FCu;
        // 0x1aa400: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3fc) {
            ctx->pc = 0x1AA380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa380;
        }
    }
    ctx->pc = 0x1AA404u;
    // 0x1aa404: 0x0  nop
    ctx->pc = 0x1aa404u;
    // NOP
label_1aa408:
    // 0x1aa408: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa410: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA410u;
    SET_GPR_U32(ctx, 31, 0x1AA418u);
    ctx->pc = 0x1AA414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA410u;
    // 0x1aa414: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA410u, 0x1AA418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA418u;
label_1aa418:
    // 0x1aa418: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1aa418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1aa41c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1aa420: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa424: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa428: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aa428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa42c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA42Cu;
    SET_GPR_U32(ctx, 31, 0x1AA434u);
    ctx->pc = 0x1AA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA42Cu;
    // 0x1aa430: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA42Cu, 0x1AA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA434u;
label_1aa434:
    // 0x1aa434: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1aa434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa438: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1AA438u;
    {
        const bool branch_taken_0x1aa438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA438u;
        // 0x1aa43c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa438) {
            ctx->pc = 0x1AA538u;
            goto label_1aa538;
        }
    }
    ctx->pc = 0x1AA440u;
    // 0x1aa440: 0x27c27000  addiu       $v0, $fp, 0x7000
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28672));
    // 0x1aa444: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1aa444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1aa448: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aa448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa44c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1aa44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aa450: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa454: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1aa454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1aa458: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa45c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa460: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa464: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa46c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aa46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aa470: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1aa470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa474: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1aa474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1aa478: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa47c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1aa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1aa480: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x1aa480u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1aa484: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x1aa484u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1aa488: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1aa488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa48c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa490: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa494: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1aa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1aa498: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1aa49c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa4a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa4a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa4a8: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1aa4a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1aa4ac: 0x0  nop
    ctx->pc = 0x1aa4acu;
    // NOP
label_1aa4b0:
    // 0x1aa4b0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1aa4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aa4b4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1aa4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1aa4b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa4bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa4c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa4c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa4c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4cc: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1aa4ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1aa4d0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aa4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aa4d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA4D4u;
    SET_GPR_U32(ctx, 31, 0x1AA4DCu);
    ctx->pc = 0x1AA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4D4u;
    // 0x1aa4d8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA4D4u, 0x1AA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4DCu;
label_1aa4dc:
    // 0x1aa4dc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aa4e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa4e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA4E8u;
    SET_GPR_U32(ctx, 31, 0x1AA4F0u);
    ctx->pc = 0x1AA4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4E8u;
    // 0x1aa4ec: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA4E8u, 0x1AA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4F0u;
label_1aa4f0:
    // 0x1aa4f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa4f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA4F8u;
    SET_GPR_U32(ctx, 31, 0x1AA500u);
    ctx->pc = 0x1AA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4F8u;
    // 0x1aa4fc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA4F8u, 0x1AA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA500u;
label_1aa500:
    // 0x1aa500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa504: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa508: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA508u;
    SET_GPR_U32(ctx, 31, 0x1AA510u);
    ctx->pc = 0x1AA50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA508u;
    // 0x1aa50c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA508u, 0x1AA510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA510u;
label_1aa510:
    // 0x1aa510: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa514: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa518: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA518u;
    SET_GPR_U32(ctx, 31, 0x1AA520u);
    ctx->pc = 0x1AA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA518u;
    // 0x1aa51c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA518u, 0x1AA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA520u;
label_1aa520:
    // 0x1aa520: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1aa520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1aa524: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1aa524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1aa528: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1aa528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa52c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AA52Cu;
    {
        const bool branch_taken_0x1aa52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA52Cu;
        // 0x1aa530: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa52c) {
            ctx->pc = 0x1AA4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa4b0;
        }
    }
    ctx->pc = 0x1AA534u;
    // 0x1aa534: 0x0  nop
    ctx->pc = 0x1aa534u;
    // NOP
label_1aa538:
    // 0x1aa538: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1aa53c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa540: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa544: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1aa544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1aa548: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aa548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa54c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA54Cu;
    SET_GPR_U32(ctx, 31, 0x1AA554u);
    ctx->pc = 0x1AA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA54Cu;
    // 0x1aa550: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA54Cu, 0x1AA554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA554u;
label_1aa554:
    // 0x1aa554: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1aa554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa558: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1AA558u;
    {
        const bool branch_taken_0x1aa558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA558u;
        // 0x1aa55c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa558) {
            ctx->pc = 0x1AA650u;
            goto label_1aa650;
        }
    }
    ctx->pc = 0x1AA560u;
    // 0x1aa560: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa564: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1aa564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1aa568: 0x7e1823  subu        $v1, $v1, $fp
    ctx->pc = 0x1aa568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1aa56c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1aa56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aa570: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa578: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa57c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1aa57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1aa580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa584: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa588: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa58c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1aa58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa594: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa598: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1aa598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1aa59c: 0x70032389  pcpyld      $a0, $zero, $v1
    ctx->pc = 0x1aa59cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1aa5a0: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x1aa5a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1aa5a4: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1aa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1aa5a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa5ac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1aa5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1aa5b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa5b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa5b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa5bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa5c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1aa5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa5c4: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1aa5c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1aa5c8:
    // 0x1aa5c8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1aa5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aa5cc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1aa5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1aa5d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa5d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa5d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa5dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa5e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5e4: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1aa5e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1aa5e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aa5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aa5ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA5ECu;
    SET_GPR_U32(ctx, 31, 0x1AA5F4u);
    ctx->pc = 0x1AA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA5ECu;
    // 0x1aa5f0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA5ECu, 0x1AA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA5F4u;
label_1aa5f4:
    // 0x1aa5f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aa5f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa600: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA600u;
    SET_GPR_U32(ctx, 31, 0x1AA608u);
    ctx->pc = 0x1AA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA600u;
    // 0x1aa604: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA600u, 0x1AA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA608u;
label_1aa608:
    // 0x1aa608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa60c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa610: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA610u;
    SET_GPR_U32(ctx, 31, 0x1AA618u);
    ctx->pc = 0x1AA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA610u;
    // 0x1aa614: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA610u, 0x1AA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA618u;
label_1aa618:
    // 0x1aa618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa61c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa620: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA620u;
    SET_GPR_U32(ctx, 31, 0x1AA628u);
    ctx->pc = 0x1AA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA620u;
    // 0x1aa624: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA620u, 0x1AA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA628u;
label_1aa628:
    // 0x1aa628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa62c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa630: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA630u;
    SET_GPR_U32(ctx, 31, 0x1AA638u);
    ctx->pc = 0x1AA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA630u;
    // 0x1aa634: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA630u, 0x1AA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA638u;
label_1aa638:
    // 0x1aa638: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1aa638u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1aa63c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1aa640: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1aa640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa644: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AA644u;
    {
        const bool branch_taken_0x1aa644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA644u;
        // 0x1aa648: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa644) {
            ctx->pc = 0x1AA5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA64Cu;
    // 0x1aa64c: 0x0  nop
    ctx->pc = 0x1aa64cu;
    // NOP
label_1aa650:
    // 0x1aa650: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1aa654: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa65c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1aa65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1aa660: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa664: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA664u;
    SET_GPR_U32(ctx, 31, 0x1AA66Cu);
    ctx->pc = 0x1AA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA664u;
    // 0x1aa668: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA664u, 0x1AA66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA66Cu;
label_1aa66c:
    // 0x1aa66c: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1aa66cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa670: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1AA670u;
    {
        const bool branch_taken_0x1aa670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA670u;
        // 0x1aa674: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa670) {
            ctx->pc = 0x1AA760u;
            goto label_1aa760;
        }
    }
    ctx->pc = 0x1AA678u;
    // 0x1aa678: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa67c: 0x27c37000  addiu       $v1, $fp, 0x7000
    ctx->pc = 0x1aa67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28672));
    // 0x1aa680: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1aa680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa684: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1aa684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aa688: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa68c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa690: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1aa694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa698: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa69c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1aa69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1aa6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa6a4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aa6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aa6a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa6ac: 0x70022389  pcpyld      $a0, $zero, $v0
    ctx->pc = 0x1aa6acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1aa6b0: 0x9fa20120  lwu         $v0, 0x120($sp)
    ctx->pc = 0x1aa6b0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1aa6b4: 0x64b025  or          $s6, $v1, $a0
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa6b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa6b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6bc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1aa6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1aa6c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa6c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa6c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa6cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1aa6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa6d0: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1aa6d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1aa6d4: 0x0  nop
    ctx->pc = 0x1aa6d4u;
    // NOP
label_1aa6d8:
    // 0x1aa6d8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1aa6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aa6dc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1aa6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1aa6e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa6e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa6e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa6ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa6f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6f4: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1aa6f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1aa6f8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aa6fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA6FCu;
    SET_GPR_U32(ctx, 31, 0x1AA704u);
    ctx->pc = 0x1AA700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA6FCu;
    // 0x1aa700: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA6FCu, 0x1AA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA704u;
label_1aa704:
    // 0x1aa704: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aa708: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa70c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa710: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA710u;
    SET_GPR_U32(ctx, 31, 0x1AA718u);
    ctx->pc = 0x1AA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA710u;
    // 0x1aa714: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA710u, 0x1AA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA718u;
label_1aa718:
    // 0x1aa718: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa71c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa720: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA720u;
    SET_GPR_U32(ctx, 31, 0x1AA728u);
    ctx->pc = 0x1AA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA720u;
    // 0x1aa724: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA720u, 0x1AA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA728u;
label_1aa728:
    // 0x1aa728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa72c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa730: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA730u;
    SET_GPR_U32(ctx, 31, 0x1AA738u);
    ctx->pc = 0x1AA734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA730u;
    // 0x1aa734: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA730u, 0x1AA738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA738u;
label_1aa738:
    // 0x1aa738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa73c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa740: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA740u;
    SET_GPR_U32(ctx, 31, 0x1AA748u);
    ctx->pc = 0x1AA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA740u;
    // 0x1aa744: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA740u, 0x1AA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA748u;
label_1aa748:
    // 0x1aa748: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1aa748u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1aa74c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1aa74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1aa750: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1aa750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1aa754: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AA754u;
    {
        const bool branch_taken_0x1aa754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA754u;
        // 0x1aa758: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa754) {
            ctx->pc = 0x1AA6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa6d8;
        }
    }
    ctx->pc = 0x1AA75Cu;
    // 0x1aa75c: 0x0  nop
    ctx->pc = 0x1aa75cu;
    // NOP
label_1aa760:
    // 0x1aa760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa764: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AA764u;
    SET_GPR_U32(ctx, 31, 0x1AA76Cu);
    ctx->pc = 0x1AA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA764u;
    // 0x1aa768: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AA764u, 0x1AA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA76Cu;
label_1aa76c:
    // 0x1aa76c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1aa770: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1aa774: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa778: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1aa778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1aa77c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1aa77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1aa780: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1aa784: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1aa788: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1aa788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1aa78c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1aa78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa790: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1aa794: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1aa794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1aa798: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1aa79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aa7a0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1aa7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1aa7a4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1aa7a8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1aa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1aa7ac: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa7b0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1aa7b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1aa7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1aa7b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1aa7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1aa7bc: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x1AA7BCu;
    {
        const bool branch_taken_0x1aa7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7BCu;
        // 0x1aa7c0: 0xafa40150  sw          $a0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7bc) {
            ctx->pc = 0x1AA250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa250;
        }
    }
    ctx->pc = 0x1AA7C4u;
    // 0x1aa7c4: 0x0  nop
    ctx->pc = 0x1aa7c4u;
    // NOP
label_1aa7c8:
    // 0x1aa7c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aa7d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA7D0u;
    SET_GPR_U32(ctx, 31, 0x1AA7D8u);
    ctx->pc = 0x1AA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D0u;
    // 0x1aa7d4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA7D0u, 0x1AA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7D8u;
label_1aa7d8:
    // 0x1aa7d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa7dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7e0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1aa7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1aa7e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA7E4u;
    SET_GPR_U32(ctx, 31, 0x1AA7ECu);
    ctx->pc = 0x1AA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7E4u;
    // 0x1aa7e8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA7E4u, 0x1AA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7ECu;
label_1aa7ec:
    // 0x1aa7ec: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa7f0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AA7F0u;
    SET_GPR_U32(ctx, 31, 0x1AA7F8u);
    ctx->pc = 0x1AA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7F0u;
    // 0x1aa7f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AA7F0u, 0x1AA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7F8u;
label_1aa7f8:
    // 0x1aa7f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa7fc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1aa7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa800: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa804: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1aa804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa808: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1aa808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1aa80c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa810: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa814: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aa814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aa818: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa81c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa820: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1aa824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa828: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa82c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1aa830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa834: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AA834u;
    SET_GPR_U32(ctx, 31, 0x1AA83Cu);
    ctx->pc = 0x1AA838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA834u;
    // 0x1aa838: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AA834u, 0x1AA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA83Cu;
label_1aa83c:
    // 0x1aa83c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa840: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aa840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa844: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa848: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aa84c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aa84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aa850: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa854: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1aa854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1aa858: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1aa858u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aa85c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aa85cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aa860: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aa860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aa864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa868: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa86c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aa86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aa870: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aa870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aa874: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA874u;
    SET_GPR_U32(ctx, 31, 0x1AA87Cu);
    ctx->pc = 0x1AA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA874u;
    // 0x1aa878: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA874u, 0x1AA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA87Cu;
label_1aa87c:
    // 0x1aa87c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AA87Cu;
    SET_GPR_U32(ctx, 31, 0x1AA884u);
    ctx->pc = 0x1AA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA87Cu;
    // 0x1aa880: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AA87Cu, 0x1AA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA884u;
label_1aa884:
    // 0x1aa884: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aa884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa88c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa890: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1aa890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1aa894: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aa894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa898: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aa898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aa89c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa8a0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1aa8a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1aa8a4: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1aa8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1aa8a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA8A8u;
    SET_GPR_U32(ctx, 31, 0x1AA8B0u);
    ctx->pc = 0x1AA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8A8u;
    // 0x1aa8ac: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA8A8u, 0x1AA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8B0u;
label_1aa8b0:
    // 0x1aa8b0: 0xdfa600b0  ld          $a2, 0xB0($sp)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1aa8b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA8B8u;
    SET_GPR_U32(ctx, 31, 0x1AA8C0u);
    ctx->pc = 0x1AA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8B8u;
    // 0x1aa8bc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA8B8u, 0x1AA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8C0u;
label_1aa8c0:
    // 0x1aa8c0: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1aa8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1aa8c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8c8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aa8cc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa8d0: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1aa8d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa8d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa8dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa8e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA8E0u;
    SET_GPR_U32(ctx, 31, 0x1AA8E8u);
    ctx->pc = 0x1AA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8E0u;
    // 0x1aa8e4: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA8E0u, 0x1AA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8E8u;
label_1aa8e8:
    // 0x1aa8e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA8F0u;
    SET_GPR_U32(ctx, 31, 0x1AA8F8u);
    ctx->pc = 0x1AA8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8F0u;
    // 0x1aa8f4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA8F0u, 0x1AA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8F8u;
label_1aa8f8:
    // 0x1aa8f8: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1aa8fc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1aa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1aa900: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1aa900u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1aa904: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1AA904u;
    {
        const bool branch_taken_0x1aa904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA904u;
        // 0x1aa908: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa904) {
            ctx->pc = 0x1AAA10u;
            goto label_1aaa10;
        }
    }
    ctx->pc = 0x1AA90Cu;
    // 0x1aa90c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1aa90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa910: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aa914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aa914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa918: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1aa918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa91c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa920: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aa924: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa928: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aa928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aa92c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aa930: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aa934: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa93c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aa93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aa940: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1aa940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa944: 0x0  nop
    ctx->pc = 0x1aa944u;
    // NOP
label_1aa948:
    // 0x1aa948: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1aa948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1aa94c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa950: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1aa950u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1aa954: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1aa954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1aa958: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1aa958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aa95c: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1aa960: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aa960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aa964: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aa964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aa968: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aa968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aa96c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa970: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1aa970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1aa974: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1aa974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1aa978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aa97c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aa97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aa980: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aa980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aa984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1aa984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aa988: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA988u;
    SET_GPR_U32(ctx, 31, 0x1AA990u);
    ctx->pc = 0x1AA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA988u;
    // 0x1aa98c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA988u, 0x1AA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA990u;
label_1aa990:
    // 0x1aa990: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1aa994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa998: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa99c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA99Cu;
    SET_GPR_U32(ctx, 31, 0x1AA9A4u);
    ctx->pc = 0x1AA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA99Cu;
    // 0x1aa9a0: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA99Cu, 0x1AA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9A4u;
label_1aa9a4:
    // 0x1aa9a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa9a8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aa9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aa9ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aa9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aa9b0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1aa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1aa9b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa9b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aa9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aa9c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA9C0u;
    SET_GPR_U32(ctx, 31, 0x1AA9C8u);
    ctx->pc = 0x1AA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9C0u;
    // 0x1aa9c4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA9C0u, 0x1AA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9C8u;
label_1aa9c8:
    // 0x1aa9c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aa9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa9d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA9D0u;
    SET_GPR_U32(ctx, 31, 0x1AA9D8u);
    ctx->pc = 0x1AA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9D0u;
    // 0x1aa9d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA9D0u, 0x1AA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9D8u;
label_1aa9d8:
    // 0x1aa9d8: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1aa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1aa9dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9e0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1aa9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1aa9e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa9e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AA9E8u;
    SET_GPR_U32(ctx, 31, 0x1AA9F0u);
    ctx->pc = 0x1AA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9E8u;
    // 0x1aa9ec: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AA9E8u, 0x1AA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9F0u;
label_1aa9f0:
    // 0x1aa9f0: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1aa9f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aa9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1aa9f8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1aa9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1aa9fc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1aa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1aaa00: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1aaa00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1aaa04: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1AAA04u;
    {
        const bool branch_taken_0x1aaa04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA04u;
        // 0x1aaa08: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa04) {
            ctx->pc = 0x1AA948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa948;
        }
    }
    ctx->pc = 0x1AAA0Cu;
    // 0x1aaa0c: 0x0  nop
    ctx->pc = 0x1aaa0cu;
    // NOP
label_1aaa10:
    // 0x1aaa10: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1aaa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1aaa14: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1aaa14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1aaa18: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1aaa18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aaa1c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1aaa1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aaa20: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1aaa20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aaa24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1aaa24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aaa28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1aaa28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aaa2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1aaa2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaa30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aaa30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaa34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aaa34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaa38: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA38u;
        // 0x1aaa3c: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA40u;
}
