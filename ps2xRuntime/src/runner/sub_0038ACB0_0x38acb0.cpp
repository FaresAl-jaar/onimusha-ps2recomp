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

// Function: sub_0038ACB0
// Address: 0x38acb0 - 0x38ae60
void sub_0038ACB0_0x38acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ACB0_0x38acb0");
#endif

    switch (ctx->pc) {
        case 0x38acb0u: goto label_38acb0;
        case 0x38acb4u: goto label_38acb4;
        case 0x38acb8u: goto label_38acb8;
        case 0x38acbcu: goto label_38acbc;
        case 0x38acc0u: goto label_38acc0;
        case 0x38acc4u: goto label_38acc4;
        case 0x38acc8u: goto label_38acc8;
        case 0x38acccu: goto label_38accc;
        case 0x38acd0u: goto label_38acd0;
        case 0x38acd4u: goto label_38acd4;
        case 0x38acd8u: goto label_38acd8;
        case 0x38acdcu: goto label_38acdc;
        case 0x38ace0u: goto label_38ace0;
        case 0x38ace4u: goto label_38ace4;
        case 0x38ace8u: goto label_38ace8;
        case 0x38acecu: goto label_38acec;
        case 0x38acf0u: goto label_38acf0;
        case 0x38acf4u: goto label_38acf4;
        case 0x38acf8u: goto label_38acf8;
        case 0x38acfcu: goto label_38acfc;
        case 0x38ad00u: goto label_38ad00;
        case 0x38ad04u: goto label_38ad04;
        case 0x38ad08u: goto label_38ad08;
        case 0x38ad0cu: goto label_38ad0c;
        case 0x38ad10u: goto label_38ad10;
        case 0x38ad14u: goto label_38ad14;
        case 0x38ad18u: goto label_38ad18;
        case 0x38ad1cu: goto label_38ad1c;
        case 0x38ad20u: goto label_38ad20;
        case 0x38ad24u: goto label_38ad24;
        case 0x38ad28u: goto label_38ad28;
        case 0x38ad2cu: goto label_38ad2c;
        case 0x38ad30u: goto label_38ad30;
        case 0x38ad34u: goto label_38ad34;
        case 0x38ad38u: goto label_38ad38;
        case 0x38ad3cu: goto label_38ad3c;
        case 0x38ad40u: goto label_38ad40;
        case 0x38ad44u: goto label_38ad44;
        case 0x38ad48u: goto label_38ad48;
        case 0x38ad4cu: goto label_38ad4c;
        case 0x38ad50u: goto label_38ad50;
        case 0x38ad54u: goto label_38ad54;
        case 0x38ad58u: goto label_38ad58;
        case 0x38ad5cu: goto label_38ad5c;
        case 0x38ad60u: goto label_38ad60;
        case 0x38ad64u: goto label_38ad64;
        case 0x38ad68u: goto label_38ad68;
        case 0x38ad6cu: goto label_38ad6c;
        case 0x38ad70u: goto label_38ad70;
        case 0x38ad74u: goto label_38ad74;
        case 0x38ad78u: goto label_38ad78;
        case 0x38ad7cu: goto label_38ad7c;
        case 0x38ad80u: goto label_38ad80;
        case 0x38ad84u: goto label_38ad84;
        case 0x38ad88u: goto label_38ad88;
        case 0x38ad8cu: goto label_38ad8c;
        case 0x38ad90u: goto label_38ad90;
        case 0x38ad94u: goto label_38ad94;
        case 0x38ad98u: goto label_38ad98;
        case 0x38ad9cu: goto label_38ad9c;
        case 0x38ada0u: goto label_38ada0;
        case 0x38ada4u: goto label_38ada4;
        case 0x38ada8u: goto label_38ada8;
        case 0x38adacu: goto label_38adac;
        case 0x38adb0u: goto label_38adb0;
        case 0x38adb4u: goto label_38adb4;
        case 0x38adb8u: goto label_38adb8;
        case 0x38adbcu: goto label_38adbc;
        case 0x38adc0u: goto label_38adc0;
        case 0x38adc4u: goto label_38adc4;
        case 0x38adc8u: goto label_38adc8;
        case 0x38adccu: goto label_38adcc;
        case 0x38add0u: goto label_38add0;
        case 0x38add4u: goto label_38add4;
        case 0x38add8u: goto label_38add8;
        case 0x38addcu: goto label_38addc;
        case 0x38ade0u: goto label_38ade0;
        case 0x38ade4u: goto label_38ade4;
        case 0x38ade8u: goto label_38ade8;
        case 0x38adecu: goto label_38adec;
        case 0x38adf0u: goto label_38adf0;
        case 0x38adf4u: goto label_38adf4;
        case 0x38adf8u: goto label_38adf8;
        case 0x38adfcu: goto label_38adfc;
        case 0x38ae00u: goto label_38ae00;
        case 0x38ae04u: goto label_38ae04;
        case 0x38ae08u: goto label_38ae08;
        case 0x38ae0cu: goto label_38ae0c;
        case 0x38ae10u: goto label_38ae10;
        case 0x38ae14u: goto label_38ae14;
        case 0x38ae18u: goto label_38ae18;
        case 0x38ae1cu: goto label_38ae1c;
        case 0x38ae20u: goto label_38ae20;
        case 0x38ae24u: goto label_38ae24;
        case 0x38ae28u: goto label_38ae28;
        case 0x38ae2cu: goto label_38ae2c;
        case 0x38ae30u: goto label_38ae30;
        case 0x38ae34u: goto label_38ae34;
        case 0x38ae38u: goto label_38ae38;
        case 0x38ae3cu: goto label_38ae3c;
        case 0x38ae40u: goto label_38ae40;
        case 0x38ae44u: goto label_38ae44;
        case 0x38ae48u: goto label_38ae48;
        case 0x38ae4cu: goto label_38ae4c;
        case 0x38ae50u: goto label_38ae50;
        case 0x38ae54u: goto label_38ae54;
        case 0x38ae58u: goto label_38ae58;
        case 0x38ae5cu: goto label_38ae5c;
        default: break;
    }

    ctx->pc = 0x38acb0u;

