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

// Function: sub_0021BB18
// Address: 0x21bb18 - 0x21bd2c
void sub_0021BB18_0x21bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BB18_0x21bb18");
#endif

    switch (ctx->pc) {
        case 0x21bba8u: goto label_21bba8;
        case 0x21bc10u: goto label_21bc10;
        case 0x21bc78u: goto label_21bc78;
        case 0x21bc80u: goto label_21bc80;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bd08u: goto label_21bd08;
        default: break;
    }

    ctx->pc = 0x21bb18u;

    // 0x21bb18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21bb1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21bb20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21bb24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21bb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21bb2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21bb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21bb34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21bb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21bb3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21bb3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21bb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21bb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21bb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21bb4c: 0x8e831fc0  lw          $v1, 0x1FC0($s4)
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
    // 0x21bb50: 0x24711128  addiu       $s1, $v1, 0x1128
    ctx->pc = 0x21bb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x21bb54: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21bb58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21bb5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x21bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21bb60: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x21bb60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21bb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bb68: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x21bb6c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x21bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x21bb70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x21bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x21bb74: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x21bb74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x21bb78: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x21bb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x21bb7c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x21bb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bb80: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x21bb80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x21bb84: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x21bb84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x21bb88: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x21bb88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21bb8c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x21bb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bb90: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x21bb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x21bb94: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x21bb94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x21bb98: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x21bb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x21bb9c: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x21bb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bba0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21BBA0u;
    {
        const bool branch_taken_0x21bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBA0u;
        // 0x21bba4: 0x2a470004  slti        $a3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bba0) {
            ctx->pc = 0x21BBFCu;
            goto label_21bbfc;
        }
    }
    ctx->pc = 0x21BBA8u;
label_21bba8:
    // 0x21bba8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbac: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21BBACu;
    {
        const bool branch_taken_0x21bbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBACu;
        // 0x21bbb0: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbac) {
            ctx->pc = 0x21BBF8u;
            goto label_21bbf8;
        }
    }
    ctx->pc = 0x21BBB4u;
    // 0x21bbb4: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x21bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x21bbb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bbb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bbbc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21BBBCu;
    {
        const bool branch_taken_0x21bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bbbc) {
            ctx->pc = 0x21BBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBBCu;
            // 0x21bbc0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBFCu;
            goto label_21bbfc;
        }
    }
    ctx->pc = 0x21BBC4u;
    // 0x21bbc4: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x21bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x21bbc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bbcc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x21bbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x21bbd0: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x21BBD0u;
    {
        const bool branch_taken_0x21bbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21bbd0) {
            ctx->pc = 0x21BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBD0u;
            // 0x21bbd4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBFCu;
            goto label_21bbfc;
        }
    }
    ctx->pc = 0x21BBD8u;
    // 0x21bbd8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x21bbd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x21bbdc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x21BBDCu;
    {
        const bool branch_taken_0x21bbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBDCu;
        // 0x21bbe0: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbdc) {
            ctx->pc = 0x21BC48u;
            goto label_21bc48;
        }
    }
    ctx->pc = 0x21BBE4u;
    // 0x21bbe4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BBE4u;
    {
        const bool branch_taken_0x21bbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bbe4) {
            ctx->pc = 0x21BBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBE4u;
            // 0x21bbe8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBFCu;
            goto label_21bbfc;
        }
    }
    ctx->pc = 0x21BBECu;
    // 0x21bbec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21BBECu;
    {
        const bool branch_taken_0x21bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBECu;
        // 0x21bbf0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbec) {
            ctx->pc = 0x21BC10u;
            goto label_21bc10;
        }
    }
    ctx->pc = 0x21BBF4u;
    // 0x21bbf4: 0x0  nop
    ctx->pc = 0x21bbf4u;
    // NOP
label_21bbf8:
    // 0x21bbf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21bbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21bbfc:
    // 0x21bbfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21bc00: 0x247100b  movn        $v0, $s2, $a3
    ctx->pc = 0x21bc00u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x21bc04: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x21bc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21bc08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x21BC08u;
    {
        const bool branch_taken_0x21bc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC08u;
        // 0x21bc0c: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc08) {
            ctx->pc = 0x21BBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bba8;
        }
    }
    ctx->pc = 0x21BC10u;
label_21bc10:
    // 0x21bc10: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x21bc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21bc14: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21BC14u;
    {
        const bool branch_taken_0x21bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC14u;
        // 0x21bc18: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc14) {
            ctx->pc = 0x21BC58u;
            goto label_21bc58;
        }
    }
    ctx->pc = 0x21BC1Cu;
    // 0x21bc1c: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x21bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x21bc20: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x21bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x21bc24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21bc24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21bc28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21bc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc2c: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x21bc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x21bc30: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x21bc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x21bc34: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x21bc34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bc38: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x21bc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x21bc3c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21BC3Cu;
    {
        const bool branch_taken_0x21bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC3Cu;
        // 0x21bc40: 0xa2230012  sb          $v1, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc3c) {
            ctx->pc = 0x21BCACu;
            goto label_21bcac;
        }
    }
    ctx->pc = 0x21BC44u;
    // 0x21bc44: 0x0  nop
    ctx->pc = 0x21bc44u;
    // NOP
