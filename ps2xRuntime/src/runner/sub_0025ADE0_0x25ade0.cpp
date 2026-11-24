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

// Function: sub_0025ADE0
// Address: 0x25ade0 - 0x25afa8
void sub_0025ADE0_0x25ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ADE0_0x25ade0");
#endif

    switch (ctx->pc) {
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        default: break;
    }

    ctx->pc = 0x25ade0u;

label_25ade0:
    // 0x25ade0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25ade4:
    // 0x25ade4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25ade8:
    // 0x25ade8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25adec:
    // 0x25adec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25adf0:
    // 0x25adf0: 0x9086005f  lbu         $a2, 0x5F($a0)
    ctx->pc = 0x25adf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
label_25adf4:
    // 0x25adf4: 0x10c30060  beq         $a2, $v1, . + 4 + (0x60 << 2)
label_25adf8:
    if (ctx->pc == 0x25ADF8u) {
        ctx->pc = 0x25ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF4u;
        // 0x25adf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADFCu;
        goto label_25adfc;
    }
    ctx->pc = 0x25ADF4u;
    {
        const bool branch_taken_0x25adf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x25ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF4u;
        // 0x25adf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adf4) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25ADFCu;
label_25adfc:
    // 0x25adfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25ae00:
    // 0x25ae00: 0x10c50059  beq         $a2, $a1, . + 4 + (0x59 << 2)
label_25ae04:
    if (ctx->pc == 0x25AE04u) {
        ctx->pc = 0x25AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE00u;
        // 0x25ae04: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE08u;
        goto label_25ae08;
    }
    ctx->pc = 0x25AE00u;
    {
        const bool branch_taken_0x25ae00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x25AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE00u;
        // 0x25ae04: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae00) {
            ctx->pc = 0x25AF68u;
            goto label_25af68;
        }
    }
    ctx->pc = 0x25AE08u;
label_25ae08:
    // 0x25ae08: 0x10c30055  beq         $a2, $v1, . + 4 + (0x55 << 2)
label_25ae0c:
    if (ctx->pc == 0x25AE0Cu) {
        ctx->pc = 0x25AE10u;
        goto label_25ae10;
    }
    ctx->pc = 0x25AE08u;
    {
        const bool branch_taken_0x25ae08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x25ae08) {
            ctx->pc = 0x25AF60u;
            goto label_25af60;
        }
    }
    ctx->pc = 0x25AE10u;
label_25ae10:
    // 0x25ae10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ae14:
    // 0x25ae14: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_25ae18:
    if (ctx->pc == 0x25AE18u) {
        ctx->pc = 0x25AE1Cu;
        goto label_25ae1c;
    }
    ctx->pc = 0x25AE14u;
    {
        const bool branch_taken_0x25ae14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x25ae14) {
            ctx->pc = 0x25AE38u;
            goto label_25ae38;
        }
    }
    ctx->pc = 0x25AE1Cu;
label_25ae1c:
    // 0x25ae1c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_25ae20:
    if (ctx->pc == 0x25AE20u) {
        ctx->pc = 0x25AE24u;
        goto label_25ae24;
    }
    ctx->pc = 0x25AE1Cu;
    {
        const bool branch_taken_0x25ae1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae1c) {
            ctx->pc = 0x25AE30u;
            goto label_25ae30;
        }
    }
    ctx->pc = 0x25AE24u;
label_25ae24:
    // 0x25ae24: 0x10000054  b           . + 4 + (0x54 << 2)
label_25ae28:
    if (ctx->pc == 0x25AE28u) {
        ctx->pc = 0x25AE2Cu;
        goto label_25ae2c;
    }
    ctx->pc = 0x25AE24u;
    {
        const bool branch_taken_0x25ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae24) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AE2Cu;
label_25ae2c:
    // 0x25ae2c: 0x0  nop
    ctx->pc = 0x25ae2cu;
    // NOP
label_25ae30:
    // 0x25ae30: 0xa203005f  sb          $v1, 0x5F($s0)
    ctx->pc = 0x25ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 3));
label_25ae34:
    // 0x25ae34: 0x0  nop
    ctx->pc = 0x25ae34u;
    // NOP
label_25ae38:
    // 0x25ae38: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_25ae3c:
    // 0x25ae3c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_25ae40:
    // 0x25ae40: 0xc07cce0  jal         func_1F3380
