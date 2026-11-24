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

// Function: sub_002ACAD0
// Address: 0x2acad0 - 0x2acce8
void sub_002ACAD0_0x2acad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACAD0_0x2acad0");
#endif

    switch (ctx->pc) {
        case 0x2acad0u: goto label_2acad0;
        case 0x2acad4u: goto label_2acad4;
        case 0x2acad8u: goto label_2acad8;
        case 0x2acadcu: goto label_2acadc;
        case 0x2acae0u: goto label_2acae0;
        case 0x2acae4u: goto label_2acae4;
        case 0x2acae8u: goto label_2acae8;
        case 0x2acaecu: goto label_2acaec;
        case 0x2acaf0u: goto label_2acaf0;
        case 0x2acaf4u: goto label_2acaf4;
        case 0x2acaf8u: goto label_2acaf8;
        case 0x2acafcu: goto label_2acafc;
        case 0x2acb00u: goto label_2acb00;
        case 0x2acb04u: goto label_2acb04;
        case 0x2acb08u: goto label_2acb08;
        case 0x2acb0cu: goto label_2acb0c;
        case 0x2acb10u: goto label_2acb10;
        case 0x2acb14u: goto label_2acb14;
        case 0x2acb18u: goto label_2acb18;
        case 0x2acb1cu: goto label_2acb1c;
        case 0x2acb20u: goto label_2acb20;
        case 0x2acb24u: goto label_2acb24;
        case 0x2acb28u: goto label_2acb28;
        case 0x2acb2cu: goto label_2acb2c;
        case 0x2acb30u: goto label_2acb30;
        case 0x2acb34u: goto label_2acb34;
        case 0x2acb38u: goto label_2acb38;
        case 0x2acb3cu: goto label_2acb3c;
        case 0x2acb40u: goto label_2acb40;
        case 0x2acb44u: goto label_2acb44;
        case 0x2acb48u: goto label_2acb48;
        case 0x2acb4cu: goto label_2acb4c;
        case 0x2acb50u: goto label_2acb50;
        case 0x2acb54u: goto label_2acb54;
        case 0x2acb58u: goto label_2acb58;
        case 0x2acb5cu: goto label_2acb5c;
        case 0x2acb60u: goto label_2acb60;
        case 0x2acb64u: goto label_2acb64;
        case 0x2acb68u: goto label_2acb68;
        case 0x2acb6cu: goto label_2acb6c;
        case 0x2acb70u: goto label_2acb70;
        case 0x2acb74u: goto label_2acb74;
        case 0x2acb78u: goto label_2acb78;
        case 0x2acb7cu: goto label_2acb7c;
        case 0x2acb80u: goto label_2acb80;
        case 0x2acb84u: goto label_2acb84;
        case 0x2acb88u: goto label_2acb88;
        case 0x2acb8cu: goto label_2acb8c;
        case 0x2acb90u: goto label_2acb90;
        case 0x2acb94u: goto label_2acb94;
        case 0x2acb98u: goto label_2acb98;
        case 0x2acb9cu: goto label_2acb9c;
        case 0x2acba0u: goto label_2acba0;
        case 0x2acba4u: goto label_2acba4;
        case 0x2acba8u: goto label_2acba8;
        case 0x2acbacu: goto label_2acbac;
        case 0x2acbb0u: goto label_2acbb0;
        case 0x2acbb4u: goto label_2acbb4;
        case 0x2acbb8u: goto label_2acbb8;
        case 0x2acbbcu: goto label_2acbbc;
        case 0x2acbc0u: goto label_2acbc0;
        case 0x2acbc4u: goto label_2acbc4;
        case 0x2acbc8u: goto label_2acbc8;
        case 0x2acbccu: goto label_2acbcc;
        case 0x2acbd0u: goto label_2acbd0;
        case 0x2acbd4u: goto label_2acbd4;
        case 0x2acbd8u: goto label_2acbd8;
        case 0x2acbdcu: goto label_2acbdc;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acbe4u: goto label_2acbe4;
        case 0x2acbe8u: goto label_2acbe8;
        case 0x2acbecu: goto label_2acbec;
        case 0x2acbf0u: goto label_2acbf0;
        case 0x2acbf4u: goto label_2acbf4;
        case 0x2acbf8u: goto label_2acbf8;
        case 0x2acbfcu: goto label_2acbfc;
        case 0x2acc00u: goto label_2acc00;
        case 0x2acc04u: goto label_2acc04;
        case 0x2acc08u: goto label_2acc08;
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc10u: goto label_2acc10;
        case 0x2acc14u: goto label_2acc14;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc1cu: goto label_2acc1c;
        case 0x2acc20u: goto label_2acc20;
        case 0x2acc24u: goto label_2acc24;
        case 0x2acc28u: goto label_2acc28;
        case 0x2acc2cu: goto label_2acc2c;
        case 0x2acc30u: goto label_2acc30;
        case 0x2acc34u: goto label_2acc34;
        case 0x2acc38u: goto label_2acc38;
        case 0x2acc3cu: goto label_2acc3c;
        case 0x2acc40u: goto label_2acc40;
        case 0x2acc44u: goto label_2acc44;
        case 0x2acc48u: goto label_2acc48;
        case 0x2acc4cu: goto label_2acc4c;
        case 0x2acc50u: goto label_2acc50;
        case 0x2acc54u: goto label_2acc54;
        case 0x2acc58u: goto label_2acc58;
        case 0x2acc5cu: goto label_2acc5c;
        case 0x2acc60u: goto label_2acc60;
        case 0x2acc64u: goto label_2acc64;
        case 0x2acc68u: goto label_2acc68;
        case 0x2acc6cu: goto label_2acc6c;
        case 0x2acc70u: goto label_2acc70;
        case 0x2acc74u: goto label_2acc74;
        case 0x2acc78u: goto label_2acc78;
        case 0x2acc7cu: goto label_2acc7c;
        case 0x2acc80u: goto label_2acc80;
        case 0x2acc84u: goto label_2acc84;
        case 0x2acc88u: goto label_2acc88;
        case 0x2acc8cu: goto label_2acc8c;
        case 0x2acc90u: goto label_2acc90;
        case 0x2acc94u: goto label_2acc94;
        case 0x2acc98u: goto label_2acc98;
        case 0x2acc9cu: goto label_2acc9c;
        case 0x2acca0u: goto label_2acca0;
        case 0x2acca4u: goto label_2acca4;
        case 0x2acca8u: goto label_2acca8;
        case 0x2accacu: goto label_2accac;
        case 0x2accb0u: goto label_2accb0;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accb8u: goto label_2accb8;
        case 0x2accbcu: goto label_2accbc;
        case 0x2accc0u: goto label_2accc0;
        case 0x2accc4u: goto label_2accc4;
        case 0x2accc8u: goto label_2accc8;
        case 0x2accccu: goto label_2acccc;
        case 0x2accd0u: goto label_2accd0;
        case 0x2accd4u: goto label_2accd4;
        case 0x2accd8u: goto label_2accd8;
        case 0x2accdcu: goto label_2accdc;
        case 0x2acce0u: goto label_2acce0;
        case 0x2acce4u: goto label_2acce4;
        default: break;
    }

    ctx->pc = 0x2acad0u;

