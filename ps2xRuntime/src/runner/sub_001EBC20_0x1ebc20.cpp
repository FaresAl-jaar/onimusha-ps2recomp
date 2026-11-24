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

// Function: sub_001EBC20
// Address: 0x1ebc20 - 0x1ebe04
void sub_001EBC20_0x1ebc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBC20_0x1ebc20");
#endif

    switch (ctx->pc) {
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc24u: goto label_1ebc24;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc30u: goto label_1ebc30;
        case 0x1ebc34u: goto label_1ebc34;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc3cu: goto label_1ebc3c;
        case 0x1ebc40u: goto label_1ebc40;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc48u: goto label_1ebc48;
        case 0x1ebc4cu: goto label_1ebc4c;
        case 0x1ebc50u: goto label_1ebc50;
        case 0x1ebc54u: goto label_1ebc54;
        case 0x1ebc58u: goto label_1ebc58;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd40u: goto label_1ebd40;
        case 0x1ebd44u: goto label_1ebd44;
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd50u: goto label_1ebd50;
        case 0x1ebd54u: goto label_1ebd54;
        case 0x1ebd58u: goto label_1ebd58;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd60u: goto label_1ebd60;
        case 0x1ebd64u: goto label_1ebd64;
        case 0x1ebd68u: goto label_1ebd68;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd70u: goto label_1ebd70;
        case 0x1ebd74u: goto label_1ebd74;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd7cu: goto label_1ebd7c;
        case 0x1ebd80u: goto label_1ebd80;
        case 0x1ebd84u: goto label_1ebd84;
        case 0x1ebd88u: goto label_1ebd88;
        case 0x1ebd8cu: goto label_1ebd8c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebd94u: goto label_1ebd94;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebd9cu: goto label_1ebd9c;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebda4u: goto label_1ebda4;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdacu: goto label_1ebdac;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdb4u: goto label_1ebdb4;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdbcu: goto label_1ebdbc;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdc4u: goto label_1ebdc4;
        case 0x1ebdc8u: goto label_1ebdc8;
        case 0x1ebdccu: goto label_1ebdcc;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebdd4u: goto label_1ebdd4;
        case 0x1ebdd8u: goto label_1ebdd8;
        case 0x1ebddcu: goto label_1ebddc;
        case 0x1ebde0u: goto label_1ebde0;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebdecu: goto label_1ebdec;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf4u: goto label_1ebdf4;
        case 0x1ebdf8u: goto label_1ebdf8;
        case 0x1ebdfcu: goto label_1ebdfc;
        case 0x1ebe00u: goto label_1ebe00;
        default: break;
    }

    ctx->pc = 0x1ebc20u;

label_1ebc20:
    // 0x1ebc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebc24:
    // 0x1ebc24: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ebc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ebc28:
    // 0x1ebc28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ebc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ebc2c:
    // 0x1ebc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebc30:
    // 0x1ebc30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebc34:
    // 0x1ebc34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc38:
    // 0x1ebc38: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ebc3c:
    // 0x1ebc3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ebc40:
    if (ctx->pc == 0x1EBC40u) {
        ctx->pc = 0x1EBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC3Cu;
        // 0x1ebc40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC44u;
        goto label_1ebc44;
    }
    ctx->pc = 0x1EBC3Cu;
    {
        const bool branch_taken_0x1ebc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC3Cu;
        // 0x1ebc40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc3c) {
            ctx->pc = 0x1EBC50u;
            goto label_1ebc50;
        }
    }
    ctx->pc = 0x1EBC44u;