label_25ae44:
    if (ctx->pc == 0x25AE44u) {
        ctx->pc = 0x25AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE40u;
        // 0x25ae44: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE48u;
        goto label_25ae48;
    }
    ctx->pc = 0x25AE40u;
    SET_GPR_U32(ctx, 31, 0x25AE48u);
    ctx->pc = 0x25AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE40u;
    // 0x25ae44: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25AE40u, 0x25AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE48u;
label_25ae48:
    // 0x25ae48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25ae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ae4c:
    // 0x25ae4c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
label_25ae50:
    if (ctx->pc == 0x25AE50u) {
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE54u;
        goto label_25ae54;
    }
    ctx->pc = 0x25AE4Cu;
    {
        const bool branch_taken_0x25ae4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE4Cu;
        // 0x25ae50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae4c) {
            ctx->pc = 0x25AED0u;
            goto label_25aed0;
        }
    }
    ctx->pc = 0x25AE54u;
label_25ae54:
    // 0x25ae54: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x25ae54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_25ae58:
    // 0x25ae58: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x25ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_25ae5c:
    // 0x25ae5c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x25ae5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25ae60:
    // 0x25ae60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_25ae64:
    if (ctx->pc == 0x25AE64u) {
        ctx->pc = 0x25AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE60u;
        // 0x25ae64: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AE68u;
        goto label_25ae68;
    }
    ctx->pc = 0x25AE60u;
    {
        const bool branch_taken_0x25ae60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE60u;
        // 0x25ae64: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae60) {
            ctx->pc = 0x25AE70u;
            goto label_25ae70;
        }
    }
    ctx->pc = 0x25AE68u;
label_25ae68:
    // 0x25ae68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ae6c:
    // 0x25ae6c: 0x0  nop
    ctx->pc = 0x25ae6cu;
    // NOP
label_25ae70:
    // 0x25ae70: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_25ae74:
    if (ctx->pc == 0x25AE74u) {
        ctx->pc = 0x25AE78u;
        goto label_25ae78;
    }
    ctx->pc = 0x25AE70u;
    {
        const bool branch_taken_0x25ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae70) {
            ctx->pc = 0x25AED0u;
            goto label_25aed0;
        }
    }
    ctx->pc = 0x25AE78u;
label_25ae78:
    // 0x25ae78: 0x92040064  lbu         $a0, 0x64($s0)
    ctx->pc = 0x25ae78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_25ae7c:
    // 0x25ae7c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x25ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_25ae80:
    // 0x25ae80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_25ae84:
    if (ctx->pc == 0x25AE84u) {
        ctx->pc = 0x25AE88u;
        goto label_25ae88;
    }
    ctx->pc = 0x25AE80u;
    {
        const bool branch_taken_0x25ae80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae80) {
            ctx->pc = 0x25AEA8u;
            goto label_25aea8;
        }
    }
    ctx->pc = 0x25AE88u;
label_25ae88:
    // 0x25ae88: 0x8ca306ac  lw          $v1, 0x6AC($a1)
    ctx->pc = 0x25ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
label_25ae8c:
    // 0x25ae8c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25ae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_25ae90:
    // 0x25ae90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25ae94:
    if (ctx->pc == 0x25AE94u) {
        ctx->pc = 0x25AE98u;
        goto label_25ae98;
    }
    ctx->pc = 0x25AE90u;
    {
        const bool branch_taken_0x25ae90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ae90) {
            ctx->pc = 0x25AEA8u;
            goto label_25aea8;
        }
    }
    ctx->pc = 0x25AE98u;
label_25ae98:
    // 0x25ae98: 0xc096b54  jal         func_25AD50
label_25ae9c:
    if (ctx->pc == 0x25AE9Cu) {
        ctx->pc = 0x25AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE98u;
        // 0x25ae9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEA0u;
        goto label_25aea0;
    }
    ctx->pc = 0x25AE98u;
    SET_GPR_U32(ctx, 31, 0x25AEA0u);
    ctx->pc = 0x25AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE98u;
    // 0x25ae9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25AE98u, 0x25AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEA0u;
label_25aea0:
    // 0x25aea0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_25aea4:
    if (ctx->pc == 0x25AEA4u) {
        ctx->pc = 0x25AEA8u;
        goto label_25aea8;
    }
    ctx->pc = 0x25AEA0u;
    {
        const bool branch_taken_0x25aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aea0) {
            ctx->pc = 0x25AF98u;
            goto label_25af98;
        }
    }
    ctx->pc = 0x25AEA8u;
label_25aea8:
    // 0x25aea8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x25aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25aeac:
    // 0x25aeac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_25aeb0:
    if (ctx->pc == 0x25AEB0u) {
        ctx->pc = 0x25AEB4u;
        goto label_25aeb4;
    }
    ctx->pc = 0x25AEACu;
    {
        const bool branch_taken_0x25aeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aeac) {
            ctx->pc = 0x25AED0u;
            goto label_25aed0;
        }
    }
    ctx->pc = 0x25AEB4u;