label_38acb0:
    // 0x38acb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38acb4:
    // 0x38acb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38acb8:
    // 0x38acb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38acbc:
    // 0x38acbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38acc0:
    // 0x38acc0: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x38acc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_38acc4:
    // 0x38acc4: 0x10a3005e  beq         $a1, $v1, . + 4 + (0x5E << 2)
label_38acc8:
    if (ctx->pc == 0x38ACC8u) {
        ctx->pc = 0x38ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACC4u;
        // 0x38acc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACCCu;
        goto label_38accc;
    }
    ctx->pc = 0x38ACC4u;
    {
        const bool branch_taken_0x38acc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACC4u;
        // 0x38acc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acc4) {
            ctx->pc = 0x38AE40u;
            goto label_38ae40;
        }
    }
    ctx->pc = 0x38ACCCu;
label_38accc:
    // 0x38accc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38acd0:
    // 0x38acd0: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
label_38acd4:
    if (ctx->pc == 0x38ACD4u) {
        ctx->pc = 0x38ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACD0u;
        // 0x38acd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACD8u;
        goto label_38acd8;
    }
    ctx->pc = 0x38ACD0u;
    {
        const bool branch_taken_0x38acd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACD0u;
        // 0x38acd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acd0) {
            ctx->pc = 0x38ADC8u;
            goto label_38adc8;
        }
    }
    ctx->pc = 0x38ACD8u;
label_38acd8:
    // 0x38acd8: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
label_38acdc:
    if (ctx->pc == 0x38ACDCu) {
        ctx->pc = 0x38ACE0u;
        goto label_38ace0;
    }
    ctx->pc = 0x38ACD8u;
    {
        const bool branch_taken_0x38acd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38acd8) {
            ctx->pc = 0x38AD88u;
            goto label_38ad88;
        }
    }
    ctx->pc = 0x38ACE0u;
label_38ace0:
    // 0x38ace0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ace4:
    // 0x38ace4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_38ace8:
    if (ctx->pc == 0x38ACE8u) {
        ctx->pc = 0x38ACECu;
        goto label_38acec;
    }
    ctx->pc = 0x38ACE4u;
    {
        const bool branch_taken_0x38ace4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38ace4) {
            ctx->pc = 0x38AD18u;
            goto label_38ad18;
        }
    }
    ctx->pc = 0x38ACECu;
label_38acec:
    // 0x38acec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_38acf0:
    if (ctx->pc == 0x38ACF0u) {
        ctx->pc = 0x38ACF4u;
        goto label_38acf4;
    }
    ctx->pc = 0x38ACECu;
    {
        const bool branch_taken_0x38acec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38acec) {
            ctx->pc = 0x38AD00u;
            goto label_38ad00;
        }
    }
    ctx->pc = 0x38ACF4u;
label_38acf4:
    // 0x38acf4: 0x10000056  b           . + 4 + (0x56 << 2)
label_38acf8:
    if (ctx->pc == 0x38ACF8u) {
        ctx->pc = 0x38ACFCu;
        goto label_38acfc;
    }
    ctx->pc = 0x38ACF4u;
    {
        const bool branch_taken_0x38acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38acf4) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38ACFCu;
