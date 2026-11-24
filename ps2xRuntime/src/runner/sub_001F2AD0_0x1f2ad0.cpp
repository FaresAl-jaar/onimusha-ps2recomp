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

// Function: sub_001F2AD0
// Address: 0x1f2ad0 - 0x1f2c9c
void sub_001F2AD0_0x1f2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2AD0_0x1f2ad0");
#endif

    switch (ctx->pc) {
        case 0x1f2b08u: goto label_1f2b08;
        case 0x1f2b1cu: goto label_1f2b1c;
        case 0x1f2b2cu: goto label_1f2b2c;
        case 0x1f2b84u: goto label_1f2b84;
        case 0x1f2bc4u: goto label_1f2bc4;
        case 0x1f2bd4u: goto label_1f2bd4;
        case 0x1f2c44u: goto label_1f2c44;
        case 0x1f2c5cu: goto label_1f2c5c;
        case 0x1f2c74u: goto label_1f2c74;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c90u: goto label_1f2c90;
        default: break;
    }

    ctx->pc = 0x1f2ad0u;

    // 0x1f2ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2ad4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1f2ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2adc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2ae0: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1f2ae4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f2ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2ae8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1F2AE8u;
    {
        const bool branch_taken_0x1f2ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ae8) {
            ctx->pc = 0x1F2C30u;
            goto label_1f2c30;
        }
    }
    ctx->pc = 0x1F2AF0u;
    // 0x1f2af0: 0x97828824  lhu         $v0, -0x77DC($gp)
    ctx->pc = 0x1f2af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x1f2af4: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f2af8: 0x24841390  addiu       $a0, $a0, 0x1390
    ctx->pc = 0x1f2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    // 0x1f2afc: 0xa7808818  sh          $zero, -0x77E8($gp)
    ctx->pc = 0x1f2afcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936600), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2b00: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x1F2B00u;
    SET_GPR_U32(ctx, 31, 0x1F2B08u);
    ctx->pc = 0x1F2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B00u;
    // 0x1f2b04: 0xa782881c  sh          $v0, -0x77E4($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936604), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x1F2B00u, 0x1F2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B08u;
label_1f2b08:
    // 0x1f2b08: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x1f2b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1f2b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B0Cu;
    {
        const bool branch_taken_0x1f2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B0Cu;
        // 0x1f2b10: 0x3c040087  lui         $a0, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b0c) {
            ctx->pc = 0x1F2B20u;
            goto label_1f2b20;
        }
    }
    ctx->pc = 0x1F2B14u;
    // 0x1f2b14: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x1F2B14u;
    SET_GPR_U32(ctx, 31, 0x1F2B1Cu);
    ctx->pc = 0x1F2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B14u;
    // 0x1f2b18: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x1F2B14u, 0x1F2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B1Cu;
label_1f2b1c:
    // 0x1f2b1c: 0x0  nop
    ctx->pc = 0x1f2b1cu;
    // NOP
label_1f2b20:
    // 0x1f2b20: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f2b24: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1F2B24u;
    SET_GPR_U32(ctx, 31, 0x1F2B2Cu);
    ctx->pc = 0x1F2B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B24u;
    // 0x1f2b28: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1F2B24u, 0x1F2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B2Cu;
label_1f2b2c:
    // 0x1f2b2c: 0x97828830  lhu         $v0, -0x77D0($gp)
    ctx->pc = 0x1f2b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936624)));
    // 0x1f2b30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F2B30u;
    {
        const bool branch_taken_0x1f2b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b30) {
            ctx->pc = 0x1F2B88u;
            goto label_1f2b88;
        }
    }
    ctx->pc = 0x1F2B38u;
    // 0x1f2b38: 0x8f828834  lw          $v0, -0x77CC($gp)
    ctx->pc = 0x1f2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936628)));
    // 0x1f2b3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2B3Cu;
    {
        const bool branch_taken_0x1f2b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b3c) {
            ctx->pc = 0x1F2B60u;
            goto label_1f2b60;
        }
    }
    ctx->pc = 0x1F2B44u;
    // 0x1f2b44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2B44u;
    {
        const bool branch_taken_0x1f2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b44) {
            ctx->pc = 0x1F2B70u;
            goto label_1f2b70;
        }
    }
    ctx->pc = 0x1F2B4Cu;
    // 0x1f2b4c: 0x90430036  lbu         $v1, 0x36($v0)
    ctx->pc = 0x1f2b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x1f2b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2b54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2B54u;
    {
        const bool branch_taken_0x1f2b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2b54) {
            ctx->pc = 0x1F2B70u;
            goto label_1f2b70;
        }
    }
    ctx->pc = 0x1F2B5Cu;
    // 0x1f2b5c: 0x0  nop
    ctx->pc = 0x1f2b5cu;
    // NOP