label_25aeb4:
    // 0x25aeb4: 0x8ca406ac  lw          $a0, 0x6AC($a1)
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
label_25aeb8:
    // 0x25aeb8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_25aebc:
    // 0x25aebc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x25aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_25aec0:
    // 0x25aec0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x25aec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25aec4:
    // 0x25aec4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x25aec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_25aec8:
    // 0x25aec8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x25aec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25aecc:
    // 0x25aecc: 0x0  nop
    ctx->pc = 0x25aeccu;
    // NOP
label_25aed0:
    // 0x25aed0: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x25aed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_25aed4:
    // 0x25aed4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x25aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25aed8:
    // 0x25aed8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25aedc:
    if (ctx->pc == 0x25AEDCu) {
        ctx->pc = 0x25AEE0u;
        goto label_25aee0;
    }
    ctx->pc = 0x25AED8u;
    {
        const bool branch_taken_0x25aed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aed8) {
            ctx->pc = 0x25AF18u;
            goto label_25af18;
        }
    }
    ctx->pc = 0x25AEE0u;
label_25aee0:
    // 0x25aee0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_25aee4:
    if (ctx->pc == 0x25AEE4u) {
        ctx->pc = 0x25AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE0u;
        // 0x25aee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AEE8u;
        goto label_25aee8;
    }
    ctx->pc = 0x25AEE0u;
    {
        const bool branch_taken_0x25aee0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEE0u;
        // 0x25aee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aee0) {
            ctx->pc = 0x25AEF8u;
            goto label_25aef8;
        }
    }
    ctx->pc = 0x25AEE8u;
label_25aee8:
    // 0x25aee8: 0xc096b54  jal         func_25AD50
label_25aeec:
    if (ctx->pc == 0x25AEECu) {
        ctx->pc = 0x25AEF0u;
        goto label_25aef0;
    }
    ctx->pc = 0x25AEE8u;
    SET_GPR_U32(ctx, 31, 0x25AEF0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25AEE8u, 0x25AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEF0u;
label_25aef0:
    // 0x25aef0: 0x10000029  b           . + 4 + (0x29 << 2)
label_25aef4:
    if (ctx->pc == 0x25AEF4u) {
        ctx->pc = 0x25AEF8u;
        goto label_25aef8;
    }
    ctx->pc = 0x25AEF0u;
    {
        const bool branch_taken_0x25aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aef0) {
            ctx->pc = 0x25AF98u;
            goto label_25af98;
        }
    }
    ctx->pc = 0x25AEF8u;
label_25aef8:
    // 0x25aef8: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
label_25aefc:
    if (ctx->pc == 0x25AEFCu) {
        ctx->pc = 0x25AF00u;
        goto label_25af00;
    }
    ctx->pc = 0x25AEF8u;
    {
        const bool branch_taken_0x25aef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aef8) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF00u;
label_25af00:
    // 0x25af00: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_25af04:
    // 0x25af04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x25af04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_25af08:
    // 0x25af08: 0x320f809  jalr        $t9
label_25af0c:
    if (ctx->pc == 0x25AF0Cu) {
        ctx->pc = 0x25AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF08u;
        // 0x25af0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF10u;
        goto label_25af10;
    }
    ctx->pc = 0x25AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25AF10u);
        ctx->pc = 0x25AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF08u;
        // 0x25af0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF08u, 0x25AF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AF10u;
label_25af10:
    // 0x25af10: 0x10000019  b           . + 4 + (0x19 << 2)
label_25af14:
    if (ctx->pc == 0x25AF14u) {
        ctx->pc = 0x25AF18u;
        goto label_25af18;
    }
    ctx->pc = 0x25AF10u;
    {
        const bool branch_taken_0x25af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af10) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF18u;
label_25af18:
    // 0x25af18: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x25af18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_25af1c:
    // 0x25af1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25af20:
    if (ctx->pc == 0x25AF20u) {
        ctx->pc = 0x25AF24u;
        goto label_25af24;
    }
    ctx->pc = 0x25AF1Cu;
    {
        const bool branch_taken_0x25af1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af1c) {
            ctx->pc = 0x25AF38u;
            goto label_25af38;
        }
    }
    ctx->pc = 0x25AF24u;
label_25af24:
    // 0x25af24: 0xc096b54  jal         func_25AD50
