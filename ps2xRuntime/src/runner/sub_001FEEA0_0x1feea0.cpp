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

// Function: sub_001FEEA0
// Address: 0x1feea0 - 0x1ff0ac
void sub_001FEEA0_0x1feea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEEA0_0x1feea0");
#endif

    switch (ctx->pc) {
        case 0x1feea0u: goto label_1feea0;
        case 0x1feea4u: goto label_1feea4;
        case 0x1feea8u: goto label_1feea8;
        case 0x1feeacu: goto label_1feeac;
        case 0x1feeb0u: goto label_1feeb0;
        case 0x1feeb4u: goto label_1feeb4;
        case 0x1feeb8u: goto label_1feeb8;
        case 0x1feebcu: goto label_1feebc;
        case 0x1feec0u: goto label_1feec0;
        case 0x1feec4u: goto label_1feec4;
        case 0x1feec8u: goto label_1feec8;
        case 0x1feeccu: goto label_1feecc;
        case 0x1feed0u: goto label_1feed0;
        case 0x1feed4u: goto label_1feed4;
        case 0x1feed8u: goto label_1feed8;
        case 0x1feedcu: goto label_1feedc;
        case 0x1feee0u: goto label_1feee0;
        case 0x1feee4u: goto label_1feee4;
        case 0x1feee8u: goto label_1feee8;
        case 0x1feeecu: goto label_1feeec;
        case 0x1feef0u: goto label_1feef0;
        case 0x1feef4u: goto label_1feef4;
        case 0x1feef8u: goto label_1feef8;
        case 0x1feefcu: goto label_1feefc;
        case 0x1fef00u: goto label_1fef00;
        case 0x1fef04u: goto label_1fef04;
        case 0x1fef08u: goto label_1fef08;
        case 0x1fef0cu: goto label_1fef0c;
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef14u: goto label_1fef14;
        case 0x1fef18u: goto label_1fef18;
        case 0x1fef1cu: goto label_1fef1c;
        case 0x1fef20u: goto label_1fef20;
        case 0x1fef24u: goto label_1fef24;
        case 0x1fef28u: goto label_1fef28;
        case 0x1fef2cu: goto label_1fef2c;
        case 0x1fef30u: goto label_1fef30;
        case 0x1fef34u: goto label_1fef34;
        case 0x1fef38u: goto label_1fef38;
        case 0x1fef3cu: goto label_1fef3c;
        case 0x1fef40u: goto label_1fef40;
        case 0x1fef44u: goto label_1fef44;
        case 0x1fef48u: goto label_1fef48;
        case 0x1fef4cu: goto label_1fef4c;
        case 0x1fef50u: goto label_1fef50;
        case 0x1fef54u: goto label_1fef54;
        case 0x1fef58u: goto label_1fef58;
        case 0x1fef5cu: goto label_1fef5c;
        case 0x1fef60u: goto label_1fef60;
        case 0x1fef64u: goto label_1fef64;
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef74u: goto label_1fef74;
        case 0x1fef78u: goto label_1fef78;
        case 0x1fef7cu: goto label_1fef7c;
        case 0x1fef80u: goto label_1fef80;
        case 0x1fef84u: goto label_1fef84;
        case 0x1fef88u: goto label_1fef88;
        case 0x1fef8cu: goto label_1fef8c;
        case 0x1fef90u: goto label_1fef90;
        case 0x1fef94u: goto label_1fef94;
        case 0x1fef98u: goto label_1fef98;
        case 0x1fef9cu: goto label_1fef9c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefa4u: goto label_1fefa4;
        case 0x1fefa8u: goto label_1fefa8;
        case 0x1fefacu: goto label_1fefac;
        case 0x1fefb0u: goto label_1fefb0;
        case 0x1fefb4u: goto label_1fefb4;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1fefbcu: goto label_1fefbc;
        case 0x1fefc0u: goto label_1fefc0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1fefc8u: goto label_1fefc8;
        case 0x1fefccu: goto label_1fefcc;
        case 0x1fefd0u: goto label_1fefd0;
        case 0x1fefd4u: goto label_1fefd4;
        case 0x1fefd8u: goto label_1fefd8;
        case 0x1fefdcu: goto label_1fefdc;
        case 0x1fefe0u: goto label_1fefe0;
        case 0x1fefe4u: goto label_1fefe4;
        case 0x1fefe8u: goto label_1fefe8;
        case 0x1fefecu: goto label_1fefec;
        case 0x1feff0u: goto label_1feff0;
        case 0x1feff4u: goto label_1feff4;
        case 0x1feff8u: goto label_1feff8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff004u: goto label_1ff004;
        case 0x1ff008u: goto label_1ff008;
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff010u: goto label_1ff010;
        case 0x1ff014u: goto label_1ff014;
        case 0x1ff018u: goto label_1ff018;
        case 0x1ff01cu: goto label_1ff01c;
        case 0x1ff020u: goto label_1ff020;
        case 0x1ff024u: goto label_1ff024;
        case 0x1ff028u: goto label_1ff028;
        case 0x1ff02cu: goto label_1ff02c;
        case 0x1ff030u: goto label_1ff030;
        case 0x1ff034u: goto label_1ff034;
        case 0x1ff038u: goto label_1ff038;
        case 0x1ff03cu: goto label_1ff03c;
        case 0x1ff040u: goto label_1ff040;
        case 0x1ff044u: goto label_1ff044;
        case 0x1ff048u: goto label_1ff048;
        case 0x1ff04cu: goto label_1ff04c;
        case 0x1ff050u: goto label_1ff050;
        case 0x1ff054u: goto label_1ff054;
        case 0x1ff058u: goto label_1ff058;
        case 0x1ff05cu: goto label_1ff05c;
        case 0x1ff060u: goto label_1ff060;
        case 0x1ff064u: goto label_1ff064;
        case 0x1ff068u: goto label_1ff068;
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff070u: goto label_1ff070;
        case 0x1ff074u: goto label_1ff074;
        case 0x1ff078u: goto label_1ff078;
        case 0x1ff07cu: goto label_1ff07c;
        case 0x1ff080u: goto label_1ff080;
        case 0x1ff084u: goto label_1ff084;
        case 0x1ff088u: goto label_1ff088;
        case 0x1ff08cu: goto label_1ff08c;
        case 0x1ff090u: goto label_1ff090;
        case 0x1ff094u: goto label_1ff094;
        case 0x1ff098u: goto label_1ff098;
        case 0x1ff09cu: goto label_1ff09c;
        case 0x1ff0a0u: goto label_1ff0a0;
        case 0x1ff0a4u: goto label_1ff0a4;
        case 0x1ff0a8u: goto label_1ff0a8;
        default: break;
    }

    ctx->pc = 0x1feea0u;

