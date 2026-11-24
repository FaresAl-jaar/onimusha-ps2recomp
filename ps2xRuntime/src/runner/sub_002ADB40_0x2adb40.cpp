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

// Function: sub_002ADB40
// Address: 0x2adb40 - 0x2addd4
void sub_002ADB40_0x2adb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADB40_0x2adb40");
#endif

    switch (ctx->pc) {
        case 0x2adbc8u: goto label_2adbc8;
        case 0x2adbfcu: goto label_2adbfc;
        case 0x2adc38u: goto label_2adc38;
        case 0x2adc6cu: goto label_2adc6c;
        case 0x2adca8u: goto label_2adca8;
        case 0x2adcdcu: goto label_2adcdc;
        case 0x2add18u: goto label_2add18;
        case 0x2add4cu: goto label_2add4c;
        case 0x2add88u: goto label_2add88;
        case 0x2addbcu: goto label_2addbc;
        default: break;
    }

    ctx->pc = 0x2adb40u;

    // 0x2adb40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2adb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2adb44: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2adb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2adb48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2adb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2adb4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2adb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2adb50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2adb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2adb54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2adb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb58: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2adb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2adb5c: 0x10a3007e  beq         $a1, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2ADB5Cu;
    {
        const bool branch_taken_0x2adb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ADB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB5Cu;
        // 0x2adb60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb5c) {
            ctx->pc = 0x2ADD58u;
            goto label_2add58;
        }
    }
    ctx->pc = 0x2ADB64u;
    // 0x2adb64: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2adb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2adb68: 0x10a3005f  beq         $a1, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2ADB68u;
    {
        const bool branch_taken_0x2adb68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ADB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB68u;
        // 0x2adb6c: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb68) {
            ctx->pc = 0x2ADCE8u;
            goto label_2adce8;
        }
    }
    ctx->pc = 0x2ADB70u;
    // 0x2adb70: 0x10a30041  beq         $a1, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2ADB70u;
    {
        const bool branch_taken_0x2adb70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2adb70) {
            ctx->pc = 0x2ADC78u;
            goto label_2adc78;
        }
    }
    ctx->pc = 0x2ADB78u;
    // 0x2adb78: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2adb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2adb7c: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2ADB7Cu;
    {
        const bool branch_taken_0x2adb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ADB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB7Cu;
        // 0x2adb80: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb7c) {
            ctx->pc = 0x2ADC08u;
            goto label_2adc08;
        }
    }
    ctx->pc = 0x2ADB84u;
    // 0x2adb84: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADB84u;
    {
        const bool branch_taken_0x2adb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2adb84) {
            ctx->pc = 0x2ADB98u;
            goto label_2adb98;
        }
    }
    ctx->pc = 0x2ADB8Cu;
    // 0x2adb8c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2ADB8Cu;
    {
        const bool branch_taken_0x2adb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb8c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADB94u;
    // 0x2adb94: 0x0  nop
    ctx->pc = 0x2adb94u;
    // NOP
label_2adb98:
    // 0x2adb98: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADB98u;
    {
        const bool branch_taken_0x2adb98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb98) {
            ctx->pc = 0x2ADBC8u;
            goto label_2adbc8;
        }
    }
    ctx->pc = 0x2ADBA0u;
    // 0x2adba0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adba4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adba8: 0x24424ab0  addiu       $v0, $v0, 0x4AB0
    ctx->pc = 0x2adba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19120));
    // 0x2adbac: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2adbacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2adbb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adbb0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AB0u));
    // 0x2adbb4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2adbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2adbb8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2adbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2adbbc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbc0: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADBC0u;
    SET_GPR_U32(ctx, 31, 0x2ADBC8u);
    ctx->pc = 0x2ADBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBC0u;
    // 0x2adbc4: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADBC0u, 0x2ADBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBC8u;
