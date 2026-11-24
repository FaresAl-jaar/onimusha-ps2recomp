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

// Function: sub_0037AD90
// Address: 0x37ad90 - 0x37b210
void sub_0037AD90_0x37ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AD90_0x37ad90");
#endif

    switch (ctx->pc) {
        case 0x37ada4u: goto label_37ada4;
        case 0x37adbcu: goto label_37adbc;
        case 0x37ae84u: goto label_37ae84;
        case 0x37ae94u: goto label_37ae94;
        case 0x37af24u: goto label_37af24;
        case 0x37af48u: goto label_37af48;
        case 0x37af68u: goto label_37af68;
        case 0x37af84u: goto label_37af84;
        case 0x37afa4u: goto label_37afa4;
        case 0x37afc8u: goto label_37afc8;
        case 0x37afe8u: goto label_37afe8;
        case 0x37b00cu: goto label_37b00c;
        case 0x37b08cu: goto label_37b08c;
        case 0x37b10cu: goto label_37b10c;
        case 0x37b134u: goto label_37b134;
        case 0x37b154u: goto label_37b154;
        case 0x37b174u: goto label_37b174;
        case 0x37b194u: goto label_37b194;
        case 0x37b1b4u: goto label_37b1b4;
        case 0x37b1c0u: goto label_37b1c0;
        case 0x37b200u: goto label_37b200;
        default: break;
    }

    ctx->pc = 0x37ad90u;

    // 0x37ad90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37ad94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37ad98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37ad9c: 0xc0dea74  jal         func_37A9D0
    ctx->pc = 0x37AD9Cu;
    SET_GPR_U32(ctx, 31, 0x37ADA4u);
    ctx->pc = 0x37ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD9Cu;
    // 0x37ada0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A9D0u, 0x37AD9Cu, 0x37ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADA4u;
label_37ada4:
    // 0x37ada4: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x37ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x37ada8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37adac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37ADACu;
    {
        const bool branch_taken_0x37adac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADACu;
        // 0x37adb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adac) {
            ctx->pc = 0x37ADC0u;
            goto label_37adc0;
        }
    }
    ctx->pc = 0x37ADB4u;
    // 0x37adb4: 0xc0dea80  jal         func_37AA00
    ctx->pc = 0x37ADB4u;
    SET_GPR_U32(ctx, 31, 0x37ADBCu);
    ctx->pc = 0x37AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37AA00u, 0x37ADB4u, 0x37ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADBCu;
label_37adbc:
    // 0x37adbc: 0x0  nop
    ctx->pc = 0x37adbcu;
    // NOP
