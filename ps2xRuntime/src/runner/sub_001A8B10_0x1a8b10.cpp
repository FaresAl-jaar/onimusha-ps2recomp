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

// Function: sub_001A8B10
// Address: 0x1a8b10 - 0x1a9a78
void sub_001A8B10_0x1a8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8B10_0x1a8b10");
#endif

    switch (ctx->pc) {
        case 0x1a8b54u: goto label_1a8b54;
        case 0x1a8b5cu: goto label_1a8b5c;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bdcu: goto label_1a8bdc;
        case 0x1a8c1cu: goto label_1a8c1c;
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c50u: goto label_1a8c50;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c70u: goto label_1a8c70;
        case 0x1a8ca0u: goto label_1a8ca0;
        case 0x1a8cb4u: goto label_1a8cb4;
        case 0x1a8cd8u: goto label_1a8cd8;
        case 0x1a8cecu: goto label_1a8cec;
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e98u: goto label_1a8e98;
        case 0x1a8eacu: goto label_1a8eac;
        case 0x1a8ec4u: goto label_1a8ec4;
        case 0x1a8ee4u: goto label_1a8ee4;
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8f08u: goto label_1a8f08;
        case 0x1a8f14u: goto label_1a8f14;
        case 0x1a8f28u: goto label_1a8f28;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f8cu: goto label_1a8f8c;
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a9020u: goto label_1a9020;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a91c0u: goto label_1a91c0;
        case 0x1a9214u: goto label_1a9214;
        case 0x1a9230u: goto label_1a9230;
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a92ecu: goto label_1a92ec;
        case 0x1a9320u: goto label_1a9320;
        case 0x1a9360u: goto label_1a9360;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9470u: goto label_1a9470;
        case 0x1a9480u: goto label_1a9480;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a9520u: goto label_1a9520;
        case 0x1a954cu: goto label_1a954c;
        case 0x1a9560u: goto label_1a9560;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a9580u: goto label_1a9580;
        case 0x1a9590u: goto label_1a9590;
        case 0x1a9620u: goto label_1a9620;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9670u: goto label_1a9670;
        case 0x1a9680u: goto label_1a9680;
        case 0x1a9690u: goto label_1a9690;
        case 0x1a9710u: goto label_1a9710;
        case 0x1a973cu: goto label_1a973c;
        case 0x1a9750u: goto label_1a9750;
        case 0x1a9760u: goto label_1a9760;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a9810u: goto label_1a9810;
        case 0x1a9824u: goto label_1a9824;
        case 0x1a9830u: goto label_1a9830;
        case 0x1a9874u: goto label_1a9874;
        case 0x1a98b4u: goto label_1a98b4;
        case 0x1a98bcu: goto label_1a98bc;
        case 0x1a98e8u: goto label_1a98e8;
        case 0x1a98f8u: goto label_1a98f8;
        case 0x1a9920u: goto label_1a9920;
        case 0x1a9930u: goto label_1a9930;
        case 0x1a9980u: goto label_1a9980;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a28u: goto label_1a9a28;
        default: break;
    }

    ctx->pc = 0x1a8b10u;

    // 0x1a8b10: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x1a8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
    // 0x1a8b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8b18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a8b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a8b1c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a8b20: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1a8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1a8b24: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1a8b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1a8b28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a8b2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a8b30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a8b34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a8b3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a8b40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a8b44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8b48: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x1a8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x1a8b4c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1A8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B54u);
    ctx->pc = 0x1A8B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B4Cu;
    // 0x1a8b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1A8B4Cu, 0x1A8B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B54u;
label_1a8b54:
    // 0x1a8b54: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A8B54u;
    SET_GPR_U32(ctx, 31, 0x1A8B5Cu);
    ctx->pc = 0x1A8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B54u;
    // 0x1a8b58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A8B54u, 0x1A8B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B5Cu;
label_1a8b5c:
    // 0x1a8b5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a8b60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a8b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b68: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8b6c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a8b70: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1a8b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a8b74: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1a8b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a8b78: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1a8b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a8b7c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8b80: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A8B80u;
    SET_GPR_U32(ctx, 31, 0x1A8B88u);
    ctx->pc = 0x1A8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B80u;
    // 0x1a8b84: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A8B80u, 0x1A8B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B88u;
label_1a8b88:
    // 0x1a8b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b8c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a8b90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8B90u;
    SET_GPR_U32(ctx, 31, 0x1A8B98u);
    ctx->pc = 0x1A8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B90u;
    // 0x1a8b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8B90u, 0x1A8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B98u;
label_1a8b98:
    // 0x1a8b98: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a8b9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ba0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a8ba4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8BA4u;
    SET_GPR_U32(ctx, 31, 0x1A8BACu);
    ctx->pc = 0x1A8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BA4u;
    // 0x1a8ba8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8BA4u, 0x1A8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BACu;
label_1a8bac:
    // 0x1a8bac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bb0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8BB0u;
    SET_GPR_U32(ctx, 31, 0x1A8BB8u);
    ctx->pc = 0x1A8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BB0u;
    // 0x1a8bb4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8BB0u, 0x1A8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BB8u;
label_1a8bb8:
    // 0x1a8bb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8bbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bc0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8bc4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a8bc8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a8bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a8bcc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1a8bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1a8bd0: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a8bd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8bd4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8BD4u;
    SET_GPR_U32(ctx, 31, 0x1A8BDCu);
    ctx->pc = 0x1A8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BD4u;
    // 0x1a8bd8: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8BD4u, 0x1A8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BDCu;
label_1a8bdc:
    // 0x1a8bdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8be0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8be4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8be8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a8bec: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a8becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a8bf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8bf4: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a8bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a8bf8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a8bf8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8bfc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a8bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8c00: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a8c04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8c0c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a8c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a8c10: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8c14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8C14u;
    SET_GPR_U32(ctx, 31, 0x1A8C1Cu);
    ctx->pc = 0x1A8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C14u;
    // 0x1a8c18: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8C14u, 0x1A8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C1Cu;