label_2adbc8:
    // 0x2adbc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adbcc: 0x1607007c  bne         $s0, $a3, . + 4 + (0x7C << 2)
    ctx->pc = 0x2ADBCCu;
    {
        const bool branch_taken_0x2adbcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2adbcc) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADBD4u;
    // 0x2adbd4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adbd8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2adbd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2adbdc: 0x24424ac0  addiu       $v0, $v0, 0x4AC0
    ctx->pc = 0x2adbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
    // 0x2adbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbe4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adbe4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AC0u));
    // 0x2adbe8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2adbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2adbec: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2adbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2adbf0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adbf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbf4: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADBF4u;
    SET_GPR_U32(ctx, 31, 0x2ADBFCu);
    ctx->pc = 0x2ADBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBF4u;
    // 0x2adbf8: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADBF4u, 0x2ADBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBFCu;
label_2adbfc:
    // 0x2adbfc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2ADBFCu;
    {
        const bool branch_taken_0x2adbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adbfc) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADC04u;
    // 0x2adc04: 0x0  nop
    ctx->pc = 0x2adc04u;
    // NOP
label_2adc08:
    // 0x2adc08: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADC08u;
    {
        const bool branch_taken_0x2adc08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adc08) {
            ctx->pc = 0x2ADC38u;
            goto label_2adc38;
        }
    }
    ctx->pc = 0x2ADC10u;
    // 0x2adc10: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adc14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adc18: 0x24424ad0  addiu       $v0, $v0, 0x4AD0
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19152));
    // 0x2adc1c: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x2adc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2adc20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adc20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AD0u));
    // 0x2adc24: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2adc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2adc28: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2adc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2adc2c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc30: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADC30u;
    SET_GPR_U32(ctx, 31, 0x2ADC38u);
    ctx->pc = 0x2ADC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC30u;
    // 0x2adc34: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADC30u, 0x2ADC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC38u;
label_2adc38:
    // 0x2adc38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adc3c: 0x16070060  bne         $s0, $a3, . + 4 + (0x60 << 2)
    ctx->pc = 0x2ADC3Cu;
    {
        const bool branch_taken_0x2adc3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2adc3c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADC44u;
    // 0x2adc44: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adc48: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x2adc48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2adc4c: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x2adc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
    // 0x2adc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adc54u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AE0u));
    // 0x2adc58: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2adc5c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2adc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2adc60: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adc60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc64: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADC64u;
    SET_GPR_U32(ctx, 31, 0x2ADC6Cu);
    ctx->pc = 0x2ADC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC64u;
    // 0x2adc68: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADC64u, 0x2ADC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC6Cu;
label_2adc6c:
    // 0x2adc6c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2ADC6Cu;
    {
        const bool branch_taken_0x2adc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc6c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADC74u;
    // 0x2adc74: 0x0  nop
    ctx->pc = 0x2adc74u;
    // NOP
label_2adc78:
    // 0x2adc78: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADC78u;
    {
        const bool branch_taken_0x2adc78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adc78) {
            ctx->pc = 0x2ADCA8u;
            goto label_2adca8;
        }
    }
    ctx->pc = 0x2ADC80u;
    // 0x2adc80: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adc84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adc88: 0x24424af0  addiu       $v0, $v0, 0x4AF0
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19184));
    // 0x2adc8c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2adc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2adc90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adc90u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AF0u));
    // 0x2adc94: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2adc98: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2adc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2adc9c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adca0: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADCA0u;
    SET_GPR_U32(ctx, 31, 0x2ADCA8u);
    ctx->pc = 0x2ADCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCA0u;
    // 0x2adca4: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADCA0u, 0x2ADCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCA8u;
label_2adca8:
    // 0x2adca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adcac: 0x16070044  bne         $s0, $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ADCACu;
    {
        const bool branch_taken_0x2adcac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2adcac) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADCB4u;
    // 0x2adcb4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adcb8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2adcb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2adcbc: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2adcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adcc4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4B00u));
    // 0x2adcc8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2adccc: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2adcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2adcd0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2adcd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcd4: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADCD4u;
    SET_GPR_U32(ctx, 31, 0x2ADCDCu);
    ctx->pc = 0x2ADCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCD4u;
    // 0x2adcd8: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADCD4u, 0x2ADCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCDCu;
