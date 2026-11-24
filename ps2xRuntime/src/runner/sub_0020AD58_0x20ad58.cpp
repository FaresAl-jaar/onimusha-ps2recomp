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

// Function: sub_0020AD58
// Address: 0x20ad58 - 0x20adc8
void sub_0020AD58_0x20ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AD58_0x20ad58");
#endif

    switch (ctx->pc) {
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        default: break;
    }

    ctx->pc = 0x20ad58u;

label_20ad58:
    // 0x20ad58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ad5c:
    // 0x20ad5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20ad60:
    // 0x20ad60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20ad64:
    // 0x20ad64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20ad68:
    // 0x20ad68: 0xc082d3a  jal         func_20B4E8
label_20ad6c:
    if (ctx->pc == 0x20AD6Cu) {
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD70u;
        goto label_20ad70;
    }
    ctx->pc = 0x20AD68u;
    SET_GPR_U32(ctx, 31, 0x20AD70u);
    ctx->pc = 0x20AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD68u;
    // 0x20ad6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B4E8u, 0x20AD68u, 0x20AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD70u;
label_20ad70:
    // 0x20ad70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ad74:
    // 0x20ad74: 0xc082d40  jal         func_20B500
label_20ad78:
    if (ctx->pc == 0x20AD78u) {
        ctx->pc = 0x20AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD74u;
        // 0x20ad78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD7Cu;
        goto label_20ad7c;
    }
    ctx->pc = 0x20AD74u;
    SET_GPR_U32(ctx, 31, 0x20AD7Cu);
    ctx->pc = 0x20AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD74u;
    // 0x20ad78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20AD74u, 0x20AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD7Cu;
label_20ad7c:
    // 0x20ad7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20ad7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ad80:
    // 0x20ad80: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_20ad84:
    if (ctx->pc == 0x20AD84u) {
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD88u;
        goto label_20ad88;
    }
    ctx->pc = 0x20AD80u;
    {
        const bool branch_taken_0x20ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad80) {
            ctx->pc = 0x20AD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD80u;
            // 0x20ad84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADB8u;
            goto label_20adb8;
        }
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20ad8c:
    // 0x20ad8c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_20ad90:
    if (ctx->pc == 0x20AD90u) {
        ctx->pc = 0x20AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD8Cu;
        // 0x20ad90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD94u;
        goto label_20ad94;
    }
    ctx->pc = 0x20AD8Cu;
    {
        const bool branch_taken_0x20ad8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ad8c) {
            ctx->pc = 0x20AD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD8Cu;
            // 0x20ad90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADB8u;
            goto label_20adb8;
        }
    }
    ctx->pc = 0x20AD94u;
label_20ad94:
    // 0x20ad94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ad98:
    // 0x20ad98: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_20ad9c:
    if (ctx->pc == 0x20AD9Cu) {
        ctx->pc = 0x20AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD98u;
        // 0x20ad9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADA0u;
        goto label_20ada0;
    }
    ctx->pc = 0x20AD98u;
    {
        const bool branch_taken_0x20ad98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad98) {
            ctx->pc = 0x20AD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD98u;
            // 0x20ad9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADB0u;
            goto label_20adb0;
        }
    }
    ctx->pc = 0x20ADA0u;
label_20ada0:
    // 0x20ada0: 0x60f809  jalr        $v1
label_20ada4:
    if (ctx->pc == 0x20ADA4u) {
        ctx->pc = 0x20ADA8u;
        goto label_20ada8;
    }
    ctx->pc = 0x20ADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ADA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADA0u, 0x20ADA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ADA8u;
label_20ada8:
    // 0x20ada8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20adac:
    // 0x20adac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20adb0:
    // 0x20adb0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20adb4:
    // 0x20adb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20adb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20adb8:
    // 0x20adb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20adb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20adbc:
    // 0x20adbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20adbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20adc0:
    // 0x20adc0: 0x3e00008  jr          $ra
label_20adc4:
    if (ctx->pc == 0x20ADC4u) {
        ctx->pc = 0x20ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADC0u;
        // 0x20adc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADC8u;
        goto label_fallthrough_0x20adc0;
    }
    ctx->pc = 0x20ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADC0u;
        // 0x20adc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20adc0:
    ctx->pc = 0x20ADC8u;
}