label_1a8c1c:
    // 0x1a8c1c: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1a8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1a8c20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c24: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a8c28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8C28u;
    SET_GPR_U32(ctx, 31, 0x1A8C30u);
    ctx->pc = 0x1A8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C28u;
    // 0x1a8c2c: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8C28u, 0x1A8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C30u;
label_1a8c30:
    // 0x1a8c30: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1a8c34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a8c38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8c3c: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1a8c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1a8c40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a8c48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8C48u;
    SET_GPR_U32(ctx, 31, 0x1A8C50u);
    ctx->pc = 0x1A8C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C48u;
    // 0x1a8c4c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8C48u, 0x1A8C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C50u;
label_1a8c50:
    // 0x1a8c50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8C58u;
    SET_GPR_U32(ctx, 31, 0x1A8C60u);
    ctx->pc = 0x1A8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C58u;
    // 0x1a8c5c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8C58u, 0x1A8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C60u;
label_1a8c60:
    // 0x1a8c60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c64: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a8c68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c6c: 0x0  nop
    ctx->pc = 0x1a8c6cu;
    // NOP
label_1a8c70:
    // 0x1a8c70: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a8c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a8c74: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a8c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a8c78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8c7c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1a8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1a8c80: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a8c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a8c84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a8c88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8c8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a8c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a8c90: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a8c94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8C98u;
    SET_GPR_U32(ctx, 31, 0x1A8CA0u);
    ctx->pc = 0x1A8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C98u;
    // 0x1a8c9c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8C98u, 0x1A8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CA0u;
label_1a8ca0:
    // 0x1a8ca0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8ca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ca8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8cac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8CACu;
    SET_GPR_U32(ctx, 31, 0x1A8CB4u);
    ctx->pc = 0x1A8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CACu;
    // 0x1a8cb0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8CACu, 0x1A8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CB4u;
label_1a8cb4:
    // 0x1a8cb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8cb8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a8cbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8cc0: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1a8cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1a8cc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8cc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ccc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8cd0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8CD0u;
    SET_GPR_U32(ctx, 31, 0x1A8CD8u);
    ctx->pc = 0x1A8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CD0u;
    // 0x1a8cd4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8CD0u, 0x1A8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CD8u;
label_1a8cd8:
    // 0x1a8cd8: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1a8cdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ce0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8ce4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8CE4u;
    SET_GPR_U32(ctx, 31, 0x1A8CECu);
    ctx->pc = 0x1A8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CE4u;
    // 0x1a8ce8: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8CE4u, 0x1A8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CECu;
label_1a8cec:
    // 0x1a8cec: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1a8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1a8cf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cf4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1a8cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a8cf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a8cfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8CFCu;
    SET_GPR_U32(ctx, 31, 0x1A8D04u);
    ctx->pc = 0x1A8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CFCu;
    // 0x1a8d00: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8CFCu, 0x1A8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D04u;
label_1a8d04:
    // 0x1a8d04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a8d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a8d08: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a8d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a8d0c: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a8d10: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A8D10u;
    {
        const bool branch_taken_0x1a8d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D10u;
        // 0x1a8d14: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d10) {
            ctx->pc = 0x1A8C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c70;
        }
    }
    ctx->pc = 0x1A8D18u;
    // 0x1a8d18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d1c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A8D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D24u);
    ctx->pc = 0x1A8D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D1Cu;
    // 0x1a8d20: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A8D1Cu, 0x1A8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D24u;
label_1a8d24:
    // 0x1a8d24: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a8d28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d2c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1a8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1a8d30: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a8d34: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a8d38: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1A8D38u;
    SET_GPR_U32(ctx, 31, 0x1A8D40u);
    ctx->pc = 0x1A8D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D38u;
    // 0x1a8d3c: 0x24470024  addiu       $a3, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1A8D38u, 0x1A8D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D40u;
label_1a8d40:
    // 0x1a8d40: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8d44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d48: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A8D48u;
    SET_GPR_U32(ctx, 31, 0x1A8D50u);
    ctx->pc = 0x1A8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D48u;
    // 0x1a8d4c: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A8D48u, 0x1A8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D50u;
label_1a8d50:
    // 0x1a8d50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d54: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8D54u;
    SET_GPR_U32(ctx, 31, 0x1A8D5Cu);
    ctx->pc = 0x1A8D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D54u;
    // 0x1a8d58: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8D54u, 0x1A8D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D5Cu;
label_1a8d5c:
    // 0x1a8d5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8d68: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1a8d6c: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1a8d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1a8d70: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1a8d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1a8d74: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a8d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8d78: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8D78u;
    SET_GPR_U32(ctx, 31, 0x1A8D80u);
    ctx->pc = 0x1A8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D78u;
    // 0x1a8d7c: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8D78u, 0x1A8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D80u;
label_1a8d80:
    // 0x1a8d80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8d84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8d88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8d8c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a8d90: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a8d94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8d98: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a8d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a8d9c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a8d9cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8da0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a8da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8da4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a8da8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8db0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a8db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a8db4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8db8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8DB8u;
    SET_GPR_U32(ctx, 31, 0x1A8DC0u);
    ctx->pc = 0x1A8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DB8u;
    // 0x1a8dbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8DB8u, 0x1A8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DC0u;
label_1a8dc0:
    // 0x1a8dc0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a8dc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dc8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a8dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a8dcc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8DCCu;
    SET_GPR_U32(ctx, 31, 0x1A8DD4u);
    ctx->pc = 0x1A8DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DCCu;
    // 0x1a8dd0: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8DCCu, 0x1A8DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DD4u;
label_1a8dd4:
    // 0x1a8dd4: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1a8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1a8dd8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a8ddc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8de0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1a8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a8de4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8de8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a8dec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8DECu;
    SET_GPR_U32(ctx, 31, 0x1A8DF4u);
    ctx->pc = 0x1A8DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DECu;
    // 0x1a8df0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8DECu, 0x1A8DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DF4u;
label_1a8df4:
    // 0x1a8df4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8df8: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a8dfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8e00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e04: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a8e08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8E08u;
    SET_GPR_U32(ctx, 31, 0x1A8E10u);
    ctx->pc = 0x1A8E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E08u;
    // 0x1a8e0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8E08u, 0x1A8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8E18u;
    SET_GPR_U32(ctx, 31, 0x1A8E20u);
    ctx->pc = 0x1A8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E18u;
    // 0x1a8e1c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8E18u, 0x1A8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E20u;
