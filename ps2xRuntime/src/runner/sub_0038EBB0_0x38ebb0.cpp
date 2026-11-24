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

// Function: sub_0038EBB0
// Address: 0x38ebb0 - 0x38f054
void sub_0038EBB0_0x38ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EBB0_0x38ebb0");
#endif

    switch (ctx->pc) {
        case 0x38ec00u: goto label_38ec00;
        case 0x38ecf0u: goto label_38ecf0;
        case 0x38ecf8u: goto label_38ecf8;
        case 0x38ed00u: goto label_38ed00;
        case 0x38ed10u: goto label_38ed10;
        case 0x38eda0u: goto label_38eda0;
        case 0x38edb0u: goto label_38edb0;
        case 0x38edc0u: goto label_38edc0;
        case 0x38f018u: goto label_38f018;
        default: break;
    }

    ctx->pc = 0x38ebb0u;

    // 0x38ebb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38ebb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38ebb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38ebbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ebc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ebc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebc4: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x38ebc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x38ebc8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x38ebc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x38ebcc: 0x1020011c  beqz        $at, . + 4 + (0x11C << 2)
    ctx->pc = 0x38EBCCu;
    {
        const bool branch_taken_0x38ebcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBCCu;
        // 0x38ebd0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebcc) {
            ctx->pc = 0x38F040u;
            goto label_38f040;
        }
    }
    ctx->pc = 0x38EBD4u;
    // 0x38ebd4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x38ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x38ebd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38ebdc: 0x248421a0  addiu       $a0, $a0, 0x21A0
    ctx->pc = 0x38ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8608));
    // 0x38ebe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38ebe4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38ebe8: 0x600008  jr          $v1
    ctx->pc = 0x38EBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38EBF0u: goto label_38ebf0;
            case 0x38EBF8u: goto label_38ebf8;
            case 0x38EC08u: goto label_38ec08;
            case 0x38ECE8u: goto label_38ece8;
            case 0x38EF80u: goto label_38ef80;
            case 0x38F010u: goto label_38f010;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EBE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38EBF0u;
label_38ebf0:
    // 0x38ebf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ebf4: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x38ebf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_38ebf8:
    // 0x38ebf8: 0xc0e3adc  jal         func_38EB70
    ctx->pc = 0x38EBF8u;
    SET_GPR_U32(ctx, 31, 0x38EC00u);
    ctx->pc = 0x38EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBF8u;
    // 0x38ebfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB70u, 0x38EBF8u, 0x38EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC00u;
label_38ec00:
    // 0x38ec00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ec04: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x38ec04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_38ec08:
    // 0x38ec08: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x38ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x38ec0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38ec0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x38ec10: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38EC10u;
    {
        const bool branch_taken_0x38ec10 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x38ec10) {
            ctx->pc = 0x38EC78u;
            goto label_38ec78;
        }
    }
    ctx->pc = 0x38EC18u;
    // 0x38ec18: 0x92222b39  lbu         $v0, 0x2B39($s1)
    ctx->pc = 0x38ec18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11065)));
    // 0x38ec1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38EC1Cu;
    {
        const bool branch_taken_0x38ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ec1c) {
            ctx->pc = 0x38EC50u;
            goto label_38ec50;
        }
    }
    ctx->pc = 0x38EC24u;
    // 0x38ec24: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x38ec24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec28: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x38ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x38ec2c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x38ec2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec30: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ec34: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x38ec34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ec38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38ec3c: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x38ec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x38ec40: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38ec44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x38EC44u;
    {
        const bool branch_taken_0x38ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC44u;
        // 0x38ec48: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec44) {
            ctx->pc = 0x38ECD8u;
            goto label_38ecd8;
        }
    }
    ctx->pc = 0x38EC4Cu;
    // 0x38ec4c: 0x0  nop
    ctx->pc = 0x38ec4cu;
    // NOP