label_1feea0:
    // 0x1feea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1feea4:
    // 0x1feea4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1feea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1feea8:
    // 0x1feea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1feea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1feeac:
    // 0x1feeac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1feeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1feeb0:
    // 0x1feeb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1feeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1feeb4:
    // 0x1feeb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1feeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1feeb8:
    // 0x1feeb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1feeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1feebc:
    // 0x1feebc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1feebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1feec0:
    // 0x1feec0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1feec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1feec4:
    // 0x1feec4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1feec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1feec8:
    // 0x1feec8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1feec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1feecc:
    // 0x1feecc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1feeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1feed0:
    // 0x1feed0: 0xc080496  jal         func_201258
label_1feed4:
    if (ctx->pc == 0x1FEED4u) {
        ctx->pc = 0x1FEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEED0u;
        // 0x1feed4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEED8u;
        goto label_1feed8;
    }
    ctx->pc = 0x1FEED0u;
    SET_GPR_U32(ctx, 31, 0x1FEED8u);
    ctx->pc = 0x1FEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEED0u;
    // 0x1feed4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FEED0u, 0x1FEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEED8u;
label_1feed8:
    // 0x1feed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1feedc:
    if (ctx->pc == 0x1FEEDCu) {
        ctx->pc = 0x1FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEED8u;
        // 0x1feedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEE0u;
        goto label_1feee0;
    }
    ctx->pc = 0x1FEED8u;
    {
        const bool branch_taken_0x1feed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEED8u;
        // 0x1feedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feed8) {
            ctx->pc = 0x1FEEF8u;
            goto label_1feef8;
        }
    }
    ctx->pc = 0x1FEEE0u;
