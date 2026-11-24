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

// Function: sub_002CECE0
// Address: 0x2cece0 - 0x2ceeb4
void sub_002CECE0_0x2cece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CECE0_0x2cece0");
#endif

    switch (ctx->pc) {
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced64u: goto label_2ced64;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced6cu: goto label_2ced6c;
        case 0x2ced70u: goto label_2ced70;
        case 0x2ced74u: goto label_2ced74;
        case 0x2ced78u: goto label_2ced78;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ced80u: goto label_2ced80;
        case 0x2ced84u: goto label_2ced84;
        case 0x2ced88u: goto label_2ced88;
        case 0x2ced8cu: goto label_2ced8c;
        case 0x2ced90u: goto label_2ced90;
        case 0x2ced94u: goto label_2ced94;
        case 0x2ced98u: goto label_2ced98;
        case 0x2ced9cu: goto label_2ced9c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2ceda4u: goto label_2ceda4;
        case 0x2ceda8u: goto label_2ceda8;
        case 0x2cedacu: goto label_2cedac;
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        default: break;
    }

    ctx->pc = 0x2cece0u;

label_2cece0:
    // 0x2cece0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cece4:
    // 0x2cece4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x2cece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
label_2cece8:
    // 0x2cece8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cecec:
    // 0x2cecec: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x2cececu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2cecf0:
    // 0x2cecf0: 0x90850032  lbu         $a1, 0x32($a0)
    ctx->pc = 0x2cecf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2cecf4:
    // 0x2cecf4: 0x902339a6  lbu         $v1, 0x39A6($at)
    ctx->pc = 0x2cecf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14758)));
label_2cecf8:
    // 0x2cecf8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_2cecfc:
    if (ctx->pc == 0x2CECFCu) {
        ctx->pc = 0x2CECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECF8u;
        // 0x2cecfc: 0x8cc6007c  lw          $a2, 0x7C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CED00u;
        goto label_2ced00;
    }
    ctx->pc = 0x2CECF8u;
    {
        const bool branch_taken_0x2cecf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECF8u;
        // 0x2cecfc: 0x8cc6007c  lw          $a2, 0x7C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cecf8) {
            ctx->pc = 0x2CED18u;
            goto label_2ced18;
        }
    }
    ctx->pc = 0x2CED00u;
label_2ced00:
    // 0x2ced00: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x2ced00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
label_2ced04:
    // 0x2ced04: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ced04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ced08:
    // 0x2ced08: 0x9025399c  lbu         $a1, 0x399C($at)
    ctx->pc = 0x2ced08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14748)));
label_2ced0c:
    // 0x2ced0c: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_2ced10:
    if (ctx->pc == 0x2CED10u) {
        ctx->pc = 0x2CED14u;
        goto label_2ced14;
    }
    ctx->pc = 0x2CED0Cu;
    {
        const bool branch_taken_0x2ced0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ced0c) {
            ctx->pc = 0x2CED30u;
            goto label_2ced30;
        }
    }
    ctx->pc = 0x2CED14u;
label_2ced14:
    // 0x2ced14: 0x0  nop
    ctx->pc = 0x2ced14u;
    // NOP
label_2ced18:
    // 0x2ced18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_2ced1c:
    // 0x2ced1c: 0xacc30160  sw          $v1, 0x160($a2)
    ctx->pc = 0x2ced1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 3));
label_2ced20:
    // 0x2ced20: 0xacc30164  sw          $v1, 0x164($a2)
    ctx->pc = 0x2ced20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 356), GPR_U32(ctx, 3));
label_2ced24:
    // 0x2ced24: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ced28:
    if (ctx->pc == 0x2CED28u) {
        ctx->pc = 0x2CED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED24u;
        // 0x2ced28: 0xacc30168  sw          $v1, 0x168($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CED2Cu;
        goto label_2ced2c;
    }
    ctx->pc = 0x2CED24u;
    {
        const bool branch_taken_0x2ced24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED24u;
        // 0x2ced28: 0xacc30168  sw          $v1, 0x168($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced24) {
            ctx->pc = 0x2CED40u;
            goto label_2ced40;
        }
    }
    ctx->pc = 0x2CED2Cu;