label_38ec50:
    // 0x38ec50: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x38ec50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec54: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x38ec54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec58: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x38ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x38ec5c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x38ec5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ec60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ec64: 0xa22207f5  sb          $v0, 0x7F5($s1)
    ctx->pc = 0x38ec64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38ec68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38ec6c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38ec70: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x38EC70u;
    {
        const bool branch_taken_0x38ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC70u;
        // 0x38ec74: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec70) {
            ctx->pc = 0x38ECD8u;
            goto label_38ecd8;
        }
    }
    ctx->pc = 0x38EC78u;
label_38ec78:
    // 0x38ec78: 0x92222b39  lbu         $v0, 0x2B39($s1)
    ctx->pc = 0x38ec78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11065)));
    // 0x38ec7c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38EC7Cu;
    {
        const bool branch_taken_0x38ec7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ec7c) {
            ctx->pc = 0x38ECB0u;
            goto label_38ecb0;
        }
    }
    ctx->pc = 0x38EC84u;
    // 0x38ec84: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x38ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec88: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x38ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x38ec8c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x38ec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ec90: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ec94: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x38ec94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ec98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38ec9c: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x38ec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x38eca0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38eca4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38ECA4u;
    {
        const bool branch_taken_0x38eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECA4u;
        // 0x38eca8: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eca4) {
            ctx->pc = 0x38ECD8u;
            goto label_38ecd8;
        }
    }
    ctx->pc = 0x38ECACu;
    // 0x38ecac: 0x0  nop
    ctx->pc = 0x38ecacu;
    // NOP
label_38ecb0:
    // 0x38ecb0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x38ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ecb4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x38ecb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ecb8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x38ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x38ecbc: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x38ecbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ecc0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ecc4: 0xa22207f5  sb          $v0, 0x7F5($s1)
    ctx->pc = 0x38ecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38ecc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38eccc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x38ecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x38ecd0: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x38ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x38ecd4: 0x0  nop
    ctx->pc = 0x38ecd4u;
    // NOP
label_38ecd8:
    // 0x38ecd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38ecdc: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x38ecdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x38ece0: 0xa6202b3a  sh          $zero, 0x2B3A($s1)
    ctx->pc = 0x38ece0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11066), (uint16_t)GPR_U32(ctx, 0));
    // 0x38ece4: 0x0  nop
    ctx->pc = 0x38ece4u;
    // NOP
label_38ece8:
    // 0x38ece8: 0xc0e37ac  jal         func_38DEB0
    ctx->pc = 0x38ECE8u;
    SET_GPR_U32(ctx, 31, 0x38ECF0u);
    ctx->pc = 0x38ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECE8u;
    // 0x38ecec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DEB0u, 0x38ECE8u, 0x38ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECF0u;
label_38ecf0:
    // 0x38ecf0: 0xc0e3784  jal         func_38DE10
    ctx->pc = 0x38ECF0u;
    SET_GPR_U32(ctx, 31, 0x38ECF8u);
    ctx->pc = 0x38ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECF0u;
    // 0x38ecf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE10u, 0x38ECF0u, 0x38ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECF8u;
label_38ecf8:
    // 0x38ecf8: 0xc0e379c  jal         func_38DE70
    ctx->pc = 0x38ECF8u;
    SET_GPR_U32(ctx, 31, 0x38ED00u);
    ctx->pc = 0x38ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECF8u;
    // 0x38ecfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE70u, 0x38ECF8u, 0x38ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED00u;
label_38ed00:
    // 0x38ed00: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x38ed00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x38ed04: 0x86252b30  lh          $a1, 0x2B30($s1)
    ctx->pc = 0x38ed04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11056)));
    // 0x38ed08: 0xc097498  jal         func_25D260
    ctx->pc = 0x38ED08u;
    SET_GPR_U32(ctx, 31, 0x38ED10u);
    ctx->pc = 0x38ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED08u;
    // 0x38ed0c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x38ED08u, 0x38ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED10u;