label_2adcdc:
    // 0x2adcdc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2ADCDCu;
    {
        const bool branch_taken_0x2adcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adcdc) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADCE4u;
    // 0x2adce4: 0x0  nop
    ctx->pc = 0x2adce4u;
    // NOP
label_2adce8:
    // 0x2adce8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADCE8u;
    {
        const bool branch_taken_0x2adce8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adce8) {
            ctx->pc = 0x2ADD18u;
            goto label_2add18;
        }
    }
    ctx->pc = 0x2ADCF0u;
    // 0x2adcf0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2adcf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2adcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adcf8: 0x24424b10  addiu       $v0, $v0, 0x4B10
    ctx->pc = 0x2adcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19216));
    // 0x2adcfc: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2adcfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2add00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2add00u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4B10u));
    // 0x2add04: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2add04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2add08: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2add08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2add0c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2add0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add10: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADD10u;
    SET_GPR_U32(ctx, 31, 0x2ADD18u);
    ctx->pc = 0x2ADD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD10u;
    // 0x2add14: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADD10u, 0x2ADD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD18u;
label_2add18:
    // 0x2add18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2add18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2add1c: 0x16070028  bne         $s0, $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2ADD1Cu;
    {
        const bool branch_taken_0x2add1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2add1c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADD24u;
    // 0x2add24: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2add24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2add28: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2add28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2add2c: 0x24424b20  addiu       $v0, $v0, 0x4B20
    ctx->pc = 0x2add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
    // 0x2add30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2add30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2add34u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4B20u));
    // 0x2add38: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2add38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2add3c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2add3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2add40: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2add40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add44: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADD44u;
    SET_GPR_U32(ctx, 31, 0x2ADD4Cu);
    ctx->pc = 0x2ADD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD44u;
    // 0x2add48: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADD44u, 0x2ADD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD4Cu;
label_2add4c:
    // 0x2add4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2ADD4Cu;
    {
        const bool branch_taken_0x2add4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2add4c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADD54u;
    // 0x2add54: 0x0  nop
    ctx->pc = 0x2add54u;
    // NOP
label_2add58:
    // 0x2add58: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADD58u;
    {
        const bool branch_taken_0x2add58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2add58) {
            ctx->pc = 0x2ADD88u;
            goto label_2add88;
        }
    }
    ctx->pc = 0x2ADD60u;
    // 0x2add60: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2add60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2add64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2add64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2add68: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x2add68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
    // 0x2add6c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2add6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2add70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2add70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4B30u));
    // 0x2add74: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2add74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2add78: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2add78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2add7c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2add7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add80: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADD80u;
    SET_GPR_U32(ctx, 31, 0x2ADD88u);
    ctx->pc = 0x2ADD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD80u;
    // 0x2add84: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADD80u, 0x2ADD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD88u;
label_2add88:
    // 0x2add88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2add88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2add8c: 0x1607000c  bne         $s0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2ADD8Cu;
    {
        const bool branch_taken_0x2add8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        if (branch_taken_0x2add8c) {
            ctx->pc = 0x2ADDC0u;
            goto label_2addc0;
        }
    }
    ctx->pc = 0x2ADD94u;
    // 0x2add94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2add94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2add98: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2add9c: 0x24424b40  addiu       $v0, $v0, 0x4B40
    ctx->pc = 0x2add9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19264));
    // 0x2adda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adda4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2adda4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4B40u));
    // 0x2adda8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2adda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2addac: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2addacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2addb0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2addb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2addb4: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2ADDB4u;
    SET_GPR_U32(ctx, 31, 0x2ADDBCu);
    ctx->pc = 0x2ADDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDB4u;
    // 0x2addb8: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2ADDB4u, 0x2ADDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDBCu;
label_2addbc:
    // 0x2addbc: 0x0  nop
    ctx->pc = 0x2addbcu;
    // NOP
label_2addc0:
    // 0x2addc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2addc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2addc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2addc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2addc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2addc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2addcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDCCu;
        // 0x2addd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADDD4u;
}
