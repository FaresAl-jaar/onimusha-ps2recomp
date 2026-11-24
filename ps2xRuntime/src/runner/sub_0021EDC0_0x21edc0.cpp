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

// Function: sub_0021EDC0
// Address: 0x21edc0 - 0x21ef24
void sub_0021EDC0_0x21edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EDC0_0x21edc0");
#endif

    switch (ctx->pc) {
        case 0x21ee0cu: goto label_21ee0c;
        case 0x21ee24u: goto label_21ee24;
        case 0x21ee34u: goto label_21ee34;
        case 0x21ee74u: goto label_21ee74;
        case 0x21ee88u: goto label_21ee88;
        case 0x21ef00u: goto label_21ef00;
        default: break;
    }

    ctx->pc = 0x21edc0u;

    // 0x21edc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21edc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21edc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21edcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21edd0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21edd4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21edd8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21edd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eddc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ede0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21ede4: 0x8eb036b0  lw          $s0, 0x36B0($s5)
    ctx->pc = 0x21ede4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14000)));
    // 0x21ede8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21edec: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x21edecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x21edf0: 0x261408a0  addiu       $s4, $s0, 0x8A0
    ctx->pc = 0x21edf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x21edf4: 0x26110ad0  addiu       $s1, $s0, 0xAD0
    ctx->pc = 0x21edf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x21edf8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF8u;
        // 0x21edfc: 0x26120d0c  addiu       $s2, $s0, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EF00u;
            goto label_21ef00;
        }
    }
    ctx->pc = 0x21EE00u;
    // 0x21ee00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee04: 0xc087bca  jal         func_21EF28
    ctx->pc = 0x21EE04u;
    SET_GPR_U32(ctx, 31, 0x21EE0Cu);
    ctx->pc = 0x21EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE04u;
    // 0x21ee08: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF28u, 0x21EE04u, 0x21EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE0Cu;
label_21ee0c:
    // 0x21ee0c: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x21EE0Cu;
    {
        const bool branch_taken_0x21ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee0c) {
            ctx->pc = 0x21EE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE0Cu;
            // 0x21ee10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF04u;
            goto label_21ef04;
        }
    }
    ctx->pc = 0x21EE14u;
    // 0x21ee14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ee18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee1c: 0xc087bea  jal         func_21EFA8
    ctx->pc = 0x21EE1Cu;
    SET_GPR_U32(ctx, 31, 0x21EE24u);
    ctx->pc = 0x21EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE1Cu;
    // 0x21ee20: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFA8u, 0x21EE1Cu, 0x21EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x21EE24u;
    {
        const bool branch_taken_0x21ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee24) {
            ctx->pc = 0x21EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE24u;
            // 0x21ee28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF04u;
            goto label_21ef04;
        }
    }
    ctx->pc = 0x21EE2Cu;
    // 0x21ee2c: 0xc087c0a  jal         func_21F028
    ctx->pc = 0x21EE2Cu;
    SET_GPR_U32(ctx, 31, 0x21EE34u);
    ctx->pc = 0x21EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE2Cu;
    // 0x21ee30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F028u, 0x21EE2Cu, 0x21EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE34u;
label_21ee34:
    // 0x21ee34: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21EE34u;
    {
        const bool branch_taken_0x21ee34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE34u;
        // 0x21ee38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee34) {
            ctx->pc = 0x21EEC0u;
            goto label_21eec0;
        }
    }
    ctx->pc = 0x21EE3Cu;
    // 0x21ee3c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x21ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x21ee40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21ee44: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21EE44u;
    {
        const bool branch_taken_0x21ee44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee44) {
            ctx->pc = 0x21EE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE44u;
            // 0x21ee48: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEB4u;
            goto label_21eeb4;
        }
    }
    ctx->pc = 0x21EE4Cu;
    // 0x21ee4c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x21ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x21ee50: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21EE50u;
    {
        const bool branch_taken_0x21ee50 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x21ee50) {
            ctx->pc = 0x21EE80u;
            goto label_21ee80;
        }
    }
    ctx->pc = 0x21EE58u;
    // 0x21ee58: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x21ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x21ee5c: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE5Cu;
    {
        const bool branch_taken_0x21ee5c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE5Cu;
        // 0x21ee60: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee5c) {
            ctx->pc = 0x21EE74u;
            goto label_21ee74;
        }
    }
    ctx->pc = 0x21EE64u;
    // 0x21ee64: 0x58c00013  blezl       $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x21EE64u;
    {
        const bool branch_taken_0x21ee64 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x21ee64) {
            ctx->pc = 0x21EE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE64u;
            // 0x21ee68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEB4u;
            goto label_21eeb4;
        }
    }
    ctx->pc = 0x21EE6Cu;
    // 0x21ee6c: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21EE6Cu;
    SET_GPR_U32(ctx, 31, 0x21EE74u);
    ctx->pc = 0x21EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE6Cu;
    // 0x21ee70: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21EE6Cu, 0x21EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE74u;