label_2acad0:
    // 0x2acad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2acad4:
    // 0x2acad4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2acad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2acad8:
    // 0x2acad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2acad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2acadc:
    // 0x2acadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2acae0:
    // 0x2acae0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2acae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2acae4:
    // 0x2acae4: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x2acae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_2acae8:
    // 0x2acae8: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2acae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2acaec:
    // 0x2acaec: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2acaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2acaf0:
    // 0x2acaf0: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x2acaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_2acaf4:
    // 0x2acaf4: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2acaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2acaf8:
    // 0x2acaf8: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2acaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2acafc:
    // 0x2acafc: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x2acafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
label_2acb00:
    // 0x2acb00: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2acb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2acb04:
    // 0x2acb04: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2acb08:
    // 0x2acb08: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x2acb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_2acb0c:
    // 0x2acb0c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2acb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2acb10:
    // 0x2acb10: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2acb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2acb14:
    // 0x2acb14: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2acb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_2acb18:
    // 0x2acb18: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2acb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2acb1c:
    // 0x2acb1c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x2acb1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2acb20:
    // 0x2acb20: 0x10a3005d  beq         $a1, $v1, . + 4 + (0x5D << 2)
label_2acb24:
    if (ctx->pc == 0x2ACB24u) {
        ctx->pc = 0x2ACB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB20u;
        // 0x2acb24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB28u;
        goto label_2acb28;
    }
    ctx->pc = 0x2ACB20u;
    {
        const bool branch_taken_0x2acb20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ACB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB20u;
        // 0x2acb24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb20) {
            ctx->pc = 0x2ACC98u;
            goto label_2acc98;
        }
    }
    ctx->pc = 0x2ACB28u;
