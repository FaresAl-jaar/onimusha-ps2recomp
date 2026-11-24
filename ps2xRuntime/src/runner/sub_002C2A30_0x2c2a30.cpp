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

// Function: sub_002C2A30
// Address: 0x2c2a30 - 0x2c2b54
void sub_002C2A30_0x2c2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2A30_0x2c2a30");
#endif

    switch (ctx->pc) {
        case 0x2c2b20u: goto label_2c2b20;
        default: break;
    }

    ctx->pc = 0x2c2a30u;

    // 0x2c2a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2a34: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c2a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2a3c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c2a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c2a40: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2A40u;
    {
        const bool branch_taken_0x2c2a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A40u;
        // 0x2c2a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a40) {
            ctx->pc = 0x2C2AB8u;
            goto label_2c2ab8;
        }
    }
    ctx->pc = 0x2C2A48u;
    // 0x2c2a48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c2a4c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2A4Cu;
    {
        const bool branch_taken_0x2c2a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A4Cu;
        // 0x2c2a50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a4c) {
            ctx->pc = 0x2C2AA8u;
            goto label_2c2aa8;
        }
    }
    ctx->pc = 0x2C2A54u;
    // 0x2c2a54: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C2A54u;
    {
        const bool branch_taken_0x2c2a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2a54) {
            ctx->pc = 0x2C2A98u;
            goto label_2c2a98;
        }
    }
    ctx->pc = 0x2C2A5Cu;
    // 0x2c2a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2a60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2A60u;
    {
        const bool branch_taken_0x2c2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c2a60) {
            ctx->pc = 0x2C2A88u;
            goto label_2c2a88;
        }
    }
    ctx->pc = 0x2C2A68u;
    // 0x2c2a68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2A68u;
    {
        const bool branch_taken_0x2c2a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a68) {
            ctx->pc = 0x2C2A78u;
            goto label_2c2a78;
        }
    }
    ctx->pc = 0x2C2A70u;
    // 0x2c2a70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C2A70u;
    {
        const bool branch_taken_0x2c2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a70) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2A78u;
label_2c2a78:
    // 0x2c2a78: 0x908200e6  lbu         $v0, 0xE6($a0)
    ctx->pc = 0x2c2a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 230)));
    // 0x2c2a7c: 0x403826  xor         $a3, $v0, $zero
    ctx->pc = 0x2c2a7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c2a80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2A80u;
    {
        const bool branch_taken_0x2c2a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A80u;
        // 0x2c2a84: 0x2ce70001  sltiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a80) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2A88u;
label_2c2a88:
    // 0x2c2a88: 0x908200e6  lbu         $v0, 0xE6($a0)
    ctx->pc = 0x2c2a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 230)));
    // 0x2c2a8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2a90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C2A90u;
    {
        const bool branch_taken_0x2c2a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A90u;
        // 0x2c2a94: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a90) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2A98u;
label_2c2a98:
    // 0x2c2a98: 0x908200e6  lbu         $v0, 0xE6($a0)
    ctx->pc = 0x2c2a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 230)));
    // 0x2c2a9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c2a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c2aa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2AA0u;
    {
        const bool branch_taken_0x2c2aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AA0u;
        // 0x2c2aa4: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2aa0) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2AA8u;
label_2c2aa8:
    // 0x2c2aa8: 0x908200e6  lbu         $v0, 0xE6($a0)
    ctx->pc = 0x2c2aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 230)));
    // 0x2c2aac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c2aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c2ab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2AB0u;
    {
        const bool branch_taken_0x2c2ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AB0u;
        // 0x2c2ab4: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ab0) {
            ctx->pc = 0x2C2AC8u;
            goto label_2c2ac8;
        }
    }
    ctx->pc = 0x2C2AB8u;
label_2c2ab8:
    // 0x2c2ab8: 0x908200e6  lbu         $v0, 0xE6($a0)
    ctx->pc = 0x2c2ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 230)));
    // 0x2c2abc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c2abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c2ac0: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2c2ac0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c2ac4: 0x0  nop
    ctx->pc = 0x2c2ac4u;
    // NOP
label_2c2ac8:
    // 0x2c2ac8: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2AC8u;
    {
        const bool branch_taken_0x2c2ac8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ac8) {
            ctx->pc = 0x2C2B40u;
            goto label_2c2b40;
        }
    }
    ctx->pc = 0x2C2AD0u;
    // 0x2c2ad0: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2ad4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2AD4u;
    {
        const bool branch_taken_0x2c2ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AD4u;
        // 0x2c2ad8: 0x90c60002  lbu         $a2, 0x2($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ad4) {
            ctx->pc = 0x2C2B28u;
            goto label_2c2b28;
        }
    }
    ctx->pc = 0x2C2ADCu;
    // 0x2c2adc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2ADCu;
    {
        const bool branch_taken_0x2c2adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2ADCu;
        // 0x2c2ae0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2adc) {
            ctx->pc = 0x2C2B18u;
            goto label_2c2b18;
        }
    }
    ctx->pc = 0x2C2AE4u;
    // 0x2c2ae4: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c2ae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2ae8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c2ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c2aec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2af4: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c2af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2af8: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c2af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2afc: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c2afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2b00: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c2b00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2b04: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c2b04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2b08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2b10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2B10u;
    {
        const bool branch_taken_0x2c2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B10u;
        // 0x2c2b14: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b10) {
            ctx->pc = 0x2C2B38u;
            goto label_2c2b38;
        }
    }
    ctx->pc = 0x2C2B18u;
label_2c2b18:
    // 0x2c2b18: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2B18u;
    SET_GPR_U32(ctx, 31, 0x2C2B20u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2B18u, 0x2C2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B20u;
label_2c2b20:
    // 0x2c2b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2B20u;
    {
        const bool branch_taken_0x2c2b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b20) {
            ctx->pc = 0x2C2B30u;
            goto label_2c2b30;
        }
    }
    ctx->pc = 0x2C2B28u;
label_2c2b28:
    // 0x2c2b28: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c2b28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2b2c: 0x0  nop
    ctx->pc = 0x2c2b2cu;
    // NOP
label_2c2b30:
    // 0x2c2b30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b34: 0x0  nop
    ctx->pc = 0x2c2b34u;
    // NOP
label_2c2b38:
    // 0x2c2b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2B38u;
    {
        const bool branch_taken_0x2c2b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b38) {
            ctx->pc = 0x2C2B48u;
            goto label_2c2b48;
        }
    }
    ctx->pc = 0x2C2B40u;
label_2c2b40:
    // 0x2c2b40: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c2b44: 0x0  nop
    ctx->pc = 0x2c2b44u;
    // NOP
label_2c2b48:
    // 0x2c2b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B4Cu;
        // 0x2c2b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2B54u;
}