label_38ed10:
    // 0x38ed10: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x38ed10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ed14: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x38ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x38ed18: 0xc6222b20  lwc1        $f2, 0x2B20($s1)
    ctx->pc = 0x38ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ed1c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x38ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x38ed20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38ed20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38ed24: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x38ed24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x38ed28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38ed28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38ed2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38ed30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ed30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ed34: 0xe6220020  swc1        $f2, 0x20($s1)
    ctx->pc = 0x38ed34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x38ed38: 0xc6222b28  lwc1        $f2, 0x2B28($s1)
    ctx->pc = 0x38ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ed3c: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x38ed3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x38ed40: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ed44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38ed44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38ed48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38ed48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38ed4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38ed4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ed50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38ED50u;
    {
        const bool branch_taken_0x38ed50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED50u;
        // 0x38ed54: 0x86252b36  lh          $a1, 0x2B36($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11062)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed50) {
            ctx->pc = 0x38ED68u;
            goto label_38ed68;
        }
    }
    ctx->pc = 0x38ED58u;
    // 0x38ed58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ed58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ed5c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ed5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ed60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38ED60u;
    {
        const bool branch_taken_0x38ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED60u;
        // 0x38ed64: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed60) {
            ctx->pc = 0x38ED84u;
            goto label_38ed84;
        }
    }
    ctx->pc = 0x38ED68u;
label_38ed68:
    // 0x38ed68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38ed68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38ed6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38ed70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ed70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ed74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ed74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ed78: 0x0  nop
    ctx->pc = 0x38ed78u;
    // NOP
    // 0x38ed7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38ed7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38ed80: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x38ed80u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_38ed84:
    // 0x38ed84: 0x0  nop
    ctx->pc = 0x38ed84u;
    // NOP
    // 0x38ed88: 0x0  nop
    ctx->pc = 0x38ed88u;
    // NOP
    // 0x38ed8c: 0x1810  mfhi        $v1
    ctx->pc = 0x38ed8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x38ed90: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x38ED90u;
    {
        const bool branch_taken_0x38ed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ed90) {
            ctx->pc = 0x38EE40u;
            goto label_38ee40;
        }
    }
    ctx->pc = 0x38ED98u;
    // 0x38ed98: 0xc0e37fc  jal         func_38DFF0
    ctx->pc = 0x38ED98u;
    SET_GPR_U32(ctx, 31, 0x38EDA0u);
    ctx->pc = 0x38ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED98u;
    // 0x38ed9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DFF0u, 0x38ED98u, 0x38EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDA0u;
label_38eda0:
    // 0x38eda0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x38EDA0u;
    {
        const bool branch_taken_0x38eda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDA0u;
        // 0x38eda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eda0) {
            ctx->pc = 0x38EE40u;
            goto label_38ee40;
        }
    }
    ctx->pc = 0x38EDA8u;
    // 0x38eda8: 0xc0e3744  jal         func_38DD10
    ctx->pc = 0x38EDA8u;
    SET_GPR_U32(ctx, 31, 0x38EDB0u);
    ctx->pc = 0x38DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DD10u, 0x38EDA8u, 0x38EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDB0u;
label_38edb0:
    // 0x38edb0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x38EDB0u;
    {
        const bool branch_taken_0x38edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDB0u;
        // 0x38edb4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38edb0) {
            ctx->pc = 0x38EE40u;
            goto label_38ee40;
        }
    }
    ctx->pc = 0x38EDB8u;
    // 0x38edb8: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x38EDB8u;
    SET_GPR_U32(ctx, 31, 0x38EDC0u);
    ctx->pc = 0x38EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EDB8u;
    // 0x38edbc: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x38EDB8u, 0x38EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDC0u;