label_1a8e20:
    // 0x1a8e20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e24: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a8e28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e2c: 0x0  nop
    ctx->pc = 0x1a8e2cu;
    // NOP
label_1a8e30:
    // 0x1a8e30: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a8e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a8e34: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a8e38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8e3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a8e40: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a8e44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a8e48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8e4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a8e50: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a8e54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8E58u;
    SET_GPR_U32(ctx, 31, 0x1A8E60u);
    ctx->pc = 0x1A8E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E58u;
    // 0x1a8e5c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8E58u, 0x1A8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E60u;
label_1a8e60:
    // 0x1a8e60: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a8e64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8e6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E74u);
    ctx->pc = 0x1A8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E6Cu;
    // 0x1a8e70: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8E6Cu, 0x1A8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E74u;
label_1a8e74:
    // 0x1a8e74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8e78: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a8e7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8e80: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a8e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a8e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8e88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e8c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a8e90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8E90u;
    SET_GPR_U32(ctx, 31, 0x1A8E98u);
    ctx->pc = 0x1A8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E90u;
    // 0x1a8e94: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8E90u, 0x1A8E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E98u;
label_1a8e98:
    // 0x1a8e98: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1a8e9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ea0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a8ea4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8EA4u;
    SET_GPR_U32(ctx, 31, 0x1A8EACu);
    ctx->pc = 0x1A8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EA4u;
    // 0x1a8ea8: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8EA4u, 0x1A8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EACu;
label_1a8eac:
    // 0x1a8eac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a8eb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8eb4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a8eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a8eb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a8eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a8ebc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8EBCu;
    SET_GPR_U32(ctx, 31, 0x1A8EC4u);
    ctx->pc = 0x1A8EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EBCu;
    // 0x1a8ec0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8EBCu, 0x1A8EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EC4u;
label_1a8ec4:
    // 0x1a8ec4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a8ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a8ec8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a8ecc: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1a8eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a8ed0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A8ED0u;
    {
        const bool branch_taken_0x1a8ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED0u;
        // 0x1a8ed4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ed0) {
            ctx->pc = 0x1A8E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e30;
        }
    }
    ctx->pc = 0x1A8ED8u;
    // 0x1a8ed8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8edc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A8EDCu;
    SET_GPR_U32(ctx, 31, 0x1A8EE4u);
    ctx->pc = 0x1A8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EDCu;
    // 0x1a8ee0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A8EDCu, 0x1A8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EE4u;
label_1a8ee4:
    // 0x1a8ee4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a8ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8eec: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1a8eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1a8ef0: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1A8EF0u;
    SET_GPR_U32(ctx, 31, 0x1A8EF8u);
    ctx->pc = 0x1A8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EF0u;
    // 0x1a8ef4: 0x24460044  addiu       $a2, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1A8EF0u, 0x1A8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EF8u;
label_1a8ef8:
    // 0x1a8ef8: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1a8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8efc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f00: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1A8F00u;
    SET_GPR_U32(ctx, 31, 0x1A8F08u);
    ctx->pc = 0x1A8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F00u;
    // 0x1a8f04: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1A8F00u, 0x1A8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F08u;
label_1a8f08:
    // 0x1a8f08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f0c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F14u);
    ctx->pc = 0x1A8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F0Cu;
    // 0x1a8f10: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8F0Cu, 0x1A8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F14u;
label_1a8f14:
    // 0x1a8f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8f18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8f20: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A8F20u;
    SET_GPR_U32(ctx, 31, 0x1A8F28u);
    ctx->pc = 0x1A8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F20u;
    // 0x1a8f24: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A8F20u, 0x1A8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F28u;
label_1a8f28:
    // 0x1a8f28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a8f2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8f34: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1a8f38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8f3c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1a8f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a8f40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a8f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8f44: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A8F44u;
    SET_GPR_U32(ctx, 31, 0x1A8F4Cu);
    ctx->pc = 0x1A8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F44u;
    // 0x1a8f48: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A8F44u, 0x1A8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F4Cu;
label_1a8f4c:
    // 0x1a8f4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8f50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a8f54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a8f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a8f58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a8f5c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a8f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a8f60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8f64: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1a8f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1a8f68: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a8f68u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a8f6c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a8f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8f70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a8f74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8f7c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a8f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a8f80: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8f84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8F84u;
    SET_GPR_U32(ctx, 31, 0x1A8F8Cu);
    ctx->pc = 0x1A8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F84u;
    // 0x1a8f88: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8F84u, 0x1A8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F8Cu;
label_1a8f8c:
    // 0x1a8f8c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a8f90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8f94: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a8f98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8F98u;
    SET_GPR_U32(ctx, 31, 0x1A8FA0u);
    ctx->pc = 0x1A8F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F98u;
    // 0x1a8f9c: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8F98u, 0x1A8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FA0u;
label_1a8fa0:
    // 0x1a8fa0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1a8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1a8fa4: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1a8fa4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1a8fa8: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1a8fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1a8fac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fb0: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1a8fb4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a8fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a8fb8: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1a8fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1a8fbc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a8fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a8fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a8fc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8fc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a8fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a8fcc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1a8fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1a8fd0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8FD0u;
    SET_GPR_U32(ctx, 31, 0x1A8FD8u);
    ctx->pc = 0x1A8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FD0u;
    // 0x1a8fd4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8FD0u, 0x1A8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FD8u;
label_1a8fd8:
    // 0x1a8fd8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8fdc: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a8fe0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a8fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8fe4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fe8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a8fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a8fec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8FECu;
    SET_GPR_U32(ctx, 31, 0x1A8FF4u);
    ctx->pc = 0x1A8FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FECu;
    // 0x1a8ff0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8FECu, 0x1A8FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FF4u;
label_1a8ff4:
    // 0x1a8ff4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ffc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A8FFCu;
    SET_GPR_U32(ctx, 31, 0x1A9004u);
    ctx->pc = 0x1A9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FFCu;
    // 0x1a9000: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A8FFCu, 0x1A9004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9004u;