label_1ebc44:
    // 0x1ebc44: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1ebc48:
    if (ctx->pc == 0x1EBC48u) {
        ctx->pc = 0x1EBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC44u;
        // 0x1ebc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC4Cu;
        goto label_1ebc4c;
    }
    ctx->pc = 0x1EBC44u;
    {
        const bool branch_taken_0x1ebc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC44u;
        // 0x1ebc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc44) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBC4Cu;
label_1ebc4c:
    // 0x1ebc4c: 0x0  nop
    ctx->pc = 0x1ebc4cu;
    // NOP
label_1ebc50:
    // 0x1ebc50: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1ebc50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
label_1ebc54:
    // 0x1ebc54: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ebc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ebc58:
    // 0x1ebc58: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1ebc58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_1ebc5c:
    // 0x1ebc5c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x1ebc5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebc60:
    // 0x1ebc60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ebc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ebc64:
    // 0x1ebc64: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1ebc64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ebc68:
    // 0x1ebc68: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x1ebc68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
label_1ebc6c:
    // 0x1ebc6c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ebc70:
    if (ctx->pc == 0x1EBC70u) {
        ctx->pc = 0x1EBC74u;
        goto label_1ebc74;
    }
    ctx->pc = 0x1EBC6Cu;
    {
        const bool branch_taken_0x1ebc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebc6c) {
            ctx->pc = 0x1EBC90u;
            goto label_1ebc90;
        }
    }
    ctx->pc = 0x1EBC74u;
label_1ebc74:
    // 0x1ebc74: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1ebc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebc78:
    // 0x1ebc78: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ebc78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ebc7c:
    // 0x1ebc7c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ebc80:
    if (ctx->pc == 0x1EBC80u) {
        ctx->pc = 0x1EBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC7Cu;
        // 0x1ebc80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC84u;
        goto label_1ebc84;
    }
    ctx->pc = 0x1EBC7Cu;
    {
        const bool branch_taken_0x1ebc7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC7Cu;
        // 0x1ebc80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc7c) {
            ctx->pc = 0x1EBCB8u;
            goto label_1ebcb8;
        }
    }
    ctx->pc = 0x1EBC84u;
label_1ebc84:
    // 0x1ebc84: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1ebc84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ebc88:
    // 0x1ebc88: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ebc8c:
    if (ctx->pc == 0x1EBC8Cu) {
        ctx->pc = 0x1EBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC88u;
        // 0x1ebc8c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC90u;
        goto label_1ebc90;
    }
    ctx->pc = 0x1EBC88u;
    {
        const bool branch_taken_0x1ebc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC88u;
        // 0x1ebc8c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc88) {
            ctx->pc = 0x1EBCB8u;
            goto label_1ebcb8;
        }
    }
    ctx->pc = 0x1EBC90u;
label_1ebc90:
    // 0x1ebc90: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1ebc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebc94:
    // 0x1ebc94: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ebc94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebc98:
    // 0x1ebc98: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ebc9c:
    if (ctx->pc == 0x1EBC9Cu) {
        ctx->pc = 0x1EBCA0u;
        goto label_1ebca0;
    }
    ctx->pc = 0x1EBC98u;
    {
        const bool branch_taken_0x1ebc98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc98) {
            ctx->pc = 0x1EBCB8u;
            goto label_1ebcb8;
        }
    }
    ctx->pc = 0x1EBCA0u;
label_1ebca0:
    // 0x1ebca0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ebca4:
    // 0x1ebca4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ebca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ebca8:
    // 0x1ebca8: 0x320f809  jalr        $t9
label_1ebcac:
    if (ctx->pc == 0x1EBCACu) {
        ctx->pc = 0x1EBCB0u;
        goto label_1ebcb0;
    }
    ctx->pc = 0x1EBCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EBCB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBCA8u, 0x1EBCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBCB0u;