label_38edc0:
    // 0x38edc0: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x38edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
    // 0x38edc4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x38edc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x38edc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38edc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38edcc: 0x0  nop
    ctx->pc = 0x38edccu;
    // NOP
    // 0x38edd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38edd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38edd4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x38EDD4u;
    {
        const bool branch_taken_0x38edd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38edd4) {
            ctx->pc = 0x38EE40u;
            goto label_38ee40;
        }
    }
    ctx->pc = 0x38EDDCu;
    // 0x38eddc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38eddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ede0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x38ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x38ede4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x38ede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38ede8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x38ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x38edec: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38edecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38edf0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x38edf4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38edf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38edf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38edf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38edfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38edfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ee00: 0x0  nop
    ctx->pc = 0x38ee00u;
    // NOP
    // 0x38ee04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38ee04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38ee08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38ee08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ee0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38EE0Cu;
    {
        const bool branch_taken_0x38ee0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38ee0c) {
            ctx->pc = 0x38EE24u;
            goto label_38ee24;
        }
    }
    ctx->pc = 0x38EE14u;
    // 0x38ee14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ee14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ee18: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ee18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ee1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38EE1Cu;
    {
        const bool branch_taken_0x38ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE1Cu;
        // 0x38ee20: 0xa6242b3a  sh          $a0, 0x2B3A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11066), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee1c) {
            ctx->pc = 0x38EE40u;
            goto label_38ee40;
        }
    }
    ctx->pc = 0x38EE24u;
label_38ee24:
    // 0x38ee24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38ee24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38ee28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38ee2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ee2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38ee30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x38ee30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x38ee34: 0x0  nop
    ctx->pc = 0x38ee34u;
    // NOP
    // 0x38ee38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38ee38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38ee3c: 0xa6242b3a  sh          $a0, 0x2B3A($s1)
    ctx->pc = 0x38ee3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11066), (uint16_t)GPR_U32(ctx, 4));
label_38ee40:
    // 0x38ee40: 0x86232b3a  lh          $v1, 0x2B3A($s1)
    ctx->pc = 0x38ee40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11066)));
    // 0x38ee44: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x38EE44u;
    {
        const bool branch_taken_0x38ee44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE44u;
        // 0x38ee48: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee44) {
            ctx->pc = 0x38EEC0u;
            goto label_38eec0;
        }
    }
    ctx->pc = 0x38EE4Cu;
    // 0x38ee4c: 0xa6242b3a  sh          $a0, 0x2B3A($s1)
    ctx->pc = 0x38ee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11066), (uint16_t)GPR_U32(ctx, 4));
    // 0x38ee50: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x38ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x38ee54: 0x86252b3a  lh          $a1, 0x2B3A($s1)
    ctx->pc = 0x38ee54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11066)));
    // 0x38ee58: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x38ee58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x38ee5c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x38ee5cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ee60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x38ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x38ee64: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x38ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x38ee68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38ee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38ee6c: 0x532c0  sll         $a2, $a1, 11
    ctx->pc = 0x38ee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x38ee70: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x38ee70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x38ee74: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x38ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x38ee78: 0x0  nop
    ctx->pc = 0x38ee78u;
    // NOP
    // 0x38ee7c: 0x2010  mfhi        $a0
    ctx->pc = 0x38ee7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x38ee80: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x38ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x38ee84: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x38ee84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x38ee88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x38ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x38ee8c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x38ee8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x38ee90: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x38ee90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x38ee94: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x38ee94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x38ee98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38ee9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38eea0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x38eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38eea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38eea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x38eea8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x38eea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x38eeac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38eeacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38eeb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x38eeb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38eeb4: 0x0  nop
    ctx->pc = 0x38eeb4u;
    // NOP
    // 0x38eeb8: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x38eeb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x38eebc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x38eebcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_38eec0:
    // 0x38eec0: 0x92232b39  lbu         $v1, 0x2B39($s1)
    ctx->pc = 0x38eec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11065)));
    // 0x38eec4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38EEC4u;
    {
        const bool branch_taken_0x38eec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eec4) {
            ctx->pc = 0x38EEE0u;
            goto label_38eee0;
        }
    }
    ctx->pc = 0x38EECCu;
    // 0x38eecc: 0x86232b32  lh          $v1, 0x2B32($s1)
    ctx->pc = 0x38eeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
    // 0x38eed0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x38eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38eed4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38EED4u;
    {
        const bool branch_taken_0x38eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EED4u;
        // 0x38eed8: 0xa6232b32  sh          $v1, 0x2B32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eed4) {
            ctx->pc = 0x38EEF0u;
            goto label_38eef0;
        }
    }
    ctx->pc = 0x38EEDCu;
    // 0x38eedc: 0x0  nop
    ctx->pc = 0x38eedcu;
    // NOP