label_1a9004:
    // 0x1a9004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9008: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a900c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A900Cu;
    SET_GPR_U32(ctx, 31, 0x1A9014u);
    ctx->pc = 0x1A9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A900Cu;
    // 0x1a9010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A900Cu, 0x1A9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9014u;
label_1a9014:
    // 0x1a9014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a9014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9018: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a901c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9020:
    // 0x1a9020: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1a9020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9024: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1a9024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9028: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a902c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1a9030: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9034: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a9034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a9038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a903c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a903cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9040: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9044: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9048: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9048u;
    SET_GPR_U32(ctx, 31, 0x1A9050u);
    ctx->pc = 0x1A904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9048u;
    // 0x1a904c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9048u, 0x1A9050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9050u;
label_1a9050:
    // 0x1a9050: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9058: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a905c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A905Cu;
    SET_GPR_U32(ctx, 31, 0x1A9064u);
    ctx->pc = 0x1A9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A905Cu;
    // 0x1a9060: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A905Cu, 0x1A9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9064u;
label_1a9064:
    // 0x1a9064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9068: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a906c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9070: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a9070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a9074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a907c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9080: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9080u;
    SET_GPR_U32(ctx, 31, 0x1A9088u);
    ctx->pc = 0x1A9084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9080u;
    // 0x1a9084: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9080u, 0x1A9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9088u;
label_1a9088:
    // 0x1a9088: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1a908c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9090: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9094: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9094u;
    SET_GPR_U32(ctx, 31, 0x1A909Cu);
    ctx->pc = 0x1A9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9094u;
    // 0x1a9098: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9094u, 0x1A909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A909Cu;
label_1a909c:
    // 0x1a909c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a90a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a90a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1a90a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1a90a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a90ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A90ACu;
    SET_GPR_U32(ctx, 31, 0x1A90B4u);
    ctx->pc = 0x1A90B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90ACu;
    // 0x1a90b0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A90ACu, 0x1A90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90B4u;
label_1a90b4:
    // 0x1a90b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a90b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a90b8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a90bc: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a90c0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A90C0u;
    {
        const bool branch_taken_0x1a90c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C0u;
        // 0x1a90c4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90c0) {
            ctx->pc = 0x1A9020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9020;
        }
    }
    ctx->pc = 0x1A90C8u;
    // 0x1a90c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a90c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90cc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A90CCu;
    SET_GPR_U32(ctx, 31, 0x1A90D4u);
    ctx->pc = 0x1A90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90CCu;
    // 0x1a90d0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A90CCu, 0x1A90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90D4u;
label_1a90d4:
    // 0x1a90d4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a90d8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a90dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A90DCu;
    {
        const bool branch_taken_0x1a90dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90DCu;
        // 0x1a90e0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90dc) {
            ctx->pc = 0x1A90F8u;
            goto label_1a90f8;
        }
    }
    ctx->pc = 0x1A90E4u;
    // 0x1a90e4: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1a90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1a90e8: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a90ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A90ECu;
    {
        const bool branch_taken_0x1a90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90ec) {
            ctx->pc = 0x1A9138u;
            goto label_1a9138;
        }
    }
    ctx->pc = 0x1A90F4u;
    // 0x1a90f4: 0x0  nop
    ctx->pc = 0x1a90f4u;
    // NOP
label_1a90f8:
    // 0x1a90f8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1a90f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1a90fc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1a90fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1a9100: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9104: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1a9104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1a9108: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a910c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a9110: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9114: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1a9114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1a9118: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1a911c: 0x8fa80170  lw          $t0, 0x170($sp)
    ctx->pc = 0x1a911cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9120: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a9124: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x1a9124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1a9128: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a9128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a912c: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1A912Cu;
    SET_GPR_U32(ctx, 31, 0x1A9134u);
    ctx->pc = 0x1A9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A912Cu;
    // 0x1a9130: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1A912Cu, 0x1A9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9134u;
label_1a9134:
    // 0x1a9134: 0x0  nop
    ctx->pc = 0x1a9134u;
    // NOP
label_1a9138:
    // 0x1a9138: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a913c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1a9140: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9144: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a9148: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1a9148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a914c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1a914cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9150: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x1a9150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a9154: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9158: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1a9158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1a915c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a9160: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1a9160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1a9164: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9168: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1a9168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1a916c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1a916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a9170: 0x67100a  movz        $v0, $v1, $a3
    ctx->pc = 0x1a9170u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1a9174: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9174u;
    SET_GPR_U32(ctx, 31, 0x1A917Cu);
    ctx->pc = 0x1A9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9174u;
    // 0x1a9178: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9174u, 0x1A917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A917Cu;
label_1a917c:
    // 0x1a917c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1a917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9184: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a9184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a9188: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a9188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a918c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9190: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x1a9190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9194: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1a9194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1a9198: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a919c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a91a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a91a4: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1a91a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x1a91a8: 0x1010bc  dsll32      $v0, $s0, 2
    ctx->pc = 0x1a91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 2));
    // 0x1a91ac: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1a91acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1a91b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a91b4: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1a91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1a91b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A91B8u;
    SET_GPR_U32(ctx, 31, 0x1A91C0u);
    ctx->pc = 0x1A91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A91B8u;
    // 0x1a91bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A91B8u, 0x1A91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A91C0u;
label_1a91c0:
    // 0x1a91c0: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a91c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a91c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a91c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91cc: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a91ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a91d0: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1a91d4: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1a91d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1a91d8: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1a91d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a91dc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a91dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a91e0: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1a91e4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1a91e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1a91e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a91e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a91ec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a91f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a91f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a91f4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1a91f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a91f8: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1a91fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a91fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9200: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9204: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1a9204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1a9208: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a9208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a920c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A920Cu;
    SET_GPR_U32(ctx, 31, 0x1A9214u);
    ctx->pc = 0x1A9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A920Cu;
    // 0x1a9210: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A920Cu, 0x1A9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9214u;