label_2acb28:
    // 0x2acb28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2acb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acb2c:
    // 0x2acb2c: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_2acb30:
    if (ctx->pc == 0x2ACB30u) {
        ctx->pc = 0x2ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB2Cu;
        // 0x2acb30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB34u;
        goto label_2acb34;
    }
    ctx->pc = 0x2ACB2Cu;
    {
        const bool branch_taken_0x2acb2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB2Cu;
        // 0x2acb30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb2c) {
            ctx->pc = 0x2ACC10u;
            goto label_2acc10;
        }
    }
    ctx->pc = 0x2ACB34u;
label_2acb34:
    // 0x2acb34: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
label_2acb38:
    if (ctx->pc == 0x2ACB38u) {
        ctx->pc = 0x2ACB3Cu;
        goto label_2acb3c;
    }
    ctx->pc = 0x2ACB34u;
    {
        const bool branch_taken_0x2acb34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2acb34) {
            ctx->pc = 0x2ACBC8u;
            goto label_2acbc8;
        }
    }
    ctx->pc = 0x2ACB3Cu;
label_2acb3c:
    // 0x2acb3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2acb40:
    if (ctx->pc == 0x2ACB40u) {
        ctx->pc = 0x2ACB44u;
        goto label_2acb44;
    }
    ctx->pc = 0x2ACB3Cu;
    {
        const bool branch_taken_0x2acb3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb3c) {
            ctx->pc = 0x2ACB50u;
            goto label_2acb50;
        }
    }
    ctx->pc = 0x2ACB44u;
label_2acb44:
    // 0x2acb44: 0x10000064  b           . + 4 + (0x64 << 2)
label_2acb48:
    if (ctx->pc == 0x2ACB48u) {
        ctx->pc = 0x2ACB4Cu;
        goto label_2acb4c;
    }
    ctx->pc = 0x2ACB44u;
    {
        const bool branch_taken_0x2acb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb44) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACB4Cu;
label_2acb4c:
    // 0x2acb4c: 0x0  nop
    ctx->pc = 0x2acb4cu;
    // NOP
label_2acb50:
    // 0x2acb50: 0xc06039c  jal         func_180E70
label_2acb54:
    if (ctx->pc == 0x2ACB54u) {
        ctx->pc = 0x2ACB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB50u;
        // 0x2acb54: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB58u;
        goto label_2acb58;
    }
    ctx->pc = 0x2ACB50u;
    SET_GPR_U32(ctx, 31, 0x2ACB58u);
    ctx->pc = 0x2ACB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB50u;
    // 0x2acb54: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2ACB50u, 0x2ACB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB58u;
label_2acb58:
    // 0x2acb58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2acb5c:
    // 0x2acb5c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2acb60:
    // 0x2acb60: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_2acb64:
    if (ctx->pc == 0x2ACB64u) {
        ctx->pc = 0x2ACB68u;
        goto label_2acb68;
    }
    ctx->pc = 0x2ACB60u;
    {
        const bool branch_taken_0x2acb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2acb60) {
            ctx->pc = 0x2ACB88u;
            goto label_2acb88;
        }
    }
    ctx->pc = 0x2ACB68u;