label_38eee0:
    // 0x38eee0: 0x86232b32  lh          $v1, 0x2B32($s1)
    ctx->pc = 0x38eee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
    // 0x38eee4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x38eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38eee8: 0xa6232b32  sh          $v1, 0x2B32($s1)
    ctx->pc = 0x38eee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
    // 0x38eeec: 0x0  nop
    ctx->pc = 0x38eeecu;
    // NOP
label_38eef0:
    // 0x38eef0: 0x86232b32  lh          $v1, 0x2B32($s1)
    ctx->pc = 0x38eef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11058)));
    // 0x38eef4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x38eef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x38eef8: 0xa6232b32  sh          $v1, 0x2B32($s1)
    ctx->pc = 0x38eef8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11058), (uint16_t)GPR_U32(ctx, 3));
    // 0x38eefc: 0x86232b36  lh          $v1, 0x2B36($s1)
    ctx->pc = 0x38eefcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11062)));
    // 0x38ef00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38ef04: 0xa6232b36  sh          $v1, 0x2B36($s1)
    ctx->pc = 0x38ef04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11062), (uint16_t)GPR_U32(ctx, 3));
    // 0x38ef08: 0x92232b39  lbu         $v1, 0x2B39($s1)
    ctx->pc = 0x38ef08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11065)));
    // 0x38ef0c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x38EF0Cu;
    {
        const bool branch_taken_0x38ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ef0c) {
            ctx->pc = 0x38EF60u;
            goto label_38ef60;
        }
    }
    ctx->pc = 0x38EF14u;
    // 0x38ef14: 0x92232b38  lbu         $v1, 0x2B38($s1)
    ctx->pc = 0x38ef14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11064)));
    // 0x38ef18: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38EF18u;
    {
        const bool branch_taken_0x38ef18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ef18) {
            ctx->pc = 0x38EF60u;
            goto label_38ef60;
        }
    }
    ctx->pc = 0x38EF20u;
    // 0x38ef20: 0x86242b34  lh          $a0, 0x2B34($s1)
    ctx->pc = 0x38ef20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11060)));
    // 0x38ef24: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x38ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x38ef28: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x38ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x38ef2c: 0x86252b36  lh          $a1, 0x2B36($s1)
    ctx->pc = 0x38ef2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11062)));
    // 0x38ef30: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x38ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x38ef34: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x38ef34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x38ef38: 0x0  nop
    ctx->pc = 0x38ef38u;
    // NOP
    // 0x38ef3c: 0x0  nop
    ctx->pc = 0x38ef3cu;
    // NOP
    // 0x38ef40: 0x1810  mfhi        $v1
    ctx->pc = 0x38ef40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x38ef44: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x38ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x38ef48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38ef4c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x38ef4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38ef50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38EF50u;
    {
        const bool branch_taken_0x38ef50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF50u;
        // 0x38ef54: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef50) {
            ctx->pc = 0x38EF60u;
            goto label_38ef60;
        }
    }
    ctx->pc = 0x38EF58u;
    // 0x38ef58: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x38ef58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x38ef5c: 0x0  nop
    ctx->pc = 0x38ef5cu;
    // NOP
