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

// Function: sub_0030BA90
// Address: 0x30ba90 - 0x30bc44
void sub_0030BA90_0x30ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA90_0x30ba90");
#endif

    switch (ctx->pc) {
        case 0x30bb34u: goto label_30bb34;
        case 0x30bb50u: goto label_30bb50;
        case 0x30bb78u: goto label_30bb78;
        case 0x30bb88u: goto label_30bb88;
        case 0x30bba8u: goto label_30bba8;
        case 0x30bbb4u: goto label_30bbb4;
        case 0x30bbe4u: goto label_30bbe4;
        default: break;
    }

    ctx->pc = 0x30ba90u;

    // 0x30ba90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30ba94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30ba98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ba9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30baa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30baa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baa4: 0x90840045  lbu         $a0, 0x45($a0)
    ctx->pc = 0x30baa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 69)));
    // 0x30baa8: 0x3c10008e  lui         $s0, 0x8E
    ctx->pc = 0x30baa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)142 << 16));
    // 0x30baac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BAACu;
    {
        const bool branch_taken_0x30baac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAACu;
        // 0x30bab0: 0x2610ff40  addiu       $s0, $s0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30baac) {
            ctx->pc = 0x30BAC0u;
            goto label_30bac0;
        }
    }
    ctx->pc = 0x30BAB4u;
    // 0x30bab4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x30BAB4u;
    {
        const bool branch_taken_0x30bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAB4u;
        // 0x30bab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bab4) {
            ctx->pc = 0x30BC30u;
            goto label_30bc30;
        }
    }
    ctx->pc = 0x30BABCu;
    // 0x30babc: 0x0  nop
    ctx->pc = 0x30babcu;
    // NOP
label_30bac0:
    // 0x30bac0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30bac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30bac4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x30bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x30bac8: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x30BAC8u;
    {
        const bool branch_taken_0x30bac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAC8u;
        // 0x30bacc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bac8) {
            ctx->pc = 0x30BC08u;
            goto label_30bc08;
        }
    }
    ctx->pc = 0x30BAD0u;
    // 0x30bad0: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x30BAD0u;
    {
        const bool branch_taken_0x30bad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bad0) {
            ctx->pc = 0x30BBF8u;
            goto label_30bbf8;
        }
    }
    ctx->pc = 0x30BAD8u;
    // 0x30bad8: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x30badc: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x30BADCu;
    {
        const bool branch_taken_0x30badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BADCu;
        // 0x30bae0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30badc) {
            ctx->pc = 0x30BBC8u;
            goto label_30bbc8;
        }
    }
    ctx->pc = 0x30BAE4u;
    // 0x30bae4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x30BAE4u;
    {
        const bool branch_taken_0x30bae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bae4) {
            ctx->pc = 0x30BBA0u;
            goto label_30bba0;
        }
    }
    ctx->pc = 0x30BAECu;
    // 0x30baec: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x30baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x30baf0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30BAF0u;
    {
        const bool branch_taken_0x30baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BAF0u;
        // 0x30baf4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30baf0) {
            ctx->pc = 0x30BB80u;
            goto label_30bb80;
        }
    }
    ctx->pc = 0x30BAF8u;
    // 0x30baf8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30BAF8u;
    {
        const bool branch_taken_0x30baf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30baf8) {
            ctx->pc = 0x30BB58u;
            goto label_30bb58;
        }
    }
    ctx->pc = 0x30BB00u;
    // 0x30bb00: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30bb04: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30BB04u;
    {
        const bool branch_taken_0x30bb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB04u;
        // 0x30bb08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb04) {
            ctx->pc = 0x30BB48u;
            goto label_30bb48;
        }
    }
    ctx->pc = 0x30BB0Cu;
    // 0x30bb0c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BB0Cu;
    {
        const bool branch_taken_0x30bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bb0c) {
            ctx->pc = 0x30BB20u;
            goto label_30bb20;
        }
    }
    ctx->pc = 0x30BB14u;
    // 0x30bb14: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x30BB14u;
    {
        const bool branch_taken_0x30bb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb14) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BB1Cu;
    // 0x30bb1c: 0x0  nop
    ctx->pc = 0x30bb1cu;
    // NOP
label_30bb20:
    // 0x30bb20: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x30bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x30bb24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BB24u;
    {
        const bool branch_taken_0x30bb24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB24u;
        // 0x30bb28: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb24) {
            ctx->pc = 0x30BB38u;
            goto label_30bb38;
        }
    }
    ctx->pc = 0x30BB2Cu;
    // 0x30bb2c: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x30BB2Cu;
    SET_GPR_U32(ctx, 31, 0x30BB34u);
    ctx->pc = 0x30BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB2Cu;
    // 0x30bb30: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x30BB2Cu, 0x30BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB34u;
label_30bb34:
    // 0x30bb34: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x30bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_30bb38:
    // 0x30bb38: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x30bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x30bb3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30bb40: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x30bb40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x30bb44: 0xa2200046  sb          $zero, 0x46($s1)
    ctx->pc = 0x30bb44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
label_30bb48:
    // 0x30bb48: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x30BB48u;
    SET_GPR_U32(ctx, 31, 0x30BB50u);
    ctx->pc = 0x30BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB48u;
    // 0x30bb4c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x30BB48u, 0x30BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB50u;