label_1ebcb0:
    // 0x1ebcb0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1ebcb4:
    if (ctx->pc == 0x1EBCB4u) {
        ctx->pc = 0x1EBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB0u;
        // 0x1ebcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCB8u;
        goto label_1ebcb8;
    }
    ctx->pc = 0x1EBCB0u;
    {
        const bool branch_taken_0x1ebcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB0u;
        // 0x1ebcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcb0) {
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBCB8u;
label_1ebcb8:
    // 0x1ebcb8: 0xc0743c0  jal         func_1D0F00
label_1ebcbc:
    if (ctx->pc == 0x1EBCBCu) {
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCC0u;
        goto label_1ebcc0;
    }
    ctx->pc = 0x1EBCB8u;
    SET_GPR_U32(ctx, 31, 0x1EBCC0u);
    ctx->pc = 0x1EBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCB8u;
    // 0x1ebcbc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EBCB8u, 0x1EBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCC0u;
label_1ebcc0:
    // 0x1ebcc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ebcc4:
    if (ctx->pc == 0x1EBCC4u) {
        ctx->pc = 0x1EBCC8u;
        goto label_1ebcc8;
    }
    ctx->pc = 0x1EBCC0u;
    {
        const bool branch_taken_0x1ebcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcc0) {
            ctx->pc = 0x1EBCD8u;
            goto label_1ebcd8;
        }
    }
    ctx->pc = 0x1EBCC8u;
label_1ebcc8:
    // 0x1ebcc8: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1ebcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ebccc:
    // 0x1ebccc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ebcccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ebcd0:
    // 0x1ebcd0: 0x320f809  jalr        $t9
label_1ebcd4:
    if (ctx->pc == 0x1EBCD4u) {
        ctx->pc = 0x1EBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCD0u;
        // 0x1ebcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCD8u;
        goto label_1ebcd8;
    }
    ctx->pc = 0x1EBCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EBCD8u);
        ctx->pc = 0x1EBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCD0u;
        // 0x1ebcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBCD0u, 0x1EBCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBCD8u;
label_1ebcd8:
    // 0x1ebcd8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1ebcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1ebcdc:
    // 0x1ebcdc: 0xc076800  jal         func_1DA000
label_1ebce0:
    if (ctx->pc == 0x1EBCE0u) {
        ctx->pc = 0x1EBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCDCu;
        // 0x1ebce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCE4u;
        goto label_1ebce4;
    }
    ctx->pc = 0x1EBCDCu;
    SET_GPR_U32(ctx, 31, 0x1EBCE4u);
    ctx->pc = 0x1EBCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCDCu;
    // 0x1ebce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EBCDCu, 0x1EBCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCE4u;
label_1ebce4:
    // 0x1ebce4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1ebce8:
    // 0x1ebce8: 0xc076800  jal         func_1DA000
label_1ebcec:
    if (ctx->pc == 0x1EBCECu) {
        ctx->pc = 0x1EBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCE8u;
        // 0x1ebcec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCF0u;
        goto label_1ebcf0;
    }
    ctx->pc = 0x1EBCE8u;
    SET_GPR_U32(ctx, 31, 0x1EBCF0u);
    ctx->pc = 0x1EBCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCE8u;
    // 0x1ebcec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EBCE8u, 0x1EBCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCF0u;
label_1ebcf0:
    // 0x1ebcf0: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1ebcf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_1ebcf4:
    // 0x1ebcf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ebcf8:
    // 0x1ebcf8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ebcfc:
    if (ctx->pc == 0x1EBCFCu) {
        ctx->pc = 0x1EBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCF8u;
        // 0x1ebcfc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD00u;
        goto label_1ebd00;
    }
    ctx->pc = 0x1EBCF8u;
    {
        const bool branch_taken_0x1ebcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCF8u;
        // 0x1ebcfc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcf8) {
            ctx->pc = 0x1EBD60u;
            goto label_1ebd60;
        }
    }
    ctx->pc = 0x1EBD00u;
label_1ebd00:
    // 0x1ebd00: 0xc0743e0  jal         func_1D0F80
label_1ebd04:
    if (ctx->pc == 0x1EBD04u) {
        ctx->pc = 0x1EBD08u;
        goto label_1ebd08;
    }
    ctx->pc = 0x1EBD00u;
    SET_GPR_U32(ctx, 31, 0x1EBD08u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EBD00u, 0x1EBD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD08u;
label_1ebd08:
    // 0x1ebd08: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ebd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ebd0c:
    // 0x1ebd0c: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ebd0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ebd10:
    // 0x1ebd10: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1ebd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1ebd14:
    // 0x1ebd14: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ebd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ebd18:
    // 0x1ebd18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ebd1c:
    if (ctx->pc == 0x1EBD1Cu) {
        ctx->pc = 0x1EBD20u;
        goto label_1ebd20;
    }
    ctx->pc = 0x1EBD18u;
    {
        const bool branch_taken_0x1ebd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd18) {
            ctx->pc = 0x1EBD38u;
            goto label_1ebd38;
        }
    }
    ctx->pc = 0x1EBD20u;