label_38acfc:
    // 0x38acfc: 0x0  nop
    ctx->pc = 0x38acfcu;
    // NOP
label_38ad00:
    // 0x38ad00: 0xc0e2adc  jal         func_38AB70
label_38ad04:
    if (ctx->pc == 0x38AD04u) {
        ctx->pc = 0x38AD08u;
        goto label_38ad08;
    }
    ctx->pc = 0x38AD00u;
    SET_GPR_U32(ctx, 31, 0x38AD08u);
    ctx->pc = 0x38AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AB70u, 0x38AD00u, 0x38AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD08u;
label_38ad08:
    // 0x38ad08: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_38ad0c:
    if (ctx->pc == 0x38AD0Cu) {
        ctx->pc = 0x38AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD08u;
        // 0x38ad0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD10u;
        goto label_38ad10;
    }
    ctx->pc = 0x38AD08u;
    {
        const bool branch_taken_0x38ad08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD08u;
        // 0x38ad0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad08) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AD10u;
label_38ad10:
    // 0x38ad10: 0x1000004f  b           . + 4 + (0x4F << 2)
label_38ad14:
    if (ctx->pc == 0x38AD14u) {
        ctx->pc = 0x38AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD10u;
        // 0x38ad14: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD18u;
        goto label_38ad18;
    }
    ctx->pc = 0x38AD10u;
    {
        const bool branch_taken_0x38ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD10u;
        // 0x38ad14: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad10) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AD18u;
label_38ad18:
    // 0x38ad18: 0xc0d16a0  jal         func_345A80
label_38ad1c:
    if (ctx->pc == 0x38AD1Cu) {
        ctx->pc = 0x38AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD18u;
        // 0x38ad1c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD20u;
        goto label_38ad20;
    }
    ctx->pc = 0x38AD18u;
    SET_GPR_U32(ctx, 31, 0x38AD20u);
    ctx->pc = 0x38AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD18u;
    // 0x38ad1c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A80u, 0x38AD18u, 0x38AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD20u;
label_38ad20:
    // 0x38ad20: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x38ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38ad24:
    // 0x38ad24: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x38ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_38ad28:
    // 0x38ad28: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x38ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_38ad2c:
    // 0x38ad2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x38ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_38ad30:
    // 0x38ad30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x38ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38ad34:
    // 0x38ad34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x38ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_38ad38:
    // 0x38ad38: 0x96052ace  lhu         $a1, 0x2ACE($s0)
    ctx->pc = 0x38ad38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10958)));
label_38ad3c:
    // 0x38ad3c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38ad40:
    // 0x38ad40: 0xc0d165c  jal         func_345970
label_38ad44:
    if (ctx->pc == 0x38AD44u) {
        ctx->pc = 0x38AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD40u;
        // 0x38ad44: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD48u;
        goto label_38ad48;
    }
    ctx->pc = 0x38AD40u;
    SET_GPR_U32(ctx, 31, 0x38AD48u);
    ctx->pc = 0x38AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD40u;
    // 0x38ad44: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38AD40u, 0x38AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD48u;
label_38ad48:
    // 0x38ad48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ad4c:
    // 0x38ad4c: 0xc0d0548  jal         func_341520
label_38ad50:
    if (ctx->pc == 0x38AD50u) {
        ctx->pc = 0x38AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD4Cu;
        // 0x38ad50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD54u;
        goto label_38ad54;
    }
    ctx->pc = 0x38AD4Cu;
    SET_GPR_U32(ctx, 31, 0x38AD54u);
    ctx->pc = 0x38AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD4Cu;
    // 0x38ad50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38AD4Cu, 0x38AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD54u;
label_38ad54:
    // 0x38ad54: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x38ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_38ad58:
    // 0x38ad58: 0xc053b28  jal         func_14ECA0
label_38ad5c:
    if (ctx->pc == 0x38AD5Cu) {
        ctx->pc = 0x38AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD58u;
        // 0x38ad5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD60u;
        goto label_38ad60;
    }
    ctx->pc = 0x38AD58u;
    SET_GPR_U32(ctx, 31, 0x38AD60u);
    ctx->pc = 0x38AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD58u;
    // 0x38ad5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x38AD58u, 0x38AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD60u;
label_38ad60:
    // 0x38ad60: 0xc0d0538  jal         func_3414E0