label_1feee0:
    // 0x1feee0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_1feee4:
    // 0x1feee4: 0xc07fa1e  jal         func_1FE878
label_1feee8:
    if (ctx->pc == 0x1FEEE8u) {
        ctx->pc = 0x1FEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEE4u;
        // 0x1feee8: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEECu;
        goto label_1feeec;
    }
    ctx->pc = 0x1FEEE4u;
    SET_GPR_U32(ctx, 31, 0x1FEEECu);
    ctx->pc = 0x1FEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEEE4u;
    // 0x1feee8: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE878u, 0x1FEEE4u, 0x1FEEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEEECu;
label_1feeec:
    // 0x1feeec: 0x10000064  b           . + 4 + (0x64 << 2)
label_1feef0:
    if (ctx->pc == 0x1FEEF0u) {
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEECu;
        // 0x1feef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEF4u;
        goto label_1feef4;
    }
    ctx->pc = 0x1FEEECu;
    {
        const bool branch_taken_0x1feeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEECu;
        // 0x1feef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feeec) {
            ctx->pc = 0x1FF080u;
            goto label_1ff080;
        }
    }
    ctx->pc = 0x1FEEF4u;
label_1feef4:
    // 0x1feef4: 0x0  nop
    ctx->pc = 0x1feef4u;
    // NOP
label_1feef8:
    // 0x1feef8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1feef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1feefc:
    // 0x1feefc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1feefcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1fef00:
    // 0x1fef00: 0xae4003f4  sw          $zero, 0x3F4($s2)
    ctx->pc = 0x1fef00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1012), GPR_U32(ctx, 0));
label_1fef04:
    // 0x1fef04: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fef04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fef08:
    // 0x1fef08: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1fef0c:
    // 0x1fef0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fef10:
    // 0x1fef10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef14:
    // 0x1fef14: 0x100f809  jalr        $t0
label_1fef18:
    if (ctx->pc == 0x1FEF18u) {
        ctx->pc = 0x1FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF14u;
        // 0x1fef18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF1Cu;
        goto label_1fef1c;
    }
    ctx->pc = 0x1FEF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1FEF1Cu);
        ctx->pc = 0x1FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF14u;
        // 0x1fef18: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF14u, 0x1FEF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF1Cu;
label_1fef1c:
    // 0x1fef1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fef20:
    // 0x1fef20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fef24:
    // 0x1fef24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef28:
    // 0x1fef28: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1fef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1fef2c:
    // 0x1fef2c: 0x40f809  jalr        $v0
label_1fef30:
    if (ctx->pc == 0x1FEF30u) {
        ctx->pc = 0x1FEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF2Cu;
        // 0x1fef30: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF34u;
        goto label_1fef34;
    }
    ctx->pc = 0x1FEF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEF34u);
        ctx->pc = 0x1FEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF2Cu;
        // 0x1fef30: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF2Cu, 0x1FEF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF34u;
label_1fef34:
    // 0x1fef34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fef38:
    // 0x1fef38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fef3c:
    // 0x1fef3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fef40:
    // 0x1fef40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fef44:
    // 0x1fef44: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fef48:
    // 0x1fef48: 0xc07fc70  jal         func_1FF1C0
label_1fef4c:
    if (ctx->pc == 0x1FEF4Cu) {
        ctx->pc = 0x1FEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF48u;
        // 0x1fef4c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF50u;
        goto label_1fef50;
    }
    ctx->pc = 0x1FEF48u;
    SET_GPR_U32(ctx, 31, 0x1FEF50u);
    ctx->pc = 0x1FEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF48u;
    // 0x1fef4c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF1C0u, 0x1FEF48u, 0x1FEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF50u;
label_1fef50:
    // 0x1fef50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fef54:
    // 0x1fef54: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1fef58:
    if (ctx->pc == 0x1FEF58u) {
        ctx->pc = 0x1FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF54u;
        // 0x1fef58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF5Cu;
        goto label_1fef5c;
    }
    ctx->pc = 0x1FEF54u;
    {
        const bool branch_taken_0x1fef54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF54u;
        // 0x1fef58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef54) {
            ctx->pc = 0x1FEF80u;
            goto label_1fef80;
        }
    }
    ctx->pc = 0x1FEF5Cu;
