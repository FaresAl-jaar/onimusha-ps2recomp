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

// Function: sub_00221AE0
// Address: 0x221ae0 - 0x221b90
void sub_00221AE0_0x221ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AE0_0x221ae0");
#endif

    switch (ctx->pc) {
        case 0x221ae0u: goto label_221ae0;
        case 0x221ae4u: goto label_221ae4;
        case 0x221ae8u: goto label_221ae8;
        case 0x221aecu: goto label_221aec;
        case 0x221af0u: goto label_221af0;
        case 0x221af4u: goto label_221af4;
        case 0x221af8u: goto label_221af8;
        case 0x221afcu: goto label_221afc;
        case 0x221b00u: goto label_221b00;
        case 0x221b04u: goto label_221b04;
        case 0x221b08u: goto label_221b08;
        case 0x221b0cu: goto label_221b0c;
        case 0x221b10u: goto label_221b10;
        case 0x221b14u: goto label_221b14;
        case 0x221b18u: goto label_221b18;
        case 0x221b1cu: goto label_221b1c;
        case 0x221b20u: goto label_221b20;
        case 0x221b24u: goto label_221b24;
        case 0x221b28u: goto label_221b28;
        case 0x221b2cu: goto label_221b2c;
        case 0x221b30u: goto label_221b30;
        case 0x221b34u: goto label_221b34;
        case 0x221b38u: goto label_221b38;
        case 0x221b3cu: goto label_221b3c;
        case 0x221b40u: goto label_221b40;
        case 0x221b44u: goto label_221b44;
        case 0x221b48u: goto label_221b48;
        case 0x221b4cu: goto label_221b4c;
        case 0x221b50u: goto label_221b50;
        case 0x221b54u: goto label_221b54;
        case 0x221b58u: goto label_221b58;
        case 0x221b5cu: goto label_221b5c;
        case 0x221b60u: goto label_221b60;
        case 0x221b64u: goto label_221b64;
        case 0x221b68u: goto label_221b68;
        case 0x221b6cu: goto label_221b6c;
        case 0x221b70u: goto label_221b70;
        case 0x221b74u: goto label_221b74;
        case 0x221b78u: goto label_221b78;
        case 0x221b7cu: goto label_221b7c;
        case 0x221b80u: goto label_221b80;
        case 0x221b84u: goto label_221b84;
        case 0x221b88u: goto label_221b88;
        case 0x221b8cu: goto label_221b8c;
        default: break;
    }

    ctx->pc = 0x221ae0u;

label_221ae0:
    // 0x221ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_221ae4:
    // 0x221ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_221ae8:
    // 0x221ae8: 0xc08a044  jal         func_228110
label_221aec:
    if (ctx->pc == 0x221AECu) {
        ctx->pc = 0x221AF0u;
        goto label_221af0;
    }
    ctx->pc = 0x221AE8u;
    SET_GPR_U32(ctx, 31, 0x221AF0u);
    ctx->pc = 0x228110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228110u, 0x221AE8u, 0x221AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AF0u;
label_221af0:
    // 0x221af0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x221af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_221af4:
    // 0x221af4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_221af8:
    if (ctx->pc == 0x221AF8u) {
        ctx->pc = 0x221AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AF4u;
        // 0x221af8: 0x24639fc8  addiu       $v1, $v1, -0x6038 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221AFCu;
        goto label_221afc;
    }
    ctx->pc = 0x221AF4u;
    {
        const bool branch_taken_0x221af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AF4u;
        // 0x221af8: 0x24639fc8  addiu       $v1, $v1, -0x6038 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221af4) {
            ctx->pc = 0x221B18u;
            goto label_221b18;
        }
    }
    ctx->pc = 0x221AFCu;
label_221afc:
    // 0x221afc: 0xc08a04e  jal         func_228138
label_221b00:
    if (ctx->pc == 0x221B00u) {
        ctx->pc = 0x221B04u;
        goto label_221b04;
    }
    ctx->pc = 0x221AFCu;
    SET_GPR_U32(ctx, 31, 0x221B04u);
    ctx->pc = 0x228138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228138u, 0x221AFCu, 0x221B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B04u;
label_221b04:
    // 0x221b04: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_221b08:
    // 0x221b08: 0xc089ffa  jal         func_227FE8
label_221b0c:
    if (ctx->pc == 0x221B0Cu) {
        ctx->pc = 0x221B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B08u;
        // 0x221b0c: 0xfc625a48  sd          $v0, 0x5A48($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 23112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B10u;
        goto label_221b10;
    }
    ctx->pc = 0x221B08u;
    SET_GPR_U32(ctx, 31, 0x221B10u);
    ctx->pc = 0x221B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B08u;
    // 0x221b0c: 0xfc625a48  sd          $v0, 0x5A48($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 23112), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FE8u, 0x221B08u, 0x221B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B10u;