label_37adc0:
    // 0x37adc0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x37adc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37adc4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x37adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x37adc8: 0x106200f5  beq         $v1, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x37ADC8u;
    {
        const bool branch_taken_0x37adc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADC8u;
        // 0x37adcc: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adc8) {
            ctx->pc = 0x37B1A0u;
            goto label_37b1a0;
        }
    }
    ctx->pc = 0x37ADD0u;
    // 0x37add0: 0x106200eb  beq         $v1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x37ADD0u;
    {
        const bool branch_taken_0x37add0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37add0) {
            ctx->pc = 0x37B180u;
            goto label_37b180;
        }
    }
    ctx->pc = 0x37ADD8u;
    // 0x37add8: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x37add8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37addc: 0x106200e0  beq         $v1, $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x37ADDCu;
    {
        const bool branch_taken_0x37addc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADDCu;
        // 0x37ade0: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37addc) {
            ctx->pc = 0x37B160u;
            goto label_37b160;
        }
    }
    ctx->pc = 0x37ADE4u;
    // 0x37ade4: 0x106200d6  beq         $v1, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x37ADE4u;
    {
        const bool branch_taken_0x37ade4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ade4) {
            ctx->pc = 0x37B140u;
            goto label_37b140;
        }
    }
    ctx->pc = 0x37ADECu;
    // 0x37adec: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x37adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x37adf0: 0x106200c9  beq         $v1, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x37ADF0u;
    {
        const bool branch_taken_0x37adf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADF0u;
        // 0x37adf4: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adf0) {
            ctx->pc = 0x37B118u;
            goto label_37b118;
        }
    }
    ctx->pc = 0x37ADF8u;
    // 0x37adf8: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x37ADF8u;
    {
        const bool branch_taken_0x37adf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37adf8) {
            ctx->pc = 0x37B098u;
            goto label_37b098;
        }
    }
    ctx->pc = 0x37AE00u;
    // 0x37ae00: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x37ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x37ae04: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x37AE04u;
    {
        const bool branch_taken_0x37ae04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE04u;
        // 0x37ae08: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae04) {
            ctx->pc = 0x37B018u;
            goto label_37b018;
        }
    }
    ctx->pc = 0x37AE0Cu;
    // 0x37ae0c: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x37AE0Cu;
    {
        const bool branch_taken_0x37ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ae0c) {
            ctx->pc = 0x37AFF0u;
            goto label_37aff0;
        }
    }
    ctx->pc = 0x37AE14u;
    // 0x37ae14: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x37ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x37ae18: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x37AE18u;
    {
        const bool branch_taken_0x37ae18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE18u;
        // 0x37ae1c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae18) {
            ctx->pc = 0x37AFD0u;
            goto label_37afd0;
        }
    }
    ctx->pc = 0x37AE20u;
    // 0x37ae20: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x37AE20u;
    {
        const bool branch_taken_0x37ae20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ae20) {
            ctx->pc = 0x37AFB0u;
            goto label_37afb0;
        }
    }
    ctx->pc = 0x37AE28u;
    // 0x37ae28: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x37ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x37ae2c: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x37AE2Cu;
    {
        const bool branch_taken_0x37ae2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE2Cu;
        // 0x37ae30: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae2c) {
            ctx->pc = 0x37AF90u;
            goto label_37af90;
        }
    }
    ctx->pc = 0x37AE34u;
    // 0x37ae34: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x37AE34u;
    {
        const bool branch_taken_0x37ae34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ae34) {
            ctx->pc = 0x37AF70u;
            goto label_37af70;
        }
    }
    ctx->pc = 0x37AE3Cu;
    // 0x37ae3c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x37ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x37ae40: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x37AE40u;
    {
        const bool branch_taken_0x37ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE40u;
        // 0x37ae44: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae40) {
            ctx->pc = 0x37AF50u;
            goto label_37af50;
        }
    }
    ctx->pc = 0x37AE48u;
    // 0x37ae48: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x37AE48u;
    {
        const bool branch_taken_0x37ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ae48) {
            ctx->pc = 0x37AF30u;
            goto label_37af30;
        }
    }
    ctx->pc = 0x37AE50u;
    // 0x37ae50: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x37ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x37ae54: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37AE54u;
    {
        const bool branch_taken_0x37ae54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE54u;
        // 0x37ae58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae54) {
            ctx->pc = 0x37AEB0u;
            goto label_37aeb0;
        }
    }
    ctx->pc = 0x37AE5Cu;
    // 0x37ae5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AE5Cu;
    {
        const bool branch_taken_0x37ae5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ae5c) {
            ctx->pc = 0x37AE70u;
            goto label_37ae70;
        }
    }
    ctx->pc = 0x37AE64u;
    // 0x37ae64: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x37AE64u;
    {
        const bool branch_taken_0x37ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ae64) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AE6Cu;
    // 0x37ae6c: 0x0  nop
    ctx->pc = 0x37ae6cu;
    // NOP
label_37ae70:
    // 0x37ae70: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37ae70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37ae74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37ae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37ae7c: 0xc09759c  jal         func_25D670
    ctx->pc = 0x37AE7Cu;
    SET_GPR_U32(ctx, 31, 0x37AE84u);
    ctx->pc = 0x37AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE7Cu;
    // 0x37ae80: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x37AE7Cu, 0x37AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AE84u;