label_2acb68:
    // 0x2acb68: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2acb68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2acb6c:
    // 0x2acb6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2acb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2acb70:
    // 0x2acb70: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2acb70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2acb74:
    // 0x2acb74: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2acb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2acb78:
    // 0x2acb78: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2acb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2acb7c:
    // 0x2acb7c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2acb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2acb80:
    // 0x2acb80: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x2acb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2acb84:
    // 0x2acb84: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2acb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2acb88:
    // 0x2acb88: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2acb8c:
    // 0x2acb8c: 0xc096908  jal         func_25A420
label_2acb90:
    if (ctx->pc == 0x2ACB90u) {
        ctx->pc = 0x2ACB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB8Cu;
        // 0x2acb90: 0x26050870  addiu       $a1, $s0, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB94u;
        goto label_2acb94;
    }
    ctx->pc = 0x2ACB8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB94u);
    ctx->pc = 0x2ACB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB8Cu;
    // 0x2acb90: 0x26050870  addiu       $a1, $s0, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2ACB8Cu, 0x2ACB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB94u;
label_2acb94:
    // 0x2acb94: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2acb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_2acb98:
    // 0x2acb98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2acb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2acb9c:
    // 0x2acb9c: 0x0  nop
    ctx->pc = 0x2acb9cu;
    // NOP
label_2acba0:
    // 0x2acba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2acba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2acba4:
    // 0x2acba4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2acba8:
    if (ctx->pc == 0x2ACBA8u) {
        ctx->pc = 0x2ACBACu;
        goto label_2acbac;
    }
    ctx->pc = 0x2ACBA4u;
    {
        const bool branch_taken_0x2acba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2acba4) {
            ctx->pc = 0x2ACBC0u;
            goto label_2acbc0;
        }
    }
    ctx->pc = 0x2ACBACu;
label_2acbac:
    // 0x2acbac: 0x7a040870  lq          $a0, 0x870($s0)
    ctx->pc = 0x2acbacu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
label_2acbb0:
    // 0x2acbb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2acbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2acbb4:
    // 0x2acbb4: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2acbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
label_2acbb8:
    // 0x2acbb8: 0x10000047  b           . + 4 + (0x47 << 2)
