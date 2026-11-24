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

// Function: sub_001EA320
// Address: 0x1ea320 - 0x1ea374
void sub_001EA320_0x1ea320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA320_0x1ea320");
#endif

    switch (ctx->pc) {
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        default: break;
    }

    ctx->pc = 0x1ea320u;

label_1ea320:
    // 0x1ea320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea324:
    // 0x1ea324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ea328:
    // 0x1ea328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea32c:
    // 0x1ea32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea330:
    // 0x1ea330: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ea334:
    if (ctx->pc == 0x1EA334u) {
        ctx->pc = 0x1EA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA330u;
        // 0x1ea334: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA338u;
        goto label_1ea338;
    }
    ctx->pc = 0x1EA330u;
    {
        const bool branch_taken_0x1ea330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA330u;
        // 0x1ea334: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea330) {
            ctx->pc = 0x1EA360u;
            goto label_1ea360;
        }
    }
    ctx->pc = 0x1EA338u;
label_1ea338:
    // 0x1ea338: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x1ea338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_1ea33c:
    // 0x1ea33c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ea33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ea340:
    // 0x1ea340: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ea344:
    // 0x1ea344: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ea348:
    // 0x1ea348: 0x320f809  jalr        $t9
label_1ea34c:
    if (ctx->pc == 0x1EA34Cu) {
        ctx->pc = 0x1EA350u;
        goto label_1ea350;
    }
    ctx->pc = 0x1EA348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EA350u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA348u, 0x1EA350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA350u;
label_1ea350:
    // 0x1ea350: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ea354:
    if (ctx->pc == 0x1EA354u) {
        ctx->pc = 0x1EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA350u;
        // 0x1ea354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA358u;
        goto label_1ea358;
    }
    ctx->pc = 0x1EA350u;
    {
        const bool branch_taken_0x1ea350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA350u;
        // 0x1ea354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea350) {
            ctx->pc = 0x1EA360u;
            goto label_1ea360;
        }
    }
    ctx->pc = 0x1EA358u;
label_1ea358:
    // 0x1ea358: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ea35c:
    // 0x1ea35c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ea35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ea360:
    // 0x1ea360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea364:
    // 0x1ea364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea368:
    // 0x1ea368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea36c:
    // 0x1ea36c: 0x3e00008  jr          $ra
label_1ea370:
    if (ctx->pc == 0x1EA370u) {
        ctx->pc = 0x1EA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA36Cu;
        // 0x1ea370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA374u;
        goto label_fallthrough_0x1ea36c;
    }
    ctx->pc = 0x1EA36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA36Cu;
        // 0x1ea370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea36c:
    ctx->pc = 0x1EA374u;
}
