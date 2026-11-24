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

// Function: sub_00249AB8
// Address: 0x249ab8 - 0x249c70
void sub_00249AB8_0x249ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249AB8_0x249ab8");
#endif

    switch (ctx->pc) {
        case 0x249ae8u: goto label_249ae8;
        case 0x249b08u: goto label_249b08;
        case 0x249b10u: goto label_249b10;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b28u: goto label_249b28;
        case 0x249b40u: goto label_249b40;
        case 0x249b68u: goto label_249b68;
        case 0x249b8cu: goto label_249b8c;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bd8u: goto label_249bd8;
        case 0x249be4u: goto label_249be4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249c00u: goto label_249c00;
        case 0x249c08u: goto label_249c08;
        case 0x249c10u: goto label_249c10;
        case 0x249c20u: goto label_249c20;
        case 0x249c28u: goto label_249c28;
        case 0x249c34u: goto label_249c34;
        case 0x249c50u: goto label_249c50;
        default: break;
    }

    ctx->pc = 0x249ab8u;

    // 0x249ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249abc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x249ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ac4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x249ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x249ac8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249AC8u;
    {
        const bool branch_taken_0x249ac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x249ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AC8u;
        // 0x249acc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ac8) {
            ctx->pc = 0x249AE0u;
            goto label_249ae0;
        }
    }
    ctx->pc = 0x249AD0u;
    // 0x249ad0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249ad4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x249AD4u;
    {
        const bool branch_taken_0x249ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD4u;
        // 0x249ad8: 0x24a5d288  addiu       $a1, $a1, -0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ad4) {
            ctx->pc = 0x249C48u;
            goto label_249c48;
        }
    }
    ctx->pc = 0x249ADCu;
    // 0x249adc: 0x0  nop
    ctx->pc = 0x249adcu;
    // NOP
label_249ae0:
    // 0x249ae0: 0xc092ba4  jal         func_24AE90
    ctx->pc = 0x249AE0u;
    SET_GPR_U32(ctx, 31, 0x249AE8u);
    ctx->pc = 0x249AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AE0u;
    // 0x249ae4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE90u, 0x249AE0u, 0x249AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AE8u;
label_249ae8:
    // 0x249ae8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x249aec: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x249AECu;
    {
        const bool branch_taken_0x249aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AECu;
        // 0x249af0: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249aec) {
            ctx->pc = 0x249C58u;
            goto label_249c58;
        }
    }
    ctx->pc = 0x249AF4u;
    // 0x249af4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249afc: 0x24510fd0  addiu       $s1, $v0, 0xFD0
    ctx->pc = 0x249afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4048));
    // 0x249b00: 0xc092966  jal         func_24A598
    ctx->pc = 0x249B00u;
    SET_GPR_U32(ctx, 31, 0x249B08u);
    ctx->pc = 0x249B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B00u;
    // 0x249b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A598u, 0x249B00u, 0x249B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B08u;
label_249b08:
    // 0x249b08: 0xc091a44  jal         func_246910
    ctx->pc = 0x249B08u;
    SET_GPR_U32(ctx, 31, 0x249B10u);
    ctx->pc = 0x249B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B08u;
    // 0x249b0c: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249B08u, 0x249B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B10u;
label_249b10:
    // 0x249b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b14: 0xc091b08  jal         func_246C20
    ctx->pc = 0x249B14u;
    SET_GPR_U32(ctx, 31, 0x249B1Cu);
    ctx->pc = 0x249B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B14u;
    // 0x249b18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C20u, 0x249B14u, 0x249B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B1Cu;
label_249b1c:
    // 0x249b1c: 0x24044401  addiu       $a0, $zero, 0x4401
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17409));
    // 0x249b20: 0xc091a44  jal         func_246910
    ctx->pc = 0x249B20u;
    SET_GPR_U32(ctx, 31, 0x249B28u);
    ctx->pc = 0x249B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B20u;
    // 0x249b24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249B20u, 0x249B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B28u;
label_249b28:
    // 0x249b28: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249B28u;
    {
        const bool branch_taken_0x249b28 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x249B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B28u;
        // 0x249b2c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b28) {
            ctx->pc = 0x249B50u;
            goto label_249b50;
        }
    }
    ctx->pc = 0x249B30u;
    // 0x249b30: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249b34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x249b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b38: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x249B38u;
    SET_GPR_U32(ctx, 31, 0x249B40u);
    ctx->pc = 0x249B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B38u;
    // 0x249b3c: 0x2484d2b8  addiu       $a0, $a0, -0x2D48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x249B38u, 0x249B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B40u;