label_1fef5c:
    // 0x1fef5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fef60:
    // 0x1fef60: 0xc0804ce  jal         func_201338
label_1fef64:
    if (ctx->pc == 0x1FEF64u) {
        ctx->pc = 0x1FEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF60u;
        // 0x1fef64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF68u;
        goto label_1fef68;
    }
    ctx->pc = 0x1FEF60u;
    SET_GPR_U32(ctx, 31, 0x1FEF68u);
    ctx->pc = 0x1FEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF60u;
    // 0x1fef64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201338u, 0x1FEF60u, 0x1FEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF68u;
label_1fef68:
    // 0x1fef68: 0x10000045  b           . + 4 + (0x45 << 2)
label_1fef6c:
    if (ctx->pc == 0x1FEF6Cu) {
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF70u;
        goto label_1fef70;
    }
    ctx->pc = 0x1FEF68u;
    {
        const bool branch_taken_0x1fef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef68) {
            ctx->pc = 0x1FF080u;
            goto label_1ff080;
        }
    }
    ctx->pc = 0x1FEF70u;
label_1fef70:
    // 0x1fef70: 0xc07fa1e  jal         func_1FE878
label_1fef74:
    if (ctx->pc == 0x1FEF74u) {
        ctx->pc = 0x1FEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF70u;
        // 0x1fef74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF78u;
        goto label_1fef78;
    }
    ctx->pc = 0x1FEF70u;
    SET_GPR_U32(ctx, 31, 0x1FEF78u);
    ctx->pc = 0x1FEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF70u;
    // 0x1fef74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE878u, 0x1FEF70u, 0x1FEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF78u;
label_1fef78:
    // 0x1fef78: 0x10000041  b           . + 4 + (0x41 << 2)
label_1fef7c:
    if (ctx->pc == 0x1FEF7Cu) {
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF80u;
        goto label_1fef80;
    }
    ctx->pc = 0x1FEF78u;
    {
        const bool branch_taken_0x1fef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef78) {
            ctx->pc = 0x1FF080u;
            goto label_1ff080;
        }
    }
    ctx->pc = 0x1FEF80u;
label_1fef80:
    // 0x1fef80: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fef84:
    // 0x1fef84: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1fef84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fef88:
    // 0x1fef88: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1fef88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fef8c:
    // 0x1fef8c: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x1fef8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fef90:
    // 0x1fef90: 0x10000028  b           . + 4 + (0x28 << 2)
label_1fef94:
    if (ctx->pc == 0x1FEF94u) {
        ctx->pc = 0x1FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF90u;
        // 0x1fef94: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF98u;
        goto label_1fef98;
    }
    ctx->pc = 0x1FEF90u;
    {
        const bool branch_taken_0x1fef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF90u;
        // 0x1fef94: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef90) {
            ctx->pc = 0x1FF034u;
            goto label_1ff034;
        }
    }
    ctx->pc = 0x1FEF98u;
label_1fef98:
    // 0x1fef98: 0x1074001d  beq         $v1, $s4, . + 4 + (0x1D << 2)
label_1fef9c:
    if (ctx->pc == 0x1FEF9Cu) {
        ctx->pc = 0x1FEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF98u;
        // 0x1fef9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFA0u;
        goto label_1fefa0;
    }
    ctx->pc = 0x1FEF98u;
    {
        const bool branch_taken_0x1fef98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1FEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF98u;
        // 0x1fef9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef98) {
            ctx->pc = 0x1FF010u;
            goto label_1ff010;
        }
    }
    ctx->pc = 0x1FEFA0u;
label_1fefa0:
    // 0x1fefa0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x1fefa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_1fefa4:
    // 0x1fefa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1fefa8:
    if (ctx->pc == 0x1FEFA8u) {
        ctx->pc = 0x1FEFACu;
        goto label_1fefac;
    }
    ctx->pc = 0x1FEFA4u;
    {
        const bool branch_taken_0x1fefa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fefa4) {
            ctx->pc = 0x1FEFC8u;
            goto label_1fefc8;
        }
    }
    ctx->pc = 0x1FEFACu;