label_30bb50:
    // 0x30bb50: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30BB50u;
    {
        const bool branch_taken_0x30bb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bb50) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BB58u;
label_30bb58:
    // 0x30bb58: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x30bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x30bb5c: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x30bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x30bb60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30bb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb64: 0x96250048  lhu         $a1, 0x48($s1)
    ctx->pc = 0x30bb64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x30bb68: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x30bb6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30bb6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb70: 0xc0554c0  jal         func_155300
    ctx->pc = 0x30BB70u;
    SET_GPR_U32(ctx, 31, 0x30BB78u);
    ctx->pc = 0x30BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB70u;
    // 0x30bb74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155300u, 0x30BB70u, 0x30BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB78u;
label_30bb78:
    // 0x30bb78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30BB78u;
    {
        const bool branch_taken_0x30bb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb78) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BB80u;
label_30bb80:
    // 0x30bb80: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x30BB80u;
    SET_GPR_U32(ctx, 31, 0x30BB88u);
    ctx->pc = 0x30BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB80u;
    // 0x30bb84: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x30BB80u, 0x30BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB88u;
label_30bb88:
    // 0x30bb88: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30BB88u;
    {
        const bool branch_taken_0x30bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bb88) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BB90u;
    // 0x30bb90: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x30bb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x30bb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30bb98: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x30BB98u;
    {
        const bool branch_taken_0x30bb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB98u;
        // 0x30bb9c: 0xa2220045  sb          $v0, 0x45($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb98) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BBA0u;
label_30bba0:
    // 0x30bba0: 0xc043898  jal         func_10E260
    ctx->pc = 0x30BBA0u;
    SET_GPR_U32(ctx, 31, 0x30BBA8u);
    ctx->pc = 0x30BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBA0u;
    // 0x30bba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x30BBA0u, 0x30BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBA8u;
label_30bba8:
    // 0x30bba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bbac: 0xc06390c  jal         func_18E430
    ctx->pc = 0x30BBACu;
    SET_GPR_U32(ctx, 31, 0x30BBB4u);
    ctx->pc = 0x30BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBACu;
    // 0x30bbb0: 0x26053000  addiu       $a1, $s0, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E430u, 0x30BBACu, 0x30BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBB4u;
label_30bbb4:
    // 0x30bbb4: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x30bbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x30bbb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30bbbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x30BBBCu;
    {
        const bool branch_taken_0x30bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBBCu;
        // 0x30bbc0: 0xa2220045  sb          $v0, 0x45($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbbc) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BBC4u;
    // 0x30bbc4: 0x0  nop
    ctx->pc = 0x30bbc4u;
    // NOP
label_30bbc8:
    // 0x30bbc8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x30bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x30bbcc: 0x26053000  addiu       $a1, $s0, 0x3000
    ctx->pc = 0x30bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x30bbd0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x30bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x30bbd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x30bbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30bbd8: 0x2407050e  addiu       $a3, $zero, 0x50E
    ctx->pc = 0x30bbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1294));
    // 0x30bbdc: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x30BBDCu;
    SET_GPR_U32(ctx, 31, 0x30BBE4u);
    ctx->pc = 0x30BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBDCu;
    // 0x30bbe0: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x30BBDCu, 0x30BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBE4u;
label_30bbe4:
    // 0x30bbe4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x30bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x30bbe8: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x30bbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x30bbec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30bbf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30BBF0u;
    {
        const bool branch_taken_0x30bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBF0u;
        // 0x30bbf4: 0xa2220045  sb          $v0, 0x45($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbf0) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BBF8u;
label_30bbf8:
    // 0x30bbf8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x30bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30bbfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30BBFCu;
    {
        const bool branch_taken_0x30bbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBFCu;
        // 0x30bc00: 0xa2220045  sb          $v0, 0x45($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbfc) {
            ctx->pc = 0x30BC28u;
            goto label_30bc28;
        }
    }
    ctx->pc = 0x30BC04u;
    // 0x30bc04: 0x0  nop
    ctx->pc = 0x30bc04u;
    // NOP
label_30bc08:
    // 0x30bc08: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x30bc08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x30bc0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bc10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30bc14: 0xa2230044  sb          $v1, 0x44($s1)
    ctx->pc = 0x30bc14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x30bc18: 0x96230048  lhu         $v1, 0x48($s1)
    ctx->pc = 0x30bc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x30bc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30BC1Cu;
    {
        const bool branch_taken_0x30bc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC1Cu;
        // 0x30bc20: 0xa623004a  sh          $v1, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc1c) {
            ctx->pc = 0x30BC30u;
            goto label_30bc30;
        }
    }
    ctx->pc = 0x30BC24u;
    // 0x30bc24: 0x0  nop
    ctx->pc = 0x30bc24u;
    // NOP
label_30bc28:
    // 0x30bc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bc2c: 0x0  nop
    ctx->pc = 0x30bc2cu;
    // NOP
label_30bc30:
    // 0x30bc30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30bc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bc34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bc38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30BC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC3Cu;
        // 0x30bc40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BC44u;
}