label_1f2b60:
    // 0x1f2b60: 0x97828830  lhu         $v0, -0x77D0($gp)
    ctx->pc = 0x1f2b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936624)));
    // 0x1f2b64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f2b68: 0xa7828830  sh          $v0, -0x77D0($gp)
    ctx->pc = 0x1f2b68u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2b6c: 0x0  nop
    ctx->pc = 0x1f2b6cu;
    // NOP
label_1f2b70:
    // 0x1f2b70: 0x97828830  lhu         $v0, -0x77D0($gp)
    ctx->pc = 0x1f2b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936624)));
    // 0x1f2b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B74u;
    {
        const bool branch_taken_0x1f2b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B74u;
        // 0x1f2b78: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b74) {
            ctx->pc = 0x1F2B88u;
            goto label_1f2b88;
        }
    }
    ctx->pc = 0x1F2B7Cu;
    // 0x1f2b7c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x1F2B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B84u);
    ctx->pc = 0x1F2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B7Cu;
    // 0x1f2b80: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x1F2B7Cu, 0x1F2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B84u;
label_1f2b84:
    // 0x1f2b84: 0x0  nop
    ctx->pc = 0x1f2b84u;
    // NOP
label_1f2b88:
    // 0x1f2b88: 0x97828820  lhu         $v0, -0x77E0($gp)
    ctx->pc = 0x1f2b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x1f2b8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2B8Cu;
    {
        const bool branch_taken_0x1f2b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b8c) {
            ctx->pc = 0x1F2BE0u;
            goto label_1f2be0;
        }
    }
    ctx->pc = 0x1F2B94u;
    // 0x1f2b94: 0x97828828  lhu         $v0, -0x77D8($gp)
    ctx->pc = 0x1f2b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x1f2b98: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2B98u;
    {
        const bool branch_taken_0x1f2b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B98u;
        // 0x1f2b9c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b98) {
            ctx->pc = 0x1F2BC8u;
            goto label_1f2bc8;
        }
    }
    ctx->pc = 0x1F2BA0u;
    // 0x1f2ba0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1f2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1f2ba4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1f2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1f2ba8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1f2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1f2bac: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x1f2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x1f2bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f2bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f2bb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1f2bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1f2bbc: 0xc056e04  jal         func_15B810
    ctx->pc = 0x1F2BBCu;
    SET_GPR_U32(ctx, 31, 0x1F2BC4u);
    ctx->pc = 0x1F2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BBCu;
    // 0x1f2bc0: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x1F2BBCu, 0x1F2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BC4u;
label_1f2bc4:
    // 0x1f2bc4: 0x0  nop
    ctx->pc = 0x1f2bc4u;
    // NOP
label_1f2bc8:
    // 0x1f2bc8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1f2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1f2bcc: 0xc056d10  jal         func_15B440
    ctx->pc = 0x1F2BCCu;
    SET_GPR_U32(ctx, 31, 0x1F2BD4u);
    ctx->pc = 0x1F2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BCCu;
    // 0x1f2bd0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B440u, 0x1F2BCCu, 0x1F2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BD4u;
label_1f2bd4:
    // 0x1f2bd4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F2BD4u;
    {
        const bool branch_taken_0x1f2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bd4) {
            ctx->pc = 0x1F2C20u;
            goto label_1f2c20;
        }
    }
    ctx->pc = 0x1F2BDCu;
    // 0x1f2bdc: 0x0  nop
    ctx->pc = 0x1f2bdcu;
    // NOP