label_37ae84:
    // 0x37ae84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37AE84u;
    {
        const bool branch_taken_0x37ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE84u;
        // 0x37ae88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae84) {
            ctx->pc = 0x37AEA0u;
            goto label_37aea0;
        }
    }
    ctx->pc = 0x37AE8Cu;
    // 0x37ae8c: 0xc0de8d0  jal         func_37A340
    ctx->pc = 0x37AE8Cu;
    SET_GPR_U32(ctx, 31, 0x37AE94u);
    ctx->pc = 0x37A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A340u, 0x37AE8Cu, 0x37AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AE94u;
label_37ae94:
    // 0x37ae94: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x37AE94u;
    {
        const bool branch_taken_0x37ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ae94) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AE9Cu;
    // 0x37ae9c: 0x0  nop
    ctx->pc = 0x37ae9cu;
    // NOP
label_37aea0:
    // 0x37aea0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x37aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x37aea4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x37aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x37aea8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x37AEA8u;
    {
        const bool branch_taken_0x37aea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEA8u;
        // 0x37aeac: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aea8) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AEB0u;
label_37aeb0:
    // 0x37aeb0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37aeb4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x37aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x37aeb8: 0x9604078c  lhu         $a0, 0x78C($s0)
    ctx->pc = 0x37aeb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37aebc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37aebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37aec0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x37aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x37aec4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37aec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37aec8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37aecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37aeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37aed0: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x37aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x37aed4: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x37aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x37aed8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37aedc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37aedcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37aee0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37aee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37aee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37aee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37aee8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37AEE8u;
    {
        const bool branch_taken_0x37aee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37aee8) {
            ctx->pc = 0x37AF00u;
            goto label_37af00;
        }
    }
    ctx->pc = 0x37AEF0u;
    // 0x37aef0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37aef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37aef4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37aef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37aef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37AEF8u;
    {
        const bool branch_taken_0x37aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEF8u;
        // 0x37aefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aef8) {
            ctx->pc = 0x37AF1Cu;
            goto label_37af1c;
        }
    }
    ctx->pc = 0x37AF00u;
label_37af00:
    // 0x37af00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37af00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37af04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37af08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37af08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37af0c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37af0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37af10: 0x0  nop
    ctx->pc = 0x37af10u;
    // NOP
    // 0x37af14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37af14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37af18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37af1c:
    // 0x37af1c: 0xc0de370  jal         func_378DC0
    ctx->pc = 0x37AF1Cu;
    SET_GPR_U32(ctx, 31, 0x37AF24u);
    ctx->pc = 0x378DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378DC0u, 0x37AF1Cu, 0x37AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF24u;
label_37af24:
    // 0x37af24: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x37AF24u;
    {
        const bool branch_taken_0x37af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af24) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AF2Cu;
    // 0x37af2c: 0x0  nop
    ctx->pc = 0x37af2cu;
    // NOP
label_37af30:
    // 0x37af30: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37af30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37af34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37af3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37af40: 0xc0de3a0  jal         func_378E80
    ctx->pc = 0x37AF40u;
    SET_GPR_U32(ctx, 31, 0x37AF48u);
    ctx->pc = 0x37AF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF40u;
    // 0x37af44: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378E80u, 0x37AF40u, 0x37AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF48u;
label_37af48:
    // 0x37af48: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x37AF48u;
    {
        const bool branch_taken_0x37af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af48) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AF50u;
label_37af50:
    // 0x37af50: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37af50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37af54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37af5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37af60: 0xc0de3a0  jal         func_378E80
    ctx->pc = 0x37AF60u;
    SET_GPR_U32(ctx, 31, 0x37AF68u);
    ctx->pc = 0x37AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF60u;
    // 0x37af64: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378E80u, 0x37AF60u, 0x37AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF68u;
label_37af68:
    // 0x37af68: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x37AF68u;
    {
        const bool branch_taken_0x37af68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af68) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AF70u;