label_1ebd20:
    // 0x1ebd20: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ebd20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ebd24:
    // 0x1ebd24: 0x0  nop
    ctx->pc = 0x1ebd24u;
    // NOP
label_1ebd28:
    // 0x1ebd28: 0x0  nop
    ctx->pc = 0x1ebd28u;
    // NOP
label_1ebd2c:
    // 0x1ebd2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ebd2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ebd30:
    // 0x1ebd30: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1ebd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1ebd34:
    // 0x1ebd34: 0x0  nop
    ctx->pc = 0x1ebd34u;
    // NOP
label_1ebd38:
    // 0x1ebd38: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1ebd3c:
    // 0x1ebd3c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ebd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1ebd40:
    // 0x1ebd40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ebd44:
    if (ctx->pc == 0x1EBD44u) {
        ctx->pc = 0x1EBD48u;
        goto label_1ebd48;
    }
    ctx->pc = 0x1EBD40u;
    {
        const bool branch_taken_0x1ebd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd40) {
            ctx->pc = 0x1EBD60u;
            goto label_1ebd60;
        }
    }
    ctx->pc = 0x1EBD48u;
label_1ebd48:
    // 0x1ebd48: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1ebd48u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ebd4c:
    // 0x1ebd4c: 0x0  nop
    ctx->pc = 0x1ebd4cu;
    // NOP
label_1ebd50:
    // 0x1ebd50: 0x0  nop
    ctx->pc = 0x1ebd50u;
    // NOP
label_1ebd54:
    // 0x1ebd54: 0x1010  mfhi        $v0
    ctx->pc = 0x1ebd54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ebd58:
    // 0x1ebd58: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1ebd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_1ebd5c:
    // 0x1ebd5c: 0x0  nop
    ctx->pc = 0x1ebd5cu;
    // NOP
label_1ebd60:
    // 0x1ebd60: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1ebd60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_1ebd64:
    // 0x1ebd64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ebd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1ebd68:
    // 0x1ebd68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ebd6c:
    if (ctx->pc == 0x1EBD6Cu) {
        ctx->pc = 0x1EBD70u;
        goto label_1ebd70;
    }
    ctx->pc = 0x1EBD68u;
    {
        const bool branch_taken_0x1ebd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd68) {
            ctx->pc = 0x1EBD90u;
            goto label_1ebd90;
        }
    }
    ctx->pc = 0x1EBD70u;
label_1ebd70:
    // 0x1ebd70: 0x86230088  lh          $v1, 0x88($s1)
    ctx->pc = 0x1ebd70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
label_1ebd74:
    // 0x1ebd74: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1ebd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1ebd78:
    // 0x1ebd78: 0x7a240070  lq          $a0, 0x70($s1)
    ctx->pc = 0x1ebd78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 112)));
label_1ebd7c:
    // 0x1ebd7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebd80:
    // 0x1ebd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebd84:
    // 0x1ebd84: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ebd88:
    if (ctx->pc == 0x1EBD88u) {
        ctx->pc = 0x1EBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD84u;
        // 0x1ebd88: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD8Cu;
        goto label_1ebd8c;
    }
    ctx->pc = 0x1EBD84u;
    {
        const bool branch_taken_0x1ebd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD84u;
        // 0x1ebd88: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd84) {
            ctx->pc = 0x1EBDB0u;
            goto label_1ebdb0;
        }
    }
    ctx->pc = 0x1EBD8Cu;
label_1ebd8c:
    // 0x1ebd8c: 0x0  nop
    ctx->pc = 0x1ebd8cu;
    // NOP