label_1a9214:
    // 0x1a9214: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a9214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9218: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1a921c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9220: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9224: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a9224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a9228: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9228u;
    SET_GPR_U32(ctx, 31, 0x1A9230u);
    ctx->pc = 0x1A922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9228u;
    // 0x1a922c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9228u, 0x1A9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9230u;
label_1a9230:
    // 0x1a9230: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a9234: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x1a9238: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1a9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1a923c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a923cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a9240: 0x1020016f  beqz        $at, . + 4 + (0x16F << 2)
    ctx->pc = 0x1A9240u;
    {
        const bool branch_taken_0x1a9240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9240u;
        // 0x1a9244: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9240) {
            ctx->pc = 0x1A9800u;
            goto label_1a9800;
        }
    }
    ctx->pc = 0x1A9248u;
    // 0x1a9248: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x1a9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x1a924c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9250: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1a9250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1a9254: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9258: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1a9258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a925c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9260: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1a9264: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9268: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1a9268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1a926c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a9270: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1a9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a9274: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1a9274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1a9278: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a927c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9280: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1a9280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1a9284: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9288: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1a928c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a928cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9290: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9294: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9298: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a929c: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1a929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1a92a0: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x1a92a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
    // 0x1a92a4: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1a92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
    // 0x1a92a8: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x1a92a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x1a92ac: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1a92acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1a92b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a92b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a92b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1a92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a92b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a92b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a92bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a92c0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a92c4: 0x29142  srl         $s2, $v0, 5
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a92c8: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x1a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1a92cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a92ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a92d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a92d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a92d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a92d8: 0x829825  or          $s3, $a0, $v0
    ctx->pc = 0x1a92d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a92dc: 0x0  nop
    ctx->pc = 0x1a92dcu;
    // NOP
label_1a92e0:
    // 0x1a92e0: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1a92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a92e4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A92E4u;
    SET_GPR_U32(ctx, 31, 0x1A92ECu);
    ctx->pc = 0x1A92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92E4u;
    // 0x1a92e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A92E4u, 0x1A92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92ECu;
label_1a92ec:
    // 0x1a92ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a92ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a92f0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1a92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a92f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a92f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a92f8: 0x32eb8  dsll        $a1, $v1, 26
    ctx->pc = 0x1a92f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 26);
    // 0x1a92fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a9300: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9304: 0xdfa20100  ld          $v0, 0x100($sp)
    ctx->pc = 0x1a9304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a9308: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a930c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9310: 0x458025  or          $s0, $v0, $a1
    ctx->pc = 0x1a9310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a9314: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9318: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9318u;
    SET_GPR_U32(ctx, 31, 0x1A9320u);
    ctx->pc = 0x1A931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9318u;
    // 0x1a931c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9318u, 0x1A9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9320u;
label_1a9320:
    // 0x1a9320: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9324: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a9328: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a932c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9330: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a9334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9338: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a9338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a933c: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a933cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9340: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a9340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9344: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a9348: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a934c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9350: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a9350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a9354: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a9354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a9358: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9358u;
    SET_GPR_U32(ctx, 31, 0x1A9360u);
    ctx->pc = 0x1A935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9358u;
    // 0x1a935c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9358u, 0x1A9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9360u;
label_1a9360:
    // 0x1a9360: 0x9fa20150  lwu         $v0, 0x150($sp)
    ctx->pc = 0x1a9360u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a9364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9368: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1a9368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a936c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a936cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9370: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a9374: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9374u;
    SET_GPR_U32(ctx, 31, 0x1A937Cu);
    ctx->pc = 0x1A9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9374u;
    // 0x1a9378: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9374u, 0x1A937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A937Cu;
label_1a937c:
    // 0x1a937c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9384: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9384u;
    SET_GPR_U32(ctx, 31, 0x1A938Cu);
    ctx->pc = 0x1A9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9384u;
    // 0x1a9388: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9384u, 0x1A938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A938Cu;
label_1a938c:
    // 0x1a938c: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a938cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a9390: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A9390u;
    {
        const bool branch_taken_0x1a9390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9390u;
        // 0x1a9394: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9390) {
            ctx->pc = 0x1A9498u;
            goto label_1a9498;
        }
    }
    ctx->pc = 0x1A9398u;
    // 0x1a9398: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1a9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1a939c: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1a939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1a93a0: 0x5e2023  subu        $a0, $v0, $fp
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1a93a4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a93a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a93a8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a93ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a93acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a93b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a93b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a93b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a93b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a93bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a93bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a93c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a93c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a93c4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a93c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a93c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a93cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a93ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a93d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a93d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a93d4: 0x70022b89  pcpyld      $a1, $zero, $v0
    ctx->pc = 0x1a93d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a93d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a93dc: 0x65b025  or          $s6, $v1, $a1
    ctx->pc = 0x1a93dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a93e0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1a93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a93e4: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1a93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1a93e8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a93e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a93ec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a93f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a93f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a93f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a93f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a93f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a93fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9400: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9404: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a9404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9408: 0x45b825  or          $s7, $v0, $a1
    ctx->pc = 0x1a9408u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a940c: 0x0  nop
    ctx->pc = 0x1a940cu;
    // NOP
label_1a9410:
    // 0x1a9410: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9414: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a9414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9418: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a941c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9420: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9428: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a942c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1a942cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a9430: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9434: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9434u;
    SET_GPR_U32(ctx, 31, 0x1A943Cu);
    ctx->pc = 0x1A9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9434u;
    // 0x1a9438: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9434u, 0x1A943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A943Cu;
label_1a943c:
    // 0x1a943c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9440: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9444: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9448: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9448u;
    SET_GPR_U32(ctx, 31, 0x1A9450u);
    ctx->pc = 0x1A944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9448u;
    // 0x1a944c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9448u, 0x1A9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9450u;
label_1a9450:
    // 0x1a9450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9454: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9458: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9458u;
    SET_GPR_U32(ctx, 31, 0x1A9460u);
    ctx->pc = 0x1A945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9458u;
    // 0x1a945c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9458u, 0x1A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9460u;
label_1a9460:
    // 0x1a9460: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9464: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9468: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9468u;
    SET_GPR_U32(ctx, 31, 0x1A9470u);
    ctx->pc = 0x1A946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9468u;
    // 0x1a946c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9468u, 0x1A9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9470u;