label_2acbbc:
    if (ctx->pc == 0x2ACBBCu) {
        ctx->pc = 0x2ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBB8u;
        // 0x2acbbc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBC0u;
        goto label_2acbc0;
    }
    ctx->pc = 0x2ACBB8u;
    {
        const bool branch_taken_0x2acbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBB8u;
        // 0x2acbbc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbb8) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACBC0u;
label_2acbc0:
    // 0x2acbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acbc4:
    // 0x2acbc4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x2acbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_2acbc8:
    // 0x2acbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acbcc:
    // 0x2acbcc: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x2acbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
label_2acbd0:
    // 0x2acbd0: 0xc0a23e4  jal         func_288F90
label_2acbd4:
    if (ctx->pc == 0x2ACBD4u) {
        ctx->pc = 0x2ACBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBD0u;
        // 0x2acbd4: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBD8u;
        goto label_2acbd8;
    }
    ctx->pc = 0x2ACBD0u;
    SET_GPR_U32(ctx, 31, 0x2ACBD8u);
    ctx->pc = 0x2ACBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBD0u;
    // 0x2acbd4: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x2ACBD0u, 0x2ACBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBD8u;
label_2acbd8:
    // 0x2acbd8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_2acbdc:
    if (ctx->pc == 0x2ACBDCu) {
        ctx->pc = 0x2ACBE0u;
        goto label_2acbe0;
    }
    ctx->pc = 0x2ACBD8u;
    {
        const bool branch_taken_0x2acbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acbd8) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACBE0u;
label_2acbe0:
    // 0x2acbe0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2acbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2acbe4:
    // 0x2acbe4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2acbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2acbe8:
    // 0x2acbe8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2acbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2acbec:
    // 0x2acbec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2acbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2acbf0:
    // 0x2acbf0: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2acbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2acbf4:
    // 0x2acbf4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2acbf8:
    // 0x2acbf8: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2acbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2acbfc:
    // 0x2acbfc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2acbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2acc00:
    // 0x2acc00: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2acc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2acc04:
    // 0x2acc04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2acc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acc08:
    // 0x2acc08: 0x10000033  b           . + 4 + (0x33 << 2)
label_2acc0c:
    if (ctx->pc == 0x2ACC0Cu) {
        ctx->pc = 0x2ACC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC08u;
        // 0x2acc0c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC10u;
        goto label_2acc10;
    }
    ctx->pc = 0x2ACC08u;
    {
        const bool branch_taken_0x2acc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC08u;
        // 0x2acc0c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc08) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACC10u;
label_2acc10:
    // 0x2acc10: 0x26040870  addiu       $a0, $s0, 0x870
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
label_2acc14:
    // 0x2acc14: 0xc096838  jal         func_25A0E0
label_2acc18:
    if (ctx->pc == 0x2ACC18u) {
        ctx->pc = 0x2ACC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC14u;
        // 0x2acc18: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC1Cu;
        goto label_2acc1c;
    }
    ctx->pc = 0x2ACC14u;
    SET_GPR_U32(ctx, 31, 0x2ACC1Cu);
    ctx->pc = 0x2ACC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC14u;
    // 0x2acc18: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2ACC14u, 0x2ACC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC1Cu;
label_2acc1c:
    // 0x2acc1c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2acc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_2acc20:
    // 0x2acc20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2acc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2acc24:
    // 0x2acc24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2acc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2acc28:
    // 0x2acc28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2acc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2acc2c:
    // 0x2acc2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2acc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2acc30:
    // 0x2acc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acc34:
    // 0x2acc34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2acc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2acc38:
    // 0x2acc38: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x2acc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
label_2acc3c:
    // 0x2acc3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2acc3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2acc40:
    // 0x2acc40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2acc40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2acc44:
    // 0x2acc44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2acc44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2acc48:
    // 0x2acc48: 0x0  nop
    ctx->pc = 0x2acc48u;
    // NOP
label_2acc4c:
    // 0x2acc4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2acc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2acc50:
    // 0x2acc50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2acc50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2acc54:
    // 0x2acc54: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2acc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_2acc58:
    // 0x2acc58: 0xc0a2404  jal         func_289010
label_2acc5c:
    if (ctx->pc == 0x2ACC5Cu) {
        ctx->pc = 0x2ACC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC58u;
        // 0x2acc5c: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC60u;
        goto label_2acc60;
    }
    ctx->pc = 0x2ACC58u;
    SET_GPR_U32(ctx, 31, 0x2ACC60u);
    ctx->pc = 0x2ACC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC58u;
    // 0x2acc5c: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289010u, 0x2ACC58u, 0x2ACC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC60u;
label_2acc60:
    // 0x2acc60: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2acc64:
    if (ctx->pc == 0x2ACC64u) {
        ctx->pc = 0x2ACC68u;
        goto label_2acc68;
    }
    ctx->pc = 0x2ACC60u;
    {
        const bool branch_taken_0x2acc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acc60) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACC68u;
label_2acc68:
    // 0x2acc68: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2acc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2acc6c:
    // 0x2acc6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2acc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2acc70:
    // 0x2acc70: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2acc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2acc74:
    // 0x2acc74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2acc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2acc78:
    // 0x2acc78: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2acc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2acc7c:
    // 0x2acc7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2acc80:
    // 0x2acc80: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2acc80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2acc84:
    // 0x2acc84: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2acc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2acc88:
    // 0x2acc88: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2acc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2acc8c:
    // 0x2acc8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2acc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2acc90:
    // 0x2acc90: 0x10000011  b           . + 4 + (0x11 << 2)
label_2acc94:
    if (ctx->pc == 0x2ACC94u) {
        ctx->pc = 0x2ACC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC90u;
        // 0x2acc94: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC98u;
        goto label_2acc98;
    }
    ctx->pc = 0x2ACC90u;
    {
        const bool branch_taken_0x2acc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC90u;
        // 0x2acc94: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc90) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACC98u;
label_2acc98:
    // 0x2acc98: 0x860508a0  lh          $a1, 0x8A0($s0)
    ctx->pc = 0x2acc98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2208)));
