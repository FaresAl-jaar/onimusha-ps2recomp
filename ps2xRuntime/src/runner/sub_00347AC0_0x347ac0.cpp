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

// Function: sub_00347AC0
// Address: 0x347ac0 - 0x347c64
void sub_00347AC0_0x347ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347AC0_0x347ac0");
#endif

    switch (ctx->pc) {
        case 0x347ac0u: goto label_347ac0;
        case 0x347ac4u: goto label_347ac4;
        case 0x347ac8u: goto label_347ac8;
        case 0x347accu: goto label_347acc;
        case 0x347ad0u: goto label_347ad0;
        case 0x347ad4u: goto label_347ad4;
        case 0x347ad8u: goto label_347ad8;
        case 0x347adcu: goto label_347adc;
        case 0x347ae0u: goto label_347ae0;
        case 0x347ae4u: goto label_347ae4;
        case 0x347ae8u: goto label_347ae8;
        case 0x347aecu: goto label_347aec;
        case 0x347af0u: goto label_347af0;
        case 0x347af4u: goto label_347af4;
        case 0x347af8u: goto label_347af8;
        case 0x347afcu: goto label_347afc;
        case 0x347b00u: goto label_347b00;
        case 0x347b04u: goto label_347b04;
        case 0x347b08u: goto label_347b08;
        case 0x347b0cu: goto label_347b0c;
        case 0x347b10u: goto label_347b10;
        case 0x347b14u: goto label_347b14;
        case 0x347b18u: goto label_347b18;
        case 0x347b1cu: goto label_347b1c;
        case 0x347b20u: goto label_347b20;
        case 0x347b24u: goto label_347b24;
        case 0x347b28u: goto label_347b28;
        case 0x347b2cu: goto label_347b2c;
        case 0x347b30u: goto label_347b30;
        case 0x347b34u: goto label_347b34;
        case 0x347b38u: goto label_347b38;
        case 0x347b3cu: goto label_347b3c;
        case 0x347b40u: goto label_347b40;
        case 0x347b44u: goto label_347b44;
        case 0x347b48u: goto label_347b48;
        case 0x347b4cu: goto label_347b4c;
        case 0x347b50u: goto label_347b50;
        case 0x347b54u: goto label_347b54;
        case 0x347b58u: goto label_347b58;
        case 0x347b5cu: goto label_347b5c;
        case 0x347b60u: goto label_347b60;
        case 0x347b64u: goto label_347b64;
        case 0x347b68u: goto label_347b68;
        case 0x347b6cu: goto label_347b6c;
        case 0x347b70u: goto label_347b70;
        case 0x347b74u: goto label_347b74;
        case 0x347b78u: goto label_347b78;
        case 0x347b7cu: goto label_347b7c;
        case 0x347b80u: goto label_347b80;
        case 0x347b84u: goto label_347b84;
        case 0x347b88u: goto label_347b88;
        case 0x347b8cu: goto label_347b8c;
        case 0x347b90u: goto label_347b90;
        case 0x347b94u: goto label_347b94;
        case 0x347b98u: goto label_347b98;
        case 0x347b9cu: goto label_347b9c;
        case 0x347ba0u: goto label_347ba0;
        case 0x347ba4u: goto label_347ba4;
        case 0x347ba8u: goto label_347ba8;
        case 0x347bacu: goto label_347bac;
        case 0x347bb0u: goto label_347bb0;
        case 0x347bb4u: goto label_347bb4;
        case 0x347bb8u: goto label_347bb8;
        case 0x347bbcu: goto label_347bbc;
        case 0x347bc0u: goto label_347bc0;
        case 0x347bc4u: goto label_347bc4;
        case 0x347bc8u: goto label_347bc8;
        case 0x347bccu: goto label_347bcc;
        case 0x347bd0u: goto label_347bd0;
        case 0x347bd4u: goto label_347bd4;
        case 0x347bd8u: goto label_347bd8;
        case 0x347bdcu: goto label_347bdc;
        case 0x347be0u: goto label_347be0;
        case 0x347be4u: goto label_347be4;
        case 0x347be8u: goto label_347be8;
        case 0x347becu: goto label_347bec;
        case 0x347bf0u: goto label_347bf0;
        case 0x347bf4u: goto label_347bf4;
        case 0x347bf8u: goto label_347bf8;
        case 0x347bfcu: goto label_347bfc;
        case 0x347c00u: goto label_347c00;
        case 0x347c04u: goto label_347c04;
        case 0x347c08u: goto label_347c08;
        case 0x347c0cu: goto label_347c0c;
        case 0x347c10u: goto label_347c10;
        case 0x347c14u: goto label_347c14;
        case 0x347c18u: goto label_347c18;
        case 0x347c1cu: goto label_347c1c;
        case 0x347c20u: goto label_347c20;
        case 0x347c24u: goto label_347c24;
        case 0x347c28u: goto label_347c28;
        case 0x347c2cu: goto label_347c2c;
        case 0x347c30u: goto label_347c30;
        case 0x347c34u: goto label_347c34;
        case 0x347c38u: goto label_347c38;
        case 0x347c3cu: goto label_347c3c;
        case 0x347c40u: goto label_347c40;
        case 0x347c44u: goto label_347c44;
        case 0x347c48u: goto label_347c48;
        case 0x347c4cu: goto label_347c4c;
        case 0x347c50u: goto label_347c50;
        case 0x347c54u: goto label_347c54;
        case 0x347c58u: goto label_347c58;
        case 0x347c5cu: goto label_347c5c;
        case 0x347c60u: goto label_347c60;
        default: break;
    }

    ctx->pc = 0x347ac0u;