label_249b40:
    // 0x249b40: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249b44: 0x24a5d2d8  addiu       $a1, $a1, -0x2D28
    ctx->pc = 0x249b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955736));
    // 0x249b48: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x249B48u;
    {
        const bool branch_taken_0x249b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B48u;
        // 0x249b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b48) {
            ctx->pc = 0x249C48u;
            goto label_249c48;
        }
    }
    ctx->pc = 0x249B50u;
label_249b50:
    // 0x249b50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x249b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x249b54: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x249B54u;
    {
        const bool branch_taken_0x249b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x249b54) {
            ctx->pc = 0x249B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B54u;
            // 0x249b58: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B78u;
            goto label_249b78;
        }
    }
    ctx->pc = 0x249B5Cu;
    // 0x249b5c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249b60: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x249B60u;
    SET_GPR_U32(ctx, 31, 0x249B68u);
    ctx->pc = 0x249B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B60u;
    // 0x249b64: 0x2484d300  addiu       $a0, $a0, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x249B60u, 0x249B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B68u;
label_249b68:
    // 0x249b68: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249b6c: 0x24a5d338  addiu       $a1, $a1, -0x2CC8
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955832));
    // 0x249b70: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x249B70u;
    {
        const bool branch_taken_0x249b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B70u;
        // 0x249b74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b70) {
            ctx->pc = 0x249C48u;
            goto label_249c48;
        }
    }
    ctx->pc = 0x249B78u;
label_249b78:
    // 0x249b78: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249B78u;
    {
        const bool branch_taken_0x249b78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x249b78) {
            ctx->pc = 0x249BA0u;
            goto label_249ba0;
        }
    }
    ctx->pc = 0x249B80u;
    // 0x249b80: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249b84: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x249B84u;
    SET_GPR_U32(ctx, 31, 0x249B8Cu);
    ctx->pc = 0x249B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B84u;
    // 0x249b88: 0x2484d360  addiu       $a0, $a0, -0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x249B84u, 0x249B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B8Cu;
label_249b8c:
    // 0x249b8c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249b90: 0x24a5d338  addiu       $a1, $a1, -0x2CC8
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955832));
    // 0x249b94: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x249B94u;
    {
        const bool branch_taken_0x249b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B94u;
        // 0x249b98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b94) {
            ctx->pc = 0x249C48u;
            goto label_249c48;
        }
    }
    ctx->pc = 0x249B9Cu;
    // 0x249b9c: 0x0  nop
    ctx->pc = 0x249b9cu;
    // NOP
label_249ba0:
    // 0x249ba0: 0xc091a44  jal         func_246910
    ctx->pc = 0x249BA0u;
    SET_GPR_U32(ctx, 31, 0x249BA8u);
    ctx->pc = 0x249BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BA0u;
    // 0x249ba4: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249BA0u, 0x249BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BA8u;
label_249ba8:
    // 0x249ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bb0: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x249BB0u;
    SET_GPR_U32(ctx, 31, 0x249BB8u);
    ctx->pc = 0x249BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BB0u;
    // 0x249bb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x249BB0u, 0x249BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BB8u;
label_249bb8:
    // 0x249bb8: 0xc091a44  jal         func_246910
    ctx->pc = 0x249BB8u;
    SET_GPR_U32(ctx, 31, 0x249BC0u);
    ctx->pc = 0x249BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BB8u;
    // 0x249bbc: 0x24044601  addiu       $a0, $zero, 0x4601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249BB8u, 0x249BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BC0u;
label_249bc0:
    // 0x249bc0: 0xc091a44  jal         func_246910
    ctx->pc = 0x249BC0u;
    SET_GPR_U32(ctx, 31, 0x249BC8u);
    ctx->pc = 0x249BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BC0u;
    // 0x249bc4: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249BC0u, 0x249BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BC8u;
label_249bc8:
    // 0x249bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bd0: 0xc091abc  jal         func_246AF0
    ctx->pc = 0x249BD0u;
    SET_GPR_U32(ctx, 31, 0x249BD8u);
    ctx->pc = 0x249BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BD0u;
    // 0x249bd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AF0u, 0x249BD0u, 0x249BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BD8u;