label_21ee74:
    // 0x21ee74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21EE74u;
    {
        const bool branch_taken_0x21ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE74u;
        // 0x21ee78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee74) {
            ctx->pc = 0x21EEB4u;
            goto label_21eeb4;
        }
    }
    ctx->pc = 0x21EE7Cu;
    // 0x21ee7c: 0x0  nop
    ctx->pc = 0x21ee7cu;
    // NOP
label_21ee80:
    // 0x21ee80: 0xc08483c  jal         func_2120F0
    ctx->pc = 0x21EE80u;
    SET_GPR_U32(ctx, 31, 0x21EE88u);
    ctx->pc = 0x21EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE80u;
    // 0x21ee84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2120F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120F0u, 0x21EE80u, 0x21EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE88u;
label_21ee88:
    // 0x21ee88: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x21ee88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x21ee8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EE8Cu;
    {
        const bool branch_taken_0x21ee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee8c) {
            ctx->pc = 0x21EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE8Cu;
            // 0x21ee90: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEB4u;
            goto label_21eeb4;
        }
    }
    ctx->pc = 0x21EE94u;
    // 0x21ee94: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x21ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21ee98: 0x240307e2  addiu       $v1, $zero, 0x7E2
    ctx->pc = 0x21ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2018));
    // 0x21ee9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21EE9Cu;
    {
        const bool branch_taken_0x21ee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee9c) {
            ctx->pc = 0x21EEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE9Cu;
            // 0x21eea0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEA4u;
            goto label_21eea4;
        }
    }
    ctx->pc = 0x21EEA4u;
label_21eea4:
    // 0x21eea4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x21eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x21eea8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21eea8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21eeac: 0x1012  mflo        $v0
    ctx->pc = 0x21eeacu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x21eeb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21eeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21eeb4:
    // 0x21eeb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21EEB4u;
    {
        const bool branch_taken_0x21eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB4u;
        // 0x21eeb8: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeb4) {
            ctx->pc = 0x21EEE8u;
            goto label_21eee8;
        }
    }
    ctx->pc = 0x21EEBCu;
    // 0x21eebc: 0x0  nop
    ctx->pc = 0x21eebcu;
    // NOP
label_21eec0:
    // 0x21eec0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21eec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EEC4u;
    {
        const bool branch_taken_0x21eec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEC4u;
        // 0x21eec8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eec4) {
            ctx->pc = 0x21EED8u;
            goto label_21eed8;
        }
    }
    ctx->pc = 0x21EECCu;
    // 0x21eecc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x21eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21eed0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21EED0u;
    {
        const bool branch_taken_0x21eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED0u;
        // 0x21eed4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed0) {
            ctx->pc = 0x21EEE8u;
            goto label_21eee8;
        }
    }
    ctx->pc = 0x21EED8u;
label_21eed8:
    // 0x21eed8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21EED8u;
    {
        const bool branch_taken_0x21eed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eed8) {
            ctx->pc = 0x21EEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EED8u;
            // 0x21eedc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF04u;
            goto label_21ef04;
        }
    }
    ctx->pc = 0x21EEE0u;
    // 0x21eee0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21eee4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x21eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21eee8:
    // 0x21eee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eeec: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x21eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x21eef0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21eef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21eef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eef8: 0xc087dd6  jal         func_21F758
    ctx->pc = 0x21EEF8u;
    SET_GPR_U32(ctx, 31, 0x21EF00u);
    ctx->pc = 0x21EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEF8u;
    // 0x21eefc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F758u, 0x21EEF8u, 0x21EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF00u;
label_21ef00:
    // 0x21ef00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ef00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21ef04:
    // 0x21ef04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ef04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ef08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ef08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ef0c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21ef0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ef10: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21ef10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ef14: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21ef14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ef18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ef1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF1Cu;
        // 0x21ef20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF24u;
}