label_38ef60:
    // 0x38ef60: 0x86242b36  lh          $a0, 0x2B36($s1)
    ctx->pc = 0x38ef60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11062)));
    // 0x38ef64: 0x86232b34  lh          $v1, 0x2B34($s1)
    ctx->pc = 0x38ef64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11060)));
    // 0x38ef68: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x38ef68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38ef6c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x38EF6Cu;
    {
        const bool branch_taken_0x38ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF6Cu;
        // 0x38ef70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef6c) {
            ctx->pc = 0x38F040u;
            goto label_38f040;
        }
    }
    ctx->pc = 0x38EF74u;
    // 0x38ef74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x38EF74u;
    {
        const bool branch_taken_0x38ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF74u;
        // 0x38ef78: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ef74) {
            ctx->pc = 0x38F040u;
            goto label_38f040;
        }
    }
    ctx->pc = 0x38EF7Cu;
    // 0x38ef7c: 0x0  nop
    ctx->pc = 0x38ef7cu;
    // NOP
label_38ef80:
    // 0x38ef80: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x38ef80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ef84: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x38ef84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ef88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38ef8c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x38ef8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x38ef90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x38ef94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ef98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38ef9c: 0xa22207f5  sb          $v0, 0x7F5($s1)
    ctx->pc = 0x38ef9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x38efa0: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x38efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x38efa4: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x38efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x38efa8: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x38efa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x38efac: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x38efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x38efb0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38efb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38efb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x38efb8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x38efbc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x38efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x38efc0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38efc4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38efc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x38efc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38efc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38efcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38efccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38efd0: 0x0  nop
    ctx->pc = 0x38efd0u;
    // NOP
    // 0x38efd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38efd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38efd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38efd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38efdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38EFDCu;
    {
        const bool branch_taken_0x38efdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38efdc) {
            ctx->pc = 0x38EFF4u;
            goto label_38eff4;
        }
    }
    ctx->pc = 0x38EFE4u;
    // 0x38efe4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38efe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38efe8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x38efe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38efec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38EFECu;
    {
        const bool branch_taken_0x38efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFECu;
        // 0x38eff0: 0xa6222b3e  sh          $v0, 0x2B3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11070), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38efec) {
            ctx->pc = 0x38F00Cu;
            goto label_38f00c;
        }
    }
    ctx->pc = 0x38EFF4u;
label_38eff4:
    // 0x38eff4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38eff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38eff8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38eff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38effc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x38effcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38f000: 0x0  nop
    ctx->pc = 0x38f000u;
    // NOP
    // 0x38f004: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x38f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x38f008: 0xa6222b3e  sh          $v0, 0x2B3E($s1)
    ctx->pc = 0x38f008u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11070), (uint16_t)GPR_U32(ctx, 2));
label_38f00c:
    // 0x38f00c: 0x0  nop
    ctx->pc = 0x38f00cu;
    // NOP
label_38f010:
    // 0x38f010: 0xc0e37ac  jal         func_38DEB0
    ctx->pc = 0x38F010u;
    SET_GPR_U32(ctx, 31, 0x38F018u);
    ctx->pc = 0x38F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F010u;
    // 0x38f014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DEB0u, 0x38F010u, 0x38F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F018u;
label_38f018:
    // 0x38f018: 0x86232b3e  lh          $v1, 0x2B3E($s1)
    ctx->pc = 0x38f018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11070)));
    // 0x38f01c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38f020: 0xa6232b3e  sh          $v1, 0x2B3E($s1)
    ctx->pc = 0x38f020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11070), (uint16_t)GPR_U32(ctx, 3));
    // 0x38f024: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x38f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x38f028: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x38f028u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x38f02c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F02Cu;
    {
        const bool branch_taken_0x38f02c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x38F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F02Cu;
        // 0x38f030: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f02c) {
            ctx->pc = 0x38F040u;
            goto label_38f040;
        }
    }
    ctx->pc = 0x38F034u;
    // 0x38f034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f038: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x38f038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x38f03c: 0xa2232b39  sb          $v1, 0x2B39($s1)
    ctx->pc = 0x38f03cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11065), (uint8_t)GPR_U32(ctx, 3));
label_38f040:
    // 0x38f040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38f044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f04c: 0x3e00008  jr          $ra
    ctx->pc = 0x38F04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F04Cu;
        // 0x38f050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F054u;
}