label_249bd8:
    // 0x249bd8: 0x24044601  addiu       $a0, $zero, 0x4601
    ctx->pc = 0x249bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x249bdc: 0xc091a44  jal         func_246910
    ctx->pc = 0x249BDCu;
    SET_GPR_U32(ctx, 31, 0x249BE4u);
    ctx->pc = 0x249BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BDCu;
    // 0x249be0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249BDCu, 0x249BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BE4u;
label_249be4:
    // 0x249be4: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x249BE4u;
    {
        const bool branch_taken_0x249be4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x249BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BE4u;
        // 0x249be8: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249be4) {
            ctx->pc = 0x249C18u;
            goto label_249c18;
        }
    }
    ctx->pc = 0x249BECu;
    // 0x249bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bf0: 0xc0925d4  jal         func_249750
    ctx->pc = 0x249BF0u;
    SET_GPR_U32(ctx, 31, 0x249BF8u);
    ctx->pc = 0x249BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BF0u;
    // 0x249bf4: 0x24a5d398  addiu       $a1, $a1, -0x2C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x249BF0u, 0x249BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BF8u;
label_249bf8:
    // 0x249bf8: 0xc091a44  jal         func_246910
    ctx->pc = 0x249BF8u;
    SET_GPR_U32(ctx, 31, 0x249C00u);
    ctx->pc = 0x249BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BF8u;
    // 0x249bfc: 0x24044500  addiu       $a0, $zero, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249BF8u, 0x249C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C00u;
label_249c00:
    // 0x249c00: 0xc091b22  jal         func_246C88
    ctx->pc = 0x249C00u;
    SET_GPR_U32(ctx, 31, 0x249C08u);
    ctx->pc = 0x249C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C00u;
    // 0x249c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x249C00u, 0x249C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C08u;
label_249c08:
    // 0x249c08: 0xc091a44  jal         func_246910
    ctx->pc = 0x249C08u;
    SET_GPR_U32(ctx, 31, 0x249C10u);
    ctx->pc = 0x249C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C08u;
    // 0x249c0c: 0x24044501  addiu       $a0, $zero, 0x4501 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249C08u, 0x249C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C10u;
label_249c10:
    // 0x249c10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x249C10u;
    {
        const bool branch_taken_0x249c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C10u;
        // 0x249c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c10) {
            ctx->pc = 0x249C5Cu;
            goto label_249c5c;
        }
    }
    ctx->pc = 0x249C18u;
label_249c18:
    // 0x249c18: 0xc091a44  jal         func_246910
    ctx->pc = 0x249C18u;
    SET_GPR_U32(ctx, 31, 0x249C20u);
    ctx->pc = 0x249C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C18u;
    // 0x249c1c: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249C18u, 0x249C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C20u;
label_249c20:
    // 0x249c20: 0xc091b22  jal         func_246C88
    ctx->pc = 0x249C20u;
    SET_GPR_U32(ctx, 31, 0x249C28u);
    ctx->pc = 0x249C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C20u;
    // 0x249c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x249C20u, 0x249C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C28u;
label_249c28:
    // 0x249c28: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x249c2c: 0xc091a44  jal         func_246910
    ctx->pc = 0x249C2Cu;
    SET_GPR_U32(ctx, 31, 0x249C34u);
    ctx->pc = 0x249C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C2Cu;
    // 0x249c30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249C2Cu, 0x249C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C34u;
label_249c34:
    // 0x249c34: 0x6030009  bgezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x249C34u;
    {
        const bool branch_taken_0x249c34 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x249c34) {
            ctx->pc = 0x249C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C34u;
            // 0x249c38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249C5Cu;
            goto label_249c5c;
        }
    }
    ctx->pc = 0x249C3Cu;
    // 0x249c3c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c44: 0x24a5d3c8  addiu       $a1, $a1, -0x2C38
    ctx->pc = 0x249c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955976));
label_249c48:
    // 0x249c48: 0xc0925d4  jal         func_249750
    ctx->pc = 0x249C48u;
    SET_GPR_U32(ctx, 31, 0x249C50u);
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x249C48u, 0x249C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C50u;
label_249c50:
    // 0x249c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249C50u;
    {
        const bool branch_taken_0x249c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C50u;
        // 0x249c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c50) {
            ctx->pc = 0x249C5Cu;
            goto label_249c5c;
        }
    }
    ctx->pc = 0x249C58u;
label_249c58:
    // 0x249c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x249c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249c5c:
    // 0x249c5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249c60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x249c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249c68: 0x3e00008  jr          $ra
    ctx->pc = 0x249C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C68u;
        // 0x249c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249C70u;
}
