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

// Function: sub_002CB9A0
// Address: 0x2cb9a0 - 0x2cbaf0
void sub_002CB9A0_0x2cb9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB9A0_0x2cb9a0");
#endif

    switch (ctx->pc) {
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbad4u: goto label_2cbad4;
        default: break;
    }

    ctx->pc = 0x2cb9a0u;

    // 0x2cb9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb9a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cb9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb9ac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cb9b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb9b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2cb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cb9b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB9B8u;
    {
        const bool branch_taken_0x2cb9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB9B8u;
        // 0x2cb9bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb9b8) {
            ctx->pc = 0x2CB9DCu;
            goto label_2cb9dc;
        }
    }
    ctx->pc = 0x2CB9C0u;
label_2cb9c0:
    // 0x2cb9c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2cb9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb9c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cb9c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cb9cc: 0x0  nop
    ctx->pc = 0x2cb9ccu;
    // NOP
    // 0x2cb9d0: 0x0  nop
    ctx->pc = 0x2cb9d0u;
    // NOP
    // 0x2cb9d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CB9D4u;
    {
        const bool branch_taken_0x2cb9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9d4) {
            ctx->pc = 0x2CB9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb9c0;
        }
    }
    ctx->pc = 0x2CB9DCu;
label_2cb9dc:
    // 0x2cb9dc: 0x8f878060  lw          $a3, -0x7FA0($gp)
    ctx->pc = 0x2cb9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x2cb9e0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2cb9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cb9e4: 0x8f858064  lw          $a1, -0x7F9C($gp)
    ctx->pc = 0x2cb9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x2cb9e8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2cb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2cb9ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb9f0: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x2cb9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb9f8: 0x28810040  slti        $at, $a0, 0x40
    ctx->pc = 0x2cb9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2cb9fc: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2cb9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2cba00: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x2cba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x2cba04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBA04u;
    {
        const bool branch_taken_0x2cba04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA04u;
        // 0x2cba08: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba04) {
            ctx->pc = 0x2CBA14u;
            goto label_2cba14;
        }
    }
    ctx->pc = 0x2CBA0Cu;
    // 0x2cba0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CBA0Cu;
    {
        const bool branch_taken_0x2cba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA0Cu;
        // 0x2cba10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba0c) {
            ctx->pc = 0x2CBA18u;
            goto label_2cba18;
        }
    }
    ctx->pc = 0x2CBA14u;
label_2cba14:
    // 0x2cba14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cba18:
    // 0x2cba18: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2cba18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cba1c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cba20: 0xa3a60021  sb          $a2, 0x21($sp)
    ctx->pc = 0x2cba20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cba24: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2cba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2cba28: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x2cba28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cba2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cba30: 0x904d0001  lbu         $t5, 0x1($v0)
    ctx->pc = 0x2cba30u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2cba34: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x2cba34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cba38: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2cba3c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x2cba3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cba40: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cba44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cba44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba48: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cba4c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cba4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cba50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cba50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba54: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba58: 0xa3ad0023  sb          $t5, 0x23($sp)
    ctx->pc = 0x2cba58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba5c: 0x904d0002  lbu         $t5, 0x2($v0)
    ctx->pc = 0x2cba5cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2cba60: 0xa3ad0024  sb          $t5, 0x24($sp)
    ctx->pc = 0x2cba60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba64: 0x904d0003  lbu         $t5, 0x3($v0)
    ctx->pc = 0x2cba64u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2cba68: 0xa3ad0025  sb          $t5, 0x25($sp)
    ctx->pc = 0x2cba68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 37), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba6c: 0x904d0004  lbu         $t5, 0x4($v0)
    ctx->pc = 0x2cba6cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cba70: 0xa3ad0026  sb          $t5, 0x26($sp)
    ctx->pc = 0x2cba70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 38), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba74: 0x904d0005  lbu         $t5, 0x5($v0)
    ctx->pc = 0x2cba74u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2cba78: 0xa3ad0027  sb          $t5, 0x27($sp)
    ctx->pc = 0x2cba78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 39), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba7c: 0x904d0006  lbu         $t5, 0x6($v0)
    ctx->pc = 0x2cba7cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cba80: 0xa3ad0028  sb          $t5, 0x28($sp)
    ctx->pc = 0x2cba80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba84: 0x904d0007  lbu         $t5, 0x7($v0)
    ctx->pc = 0x2cba84u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x2cba88: 0xa3ad0029  sb          $t5, 0x29($sp)
    ctx->pc = 0x2cba88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cba8c: 0x8c4d0008  lw          $t5, 0x8($v0)
    ctx->pc = 0x2cba8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cba90: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x2cba90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x2cba94: 0xaf8c8a2c  sw          $t4, -0x75D4($gp)
    ctx->pc = 0x2cba94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 12));
    // 0x2cba98: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2cba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2cba9c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2cba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2cbaa0: 0xaf838a30  sw          $v1, -0x75D0($gp)
    ctx->pc = 0x2cbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 3));
    // 0x2cbaa4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2cbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cbaa8: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CBAA8u;
    SET_GPR_U32(ctx, 31, 0x2CBAB0u);
    ctx->pc = 0x2CBAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAA8u;
    // 0x2cbaac: 0xaf828a34  sw          $v0, -0x75CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CBAA8u, 0x2CBAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAB0u;
label_2cbab0:
    // 0x2cbab0: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cbab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cbab4: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x2cbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x2cbab8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBAB8u;
    {
        const bool branch_taken_0x2cbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAB8u;
        // 0x2cbabc: 0xaf808a34  sw          $zero, -0x75CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbab8) {
            ctx->pc = 0x2CBAC8u;
            goto label_2cbac8;
        }
    }
    ctx->pc = 0x2CBAC0u;
    // 0x2cbac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBAC0u;
    {
        const bool branch_taken_0x2cbac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAC0u;
        // 0x2cbac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbac0) {
            ctx->pc = 0x2CBAE0u;
            goto label_2cbae0;
        }
    }
    ctx->pc = 0x2CBAC8u;
label_2cbac8:
    // 0x2cbac8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cbac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbacc: 0xc0b2e34  jal         func_2CB8D0
    ctx->pc = 0x2CBACCu;
    SET_GPR_U32(ctx, 31, 0x2CBAD4u);
    ctx->pc = 0x2CBAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBACCu;
    // 0x2cbad0: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8D0u, 0x2CBACCu, 0x2CBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAD4u;
label_2cbad4:
    // 0x2cbad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbad8: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x2cbad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbadc: 0xa05008e8  sb          $s0, 0x8E8($v0)
    ctx->pc = 0x2cbadcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2280), (uint8_t)GPR_U32(ctx, 16));
label_2cbae0:
    // 0x2cbae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBAE8u;
        // 0x2cbaec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBAF0u;
}