label_38ad64:
    if (ctx->pc == 0x38AD64u) {
        ctx->pc = 0x38AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD60u;
        // 0x38ad64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD68u;
        goto label_38ad68;
    }
    ctx->pc = 0x38AD60u;
    SET_GPR_U32(ctx, 31, 0x38AD68u);
    ctx->pc = 0x38AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD60u;
    // 0x38ad64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414E0u, 0x38AD60u, 0x38AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD68u;
label_38ad68:
    // 0x38ad68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ad6c:
    // 0x38ad6c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x38ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_38ad70:
    // 0x38ad70: 0xa2020118  sb          $v0, 0x118($s0)
    ctx->pc = 0x38ad70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 2));
label_38ad74:
    // 0x38ad74: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ad78:
    // 0x38ad78: 0xc0d0ae8  jal         func_342BA0
label_38ad7c:
    if (ctx->pc == 0x38AD7Cu) {
        ctx->pc = 0x38AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD78u;
        // 0x38ad7c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD80u;
        goto label_38ad80;
    }
    ctx->pc = 0x38AD78u;
    SET_GPR_U32(ctx, 31, 0x38AD80u);
    ctx->pc = 0x38AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD78u;
    // 0x38ad7c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38AD78u, 0x38AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD80u;
label_38ad80:
    // 0x38ad80: 0x10000033  b           . + 4 + (0x33 << 2)
label_38ad84:
    if (ctx->pc == 0x38AD84u) {
        ctx->pc = 0x38AD88u;
        goto label_38ad88;
    }
    ctx->pc = 0x38AD80u;
    {
        const bool branch_taken_0x38ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ad80) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AD88u;
label_38ad88:
    // 0x38ad88: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ad8c:
    // 0x38ad8c: 0xc0d0b00  jal         func_342C00
label_38ad90:
    if (ctx->pc == 0x38AD90u) {
        ctx->pc = 0x38AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD8Cu;
        // 0x38ad90: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD94u;
        goto label_38ad94;
    }
    ctx->pc = 0x38AD8Cu;
    SET_GPR_U32(ctx, 31, 0x38AD94u);
    ctx->pc = 0x38AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD8Cu;
    // 0x38ad90: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38AD8Cu, 0x38AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD94u;
label_38ad94:
    // 0x38ad94: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ad98:
    // 0x38ad98: 0xc0d0af4  jal         func_342BD0
label_38ad9c:
    if (ctx->pc == 0x38AD9Cu) {
        ctx->pc = 0x38AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD98u;
        // 0x38ad9c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADA0u;
        goto label_38ada0;
    }
    ctx->pc = 0x38AD98u;
    SET_GPR_U32(ctx, 31, 0x38ADA0u);
    ctx->pc = 0x38AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD98u;
    // 0x38ad9c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38AD98u, 0x38ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADA0u;
label_38ada0:
    // 0x38ada0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_38ada4:
    if (ctx->pc == 0x38ADA4u) {
        ctx->pc = 0x38ADA8u;
        goto label_38ada8;
    }
    ctx->pc = 0x38ADA0u;
    {
        const bool branch_taken_0x38ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ada0) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38ADA8u;
label_38ada8:
    // 0x38ada8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38adac:
    // 0x38adac: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x38adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_38adb0:
    // 0x38adb0: 0xc0d0ae8  jal         func_342BA0
label_38adb4:
    if (ctx->pc == 0x38ADB4u) {
        ctx->pc = 0x38ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADB0u;
        // 0x38adb4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADB8u;
        goto label_38adb8;
    }
    ctx->pc = 0x38ADB0u;
    SET_GPR_U32(ctx, 31, 0x38ADB8u);
    ctx->pc = 0x38ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADB0u;
    // 0x38adb4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38ADB0u, 0x38ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADB8u;
label_38adb8:
    // 0x38adb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38adbc:
    // 0x38adbc: 0x10000024  b           . + 4 + (0x24 << 2)