label_2ced2c:
    // 0x2ced2c: 0x0  nop
    ctx->pc = 0x2ced2cu;
    // NOP
label_2ced30:
    // 0x2ced30: 0x3c034290  lui         $v1, 0x4290
    ctx->pc = 0x2ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17040 << 16));
label_2ced34:
    // 0x2ced34: 0xacc30160  sw          $v1, 0x160($a2)
    ctx->pc = 0x2ced34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 3));
label_2ced38:
    // 0x2ced38: 0xacc30164  sw          $v1, 0x164($a2)
    ctx->pc = 0x2ced38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 356), GPR_U32(ctx, 3));
label_2ced3c:
    // 0x2ced3c: 0xacc30168  sw          $v1, 0x168($a2)
    ctx->pc = 0x2ced3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 3));
label_2ced40:
    // 0x2ced40: 0x90860118  lbu         $a2, 0x118($a0)
    ctx->pc = 0x2ced40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_2ced44:
    // 0x2ced44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ced44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ced48:
    // 0x2ced48: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
label_2ced4c:
    if (ctx->pc == 0x2CED4Cu) {
        ctx->pc = 0x2CED50u;
        goto label_2ced50;
    }
    ctx->pc = 0x2CED48u;
    {
        const bool branch_taken_0x2ced48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ced48) {
            ctx->pc = 0x2CEDC0u;
            goto label_2cedc0;
        }
    }
    ctx->pc = 0x2CED50u;
label_2ced50:
    // 0x2ced50: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2ced54:
    if (ctx->pc == 0x2CED54u) {
        ctx->pc = 0x2CED58u;
        goto label_2ced58;
    }
    ctx->pc = 0x2CED50u;
    {
        const bool branch_taken_0x2ced50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced50) {
            ctx->pc = 0x2CED60u;
            goto label_2ced60;
        }
    }
    ctx->pc = 0x2CED58u;
label_2ced58:
    // 0x2ced58: 0x10000053  b           . + 4 + (0x53 << 2)
label_2ced5c:
    if (ctx->pc == 0x2CED5Cu) {
        ctx->pc = 0x2CED60u;
        goto label_2ced60;
    }
    ctx->pc = 0x2CED58u;
    {
        const bool branch_taken_0x2ced58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced58) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CED60u;
label_2ced60:
    // 0x2ced60: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2ced60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_2ced64:
    // 0x2ced64: 0x8c250fe0  lw          $a1, 0xFE0($at)
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
label_2ced68:
    // 0x2ced68: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ced68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ced6c:
    // 0x2ced6c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ced6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2ced70:
    // 0x2ced70: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_2ced74:
    if (ctx->pc == 0x2CED74u) {
        ctx->pc = 0x2CED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED70u;
        // 0x2ced74: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CED78u;
        goto label_2ced78;
    }
    ctx->pc = 0x2CED70u;
    {
        const bool branch_taken_0x2ced70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED70u;
        // 0x2ced74: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced70) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CED78u;
label_2ced78:
    // 0x2ced78: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x2ced78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_2ced7c:
    // 0x2ced7c: 0xa0830118  sb          $v1, 0x118($a0)
    ctx->pc = 0x2ced7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 280), (uint8_t)GPR_U32(ctx, 3));
label_2ced80:
    // 0x2ced80: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2ced80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2ced84:
    // 0x2ced84: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x2ced84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2ced88:
    // 0x2ced88: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2ced88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_2ced8c:
    // 0x2ced8c: 0x24a539a7  addiu       $a1, $a1, 0x39A7
    ctx->pc = 0x2ced8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14759));
label_2ced90:
    // 0x2ced90: 0x24635a0e  addiu       $v1, $v1, 0x5A0E
    ctx->pc = 0x2ced90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23054));