label_1ebd90:
    // 0x1ebd90: 0x86230088  lh          $v1, 0x88($s1)
    ctx->pc = 0x1ebd90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
label_1ebd94:
    // 0x1ebd94: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1ebd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1ebd98:
    // 0x1ebd98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd9c:
    // 0x1ebd9c: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1ebda0:
    // 0x1ebda0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebda4:
    // 0x1ebda4: 0xc07679c  jal         func_1D9E70
label_1ebda8:
    if (ctx->pc == 0x1EBDA8u) {
        ctx->pc = 0x1EBDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDA4u;
        // 0x1ebda8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDACu;
        goto label_1ebdac;
    }
    ctx->pc = 0x1EBDA4u;
    SET_GPR_U32(ctx, 31, 0x1EBDACu);
    ctx->pc = 0x1EBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBDA4u;
    // 0x1ebda8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EBDA4u, 0x1EBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDACu;
label_1ebdac:
    // 0x1ebdac: 0x0  nop
    ctx->pc = 0x1ebdacu;
    // NOP
label_1ebdb0:
    // 0x1ebdb0: 0x86220088  lh          $v0, 0x88($s1)
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
label_1ebdb4:
    // 0x1ebdb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ebdb8:
    // 0x1ebdb8: 0xa6220088  sh          $v0, 0x88($s1)
    ctx->pc = 0x1ebdb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
label_1ebdbc:
    // 0x1ebdbc: 0x86230088  lh          $v1, 0x88($s1)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
label_1ebdc0:
    // 0x1ebdc0: 0x8622008e  lh          $v0, 0x8E($s1)
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
label_1ebdc4:
    // 0x1ebdc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ebdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ebdc8:
    // 0x1ebdc8: 0xa6220088  sh          $v0, 0x88($s1)
    ctx->pc = 0x1ebdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
label_1ebdcc:
    // 0x1ebdcc: 0x8623008a  lh          $v1, 0x8A($s1)
    ctx->pc = 0x1ebdccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
label_1ebdd0:
    // 0x1ebdd0: 0x8622008c  lh          $v0, 0x8C($s1)
    ctx->pc = 0x1ebdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 140)));
label_1ebdd4:
    // 0x1ebdd4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ebdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebdd8:
    // 0x1ebdd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1ebddc:
    if (ctx->pc == 0x1EBDDCu) {
        ctx->pc = 0x1EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD8u;
        // 0x1ebddc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDE0u;
        goto label_1ebde0;
    }
    ctx->pc = 0x1EBDD8u;
    {
        const bool branch_taken_0x1ebdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD8u;
        // 0x1ebddc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdd8) {
            ctx->pc = 0x1EBDE8u;
            goto label_1ebde8;
        }
    }
    ctx->pc = 0x1EBDE0u;
label_1ebde0:
    // 0x1ebde0: 0xa622008a  sh          $v0, 0x8A($s1)
    ctx->pc = 0x1ebde0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 138), (uint16_t)GPR_U32(ctx, 2));
label_1ebde4:
    // 0x1ebde4: 0x0  nop
    ctx->pc = 0x1ebde4u;
    // NOP
label_1ebde8:
    // 0x1ebde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebdec:
    // 0x1ebdec: 0x0  nop
    ctx->pc = 0x1ebdecu;
    // NOP
label_1ebdf0:
    // 0x1ebdf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ebdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebdf4:
    // 0x1ebdf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebdf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebdf8:
    // 0x1ebdf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebdfc:
    // 0x1ebdfc: 0x3e00008  jr          $ra
label_1ebe00:
    if (ctx->pc == 0x1EBE00u) {
        ctx->pc = 0x1EBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDFCu;
        // 0x1ebe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE04u;
        goto label_fallthrough_0x1ebdfc;
    }
    ctx->pc = 0x1EBDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDFCu;
        // 0x1ebe00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebdfc:
    ctx->pc = 0x1EBE04u;
}