label_2acc9c:
    // 0x2acc9c: 0xc0a23b0  jal         func_288EC0
label_2acca0:
    if (ctx->pc == 0x2ACCA0u) {
        ctx->pc = 0x2ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC9Cu;
        // 0x2acca0: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACCA4u;
        goto label_2acca4;
    }
    ctx->pc = 0x2ACC9Cu;
    SET_GPR_U32(ctx, 31, 0x2ACCA4u);
    ctx->pc = 0x2ACCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC9Cu;
    // 0x2acca0: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x2ACC9Cu, 0x2ACCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCA4u;
label_2acca4:
    // 0x2acca4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2acca8:
    if (ctx->pc == 0x2ACCA8u) {
        ctx->pc = 0x2ACCACu;
        goto label_2accac;
    }
    ctx->pc = 0x2ACCA4u;
    {
        const bool branch_taken_0x2acca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acca4) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACCACu;
label_2accac:
    // 0x2accac: 0x92040822  lbu         $a0, 0x822($s0)
    ctx->pc = 0x2accacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2082)));
label_2accb0:
    // 0x2accb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2accb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2accb4:
    // 0x2accb4: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x2accb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
label_2accb8:
    // 0x2accb8: 0x92040822  lbu         $a0, 0x822($s0)
    ctx->pc = 0x2accb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2082)));
label_2accbc:
    // 0x2accbc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2accc0:
    if (ctx->pc == 0x2ACCC0u) {
        ctx->pc = 0x2ACCC4u;
        goto label_2accc4;
    }
    ctx->pc = 0x2ACCBCu;
    {
        const bool branch_taken_0x2accbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2accbc) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACCC4u;
label_2accc4:
    // 0x2accc4: 0x8e0308c4  lw          $v1, 0x8C4($s0)
    ctx->pc = 0x2accc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2244)));
label_2accc8:
    // 0x2accc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2acccc:
    if (ctx->pc == 0x2ACCCCu) {
        ctx->pc = 0x2ACCD0u;
        goto label_2accd0;
    }
    ctx->pc = 0x2ACCC8u;
    {
        const bool branch_taken_0x2accc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2accc8) {
            ctx->pc = 0x2ACCD8u;
            goto label_2accd8;
        }
    }
    ctx->pc = 0x2ACCD0u;
label_2accd0:
    // 0x2accd0: 0x60f809  jalr        $v1
label_2accd4:
    if (ctx->pc == 0x2ACCD4u) {
        ctx->pc = 0x2ACCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCD0u;
        // 0x2accd4: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACCD8u;
        goto label_2accd8;
    }
    ctx->pc = 0x2ACCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ACCD8u);
        ctx->pc = 0x2ACCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCD0u;
        // 0x2accd4: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCD0u, 0x2ACCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACCD8u;
label_2accd8:
    // 0x2accd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2accd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2accdc:
    // 0x2accdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2accdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2acce0:
    // 0x2acce0: 0x3e00008  jr          $ra
label_2acce4:
    if (ctx->pc == 0x2ACCE4u) {
        ctx->pc = 0x2ACCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCE0u;
        // 0x2acce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACCE8u;
        goto label_fallthrough_0x2acce0;
    }
    ctx->pc = 0x2ACCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCE0u;
        // 0x2acce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2acce0:
    ctx->pc = 0x2ACCE8u;
}