label_25af28:
    if (ctx->pc == 0x25AF28u) {
        ctx->pc = 0x25AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF24u;
        // 0x25af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF2Cu;
        goto label_25af2c;
    }
    ctx->pc = 0x25AF24u;
    SET_GPR_U32(ctx, 31, 0x25AF2Cu);
    ctx->pc = 0x25AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AF24u;
    // 0x25af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x25AF24u, 0x25AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF2Cu;
label_25af2c:
    // 0x25af2c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_25af30:
    if (ctx->pc == 0x25AF30u) {
        ctx->pc = 0x25AF34u;
        goto label_25af34;
    }
    ctx->pc = 0x25AF2Cu;
    {
        const bool branch_taken_0x25af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af2c) {
            ctx->pc = 0x25AF98u;
            goto label_25af98;
        }
    }
    ctx->pc = 0x25AF34u;
label_25af34:
    // 0x25af34: 0x0  nop
    ctx->pc = 0x25af34u;
    // NOP
label_25af38:
    // 0x25af38: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_25af3c:
    if (ctx->pc == 0x25AF3Cu) {
        ctx->pc = 0x25AF40u;
        goto label_25af40;
    }
    ctx->pc = 0x25AF38u;
    {
        const bool branch_taken_0x25af38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af38) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF40u;
label_25af40:
    // 0x25af40: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_25af44:
    // 0x25af44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25af48:
    // 0x25af48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x25af48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_25af4c:
    // 0x25af4c: 0x320f809  jalr        $t9
label_25af50:
    if (ctx->pc == 0x25AF50u) {
        ctx->pc = 0x25AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF4Cu;
        // 0x25af50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF54u;
        goto label_25af54;
    }
    ctx->pc = 0x25AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25AF54u);
        ctx->pc = 0x25AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF4Cu;
        // 0x25af50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF4Cu, 0x25AF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AF54u;
label_25af54:
    // 0x25af54: 0x10000008  b           . + 4 + (0x8 << 2)
label_25af58:
    if (ctx->pc == 0x25AF58u) {
        ctx->pc = 0x25AF5Cu;
        goto label_25af5c;
    }
    ctx->pc = 0x25AF54u;
    {
        const bool branch_taken_0x25af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af54) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF5Cu;
label_25af5c:
    // 0x25af5c: 0x0  nop
    ctx->pc = 0x25af5cu;
    // NOP
label_25af60:
    // 0x25af60: 0x10000005  b           . + 4 + (0x5 << 2)
label_25af64:
    if (ctx->pc == 0x25AF64u) {
        ctx->pc = 0x25AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF60u;
        // 0x25af64: 0xa205005f  sb          $a1, 0x5F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF68u;
        goto label_25af68;
    }
    ctx->pc = 0x25AF60u;
    {
        const bool branch_taken_0x25af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF60u;
        // 0x25af64: 0xa205005f  sb          $a1, 0x5F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af60) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF68u;
label_25af68:
    // 0x25af68: 0xc074268  jal         func_1D09A0
label_25af6c:
    if (ctx->pc == 0x25AF6Cu) {
        ctx->pc = 0x25AF70u;
        goto label_25af70;
    }
    ctx->pc = 0x25AF68u;
    SET_GPR_U32(ctx, 31, 0x25AF70u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25AF68u, 0x25AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF70u;
label_25af70:
    // 0x25af70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25af74:
    // 0x25af74: 0xa203005f  sb          $v1, 0x5F($s0)
    ctx->pc = 0x25af74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 3));
label_25af78:
    // 0x25af78: 0x92050064  lbu         $a1, 0x64($s0)
    ctx->pc = 0x25af78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_25af7c:
    // 0x25af7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25af80:
    // 0x25af80: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_25af84:
    // 0x25af84: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x25af84u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_25af88:
    // 0x25af88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25af8c:
    // 0x25af8c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x25af8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_25af90:
    // 0x25af90: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x25af90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_25af94:
    // 0x25af94: 0x0  nop
    ctx->pc = 0x25af94u;
    // NOP
label_25af98:
    // 0x25af98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25af98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25af9c:
    // 0x25af9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25afa0:
    // 0x25afa0: 0x3e00008  jr          $ra
label_25afa4:
    if (ctx->pc == 0x25AFA4u) {
        ctx->pc = 0x25AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFA0u;
        // 0x25afa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AFA8u;
        goto label_fallthrough_0x25afa0;
    }
    ctx->pc = 0x25AFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFA0u;
        // 0x25afa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25afa0:
    ctx->pc = 0x25AFA8u;
}