label_347ac0:
    // 0x347ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_347ac4:
    // 0x347ac4: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x347ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_347ac8:
    // 0x347ac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x347ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_347acc:
    // 0x347acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_347ad0:
    // 0x347ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_347ad4:
    // 0x347ad4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x347ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_347ad8:
    // 0x347ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_347adc:
    // 0x347adc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x347adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_347ae0:
    // 0x347ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347ae4:
    // 0x347ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_347ae8:
    // 0x347ae8: 0x16420027  bne         $s2, $v0, . + 4 + (0x27 << 2)
label_347aec:
    if (ctx->pc == 0x347AECu) {
        ctx->pc = 0x347AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AE8u;
        // 0x347aec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347AF0u;
        goto label_347af0;
    }
    ctx->pc = 0x347AE8u;
    {
        const bool branch_taken_0x347ae8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x347AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AE8u;
        // 0x347aec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ae8) {
            ctx->pc = 0x347B88u;
            goto label_347b88;
        }
    }
    ctx->pc = 0x347AF0u;
label_347af0:
    // 0x347af0: 0xc0a4408  jal         func_291020
label_347af4:
    if (ctx->pc == 0x347AF4u) {
        ctx->pc = 0x347AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AF0u;
        // 0x347af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347AF8u;
        goto label_347af8;
    }
    ctx->pc = 0x347AF0u;
    SET_GPR_U32(ctx, 31, 0x347AF8u);
    ctx->pc = 0x347AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AF0u;
    // 0x347af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x347AF0u, 0x347AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347AF8u;
label_347af8:
    // 0x347af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347afc:
    // 0x347afc: 0xc0a43fc  jal         func_290FF0
label_347b00:
    if (ctx->pc == 0x347B00u) {
        ctx->pc = 0x347B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AFCu;
        // 0x347b00: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B04u;
        goto label_347b04;
    }
    ctx->pc = 0x347AFCu;
    SET_GPR_U32(ctx, 31, 0x347B04u);
    ctx->pc = 0x347B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AFCu;
    // 0x347b00: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x347AFCu, 0x347B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B04u;
label_347b04:
    // 0x347b04: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x347b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_347b08:
    // 0x347b08: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x347b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_347b0c:
    // 0x347b0c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x347b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_347b10:
    // 0x347b10: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x347b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_347b14:
    // 0x347b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347b18:
    // 0x347b18: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_347b1c:
    // 0x347b1c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x347b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_347b20:
    // 0x347b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x347b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347b24:
    // 0x347b24: 0xc0510e0  jal         func_144380
label_347b28:
    if (ctx->pc == 0x347B28u) {
        ctx->pc = 0x347B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B24u;
        // 0x347b28: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B2Cu;
        goto label_347b2c;
    }
    ctx->pc = 0x347B24u;
    SET_GPR_U32(ctx, 31, 0x347B2Cu);
    ctx->pc = 0x347B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B24u;
    // 0x347b28: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x347B24u, 0x347B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B2Cu;
label_347b2c:
    // 0x347b2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x347b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347b30:
    // 0x347b30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347b34:
    // 0x347b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347b38:
    // 0x347b38: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x347b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_347b3c:
    // 0x347b3c: 0xc0d0484  jal         func_341210