label_38adc0:
    if (ctx->pc == 0x38ADC0u) {
        ctx->pc = 0x38ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADBCu;
        // 0x38adc0: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADC4u;
        goto label_38adc4;
    }
    ctx->pc = 0x38ADBCu;
    {
        const bool branch_taken_0x38adbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADBCu;
        // 0x38adc0: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adbc) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38ADC4u;
label_38adc4:
    // 0x38adc4: 0x0  nop
    ctx->pc = 0x38adc4u;
    // NOP
label_38adc8:
    // 0x38adc8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38adcc:
    // 0x38adcc: 0xc0d0b00  jal         func_342C00
label_38add0:
    if (ctx->pc == 0x38ADD0u) {
        ctx->pc = 0x38ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADCCu;
        // 0x38add0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADD4u;
        goto label_38add4;
    }
    ctx->pc = 0x38ADCCu;
    SET_GPR_U32(ctx, 31, 0x38ADD4u);
    ctx->pc = 0x38ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADCCu;
    // 0x38add0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38ADCCu, 0x38ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADD4u;
label_38add4:
    // 0x38add4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38add8:
    // 0x38add8: 0xc0d0af4  jal         func_342BD0
label_38addc:
    if (ctx->pc == 0x38ADDCu) {
        ctx->pc = 0x38ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD8u;
        // 0x38addc: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADE0u;
        goto label_38ade0;
    }
    ctx->pc = 0x38ADD8u;
    SET_GPR_U32(ctx, 31, 0x38ADE0u);
    ctx->pc = 0x38ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ADD8u;
    // 0x38addc: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38ADD8u, 0x38ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ADE0u;
label_38ade0:
    // 0x38ade0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38ade4:
    if (ctx->pc == 0x38ADE4u) {
        ctx->pc = 0x38ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE0u;
        // 0x38ade4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADE8u;
        goto label_38ade8;
    }
    ctx->pc = 0x38ADE0u;
    {
        const bool branch_taken_0x38ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE0u;
        // 0x38ade4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ade0) {
            ctx->pc = 0x38ADF0u;
            goto label_38adf0;
        }
    }
    ctx->pc = 0x38ADE8u;
label_38ade8:
    // 0x38ade8: 0x10000019  b           . + 4 + (0x19 << 2)
label_38adec:
    if (ctx->pc == 0x38ADECu) {
        ctx->pc = 0x38ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE8u;
        // 0x38adec: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADF0u;
        goto label_38adf0;
    }
    ctx->pc = 0x38ADE8u;
    {
        const bool branch_taken_0x38ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE8u;
        // 0x38adec: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ade8) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38ADF0u;
label_38adf0:
    // 0x38adf0: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x38adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38adf4:
    // 0x38adf4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_38adf8:
    // 0x38adf8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x38adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38adfc:
    // 0x38adfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38adfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38ae00:
    // 0x38ae00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x38ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_38ae04:
    // 0x38ae04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ae08:
    // 0x38ae08: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x38ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38ae0c:
    // 0x38ae0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x38ae0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_38ae10:
    // 0x38ae10: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x38ae10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_38ae14:
    // 0x38ae14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38ae14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38ae18:
    // 0x38ae18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ae18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38ae1c:
    // 0x38ae1c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38ae1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_38ae20:
    // 0x38ae20: 0x0  nop
    ctx->pc = 0x38ae20u;
    // NOP
label_38ae24:
    // 0x38ae24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38ae28:
    // 0x38ae28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38ae28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_38ae2c:
    // 0x38ae2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38ae30:
    // 0x38ae30: 0xc0a85ec  jal         func_2A17B0
label_38ae34:
    if (ctx->pc == 0x38AE34u) {
        ctx->pc = 0x38AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE30u;
        // 0x38ae34: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE38u;
        goto label_38ae38;
    }
    ctx->pc = 0x38AE30u;
    SET_GPR_U32(ctx, 31, 0x38AE38u);
    ctx->pc = 0x38AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AE30u;
    // 0x38ae34: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x38AE30u, 0x38AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AE38u;
label_38ae38:
    // 0x38ae38: 0x10000005  b           . + 4 + (0x5 << 2)
label_38ae3c:
    if (ctx->pc == 0x38AE3Cu) {
        ctx->pc = 0x38AE40u;
        goto label_38ae40;
    }
    ctx->pc = 0x38AE38u;
    {
        const bool branch_taken_0x38ae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ae38) {
            ctx->pc = 0x38AE50u;
            goto label_38ae50;
        }
    }
    ctx->pc = 0x38AE40u;
label_38ae40:
    // 0x38ae40: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x38ae40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_38ae44:
    // 0x38ae44: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38ae44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38ae48:
    // 0x38ae48: 0x320f809  jalr        $t9
label_38ae4c:
    if (ctx->pc == 0x38AE4Cu) {
        ctx->pc = 0x38AE50u;
        goto label_38ae50;
    }
    ctx->pc = 0x38AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AE50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AE48u, 0x38AE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AE50u;
label_38ae50:
    // 0x38ae50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ae54:
    // 0x38ae54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ae54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ae58:
    // 0x38ae58: 0x3e00008  jr          $ra
label_38ae5c:
    if (ctx->pc == 0x38AE5Cu) {
        ctx->pc = 0x38AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE58u;
        // 0x38ae5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE60u;
        goto label_fallthrough_0x38ae58;
    }
    ctx->pc = 0x38AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE58u;
        // 0x38ae5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ae58:
    ctx->pc = 0x38AE60u;
}