label_1a9470:
    // 0x1a9470: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9474: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9478: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9478u;
    SET_GPR_U32(ctx, 31, 0x1A9480u);
    ctx->pc = 0x1A947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9478u;
    // 0x1a947c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9478u, 0x1A9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9480u;
label_1a9480:
    // 0x1a9480: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a9480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a9484: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a9484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a9488: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a9488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a948c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A948Cu;
    {
        const bool branch_taken_0x1a948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A948Cu;
        // 0x1a9490: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a948c) {
            ctx->pc = 0x1A9410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9410;
        }
    }
    ctx->pc = 0x1A9494u;
    // 0x1a9494: 0x0  nop
    ctx->pc = 0x1a9494u;
    // NOP
label_1a9498:
    // 0x1a9498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a949c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A94A0u;
    SET_GPR_U32(ctx, 31, 0x1A94A8u);
    ctx->pc = 0x1A94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A94A0u;
    // 0x1a94a4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A94A0u, 0x1A94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94A8u;
label_1a94a8:
    // 0x1a94a8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a94a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a94ac: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A94ACu;
    {
        const bool branch_taken_0x1a94ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94ACu;
        // 0x1a94b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94ac) {
            ctx->pc = 0x1A95A8u;
            goto label_1a95a8;
        }
    }
    ctx->pc = 0x1A94B4u;
    // 0x1a94b4: 0x27c27000  addiu       $v0, $fp, 0x7000
    ctx->pc = 0x1a94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28672));
    // 0x1a94b8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1a94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1a94bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a94bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a94c0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a94c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a94c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a94c8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a94c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a94cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a94ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94d0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a94d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a94d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a94d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a94d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a94dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a94e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a94e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a94e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a94e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a94e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a94e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a94ec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a94f0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1a94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a94f4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x1a94f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1a94f8: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x1a94f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a94fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9504: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9508: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a950c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a9510: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9514: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a951c: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1a951cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a9520:
    // 0x1a9520: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a9520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9524: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a9524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9528: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a952c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9530: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9538: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a953c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1a953cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a9540: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9544: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9544u;
    SET_GPR_U32(ctx, 31, 0x1A954Cu);
    ctx->pc = 0x1A9548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9544u;
    // 0x1a9548: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9544u, 0x1A954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A954Cu;
label_1a954c:
    // 0x1a954c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9550: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9554: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9558: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9558u;
    SET_GPR_U32(ctx, 31, 0x1A9560u);
    ctx->pc = 0x1A955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9558u;
    // 0x1a955c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9558u, 0x1A9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9560u;
label_1a9560:
    // 0x1a9560: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9564: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9568: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9568u;
    SET_GPR_U32(ctx, 31, 0x1A9570u);
    ctx->pc = 0x1A956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9568u;
    // 0x1a956c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9568u, 0x1A9570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9570u;
label_1a9570:
    // 0x1a9570: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9574: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9578: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9578u;
    SET_GPR_U32(ctx, 31, 0x1A9580u);
    ctx->pc = 0x1A957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9578u;
    // 0x1a957c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9578u, 0x1A9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9580u;
label_1a9580:
    // 0x1a9580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9584: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9588: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9588u;
    SET_GPR_U32(ctx, 31, 0x1A9590u);
    ctx->pc = 0x1A958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9588u;
    // 0x1a958c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9588u, 0x1A9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9590u;
label_1a9590:
    // 0x1a9590: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a9590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a9594: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a9594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a9598: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a9598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a959c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A959Cu;
    {
        const bool branch_taken_0x1a959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A959Cu;
        // 0x1a95a0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a959c) {
            ctx->pc = 0x1A9520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9520;
        }
    }
    ctx->pc = 0x1A95A4u;
    // 0x1a95a4: 0x0  nop
    ctx->pc = 0x1a95a4u;
    // NOP
label_1a95a8:
    // 0x1a95a8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a95a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a95ac: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A95ACu;
    {
        const bool branch_taken_0x1a95ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ACu;
        // 0x1a95b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95ac) {
            ctx->pc = 0x1A96A8u;
            goto label_1a96a8;
        }
    }
    ctx->pc = 0x1A95B4u;
    // 0x1a95b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a95b8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1a95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1a95bc: 0x7e1823  subu        $v1, $v1, $fp
    ctx->pc = 0x1a95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1a95c0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a95c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a95c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a95c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a95c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a95c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a95ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a95d0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a95d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a95d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a95d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a95dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a95dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a95e0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1a95e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a95e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a95e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a95e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a95ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a95f0: 0x70032389  pcpyld      $a0, $zero, $v1
    ctx->pc = 0x1a95f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1a95f4: 0xa4b025  or          $s6, $a1, $a0
    ctx->pc = 0x1a95f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a95f8: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1a95fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9600: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1a9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a9604: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a960c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9610: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9614: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9618: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a961c: 0x0  nop
    ctx->pc = 0x1a961cu;
    // NOP
label_1a9620:
    // 0x1a9620: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9624: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a9624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9628: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a962c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9630: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9638: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a963c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1a963cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a9640: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9644: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9644u;
    SET_GPR_U32(ctx, 31, 0x1A964Cu);
    ctx->pc = 0x1A9648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9644u;
    // 0x1a9648: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9644u, 0x1A964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A964Cu;
label_1a964c:
    // 0x1a964c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9654: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9658: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9658u;
    SET_GPR_U32(ctx, 31, 0x1A9660u);
    ctx->pc = 0x1A965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9658u;
    // 0x1a965c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9658u, 0x1A9660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9660u;
label_1a9660:
    // 0x1a9660: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9664: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9668: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9668u;
    SET_GPR_U32(ctx, 31, 0x1A9670u);
    ctx->pc = 0x1A966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9668u;
    // 0x1a966c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9668u, 0x1A9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9670u;
label_1a9670:
    // 0x1a9670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9674: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9678: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9678u;
    SET_GPR_U32(ctx, 31, 0x1A9680u);
    ctx->pc = 0x1A967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9678u;
    // 0x1a967c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9678u, 0x1A9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9680u;
