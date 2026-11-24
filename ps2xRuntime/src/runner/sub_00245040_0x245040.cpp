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

// Function: sub_00245040
// Address: 0x245040 - 0x2450a4
void sub_00245040_0x245040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245040_0x245040");
#endif

    switch (ctx->pc) {
        case 0x245040u: goto label_245040;
        case 0x245044u: goto label_245044;
        case 0x245048u: goto label_245048;
        case 0x24504cu: goto label_24504c;
        case 0x245050u: goto label_245050;
        case 0x245054u: goto label_245054;
        case 0x245058u: goto label_245058;
        case 0x24505cu: goto label_24505c;
        case 0x245060u: goto label_245060;
        case 0x245064u: goto label_245064;
        case 0x245068u: goto label_245068;
        case 0x24506cu: goto label_24506c;
        case 0x245070u: goto label_245070;
        case 0x245074u: goto label_245074;
        case 0x245078u: goto label_245078;
        case 0x24507cu: goto label_24507c;
        case 0x245080u: goto label_245080;
        case 0x245084u: goto label_245084;
        case 0x245088u: goto label_245088;
        case 0x24508cu: goto label_24508c;
        case 0x245090u: goto label_245090;
        case 0x245094u: goto label_245094;
        case 0x245098u: goto label_245098;
        case 0x24509cu: goto label_24509c;
        case 0x2450a0u: goto label_2450a0;
        default: break;
    }

    ctx->pc = 0x245040u;

label_245040:
    // 0x245040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_245044:
    // 0x245044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_245048:
    // 0x245048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24504c:
    // 0x24504c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_245050:
    if (ctx->pc == 0x245050u) {
        ctx->pc = 0x245050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24504Cu;
        // 0x245050: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245054u;
        goto label_245054;
    }
    ctx->pc = 0x24504Cu;
    {
        const bool branch_taken_0x24504c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24504Cu;
        // 0x245050: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24504c) {
            ctx->pc = 0x245068u;
            goto label_245068;
        }
    }
    ctx->pc = 0x245054u;
label_245054:
    // 0x245054: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245058:
    // 0x245058: 0xc090d8a  jal         func_243628
label_24505c:
    if (ctx->pc == 0x24505Cu) {
        ctx->pc = 0x24505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245058u;
        // 0x24505c: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245060u;
        goto label_245060;
    }
    ctx->pc = 0x245058u;
    SET_GPR_U32(ctx, 31, 0x245060u);
    ctx->pc = 0x24505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245058u;
    // 0x24505c: 0x2484c4e0  addiu       $a0, $a0, -0x3B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245058u, 0x245060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245060u;
label_245060:
    // 0x245060: 0x1000000c  b           . + 4 + (0xC << 2)
label_245064:
    if (ctx->pc == 0x245064u) {
        ctx->pc = 0x245064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245060u;
        // 0x245064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245068u;
        goto label_245068;
    }
    ctx->pc = 0x245060u;
    {
        const bool branch_taken_0x245060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245060u;
        // 0x245064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245060) {
            ctx->pc = 0x245094u;
            goto label_245094;
        }
    }
    ctx->pc = 0x245068u;
label_245068:
    // 0x245068: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x245068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24506c:
    // 0x24506c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_245070:
    // 0x245070: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_245074:
    if (ctx->pc == 0x245074u) {
        ctx->pc = 0x245074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245070u;
        // 0x245074: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245078u;
        goto label_245078;
    }
    ctx->pc = 0x245070u;
    {
        const bool branch_taken_0x245070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245070) {
            ctx->pc = 0x245074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245070u;
            // 0x245074: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245088u;
            goto label_245088;
        }
    }
    ctx->pc = 0x245078u;
label_245078:
    // 0x245078: 0x40f809  jalr        $v0
label_24507c:
    if (ctx->pc == 0x24507Cu) {
        ctx->pc = 0x24507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245078u;
        // 0x24507c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245080u;
        goto label_245080;
    }
    ctx->pc = 0x245078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245080u);
        ctx->pc = 0x24507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245078u;
        // 0x24507c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245078u, 0x245080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245080u;
label_245080:
    // 0x245080: 0x10000003  b           . + 4 + (0x3 << 2)
label_245084:
    if (ctx->pc == 0x245084u) {
        ctx->pc = 0x245084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245080u;
        // 0x245084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245088u;
        goto label_245088;
    }
    ctx->pc = 0x245080u;
    {
        const bool branch_taken_0x245080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245080u;
        // 0x245084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245080) {
            ctx->pc = 0x245090u;
            goto label_245090;
        }
    }
    ctx->pc = 0x245088u;
label_245088:
    // 0x245088: 0xc090d8a  jal         func_243628
label_24508c:
    if (ctx->pc == 0x24508Cu) {
        ctx->pc = 0x24508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245088u;
        // 0x24508c: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245090u;
        goto label_245090;
    }
    ctx->pc = 0x245088u;
    SET_GPR_U32(ctx, 31, 0x245090u);
    ctx->pc = 0x24508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245088u;
    // 0x24508c: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245088u, 0x245090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245090u;
label_245090:
    // 0x245090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245094:
    // 0x245094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245098:
    // 0x245098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24509c:
    // 0x24509c: 0x3e00008  jr          $ra
label_2450a0:
    if (ctx->pc == 0x2450A0u) {
        ctx->pc = 0x2450A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24509Cu;
        // 0x2450a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450A4u;
        goto label_fallthrough_0x24509c;
    }
    ctx->pc = 0x24509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2450A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24509Cu;
        // 0x2450a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24509c:
    ctx->pc = 0x2450A4u;
}
