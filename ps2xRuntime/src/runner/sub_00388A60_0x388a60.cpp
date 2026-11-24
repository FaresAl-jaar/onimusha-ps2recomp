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

// Function: sub_00388A60
// Address: 0x388a60 - 0x388b8c
void sub_00388A60_0x388a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388A60_0x388a60");
#endif

    switch (ctx->pc) {
        case 0x388a9cu: goto label_388a9c;
        case 0x388b4cu: goto label_388b4c;
        default: break;
    }

    ctx->pc = 0x388a60u;

    // 0x388a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x388a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388a6c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x388a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x388a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x388a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x388a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a80: 0x878283a0  lh          $v0, -0x7C60($gp)
    ctx->pc = 0x388a80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x388a84: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x388a84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x388a88: 0xac8007a4  sw          $zero, 0x7A4($a0)
    ctx->pc = 0x388a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1956), GPR_U32(ctx, 0));
    // 0x388a8c: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x388a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x388a90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x388a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x388a94: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x388A94u;
    SET_GPR_U32(ctx, 31, 0x388A9Cu);
    ctx->pc = 0x388A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388A94u;
    // 0x388a98: 0xac8206cc  sw          $v0, 0x6CC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x388A94u, 0x388A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A9Cu;
label_388a9c:
    // 0x388a9c: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x388a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x388aa0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x388aa4: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x388AA4u;
    {
        const bool branch_taken_0x388aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x388AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA4u;
        // 0x388aa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388aa4) {
            ctx->pc = 0x388B78u;
            goto label_388b78;
        }
    }
    ctx->pc = 0x388AACu;
    // 0x388aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x388aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x388ab0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x388AB0u;
    {
        const bool branch_taken_0x388ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x388AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AB0u;
        // 0x388ab4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ab0) {
            ctx->pc = 0x388B68u;
            goto label_388b68;
        }
    }
    ctx->pc = 0x388AB8u;
    // 0x388ab8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x388AB8u;
    {
        const bool branch_taken_0x388ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388ab8) {
            ctx->pc = 0x388B50u;
            goto label_388b50;
        }
    }
    ctx->pc = 0x388AC0u;
    // 0x388ac0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388AC0u;
    {
        const bool branch_taken_0x388ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388ac0) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388AC8u;
    // 0x388ac8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x388AC8u;
    {
        const bool branch_taken_0x388ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388ac8) {
            ctx->pc = 0x388B78u;
            goto label_388b78;
        }
    }
    ctx->pc = 0x388AD0u;
label_388ad0:
    // 0x388ad0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x388ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x388ad4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x388ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x388ad8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x388ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x388adc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x388ADCu;
    {
        const bool branch_taken_0x388adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x388adc) {
            ctx->pc = 0x388B10u;
            goto label_388b10;
        }
    }
    ctx->pc = 0x388AE4u;
    // 0x388ae4: 0x92230839  lbu         $v1, 0x839($s1)
    ctx->pc = 0x388ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x388ae8: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x388ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x388aec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x388aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x388af0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x388af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x388af4: 0x9063003c  lbu         $v1, 0x3C($v1)
    ctx->pc = 0x388af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x388af8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x388af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x388afc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x388afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388b00: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x388b00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x388b04: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x388b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x388b08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x388B08u;
    {
        const bool branch_taken_0x388b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B08u;
        // 0x388b0c: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b08) {
            ctx->pc = 0x388B30u;
            goto label_388b30;
        }
    }
    ctx->pc = 0x388B10u;
label_388b10:
    // 0x388b10: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x388b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x388b14: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x388b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388b18: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x388b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x388b1c: 0x93a3003d  lbu         $v1, 0x3D($sp)
    ctx->pc = 0x388b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x388b20: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x388b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x388b24: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x388b24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x388b28: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x388b28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x388b2c: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x388b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_388b30:
    // 0x388b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388b34: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x388b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x388b38: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x388b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x388b3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x388b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x388b40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x388b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x388b44: 0xc0414dc  jal         func_105370
    ctx->pc = 0x388B44u;
    SET_GPR_U32(ctx, 31, 0x388B4Cu);
    ctx->pc = 0x388B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388B44u;
    // 0x388b48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x388B44u, 0x388B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388B4Cu;
label_388b4c:
    // 0x388b4c: 0x0  nop
    ctx->pc = 0x388b4cu;
    // NOP
label_388b50:
    // 0x388b50: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x388b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x388b54: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x388b54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x388b58: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x388b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x388b5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x388B5Cu;
    {
        const bool branch_taken_0x388b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B5Cu;
        // 0x388b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b5c) {
            ctx->pc = 0x388B78u;
            goto label_388b78;
        }
    }
    ctx->pc = 0x388B64u;
    // 0x388b64: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x388b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_388b68:
    // 0x388b68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388B68u;
    {
        const bool branch_taken_0x388b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x388B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B68u;
        // 0x388b6c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b68) {
            ctx->pc = 0x388B78u;
            goto label_388b78;
        }
    }
    ctx->pc = 0x388B70u;
    // 0x388b70: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x388b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x388b74: 0x0  nop
    ctx->pc = 0x388b74u;
    // NOP
label_388b78:
    // 0x388b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388b84: 0x3e00008  jr          $ra
    ctx->pc = 0x388B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B84u;
        // 0x388b88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388B8Cu;
}