label_347b40:
    if (ctx->pc == 0x347B40u) {
        ctx->pc = 0x347B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B3Cu;
        // 0x347b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B44u;
        goto label_347b44;
    }
    ctx->pc = 0x347B3Cu;
    SET_GPR_U32(ctx, 31, 0x347B44u);
    ctx->pc = 0x347B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B3Cu;
    // 0x347b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x347B3Cu, 0x347B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B44u;
label_347b44:
    // 0x347b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347b48:
    // 0x347b48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_347b4c:
    // 0x347b4c: 0x24060708  addiu       $a2, $zero, 0x708
    ctx->pc = 0x347b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
label_347b50:
    // 0x347b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347b54:
    // 0x347b54: 0xc0ebb40  jal         func_3AED00
label_347b58:
    if (ctx->pc == 0x347B58u) {
        ctx->pc = 0x347B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B54u;
        // 0x347b58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B5Cu;
        goto label_347b5c;
    }
    ctx->pc = 0x347B54u;
    SET_GPR_U32(ctx, 31, 0x347B5Cu);
    ctx->pc = 0x347B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B54u;
    // 0x347b58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x347B54u, 0x347B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B5Cu;
label_347b5c:
    // 0x347b5c: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x347b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_347b60:
    // 0x347b60: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_347b64:
    // 0x347b64: 0x320f809  jalr        $t9
label_347b68:
    if (ctx->pc == 0x347B68u) {
        ctx->pc = 0x347B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B64u;
        // 0x347b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B6Cu;
        goto label_347b6c;
    }
    ctx->pc = 0x347B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347B6Cu);
        ctx->pc = 0x347B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B64u;
        // 0x347b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347B64u, 0x347B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347B6Cu;
label_347b6c:
    // 0x347b6c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_347b70:
    // 0x347b70: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x347b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_347b74:
    // 0x347b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x347b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347b78:
    // 0x347b78: 0xc0e3668  jal         func_38D9A0
label_347b7c:
    if (ctx->pc == 0x347B7Cu) {
        ctx->pc = 0x347B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B78u;
        // 0x347b7c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B80u;
        goto label_347b80;
    }
    ctx->pc = 0x347B78u;
    SET_GPR_U32(ctx, 31, 0x347B80u);
    ctx->pc = 0x347B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B78u;
    // 0x347b7c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x347B78u, 0x347B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B80u;
label_347b80:
    // 0x347b80: 0x10000031  b           . + 4 + (0x31 << 2)
label_347b84:
    if (ctx->pc == 0x347B84u) {
        ctx->pc = 0x347B88u;
        goto label_347b88;
    }
    ctx->pc = 0x347B80u;
    {
        const bool branch_taken_0x347b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b80) {
            ctx->pc = 0x347C48u;
            goto label_347c48;
        }
    }
    ctx->pc = 0x347B88u;
label_347b88:
    // 0x347b88: 0xc0a4408  jal         func_291020
label_347b8c:
    if (ctx->pc == 0x347B8Cu) {
        ctx->pc = 0x347B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B88u;
        // 0x347b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B90u;
        goto label_347b90;
    }
    ctx->pc = 0x347B88u;
    SET_GPR_U32(ctx, 31, 0x347B90u);
    ctx->pc = 0x347B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B88u;
    // 0x347b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x347B88u, 0x347B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B90u;
label_347b90:
    // 0x347b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347b94:
    // 0x347b94: 0xc0a43fc  jal         func_290FF0
label_347b98:
    if (ctx->pc == 0x347B98u) {
        ctx->pc = 0x347B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B94u;
        // 0x347b98: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347B9Cu;
        goto label_347b9c;
    }
    ctx->pc = 0x347B94u;
    SET_GPR_U32(ctx, 31, 0x347B9Cu);
    ctx->pc = 0x347B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B94u;
    // 0x347b98: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x347B94u, 0x347B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B9Cu;
label_347b9c:
    // 0x347b9c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x347b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_347ba0:
    // 0x347ba0: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x347ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_347ba4:
    // 0x347ba4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x347ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_347ba8:
    // 0x347ba8: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x347ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_347bac:
    // 0x347bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347bb0:
    // 0x347bb0: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x347bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_347bb4:
    // 0x347bb4: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x347bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_347bb8:
    // 0x347bb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x347bb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347bbc:
    // 0x347bbc: 0xc0510e0  jal         func_144380