label_1f2be0:
    // 0x1f2be0: 0x97828828  lhu         $v0, -0x77D8($gp)
    ctx->pc = 0x1f2be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x1f2be4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2BE4u;
    {
        const bool branch_taken_0x1f2be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BE4u;
        // 0x1f2be8: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2be4) {
            ctx->pc = 0x1F2C20u;
            goto label_1f2c20;
        }
    }
    ctx->pc = 0x1F2BECu;
    // 0x1f2bec: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1f2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1f2bf0: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x1f2bf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f2bf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1f2bfc: 0x4207c  dsll32      $a0, $a0, 1
    ctx->pc = 0x1f2bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 1));
    // 0x1f2c00: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1f2c04: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x1f2c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x1f2c08: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1f2c0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2c10: 0xac240fe0  sw          $a0, 0xFE0($at)
    ctx->pc = 0x1f2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 4));
    // 0x1f2c14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1f2c18: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x1f2c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x1f2c1c: 0x0  nop
    ctx->pc = 0x1f2c1cu;
    // NOP
label_1f2c20:
    // 0x1f2c20: 0x97828820  lhu         $v0, -0x77E0($gp)
    ctx->pc = 0x1f2c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x1f2c24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2C24u;
    {
        const bool branch_taken_0x1f2c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C24u;
        // 0x1f2c28: 0xa7828828  sh          $v0, -0x77D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936616), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c24) {
            ctx->pc = 0x1F2C48u;
            goto label_1f2c48;
        }
    }
    ctx->pc = 0x1F2C2Cu;
    // 0x1f2c2c: 0x0  nop
    ctx->pc = 0x1f2c2cu;
    // NOP
label_1f2c30:
    // 0x1f2c30: 0x97828820  lhu         $v0, -0x77E0($gp)
    ctx->pc = 0x1f2c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936608)));
    // 0x1f2c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2C34u;
    {
        const bool branch_taken_0x1f2c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C34u;
        // 0x1f2c38: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c34) {
            ctx->pc = 0x1F2C48u;
            goto label_1f2c48;
        }
    }
    ctx->pc = 0x1F2C3Cu;
    // 0x1f2c3c: 0xc056d10  jal         func_15B440
    ctx->pc = 0x1F2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C44u);
    ctx->pc = 0x1F2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C3Cu;
    // 0x1f2c40: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B440u, 0x1F2C3Cu, 0x1F2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C44u;
label_1f2c44:
    // 0x1f2c44: 0x0  nop
    ctx->pc = 0x1f2c44u;
    // NOP
label_1f2c48:
    // 0x1f2c48: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x1f2c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x1f2c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2C4Cu;
    {
        const bool branch_taken_0x1f2c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C4Cu;
        // 0x1f2c50: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c4c) {
            ctx->pc = 0x1F2C68u;
            goto label_1f2c68;
        }
    }
    ctx->pc = 0x1F2C54u;
    // 0x1f2c54: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x1F2C54u;
    SET_GPR_U32(ctx, 31, 0x1F2C5Cu);
    ctx->pc = 0x1F2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C54u;
    // 0x1f2c58: 0x24845db0  addiu       $a0, $a0, 0x5DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x1F2C54u, 0x1F2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C5Cu;
label_1f2c5c:
    // 0x1f2c5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2C5Cu;
    {
        const bool branch_taken_0x1f2c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c5c) {
            ctx->pc = 0x1F2C78u;
            goto label_1f2c78;
        }
    }
    ctx->pc = 0x1F2C64u;
    // 0x1f2c64: 0x0  nop
    ctx->pc = 0x1f2c64u;
    // NOP
label_1f2c68:
    // 0x1f2c68: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1f2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1f2c6c: 0xc0a73ac  jal         func_29CEB0
    ctx->pc = 0x1F2C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C74u);
    ctx->pc = 0x1F2C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C6Cu;
    // 0x1f2c70: 0x24845c80  addiu       $a0, $a0, 0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CEB0u, 0x1F2C6Cu, 0x1F2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C74u;
label_1f2c74:
    // 0x1f2c74: 0x0  nop
    ctx->pc = 0x1f2c74u;
    // NOP
label_1f2c78:
    // 0x1f2c78: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1f2c7c: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1F2C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C84u);
    ctx->pc = 0x1F2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C7Cu;
    // 0x1f2c80: 0x24845db0  addiu       $a0, $a0, 0x5DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1F2C7Cu, 0x1F2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C84u;
label_1f2c84:
    // 0x1f2c84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1f2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x1f2c88: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1F2C88u;
    SET_GPR_U32(ctx, 31, 0x1F2C90u);
    ctx->pc = 0x1F2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C88u;
    // 0x1f2c8c: 0x24845c80  addiu       $a0, $a0, 0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1F2C88u, 0x1F2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C94u;
        // 0x1f2c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2C9Cu;
}