label_1a9680:
    // 0x1a9680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9684: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9688: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9688u;
    SET_GPR_U32(ctx, 31, 0x1A9690u);
    ctx->pc = 0x1A968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9688u;
    // 0x1a968c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9688u, 0x1A9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9690u;
label_1a9690:
    // 0x1a9690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a9690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a9694: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a9694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a9698: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a9698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a969c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A969Cu;
    {
        const bool branch_taken_0x1a969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A969Cu;
        // 0x1a96a0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a969c) {
            ctx->pc = 0x1A9620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9620;
        }
    }
    ctx->pc = 0x1A96A4u;
    // 0x1a96a4: 0x0  nop
    ctx->pc = 0x1a96a4u;
    // NOP
label_1a96a8:
    // 0x1a96a8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1a96a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a96ac: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A96ACu;
    {
        const bool branch_taken_0x1a96ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96ACu;
        // 0x1a96b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96ac) {
            ctx->pc = 0x1A9798u;
            goto label_1a9798;
        }
    }
    ctx->pc = 0x1A96B4u;
    // 0x1a96b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a96b8: 0x27c37000  addiu       $v1, $fp, 0x7000
    ctx->pc = 0x1a96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28672));
    // 0x1a96bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a96bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a96c0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a96c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a96c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a96c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a96c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96cc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a96d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a96d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a96d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a96d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a96d8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a96d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a96dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a96e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a96e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a96e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a96e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a96e8: 0x70022389  pcpyld      $a0, $zero, $v0
    ctx->pc = 0x1a96e8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a96ec: 0x9fa20120  lwu         $v0, 0x120($sp)
    ctx->pc = 0x1a96ecu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a96f0: 0x64b025  or          $s6, $v1, $a0
    ctx->pc = 0x1a96f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a96f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a96f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96f8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1a96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a96fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a96fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9700: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9704: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9708: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a9708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a970c: 0x44b825  or          $s7, $v0, $a0
    ctx->pc = 0x1a970cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a9710:
    // 0x1a9710: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1a9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9714: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1a9714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a9718: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a971c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9720: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a972c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x1a972cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a9730: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a9730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a9734: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9734u;
    SET_GPR_U32(ctx, 31, 0x1A973Cu);
    ctx->pc = 0x1A9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9734u;
    // 0x1a9738: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9734u, 0x1A973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A973Cu;
label_1a973c:
    // 0x1a973c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a9740: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9744: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9748: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9748u;
    SET_GPR_U32(ctx, 31, 0x1A9750u);
    ctx->pc = 0x1A974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9748u;
    // 0x1a974c: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9748u, 0x1A9750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9750u;
label_1a9750:
    // 0x1a9750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9754: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a9754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9758: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9758u;
    SET_GPR_U32(ctx, 31, 0x1A9760u);
    ctx->pc = 0x1A975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9758u;
    // 0x1a975c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9758u, 0x1A9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9760u;
label_1a9760:
    // 0x1a9760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9764: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9768: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9768u;
    SET_GPR_U32(ctx, 31, 0x1A9770u);
    ctx->pc = 0x1A976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9768u;
    // 0x1a976c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9768u, 0x1A9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9770u;
label_1a9770:
    // 0x1a9770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9774: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9778: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9778u;
    SET_GPR_U32(ctx, 31, 0x1A9780u);
    ctx->pc = 0x1A977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9778u;
    // 0x1a977c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9778u, 0x1A9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9780u;
label_1a9780:
    // 0x1a9780: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a9780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a9784: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a9784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a9788: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1a9788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a978c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A978Cu;
    {
        const bool branch_taken_0x1a978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A978Cu;
        // 0x1a9790: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a978c) {
            ctx->pc = 0x1A9710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9710;
        }
    }
    ctx->pc = 0x1A9794u;
    // 0x1a9794: 0x0  nop
    ctx->pc = 0x1a9794u;
    // NOP
label_1a9798:
    // 0x1a9798: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a979c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1A979Cu;
    SET_GPR_U32(ctx, 31, 0x1A97A4u);
    ctx->pc = 0x1A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A979Cu;
    // 0x1a97a0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1A979Cu, 0x1A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97A4u;
label_1a97a4:
    // 0x1a97a4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1a97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a97a8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x1a97a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x1a97ac: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1a97acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a97b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1a97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a97b4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1a97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1a97b8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1a97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a97bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a97c0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1a97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1a97c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a97c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a97cc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1a97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1a97d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a97d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a97d8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1a97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1a97dc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a97e0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1a97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1a97e4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a97e8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1a97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1a97ec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1a97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a97f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a97f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a97f4: 0x1440feba  bnez        $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x1A97F4u;
    {
        const bool branch_taken_0x1a97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97F4u;
        // 0x1a97f8: 0xafa40150  sw          $a0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97f4) {
            ctx->pc = 0x1A92E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a92e0;
        }
    }
    ctx->pc = 0x1A97FCu;
    // 0x1a97fc: 0x0  nop
    ctx->pc = 0x1a97fcu;
    // NOP
label_1a9800:
    // 0x1a9800: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9804: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1a9804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1a9808: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9808u;
    SET_GPR_U32(ctx, 31, 0x1A9810u);
    ctx->pc = 0x1A980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9808u;
    // 0x1a980c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9808u, 0x1A9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9810u;
label_1a9810:
    // 0x1a9810: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a9810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9814: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9818: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1a981c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A981Cu;
    SET_GPR_U32(ctx, 31, 0x1A9824u);
    ctx->pc = 0x1A9820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A981Cu;
    // 0x1a9820: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A981Cu, 0x1A9824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9824u;
label_1a9824:
    // 0x1a9824: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9828: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A9828u;
    SET_GPR_U32(ctx, 31, 0x1A9830u);
    ctx->pc = 0x1A982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9828u;
    // 0x1a982c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A9828u, 0x1A9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9830u;