label_347bc0:
    if (ctx->pc == 0x347BC0u) {
        ctx->pc = 0x347BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BBCu;
        // 0x347bc0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347BC4u;
        goto label_347bc4;
    }
    ctx->pc = 0x347BBCu;
    SET_GPR_U32(ctx, 31, 0x347BC4u);
    ctx->pc = 0x347BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347BBCu;
    // 0x347bc0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x347BBCu, 0x347BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347BC4u;
label_347bc4:
    // 0x347bc4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x347bc4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347bc8:
    // 0x347bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x347bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347bcc:
    // 0x347bcc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x347bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_347bd0:
    // 0x347bd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347bd4:
    // 0x347bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_347bd8:
    // 0x347bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347bdc:
    // 0x347bdc: 0x2405021e  addiu       $a1, $zero, 0x21E
    ctx->pc = 0x347bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
label_347be0:
    // 0x347be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x347be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347be4:
    // 0x347be4: 0x0  nop
    ctx->pc = 0x347be4u;
    // NOP
label_347be8:
    // 0x347be8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x347be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_347bec:
    // 0x347bec: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x347becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_347bf0:
    // 0x347bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347bf4:
    // 0x347bf4: 0x0  nop
    ctx->pc = 0x347bf4u;
    // NOP
label_347bf8:
    // 0x347bf8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x347bf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_347bfc:
    // 0x347bfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_347c00:
    // 0x347c00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x347c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_347c04:
    // 0x347c04: 0x0  nop
    ctx->pc = 0x347c04u;
    // NOP
label_347c08:
    // 0x347c08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x347c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_347c0c:
    // 0x347c0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347c0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_347c10:
    // 0x347c10: 0xc0d0484  jal         func_341210
label_347c14:
    if (ctx->pc == 0x347C14u) {
        ctx->pc = 0x347C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C10u;
        // 0x347c14: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C18u;
        goto label_347c18;
    }
    ctx->pc = 0x347C10u;
    SET_GPR_U32(ctx, 31, 0x347C18u);
    ctx->pc = 0x347C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C10u;
    // 0x347c14: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x347C10u, 0x347C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C18u;
label_347c18:
    // 0x347c18: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x347c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_347c1c:
    // 0x347c1c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x347c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_347c20:
    // 0x347c20: 0x320f809  jalr        $t9
label_347c24:
    if (ctx->pc == 0x347C24u) {
        ctx->pc = 0x347C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C20u;
        // 0x347c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C28u;
        goto label_347c28;
    }
    ctx->pc = 0x347C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347C28u);
        ctx->pc = 0x347C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C20u;
        // 0x347c24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347C20u, 0x347C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347C28u;
label_347c28:
    // 0x347c28: 0xc0d0494  jal         func_341250
label_347c2c:
    if (ctx->pc == 0x347C2Cu) {
        ctx->pc = 0x347C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C28u;
        // 0x347c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C30u;
        goto label_347c30;
    }
    ctx->pc = 0x347C28u;
    SET_GPR_U32(ctx, 31, 0x347C30u);
    ctx->pc = 0x347C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C28u;
    // 0x347c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x347C28u, 0x347C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C30u;
label_347c30:
    // 0x347c30: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x347c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_347c34:
    // 0x347c34: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x347c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_347c38:
    // 0x347c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x347c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347c3c:
    // 0x347c3c: 0xc0e3668  jal         func_38D9A0
label_347c40:
    if (ctx->pc == 0x347C40u) {
        ctx->pc = 0x347C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C3Cu;
        // 0x347c40: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C44u;
        goto label_347c44;
    }
    ctx->pc = 0x347C3Cu;
    SET_GPR_U32(ctx, 31, 0x347C44u);
    ctx->pc = 0x347C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C3Cu;
    // 0x347c40: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9A0u, 0x347C3Cu, 0x347C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C44u;
label_347c44:
    // 0x347c44: 0x0  nop
    ctx->pc = 0x347c44u;
    // NOP
label_347c48:
    // 0x347c48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x347c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_347c4c:
    // 0x347c4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_347c50:
    // 0x347c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_347c54:
    // 0x347c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347c58:
    // 0x347c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_347c5c:
    // 0x347c5c: 0x3e00008  jr          $ra
label_347c60:
    if (ctx->pc == 0x347C60u) {
        ctx->pc = 0x347C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C5Cu;
        // 0x347c60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347C64u;
        goto label_fallthrough_0x347c5c;
    }
    ctx->pc = 0x347C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C5Cu;
        // 0x347c60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x347c5c:
    ctx->pc = 0x347C64u;
}