label_21bc48:
    // 0x21bc48: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21bc4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21bc50: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BC50u;
    {
        const bool branch_taken_0x21bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC50u;
        // 0x21bc54: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc50) {
            ctx->pc = 0x21BC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bc10;
        }
    }
    ctx->pc = 0x21BC58u;
label_21bc58:
    // 0x21bc58: 0x9082fffd  lbu         $v0, -0x3($a0)
    ctx->pc = 0x21bc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x21bc5c: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x21bc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x21bc60: 0x9083fffe  lbu         $v1, -0x2($a0)
    ctx->pc = 0x21bc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x21bc64: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x21bc64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x21bc68: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x21bc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x21bc6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21BC6Cu;
    {
        const bool branch_taken_0x21bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC6Cu;
        // 0x21bc70: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc6c) {
            ctx->pc = 0x21BCACu;
            goto label_21bcac;
        }
    }
    ctx->pc = 0x21BC74u;
    // 0x21bc74: 0x0  nop
    ctx->pc = 0x21bc74u;
    // NOP
label_21bc78:
    // 0x21bc78: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x21BC78u;
    SET_GPR_U32(ctx, 31, 0x21BC80u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x21BC78u, 0x21BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC80u;
label_21bc80:
    // 0x21bc80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21bc84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21BC84u;
    {
        const bool branch_taken_0x21bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc84) {
            ctx->pc = 0x21BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC84u;
            // 0x21bc88: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC98u;
            goto label_21bc98;
        }
    }
    ctx->pc = 0x21BC8Cu;
    // 0x21bc8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21bc90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21bc94: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x21bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_21bc98:
    // 0x21bc98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x21bc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21bc9c: 0x2131023  subu        $v0, $s0, $s3
    ctx->pc = 0x21bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x21bca0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x21bca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bca4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x21bca8: 0x2a470004  slti        $a3, $s2, 0x4
    ctx->pc = 0x21bca8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_21bcac:
    // 0x21bcac: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BCACu;
    {
        const bool branch_taken_0x21bcac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCACu;
        // 0x21bcb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcac) {
            ctx->pc = 0x21BCD4u;
            goto label_21bcd4;
        }
    }
    ctx->pc = 0x21BCB4u;
    // 0x21bcb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21bcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcbc: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x21BCBCu;
    SET_GPR_U32(ctx, 31, 0x21BCC4u);
    ctx->pc = 0x21BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCBCu;
    // 0x21bcc0: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x21BCBCu, 0x21BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCC4u;
label_21bcc4:
    // 0x21bcc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21bcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcc8: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21BCC8u;
    {
        const bool branch_taken_0x21bcc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCC8u;
        // 0x21bccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcc8) {
            ctx->pc = 0x21BC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bc78;
        }
    }
    ctx->pc = 0x21BCD0u;
    // 0x21bcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bcd4:
    // 0x21bcd4: 0x56a2000d  bnel        $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21BCD4u;
    {
        const bool branch_taken_0x21bcd4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bcd4) {
            ctx->pc = 0x21BCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BCD4u;
            // 0x21bcd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD0Cu;
            goto label_21bd0c;
        }
    }
    ctx->pc = 0x21BCDCu;
    // 0x21bcdc: 0xc084144  jal         func_210510
    ctx->pc = 0x21BCDCu;
    SET_GPR_U32(ctx, 31, 0x21BCE4u);
    ctx->pc = 0x21BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCDCu;
    // 0x21bce0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210510u, 0x21BCDCu, 0x21BCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCE4u;
label_21bce4:
    // 0x21bce4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BCE4u;
    {
        const bool branch_taken_0x21bce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bce4) {
            ctx->pc = 0x21BCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BCE4u;
            // 0x21bce8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD0Cu;
            goto label_21bd0c;
        }
    }
    ctx->pc = 0x21BCECu;
    // 0x21bcec: 0xc08415e  jal         func_210578
    ctx->pc = 0x21BCECu;
    SET_GPR_U32(ctx, 31, 0x21BCF4u);
    ctx->pc = 0x21BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCECu;
    // 0x21bcf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210578u, 0x21BCECu, 0x21BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCF4u;
label_21bcf4:
    // 0x21bcf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BCF4u;
    {
        const bool branch_taken_0x21bcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCF4u;
        // 0x21bcf8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcf4) {
            ctx->pc = 0x21BD0Cu;
            goto label_21bd0c;
        }
    }
    ctx->pc = 0x21BCFCu;
    // 0x21bcfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd00: 0xc086e0e  jal         func_21B838
    ctx->pc = 0x21BD00u;
    SET_GPR_U32(ctx, 31, 0x21BD08u);
    ctx->pc = 0x21BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BD00u;
    // 0x21bd04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B838u, 0x21BD00u, 0x21BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BD08u;
label_21bd08:
    // 0x21bd08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21bd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21bd0c:
    // 0x21bd0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21bd0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bd10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21bd10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bd14: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21bd14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bd18: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21bd18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21bd1c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21bd1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21bd20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21bd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD24u;
        // 0x21bd28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD2Cu;
}