label_2ced94:
    // 0x2ced94: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2ced98:
    // 0x2ced98: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2ced98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_2ced9c:
    // 0x2ced9c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x2ced9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_2ceda0:
    // 0x2ceda0: 0x90860032  lbu         $a2, 0x32($a0)
    ctx->pc = 0x2ceda0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2ceda4:
    // 0x2ceda4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ceda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ceda8:
    // 0x2ceda8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ceda8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2cedac:
    // 0x2cedac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2cedacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2cedb0:
    // 0x2cedb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cedb4:
    // 0x2cedb4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2cedb8:
    // 0x2cedb8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2cedbc:
    if (ctx->pc == 0x2CEDBCu) {
        ctx->pc = 0x2CEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDB8u;
        // 0x2cedbc: 0xa48300c0  sh          $v1, 0xC0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEDC0u;
        goto label_2cedc0;
    }
    ctx->pc = 0x2CEDB8u;
    {
        const bool branch_taken_0x2cedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDB8u;
        // 0x2cedbc: 0xa48300c0  sh          $v1, 0xC0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedb8) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEDC0u;
label_2cedc0:
    // 0x2cedc0: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
label_2cedc4:
    // 0x2cedc4: 0x9023399c  lbu         $v1, 0x399C($at)
    ctx->pc = 0x2cedc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14748)));
label_2cedc8:
    // 0x2cedc8: 0x90850032  lbu         $a1, 0x32($a0)
    ctx->pc = 0x2cedc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2cedcc:
    // 0x2cedcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cedccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cedd0:
    // 0x2cedd0: 0x14a3002b  bne         $a1, $v1, . + 4 + (0x2B << 2)
label_2cedd4:
    if (ctx->pc == 0x2CEDD4u) {
        ctx->pc = 0x2CEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDD0u;
        // 0x2cedd4: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEDD8u;
        goto label_2cedd8;
    }
    ctx->pc = 0x2CEDD0u;
    {
        const bool branch_taken_0x2cedd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEDD0u;
        // 0x2cedd4: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedd0) {
            ctx->pc = 0x2CEE80u;
            goto label_2cee80;
        }
    }
    ctx->pc = 0x2CEDD8u;
label_2cedd8:
    // 0x2cedd8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x2cedd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
label_2ceddc:
    // 0x2ceddc: 0x246339a7  addiu       $v1, $v1, 0x39A7
    ctx->pc = 0x2ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14759));
label_2cede0:
    // 0x2cede0: 0x802639aa  lb          $a2, 0x39AA($at)
    ctx->pc = 0x2cede0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 14762)));
label_2cede4:
    // 0x2cede4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cede8:
    // 0x2cede8: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_2cedec:
    // 0x2cedec: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x2cedecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2cedf0:
    // 0x2cedf0: 0x24e75a0e  addiu       $a3, $a3, 0x5A0E
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23054));
label_2cedf4:
    // 0x2cedf4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2cedf8:
    // 0x2cedf8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2cedfc:
    // 0x2cedfc: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x2cedfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2cee00:
    // 0x2cee00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2cee04:
    // 0x2cee04: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2cee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2cee08:
    // 0x2cee08: 0x848300c0  lh          $v1, 0xC0($a0)
    ctx->pc = 0x2cee08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
label_2cee0c:
    // 0x2cee0c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x2cee0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2cee10:
    // 0x2cee10: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2cee10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_2cee14:
    // 0x2cee14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2cee14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2cee18:
    // 0x2cee18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cee1c:
    // 0x2cee1c: 0xa48300c0  sh          $v1, 0xC0($a0)
    ctx->pc = 0x2cee1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
label_2cee20:
    // 0x2cee20: 0x848300c0  lh          $v1, 0xC0($a0)
    ctx->pc = 0x2cee20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
label_2cee24:
    // 0x2cee24: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2cee24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2cee28:
    // 0x2cee28: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2cee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_2cee2c:
    // 0x2cee2c: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x2cee2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
label_2cee30:
    // 0x2cee30: 0x31d3f  dsra32      $v1, $v1, 20
    ctx->pc = 0x2cee30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 20));