label_37af70:
    // 0x37af70: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37af70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37af74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37af7c: 0xc0de3d0  jal         func_378F40
    ctx->pc = 0x37AF7Cu;
    SET_GPR_U32(ctx, 31, 0x37AF84u);
    ctx->pc = 0x37AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF7Cu;
    // 0x37af80: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378F40u, 0x37AF7Cu, 0x37AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF84u;
label_37af84:
    // 0x37af84: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x37AF84u;
    {
        const bool branch_taken_0x37af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37af84) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AF8Cu;
    // 0x37af8c: 0x0  nop
    ctx->pc = 0x37af8cu;
    // NOP
label_37af90:
    // 0x37af90: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37af90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37af94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37af9c: 0xc0de420  jal         func_379080
    ctx->pc = 0x37AF9Cu;
    SET_GPR_U32(ctx, 31, 0x37AFA4u);
    ctx->pc = 0x37AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF9Cu;
    // 0x37afa0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379080u, 0x37AF9Cu, 0x37AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFA4u;
label_37afa4:
    // 0x37afa4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x37AFA4u;
    {
        const bool branch_taken_0x37afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37afa4) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AFACu;
    // 0x37afac: 0x0  nop
    ctx->pc = 0x37afacu;
    // NOP
label_37afb0:
    // 0x37afb0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37afb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37afb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37afb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37afc0: 0xc0de4ec  jal         func_3793B0
    ctx->pc = 0x37AFC0u;
    SET_GPR_U32(ctx, 31, 0x37AFC8u);
    ctx->pc = 0x37AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFC0u;
    // 0x37afc4: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3793B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3793B0u, 0x37AFC0u, 0x37AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFC8u;
label_37afc8:
    // 0x37afc8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x37AFC8u;
    {
        const bool branch_taken_0x37afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37afc8) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AFD0u;
label_37afd0:
    // 0x37afd0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37afd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37afd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37afdc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37afe0: 0xc0de4ec  jal         func_3793B0
    ctx->pc = 0x37AFE0u;
    SET_GPR_U32(ctx, 31, 0x37AFE8u);
    ctx->pc = 0x37AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AFE0u;
    // 0x37afe4: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3793B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3793B0u, 0x37AFE0u, 0x37AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFE8u;
label_37afe8:
    // 0x37afe8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x37AFE8u;
    {
        const bool branch_taken_0x37afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37afe8) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37AFF0u;
label_37aff0:
    // 0x37aff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37aff4: 0xa2022b07  sb          $v0, 0x2B07($s0)
    ctx->pc = 0x37aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 2));
    // 0x37aff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37affc: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37affcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b000: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b004: 0xc0de668  jal         func_3799A0
    ctx->pc = 0x37B004u;
    SET_GPR_U32(ctx, 31, 0x37B00Cu);
    ctx->pc = 0x37B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B004u;
    // 0x37b008: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3799A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799A0u, 0x37B004u, 0x37B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B00Cu;
label_37b00c:
    // 0x37b00c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x37B00Cu;
    {
        const bool branch_taken_0x37b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b00c) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B014u;
    // 0x37b014: 0x0  nop
    ctx->pc = 0x37b014u;
    // NOP
label_37b018:
    // 0x37b018: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37b01c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x37b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x37b020: 0x9604078c  lhu         $a0, 0x78C($s0)
    ctx->pc = 0x37b020u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37b024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37b028: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x37b028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x37b02c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37b02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37b030: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37b030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37b034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b038: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x37b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x37b03c: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x37b03cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x37b040: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b044: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37b044u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37b048: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37b048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37b04c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37b04cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b050: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37B050u;
    {
        const bool branch_taken_0x37b050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b050) {
            ctx->pc = 0x37B068u;
            goto label_37b068;
        }
    }
    ctx->pc = 0x37B058u;
    // 0x37b058: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37b058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37b05c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37b05cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37b060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B060u;
    {
        const bool branch_taken_0x37b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B060u;
        // 0x37b064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b060) {
            ctx->pc = 0x37B084u;
            goto label_37b084;
        }
    }
    ctx->pc = 0x37B068u;
