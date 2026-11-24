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

// Function: sub_00244AA8
// Address: 0x244aa8 - 0x244bb8
void sub_00244AA8_0x244aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244AA8_0x244aa8");
#endif

    switch (ctx->pc) {
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        default: break;
    }

    ctx->pc = 0x244aa8u;

label_244aa8:
    // 0x244aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x244aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_244aac:
    // 0x244aac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x244aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_244ab0:
    // 0x244ab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244ab4:
    // 0x244ab4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x244ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_244ab8:
    // 0x244ab8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x244ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244abc:
    // 0x244abc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x244abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_244ac0:
    // 0x244ac0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x244ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_244ac4:
    // 0x244ac4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x244ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_244ac8:
    // 0x244ac8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x244ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_244acc:
    // 0x244acc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x244accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_244ad0:
    // 0x244ad0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x244ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_244ad4:
    // 0x244ad4: 0xc049f18  jal         func_127C60
label_244ad8:
    if (ctx->pc == 0x244AD8u) {
        ctx->pc = 0x244AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AD4u;
        // 0x244ad8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244ADCu;
        goto label_244adc;
    }
    ctx->pc = 0x244AD4u;
    SET_GPR_U32(ctx, 31, 0x244ADCu);
    ctx->pc = 0x244AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AD4u;
    // 0x244ad8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x244AD4u, 0x244ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ADCu;
label_244adc:
    // 0x244adc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x244adcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244ae0:
    // 0x244ae0: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_244ae4:
    // 0x244ae4: 0x24535f44  addiu       $s3, $v0, 0x5F44
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
label_244ae8:
    // 0x244ae8: 0x2676fffc  addiu       $s6, $s3, -0x4
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_244aec:
    // 0x244aec: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_244af0:
    // 0x244af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x244af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_244af4:
    // 0x244af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244af8:
    // 0x244af8: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x244af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_244afc:
    // 0x244afc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x244afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244b00:
    // 0x244b00: 0xc049fd2  jal         func_127F48
label_244b04:
    if (ctx->pc == 0x244B04u) {
        ctx->pc = 0x244B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B00u;
        // 0x244b04: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B08u;
        goto label_244b08;
    }
    ctx->pc = 0x244B00u;
    SET_GPR_U32(ctx, 31, 0x244B08u);
    ctx->pc = 0x244B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B00u;
    // 0x244b04: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x244B00u, 0x244B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B08u;
label_244b08:
    // 0x244b08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_244b0c:
    if (ctx->pc == 0x244B0Cu) {
        ctx->pc = 0x244B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B08u;
        // 0x244b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B10u;
        goto label_244b10;
    }
    ctx->pc = 0x244B08u;
    {
        const bool branch_taken_0x244b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B08u;
        // 0x244b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b08) {
            ctx->pc = 0x244B80u;
            goto label_244b80;
        }
    }
    ctx->pc = 0x244B10u;
label_244b10:
    // 0x244b10: 0xc091532  jal         func_2454C8
label_244b14:
    if (ctx->pc == 0x244B14u) {
        ctx->pc = 0x244B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B10u;
        // 0x244b14: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B18u;
        goto label_244b18;
    }
    ctx->pc = 0x244B10u;
    SET_GPR_U32(ctx, 31, 0x244B18u);
    ctx->pc = 0x244B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B10u;
    // 0x244b14: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454C8u, 0x244B10u, 0x244B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B18u;
label_244b18:
    // 0x244b18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_244b1c:
    if (ctx->pc == 0x244B1Cu) {
        ctx->pc = 0x244B20u;
        goto label_244b20;
    }
    ctx->pc = 0x244B18u;
    {
        const bool branch_taken_0x244b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b18) {
            ctx->pc = 0x244B58u;
            goto label_244b58;
        }
    }
    ctx->pc = 0x244B20u;