label_2cee34:
    // 0x2cee34: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_2cee38:
    if (ctx->pc == 0x2CEE38u) {
        ctx->pc = 0x2CEE3Cu;
        goto label_2cee3c;
    }
    ctx->pc = 0x2CEE34u;
    {
        const bool branch_taken_0x2cee34 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2cee34) {
            ctx->pc = 0x2CEE40u;
            goto label_2cee40;
        }
    }
    ctx->pc = 0x2CEE3Cu;
label_2cee3c:
    // 0x2cee3c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2cee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2cee40:
    // 0x2cee40: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x2cee40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
label_2cee44:
    // 0x2cee44: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2cee48:
    if (ctx->pc == 0x2CEE48u) {
        ctx->pc = 0x2CEE4Cu;
        goto label_2cee4c;
    }
    ctx->pc = 0x2CEE44u;
    {
        const bool branch_taken_0x2cee44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee44) {
            ctx->pc = 0x2CEE80u;
            goto label_2cee80;
        }
    }
    ctx->pc = 0x2CEE4Cu;
label_2cee4c:
    // 0x2cee4c: 0x90860032  lbu         $a2, 0x32($a0)
    ctx->pc = 0x2cee4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2cee50:
    // 0x2cee50: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
label_2cee54:
    // 0x2cee54: 0x24a539a7  addiu       $a1, $a1, 0x39A7
    ctx->pc = 0x2cee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14759));
label_2cee58:
    // 0x2cee58: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cee58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_2cee5c:
    // 0x2cee5c: 0x24635a0e  addiu       $v1, $v1, 0x5A0E
    ctx->pc = 0x2cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23054));
label_2cee60:
    // 0x2cee60: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x2cee60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
label_2cee64:
    // 0x2cee64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2cee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2cee68:
    // 0x2cee68: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2cee68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2cee6c:
    // 0x2cee6c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2cee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2cee70:
    // 0x2cee70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cee74:
    // 0x2cee74: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2cee74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2cee78:
    // 0x2cee78: 0xa48300c0  sh          $v1, 0xC0($a0)
    ctx->pc = 0x2cee78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
label_2cee7c:
    // 0x2cee7c: 0xac20399c  sw          $zero, 0x399C($at)
    ctx->pc = 0x2cee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14748), GPR_U32(ctx, 0));
label_2cee80:
    // 0x2cee80: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2cee80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
label_2cee84:
    // 0x2cee84: 0x8c250fe0  lw          $a1, 0xFE0($at)
    ctx->pc = 0x2cee84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
label_2cee88:
    // 0x2cee88: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2cee8c:
    // 0x2cee8c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2cee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2cee90:
    // 0x2cee90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2cee94:
    if (ctx->pc == 0x2CEE94u) {
        ctx->pc = 0x2CEE98u;
        goto label_2cee98;
    }
    ctx->pc = 0x2CEE90u;
    {
        const bool branch_taken_0x2cee90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee90) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEE98u;
label_2cee98:
    // 0x2cee98: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x2cee98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_2cee9c:
    // 0x2cee9c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2cee9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2ceea0:
    // 0x2ceea0: 0x320f809  jalr        $t9
label_2ceea4:
    if (ctx->pc == 0x2CEEA4u) {
        ctx->pc = 0x2CEEA8u;
        goto label_2ceea8;
    }
    ctx->pc = 0x2CEEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CEEA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEEA0u, 0x2CEEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CEEA8u;
label_2ceea8:
    // 0x2ceea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ceea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ceeac:
    // 0x2ceeac: 0x3e00008  jr          $ra
label_2ceeb0:
    if (ctx->pc == 0x2CEEB0u) {
        ctx->pc = 0x2CEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEACu;
        // 0x2ceeb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CEEB4u;
        goto label_fallthrough_0x2ceeac;
    }
    ctx->pc = 0x2CEEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEACu;
        // 0x2ceeb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ceeac:
    ctx->pc = 0x2CEEB4u;
}