label_37b068:
    // 0x37b068: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37b068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37b06c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b070: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37b070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37b074: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37b074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37b078: 0x0  nop
    ctx->pc = 0x37b078u;
    // NOP
    // 0x37b07c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37b07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37b080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b084:
    // 0x37b084: 0xc0de6c8  jal         func_379B20
    ctx->pc = 0x37B084u;
    SET_GPR_U32(ctx, 31, 0x37B08Cu);
    ctx->pc = 0x379B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379B20u, 0x37B084u, 0x37B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B08Cu;
label_37b08c:
    // 0x37b08c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x37B08Cu;
    {
        const bool branch_taken_0x37b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b08c) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B094u;
    // 0x37b094: 0x0  nop
    ctx->pc = 0x37b094u;
    // NOP
label_37b098:
    // 0x37b098: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37b09c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x37b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x37b0a0: 0x9604078c  lhu         $a0, 0x78C($s0)
    ctx->pc = 0x37b0a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b0a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37b0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37b0a8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37b0ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37b0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37b0b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37b0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37b0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b0b8: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x37b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x37b0bc: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x37b0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x37b0c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37b0c4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37b0c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37b0c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37b0c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37b0cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37b0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b0d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37B0D0u;
    {
        const bool branch_taken_0x37b0d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37b0d0) {
            ctx->pc = 0x37B0E8u;
            goto label_37b0e8;
        }
    }
    ctx->pc = 0x37B0D8u;
    // 0x37b0d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37b0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37b0dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37b0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37b0e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B0E0u;
    {
        const bool branch_taken_0x37b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0E0u;
        // 0x37b0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b0e0) {
            ctx->pc = 0x37B104u;
            goto label_37b104;
        }
    }
    ctx->pc = 0x37B0E8u;
label_37b0e8:
    // 0x37b0e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37b0e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37b0ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b0f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37b0f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37b0f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37b0f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37b0f8: 0x0  nop
    ctx->pc = 0x37b0f8u;
    // NOP
    // 0x37b0fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37b0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37b100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b104:
    // 0x37b104: 0xc0de6c8  jal         func_379B20
    ctx->pc = 0x37B104u;
    SET_GPR_U32(ctx, 31, 0x37B10Cu);
    ctx->pc = 0x379B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379B20u, 0x37B104u, 0x37B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B10Cu;
label_37b10c:
    // 0x37b10c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x37B10Cu;
    {
        const bool branch_taken_0x37b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b10c) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B114u;
    // 0x37b114: 0x0  nop
    ctx->pc = 0x37b114u;
    // NOP
label_37b118:
    // 0x37b118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b11c: 0xa2022b07  sb          $v0, 0x2B07($s0)
    ctx->pc = 0x37b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b124: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b128: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x37b12c: 0xc0de7e0  jal         func_379F80
    ctx->pc = 0x37B12Cu;
    SET_GPR_U32(ctx, 31, 0x37B134u);
    ctx->pc = 0x37B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B12Cu;
    // 0x37b130: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379F80u, 0x37B12Cu, 0x37B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B134u;
label_37b134:
    // 0x37b134: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x37B134u;
    {
        const bool branch_taken_0x37b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b134) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B13Cu;
    // 0x37b13c: 0x0  nop
    ctx->pc = 0x37b13cu;
    // NOP
label_37b140:
    // 0x37b140: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b148: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b14c: 0xc0de818  jal         func_37A060
    ctx->pc = 0x37B14Cu;
    SET_GPR_U32(ctx, 31, 0x37B154u);
    ctx->pc = 0x37B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B14Cu;
    // 0x37b150: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A060u, 0x37B14Cu, 0x37B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B154u;
label_37b154:
    // 0x37b154: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x37B154u;
    {
        const bool branch_taken_0x37b154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b154) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B15Cu;
    // 0x37b15c: 0x0  nop
    ctx->pc = 0x37b15cu;
    // NOP