label_221b10:
    // 0x221b10: 0x1000001d  b           . + 4 + (0x1D << 2)
label_221b14:
    if (ctx->pc == 0x221B14u) {
        ctx->pc = 0x221B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B10u;
        // 0x221b14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B18u;
        goto label_221b18;
    }
    ctx->pc = 0x221B10u;
    {
        const bool branch_taken_0x221b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B10u;
        // 0x221b14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b10) {
            ctx->pc = 0x221B88u;
            goto label_221b88;
        }
    }
    ctx->pc = 0x221B18u;
label_221b18:
    // 0x221b18: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_221b1c:
    // 0x221b1c: 0x8c449fc0  lw          $a0, -0x6040($v0)
    ctx->pc = 0x221b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942656)));
label_221b20:
    // 0x221b20: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_221b24:
    if (ctx->pc == 0x221B24u) {
        ctx->pc = 0x221B28u;
        goto label_221b28;
    }
    ctx->pc = 0x221B20u;
    {
        const bool branch_taken_0x221b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b20) {
            ctx->pc = 0x221B60u;
            goto label_221b60;
        }
    }
    ctx->pc = 0x221B28u;
label_221b28:
    // 0x221b28: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x221b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_221b2c:
    // 0x221b2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_221b30:
    if (ctx->pc == 0x221B30u) {
        ctx->pc = 0x221B34u;
        goto label_221b34;
    }
    ctx->pc = 0x221B2Cu;
    {
        const bool branch_taken_0x221b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b2c) {
            ctx->pc = 0x221B60u;
            goto label_221b60;
        }
    }
    ctx->pc = 0x221B34u;
label_221b34:
    // 0x221b34: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x221b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
label_221b38:
    // 0x221b38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_221b3c:
    if (ctx->pc == 0x221B3Cu) {
        ctx->pc = 0x221B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B38u;
        // 0x221b3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B40u;
        goto label_221b40;
    }
    ctx->pc = 0x221B38u;
    {
        const bool branch_taken_0x221b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B38u;
        // 0x221b3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b38) {
            ctx->pc = 0x221B60u;
            goto label_221b60;
        }
    }
    ctx->pc = 0x221B40u;
label_221b40:
    // 0x221b40: 0x8c841018  lw          $a0, 0x1018($a0)
    ctx->pc = 0x221b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4120)));
label_221b44:
    // 0x221b44: 0x40f809  jalr        $v0
label_221b48:
    if (ctx->pc == 0x221B48u) {
        ctx->pc = 0x221B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B44u;
        // 0x221b48: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B4Cu;
        goto label_221b4c;
    }
    ctx->pc = 0x221B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221B4Cu);
        ctx->pc = 0x221B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B44u;
        // 0x221b48: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221B44u, 0x221B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221B4Cu;
label_221b4c:
    // 0x221b4c: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
label_221b50:
    // 0x221b50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x221b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_221b54:
    // 0x221b54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_221b58:
    // 0x221b58: 0x1000000a  b           . + 4 + (0xA << 2)
label_221b5c:
    if (ctx->pc == 0x221B5Cu) {
        ctx->pc = 0x221B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B58u;
        // 0x221b5c: 0xfc835a48  sd          $v1, 0x5A48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 23112), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B60u;
        goto label_221b60;
    }
    ctx->pc = 0x221B58u;
    {
        const bool branch_taken_0x221b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B58u;
        // 0x221b5c: 0xfc835a48  sd          $v1, 0x5A48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 23112), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b58) {
            ctx->pc = 0x221B84u;
            goto label_221b84;
        }
    }
    ctx->pc = 0x221B60u;
label_221b60:
    // 0x221b60: 0x8c6401b0  lw          $a0, 0x1B0($v1)
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_221b64:
    // 0x221b64: 0x8c6501b8  lw          $a1, 0x1B8($v1)
    ctx->pc = 0x221b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_221b68:
    // 0x221b68: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_221b6c:
    // 0x221b6c: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x221b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_221b70:
    // 0x221b70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_221b74:
    // 0x221b74: 0xfc655a48  sd          $a1, 0x5A48($v1)
    ctx->pc = 0x221b74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 23112), GPR_U64(ctx, 5));
label_221b78:
    // 0x221b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_221b7c:
    // 0x221b7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x221b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_221b80:
    // 0x221b80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x221b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_221b84:
    // 0x221b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_221b88:
    // 0x221b88: 0x3e00008  jr          $ra
label_221b8c:
    if (ctx->pc == 0x221B8Cu) {
        ctx->pc = 0x221B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B88u;
        // 0x221b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B90u;
        goto label_fallthrough_0x221b88;
    }
    ctx->pc = 0x221B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B88u;
        // 0x221b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221b88:
    ctx->pc = 0x221B90u;
}