label_1a9830:
    // 0x1a9830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9834: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1a9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a9838: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a983c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1a983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9840: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1a9840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1a9844: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9848: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a984c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a9850: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9854: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9858: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1a9858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1a985c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9860: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9864: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1a9864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1a9868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a986c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1A986Cu;
    SET_GPR_U32(ctx, 31, 0x1A9874u);
    ctx->pc = 0x1A9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A986Cu;
    // 0x1a9870: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1A986Cu, 0x1A9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9874u;
label_1a9874:
    // 0x1a9874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9878: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a9878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a987c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9880: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a9884: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1a9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1a9888: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a988c: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1a988cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1a9890: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1a9890u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1a9894: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a9894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9898: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a9898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1a989c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a98a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a98a4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a98a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a98a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a98ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A98ACu;
    SET_GPR_U32(ctx, 31, 0x1A98B4u);
    ctx->pc = 0x1A98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98ACu;
    // 0x1a98b0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A98ACu, 0x1A98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98B4u;
label_1a98b4:
    // 0x1a98b4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A98B4u;
    SET_GPR_U32(ctx, 31, 0x1A98BCu);
    ctx->pc = 0x1A98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98B4u;
    // 0x1a98b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A98B4u, 0x1A98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98BCu;
label_1a98bc:
    // 0x1a98bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a98bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a98c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a98c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98c4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1a98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1a98c8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a98c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a98cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a98ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a98d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1a98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1a98d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a98d8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1a98d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a98dc: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1a98dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a98e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A98E0u;
    SET_GPR_U32(ctx, 31, 0x1A98E8u);
    ctx->pc = 0x1A98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98E0u;
    // 0x1a98e4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A98E0u, 0x1A98E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98E8u;
label_1a98e8:
    // 0x1a98e8: 0xdfa600b0  ld          $a2, 0xB0($sp)
    ctx->pc = 0x1a98e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a98ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a98ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A98F0u;
    SET_GPR_U32(ctx, 31, 0x1A98F8u);
    ctx->pc = 0x1A98F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98F0u;
    // 0x1a98f4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A98F0u, 0x1A98F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98F8u;
label_1a98f8:
    // 0x1a98f8: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1a98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1a98fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a98fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9900: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a9904: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a9908: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1a9908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1a990c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9910: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a9914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9918: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9918u;
    SET_GPR_U32(ctx, 31, 0x1A9920u);
    ctx->pc = 0x1A991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9918u;
    // 0x1a991c: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9918u, 0x1A9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9920u;
label_1a9920:
    // 0x1a9920: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9928: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9928u;
    SET_GPR_U32(ctx, 31, 0x1A9930u);
    ctx->pc = 0x1A992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9928u;
    // 0x1a992c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9928u, 0x1A9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9930u;
label_1a9930:
    // 0x1a9930: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1a9934: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1a9934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a9938: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1a9938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a993c: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A993Cu;
    {
        const bool branch_taken_0x1a993c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A993Cu;
        // 0x1a9940: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a993c) {
            ctx->pc = 0x1A9A48u;
            goto label_1a9a48;
        }
    }
    ctx->pc = 0x1A9944u;
    // 0x1a9944: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a9948: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a994c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a994cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9950: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a9950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9954: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1a9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a9958: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a995c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9964: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a9968: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1a9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a996c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9970: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9974: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a9974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a9978: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1a9978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a997c: 0x0  nop
    ctx->pc = 0x1a997cu;
    // NOP
label_1a9980:
    // 0x1a9980: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1a9980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1a9984: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a9984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a9988: 0x9ea678c0  lwu         $a2, 0x78C0($s5)
    ctx->pc = 0x1a9988u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1a998c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1a998cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1a9990: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1a9990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a9994: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1a9998: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a9998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a999c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a99a0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a99a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a99a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1a99a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a99ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1a99acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a99b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a99b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a99b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a99b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a99b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a99bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a99bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a99c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A99C0u;
    SET_GPR_U32(ctx, 31, 0x1A99C8u);
    ctx->pc = 0x1A99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99C0u;
    // 0x1a99c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A99C0u, 0x1A99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99C8u;
label_1a99c8:
    // 0x1a99c8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1a99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1a99cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a99ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a99d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A99D4u;
    SET_GPR_U32(ctx, 31, 0x1A99DCu);
    ctx->pc = 0x1A99D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99D4u;
    // 0x1a99d8: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A99D4u, 0x1A99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99DCu;
label_1a99dc:
    // 0x1a99dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a99e0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a99e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a99e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a99e8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1a99e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a99ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a99ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a99f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a99f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a99f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A99F8u;
    SET_GPR_U32(ctx, 31, 0x1A9A00u);
    ctx->pc = 0x1A99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99F8u;
    // 0x1a99fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A99F8u, 0x1A9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A00u;
label_1a9a00:
    // 0x1a9a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9a08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9A08u;
    SET_GPR_U32(ctx, 31, 0x1A9A10u);
    ctx->pc = 0x1A9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A08u;
    // 0x1a9a0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9A08u, 0x1A9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A10u;
label_1a9a10:
    // 0x1a9a10: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1a9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1a9a14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a18: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1a9a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1a9a1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9a20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1A9A20u;
    SET_GPR_U32(ctx, 31, 0x1A9A28u);
    ctx->pc = 0x1A9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A20u;
    // 0x1a9a24: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1A9A20u, 0x1A9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A28u;
label_1a9a28:
    // 0x1a9a28: 0x8ea378c8  lw          $v1, 0x78C8($s5)
    ctx->pc = 0x1a9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1a9a2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a9a30: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1a9a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1a9a34: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1a9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a9a38: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1a9a38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a9a3c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1A9A3Cu;
    {
        const bool branch_taken_0x1a9a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A3Cu;
        // 0x1a9a40: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a3c) {
            ctx->pc = 0x1A9980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9980;
        }
    }
    ctx->pc = 0x1A9A44u;
    // 0x1a9a44: 0x0  nop
    ctx->pc = 0x1a9a44u;
    // NOP
label_1a9a48:
    // 0x1a9a48: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a9a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a9a4c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a9a4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a9a50: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a9a50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a9a54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a9a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9a58: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a9a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a9a5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a9a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9a60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a9a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9a64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9a68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a9a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9a6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A70u;
        // 0x1a9a74: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A78u;
}
