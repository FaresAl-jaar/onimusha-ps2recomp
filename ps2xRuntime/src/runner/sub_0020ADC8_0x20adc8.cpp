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

// Function: sub_0020ADC8
// Address: 0x20adc8 - 0x20ae34
void sub_0020ADC8_0x20adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ADC8_0x20adc8");
#endif

    switch (ctx->pc) {
        case 0x20adc8u: goto label_20adc8;
        case 0x20adccu: goto label_20adcc;
        case 0x20add0u: goto label_20add0;
        case 0x20add4u: goto label_20add4;
        case 0x20add8u: goto label_20add8;
        case 0x20addcu: goto label_20addc;
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        default: break;
    }

    ctx->pc = 0x20adc8u;

label_20adc8:
    // 0x20adc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20adcc:
    // 0x20adcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20add0:
    // 0x20add0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20add4:
    // 0x20add4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20add8:
    // 0x20add8: 0xc082d3a  jal         func_20B4E8
label_20addc:
    if (ctx->pc == 0x20ADDCu) {
        ctx->pc = 0x20ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADD8u;
        // 0x20addc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADE0u;
        goto label_20ade0;
    }
    ctx->pc = 0x20ADD8u;
    SET_GPR_U32(ctx, 31, 0x20ADE0u);
    ctx->pc = 0x20ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADD8u;
    // 0x20addc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B4E8u, 0x20ADD8u, 0x20ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADE0u;
label_20ade0:
    // 0x20ade0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ade4:
    // 0x20ade4: 0xc082d40  jal         func_20B500
label_20ade8:
    if (ctx->pc == 0x20ADE8u) {
        ctx->pc = 0x20ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADE4u;
        // 0x20ade8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADECu;
        goto label_20adec;
    }
    ctx->pc = 0x20ADE4u;
    SET_GPR_U32(ctx, 31, 0x20ADECu);
    ctx->pc = 0x20ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADE4u;
    // 0x20ade8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20ADE4u, 0x20ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADECu;
label_20adec:
    // 0x20adec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20adf0:
    // 0x20adf0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_20adf4:
    if (ctx->pc == 0x20ADF4u) {
        ctx->pc = 0x20ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADF0u;
        // 0x20adf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADF8u;
        goto label_20adf8;
    }
    ctx->pc = 0x20ADF0u;
    {
        const bool branch_taken_0x20adf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adf0) {
            ctx->pc = 0x20ADF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ADF0u;
            // 0x20adf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE24u;
            goto label_20ae24;
        }
    }
    ctx->pc = 0x20ADF8u;
label_20adf8:
    // 0x20adf8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20adfc:
    // 0x20adfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20ae00:
    if (ctx->pc == 0x20AE00u) {
        ctx->pc = 0x20AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADFCu;
        // 0x20ae00: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE04u;
        goto label_20ae04;
    }
    ctx->pc = 0x20ADFCu;
    {
        const bool branch_taken_0x20adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADFCu;
        // 0x20ae00: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adfc) {
            ctx->pc = 0x20AE20u;
            goto label_20ae20;
        }
    }
    ctx->pc = 0x20AE04u;
label_20ae04:
    // 0x20ae04: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_20ae08:
    if (ctx->pc == 0x20AE08u) {
        ctx->pc = 0x20AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE04u;
        // 0x20ae08: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE0Cu;
        goto label_20ae0c;
    }
    ctx->pc = 0x20AE04u;
    {
        const bool branch_taken_0x20ae04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE04u;
        // 0x20ae08: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae04) {
            ctx->pc = 0x20AE20u;
            goto label_20ae20;
        }
    }
    ctx->pc = 0x20AE0Cu;
label_20ae0c:
    // 0x20ae0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20ae10:
    // 0x20ae10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20ae14:
    if (ctx->pc == 0x20AE14u) {
        ctx->pc = 0x20AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE10u;
        // 0x20ae14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE18u;
        goto label_20ae18;
    }
    ctx->pc = 0x20AE10u;
    {
        const bool branch_taken_0x20ae10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae10) {
            ctx->pc = 0x20AE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE10u;
            // 0x20ae14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AE24u;
            goto label_20ae24;
        }
    }
    ctx->pc = 0x20AE18u;
label_20ae18:
    // 0x20ae18: 0x40f809  jalr        $v0
label_20ae1c:
    if (ctx->pc == 0x20AE1Cu) {
        ctx->pc = 0x20AE20u;
        goto label_20ae20;
    }
    ctx->pc = 0x20AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AE20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE18u, 0x20AE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE20u;
label_20ae20:
    // 0x20ae20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ae20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ae24:
    // 0x20ae24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ae24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20ae28:
    // 0x20ae28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ae2c:
    // 0x20ae2c: 0x3e00008  jr          $ra
label_20ae30:
    if (ctx->pc == 0x20AE30u) {
        ctx->pc = 0x20AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE2Cu;
        // 0x20ae30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE34u;
        goto label_fallthrough_0x20ae2c;
    }
    ctx->pc = 0x20AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE2Cu;
        // 0x20ae30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20ae2c:
    ctx->pc = 0x20AE34u;
}