label_244b20:
    // 0x244b20: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_244b24:
    if (ctx->pc == 0x244B24u) {
        ctx->pc = 0x244B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B20u;
        // 0x244b24: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B28u;
        goto label_244b28;
    }
    ctx->pc = 0x244B20u;
    {
        const bool branch_taken_0x244b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B20u;
        // 0x244b24: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b20) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B28u;
label_244b28:
    // 0x244b28: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_244b2c:
    // 0x244b2c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_244b30:
    if (ctx->pc == 0x244B30u) {
        ctx->pc = 0x244B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B2Cu;
        // 0x244b30: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B34u;
        goto label_244b34;
    }
    ctx->pc = 0x244B2Cu;
    {
        const bool branch_taken_0x244b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B2Cu;
        // 0x244b30: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b2c) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B34u;
label_244b34:
    // 0x244b34: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x244b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_244b38:
    // 0x244b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244b3c:
    // 0x244b3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x244b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_244b40:
    // 0x244b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244b44:
    // 0x244b44: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x244b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_244b48:
    // 0x244b48: 0x40f809  jalr        $v0
label_244b4c:
    if (ctx->pc == 0x244B4Cu) {
        ctx->pc = 0x244B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B48u;
        // 0x244b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B50u;
        goto label_244b50;
    }
    ctx->pc = 0x244B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244B50u);
        ctx->pc = 0x244B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B48u;
        // 0x244b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244B48u, 0x244B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244B50u;
label_244b50:
    // 0x244b50: 0x1000000e  b           . + 4 + (0xE << 2)
label_244b54:
    if (ctx->pc == 0x244B54u) {
        ctx->pc = 0x244B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B50u;
        // 0x244b54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B58u;
        goto label_244b58;
    }
    ctx->pc = 0x244B50u;
    {
        const bool branch_taken_0x244b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B50u;
        // 0x244b54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b50) {
            ctx->pc = 0x244B8Cu;
            goto label_244b8c;
        }
    }
    ctx->pc = 0x244B58u;
label_244b58:
    // 0x244b58: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_244b5c:
    if (ctx->pc == 0x244B5Cu) {
        ctx->pc = 0x244B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B58u;
        // 0x244b5c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B60u;
        goto label_244b60;
    }
    ctx->pc = 0x244B58u;
    {
        const bool branch_taken_0x244b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B58u;
        // 0x244b5c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b58) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B60u;
label_244b60:
    // 0x244b60: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_244b64:
    // 0x244b64: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_244b68:
    if (ctx->pc == 0x244B68u) {
        ctx->pc = 0x244B6Cu;
        goto label_244b6c;
    }
    ctx->pc = 0x244B64u;
    {
        const bool branch_taken_0x244b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b64) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B6Cu;
label_244b6c:
    // 0x244b6c: 0x200f809  jalr        $s0
label_244b70:
    if (ctx->pc == 0x244B70u) {
        ctx->pc = 0x244B74u;
        goto label_244b74;
    }
    ctx->pc = 0x244B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x244B74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244B6Cu, 0x244B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244B74u;
label_244b74:
    // 0x244b74: 0x10000005  b           . + 4 + (0x5 << 2)
label_244b78:
    if (ctx->pc == 0x244B78u) {
        ctx->pc = 0x244B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B74u;
        // 0x244b78: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B7Cu;
        goto label_244b7c;
    }
    ctx->pc = 0x244B74u;
    {
        const bool branch_taken_0x244b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B74u;
        // 0x244b78: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b74) {
            ctx->pc = 0x244B8Cu;
            goto label_244b8c;
        }
    }
    ctx->pc = 0x244B7Cu;
label_244b7c:
    // 0x244b7c: 0x0  nop
    ctx->pc = 0x244b7cu;
    // NOP
label_244b80:
    // 0x244b80: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x244b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_244b84:
    // 0x244b84: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_244b88:
    if (ctx->pc == 0x244B88u) {
        ctx->pc = 0x244B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B84u;
        // 0x244b88: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B8Cu;
        goto label_244b8c;
    }
    ctx->pc = 0x244B84u;
    {
        const bool branch_taken_0x244b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B84u;
        // 0x244b88: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b84) {
            ctx->pc = 0x244AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244af0;
        }
    }
    ctx->pc = 0x244B8Cu;
label_244b8c:
    // 0x244b8c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x244b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244b90:
    // 0x244b90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x244b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_244b94:
    // 0x244b94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x244b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_244b98:
    // 0x244b98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x244b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_244b9c:
    // 0x244b9c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x244b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_244ba0:
    // 0x244ba0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_244ba4:
    // 0x244ba4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x244ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_244ba8:
    // 0x244ba8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x244ba8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_244bac:
    // 0x244bac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x244bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_244bb0:
    // 0x244bb0: 0x3e00008  jr          $ra
label_244bb4:
    if (ctx->pc == 0x244BB4u) {
        ctx->pc = 0x244BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BB0u;
        // 0x244bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BB8u;
        goto label_fallthrough_0x244bb0;
    }
    ctx->pc = 0x244BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BB0u;
        // 0x244bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244bb0:
    ctx->pc = 0x244BB8u;
}