label_1fefac:
    // 0x1fefac: 0x10760014  beq         $v1, $s6, . + 4 + (0x14 << 2)
label_1fefb0:
    if (ctx->pc == 0x1FEFB0u) {
        ctx->pc = 0x1FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFACu;
        // 0x1fefb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFB4u;
        goto label_1fefb4;
    }
    ctx->pc = 0x1FEFACu;
    {
        const bool branch_taken_0x1fefac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFACu;
        // 0x1fefb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefac) {
            ctx->pc = 0x1FF000u;
            goto label_1ff000;
        }
    }
    ctx->pc = 0x1FEFB4u;
label_1fefb4:
    // 0x1fefb4: 0x107e000e  beq         $v1, $fp, . + 4 + (0xE << 2)
label_1fefb8:
    if (ctx->pc == 0x1FEFB8u) {
        ctx->pc = 0x1FEFBCu;
        goto label_1fefbc;
    }
    ctx->pc = 0x1FEFB4u;
    {
        const bool branch_taken_0x1fefb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x1fefb4) {
            ctx->pc = 0x1FEFF0u;
            goto label_1feff0;
        }
    }
    ctx->pc = 0x1FEFBCu;
label_1fefbc:
    // 0x1fefbc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1fefc0:
    if (ctx->pc == 0x1FEFC0u) {
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFC4u;
        goto label_1fefc4;
    }
    ctx->pc = 0x1FEFBCu;
    {
        const bool branch_taken_0x1fefbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFBCu;
        // 0x1fefc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefbc) {
            ctx->pc = 0x1FF03Cu;
            goto label_1ff03c;
        }
    }
    ctx->pc = 0x1FEFC4u;
label_1fefc4:
    // 0x1fefc4: 0x0  nop
    ctx->pc = 0x1fefc4u;
    // NOP
label_1fefc8:
    // 0x1fefc8: 0x10750017  beq         $v1, $s5, . + 4 + (0x17 << 2)
label_1fefcc:
    if (ctx->pc == 0x1FEFCCu) {
        ctx->pc = 0x1FEFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC8u;
        // 0x1fefcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFD0u;
        goto label_1fefd0;
    }
    ctx->pc = 0x1FEFC8u;
    {
        const bool branch_taken_0x1fefc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1FEFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC8u;
        // 0x1fefcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc8) {
            ctx->pc = 0x1FF028u;
            goto label_1ff028;
        }
    }
    ctx->pc = 0x1FEFD0u;
label_1fefd0:
    // 0x1fefd0: 0x1477001a  bne         $v1, $s7, . + 4 + (0x1A << 2)
label_1fefd4:
    if (ctx->pc == 0x1FEFD4u) {
        ctx->pc = 0x1FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD0u;
        // 0x1fefd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFD8u;
        goto label_1fefd8;
    }
    ctx->pc = 0x1FEFD0u;
    {
        const bool branch_taken_0x1fefd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x1FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD0u;
        // 0x1fefd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd0) {
            ctx->pc = 0x1FF03Cu;
            goto label_1ff03c;
        }
    }
    ctx->pc = 0x1FEFD8u;
label_1fefd8:
    // 0x1fefd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fefd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fefdc:
    // 0x1fefdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fefdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fefe0:
    // 0x1fefe0: 0xc07fc9a  jal         func_1FF268
label_1fefe4:
    if (ctx->pc == 0x1FEFE4u) {
        ctx->pc = 0x1FEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE0u;
        // 0x1fefe4: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFE8u;
        goto label_1fefe8;
    }
    ctx->pc = 0x1FEFE0u;
    SET_GPR_U32(ctx, 31, 0x1FEFE8u);
    ctx->pc = 0x1FEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFE0u;
    // 0x1fefe4: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF268u, 0x1FEFE0u, 0x1FEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFE8u;