label_37b160:
    // 0x37b160: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b168: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b16c: 0xc0de830  jal         func_37A0C0
    ctx->pc = 0x37B16Cu;
    SET_GPR_U32(ctx, 31, 0x37B174u);
    ctx->pc = 0x37B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B16Cu;
    // 0x37b170: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0C0u, 0x37B16Cu, 0x37B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B174u;
label_37b174:
    // 0x37b174: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37B174u;
    {
        const bool branch_taken_0x37b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b174) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B17Cu;
    // 0x37b17c: 0x0  nop
    ctx->pc = 0x37b17cu;
    // NOP
label_37b180:
    // 0x37b180: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b188: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b18c: 0xc0de848  jal         func_37A120
    ctx->pc = 0x37B18Cu;
    SET_GPR_U32(ctx, 31, 0x37B194u);
    ctx->pc = 0x37B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B18Cu;
    // 0x37b190: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A120u, 0x37B18Cu, 0x37B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B194u;
label_37b194:
    // 0x37b194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37B194u;
    {
        const bool branch_taken_0x37b194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b194) {
            ctx->pc = 0x37B1B8u;
            goto label_37b1b8;
        }
    }
    ctx->pc = 0x37B19Cu;
    // 0x37b19c: 0x0  nop
    ctx->pc = 0x37b19cu;
    // NOP
label_37b1a0:
    // 0x37b1a0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x37b1a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x37b1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b1a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37b1ac: 0xc0de860  jal         func_37A180
    ctx->pc = 0x37B1ACu;
    SET_GPR_U32(ctx, 31, 0x37B1B4u);
    ctx->pc = 0x37B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1ACu;
    // 0x37b1b0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A180u, 0x37B1ACu, 0x37B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1B4u;
label_37b1b4:
    // 0x37b1b4: 0x0  nop
    ctx->pc = 0x37b1b4u;
    // NOP
label_37b1b8:
    // 0x37b1b8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x37B1B8u;
    SET_GPR_U32(ctx, 31, 0x37B1C0u);
    ctx->pc = 0x37B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1B8u;
    // 0x37b1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x37B1B8u, 0x37B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1C0u;
label_37b1c0:
    // 0x37b1c0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x37b1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37b1c4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x37b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x37b1c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37B1C8u;
    {
        const bool branch_taken_0x37b1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1C8u;
        // 0x37b1cc: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1c8) {
            ctx->pc = 0x37B1F0u;
            goto label_37b1f0;
        }
    }
    ctx->pc = 0x37B1D0u;
    // 0x37b1d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B1D0u;
    {
        const bool branch_taken_0x37b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37b1d0) {
            ctx->pc = 0x37B1E0u;
            goto label_37b1e0;
        }
    }
    ctx->pc = 0x37B1D8u;
    // 0x37b1d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37B1D8u;
    {
        const bool branch_taken_0x37b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b1d8) {
            ctx->pc = 0x37B1F8u;
            goto label_37b1f8;
        }
    }
    ctx->pc = 0x37B1E0u;
label_37b1e0:
    // 0x37b1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B1E4u;
    {
        const bool branch_taken_0x37b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1E4u;
        // 0x37b1e8: 0xa2022b07  sb          $v0, 0x2B07($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1e4) {
            ctx->pc = 0x37B1F8u;
            goto label_37b1f8;
        }
    }
    ctx->pc = 0x37B1ECu;
    // 0x37b1ec: 0x0  nop
    ctx->pc = 0x37b1ecu;
    // NOP
label_37b1f0:
    // 0x37b1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b1f4: 0xa2022b07  sb          $v0, 0x2B07($s0)
    ctx->pc = 0x37b1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 2));
label_37b1f8:
    // 0x37b1f8: 0xc064080  jal         func_190200
    ctx->pc = 0x37B1F8u;
    SET_GPR_U32(ctx, 31, 0x37B200u);
    ctx->pc = 0x37B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B1F8u;
    // 0x37b1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190200u, 0x37B1F8u, 0x37B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B200u;
label_37b200:
    // 0x37b200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b208: 0x3e00008  jr          $ra
    ctx->pc = 0x37B208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B208u;
        // 0x37b20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B210u;
}