label_1fefe8:
    // 0x1fefe8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1fefec:
    if (ctx->pc == 0x1FEFECu) {
        ctx->pc = 0x1FEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE8u;
        // 0x1fefec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFF0u;
        goto label_1feff0;
    }
    ctx->pc = 0x1FEFE8u;
    {
        const bool branch_taken_0x1fefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFE8u;
        // 0x1fefec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefe8) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FEFF0u;
label_1feff0:
    // 0x1feff0: 0xc07fe4a  jal         func_1FF928
label_1feff4:
    if (ctx->pc == 0x1FEFF4u) {
        ctx->pc = 0x1FEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF0u;
        // 0x1feff4: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFF8u;
        goto label_1feff8;
    }
    ctx->pc = 0x1FEFF0u;
    SET_GPR_U32(ctx, 31, 0x1FEFF8u);
    ctx->pc = 0x1FEFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFF0u;
    // 0x1feff4: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF928u, 0x1FEFF0u, 0x1FEFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFF8u;
label_1feff8:
    // 0x1feff8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1feffc:
    if (ctx->pc == 0x1FEFFCu) {
        ctx->pc = 0x1FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF8u;
        // 0x1feffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF000u;
        goto label_1ff000;
    }
    ctx->pc = 0x1FEFF8u;
    {
        const bool branch_taken_0x1feff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF8u;
        // 0x1feffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feff8) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF000u;
label_1ff000:
    // 0x1ff000: 0xc07feea  jal         func_1FFBA8
label_1ff004:
    if (ctx->pc == 0x1FF004u) {
        ctx->pc = 0x1FF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF000u;
        // 0x1ff004: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF008u;
        goto label_1ff008;
    }
    ctx->pc = 0x1FF000u;
    SET_GPR_U32(ctx, 31, 0x1FF008u);
    ctx->pc = 0x1FF004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF000u;
    // 0x1ff004: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBA8u, 0x1FF000u, 0x1FF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF008u;
label_1ff008:
    // 0x1ff008: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ff00c:
    if (ctx->pc == 0x1FF00Cu) {
        ctx->pc = 0x1FF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF008u;
        // 0x1ff00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF010u;
        goto label_1ff010;
    }
    ctx->pc = 0x1FF008u;
    {
        const bool branch_taken_0x1ff008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF008u;
        // 0x1ff00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff008) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF010u;
label_1ff010:
    // 0x1ff010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff014:
    // 0x1ff014: 0xc080064  jal         func_200190
label_1ff018:
    if (ctx->pc == 0x1FF018u) {
        ctx->pc = 0x1FF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF014u;
        // 0x1ff018: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF01Cu;
        goto label_1ff01c;
    }
    ctx->pc = 0x1FF014u;
    SET_GPR_U32(ctx, 31, 0x1FF01Cu);
    ctx->pc = 0x1FF018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF014u;
    // 0x1ff018: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200190u, 0x1FF014u, 0x1FF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF01Cu;
label_1ff01c:
    // 0x1ff01c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ff020:
    if (ctx->pc == 0x1FF020u) {
        ctx->pc = 0x1FF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF01Cu;
        // 0x1ff020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF024u;
        goto label_1ff024;
    }
    ctx->pc = 0x1FF01Cu;
    {
        const bool branch_taken_0x1ff01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF01Cu;
        // 0x1ff020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff01c) {
            ctx->pc = 0x1FF038u;
            goto label_1ff038;
        }
    }
    ctx->pc = 0x1FF024u;
label_1ff024:
    // 0x1ff024: 0x0  nop
    ctx->pc = 0x1ff024u;
    // NOP
label_1ff028:
    // 0x1ff028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff02c:
    // 0x1ff02c: 0xc080094  jal         func_200250
label_1ff030:
    if (ctx->pc == 0x1FF030u) {
        ctx->pc = 0x1FF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF02Cu;
        // 0x1ff030: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF034u;
        goto label_1ff034;
    }
    ctx->pc = 0x1FF02Cu;
    SET_GPR_U32(ctx, 31, 0x1FF034u);
    ctx->pc = 0x1FF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF02Cu;
    // 0x1ff030: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200250u, 0x1FF02Cu, 0x1FF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF034u;
label_1ff034:
    // 0x1ff034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff038:
    // 0x1ff038: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff03c:
    // 0x1ff03c: 0xc08020a  jal         func_200828
label_1ff040:
    if (ctx->pc == 0x1FF040u) {
        ctx->pc = 0x1FF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF03Cu;
        // 0x1ff040: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF044u;
        goto label_1ff044;
    }
    ctx->pc = 0x1FF03Cu;
    SET_GPR_U32(ctx, 31, 0x1FF044u);
    ctx->pc = 0x1FF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF03Cu;
    // 0x1ff040: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200828u, 0x1FF03Cu, 0x1FF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF044u;
label_1ff044:
    // 0x1ff044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff048:
    // 0x1ff048: 0x5600ffc9  bnel        $s0, $zero, . + 4 + (-0x37 << 2)
label_1ff04c:
    if (ctx->pc == 0x1FF04Cu) {
        ctx->pc = 0x1FF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF048u;
        // 0x1ff04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF050u;
        goto label_1ff050;
    }
    ctx->pc = 0x1FF048u;
    {
        const bool branch_taken_0x1ff048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff048) {
            ctx->pc = 0x1FF04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF048u;
            // 0x1ff04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FF050u;
label_1ff050:
    // 0x1ff050: 0xc07fc2c  jal         func_1FF0B0
label_1ff054:
    if (ctx->pc == 0x1FF054u) {
        ctx->pc = 0x1FF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF050u;
        // 0x1ff054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF058u;
        goto label_1ff058;
    }
    ctx->pc = 0x1FF050u;
    SET_GPR_U32(ctx, 31, 0x1FF058u);
    ctx->pc = 0x1FF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF050u;
    // 0x1ff054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF0B0u, 0x1FF050u, 0x1FF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF058u;
label_1ff058:
    // 0x1ff058: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ff058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff05c:
    // 0x1ff05c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1ff060:
    if (ctx->pc == 0x1FF060u) {
        ctx->pc = 0x1FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF05Cu;
        // 0x1ff060: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF064u;
        goto label_1ff064;
    }
    ctx->pc = 0x1FF05Cu;
    {
        const bool branch_taken_0x1ff05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF05Cu;
        // 0x1ff060: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff05c) {
            ctx->pc = 0x1FF078u;
            goto label_1ff078;
        }
    }
    ctx->pc = 0x1FF064u;
label_1ff064:
    // 0x1ff064: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ff068:
    if (ctx->pc == 0x1FF068u) {
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF06Cu;
        goto label_1ff06c;
    }
    ctx->pc = 0x1FF064u;
    {
        const bool branch_taken_0x1ff064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF064u;
        // 0x1ff068: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff064) {
            ctx->pc = 0x1FF07Cu;
            goto label_1ff07c;
        }
    }
    ctx->pc = 0x1FF06Cu;
label_1ff06c:
    // 0x1ff06c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1ff06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1ff070:
    // 0x1ff070: 0x1040ffc9  beqz        $v0, . + 4 + (-0x37 << 2)
label_1ff074:
    if (ctx->pc == 0x1FF074u) {
        ctx->pc = 0x1FF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF070u;
        // 0x1ff074: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF078u;
        goto label_1ff078;
    }
    ctx->pc = 0x1FF070u;
    {
        const bool branch_taken_0x1ff070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF070u;
        // 0x1ff074: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff070) {
            ctx->pc = 0x1FEF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fef98;
        }
    }
    ctx->pc = 0x1FF078u;
label_1ff078:
    // 0x1ff078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff07c:
    // 0x1ff07c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ff07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff080:
    // 0x1ff080: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ff080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ff084:
    // 0x1ff084: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ff084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ff088:
    // 0x1ff088: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ff088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ff08c:
    // 0x1ff08c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ff08cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ff090:
    // 0x1ff090: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ff090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ff094:
    // 0x1ff094: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ff094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ff098:
    // 0x1ff098: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1ff098u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1ff09c:
    // 0x1ff09c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1ff09cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ff0a0:
    // 0x1ff0a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1ff0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1ff0a4:
    // 0x1ff0a4: 0x3e00008  jr          $ra
label_1ff0a8:
    if (ctx->pc == 0x1FF0A8u) {
        ctx->pc = 0x1FF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A4u;
        // 0x1ff0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0ACu;
        goto label_fallthrough_0x1ff0a4;
    }
    ctx->pc = 0x1FF0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0A4u;
        // 0x1ff0a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff0a4:
    ctx->pc = 0x1FF0ACu;
}
