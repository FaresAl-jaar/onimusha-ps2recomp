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

// Function: sub_00244318
// Address: 0x244318 - 0x244374
void sub_00244318_0x244318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244318_0x244318");
#endif

    switch (ctx->pc) {
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        default: break;
    }

    ctx->pc = 0x244318u;

label_244318:
    // 0x244318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24431c:
    // 0x24431c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x24431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_244320:
    // 0x244320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_244324:
    // 0x244324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244328:
    // 0x244328: 0x24505f40  addiu       $s0, $v0, 0x5F40
    ctx->pc = 0x244328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
label_24432c:
    // 0x24432c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_244330:
    // 0x244330: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_244334:
    // 0x244334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244338:
    // 0x244338: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24433c:
    if (ctx->pc == 0x24433Cu) {
        ctx->pc = 0x24433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244338u;
        // 0x24433c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244340u;
        goto label_244340;
    }
    ctx->pc = 0x244338u;
    {
        const bool branch_taken_0x244338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244338u;
        // 0x24433c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244338) {
            ctx->pc = 0x244354u;
            goto label_244354;
        }
    }
    ctx->pc = 0x244340u;
label_244340:
    // 0x244340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x244340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244344:
    // 0x244344: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_244348:
    if (ctx->pc == 0x244348u) {
        ctx->pc = 0x244348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244344u;
        // 0x244348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24434Cu;
        goto label_24434c;
    }
    ctx->pc = 0x244344u;
    {
        const bool branch_taken_0x244344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244344) {
            ctx->pc = 0x244348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244344u;
            // 0x244348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244358u;
            goto label_244358;
        }
    }
    ctx->pc = 0x24434Cu;
label_24434c:
    // 0x24434c: 0x40f809  jalr        $v0
label_244350:
    if (ctx->pc == 0x244350u) {
        ctx->pc = 0x244354u;
        goto label_244354;
    }
    ctx->pc = 0x24434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244354u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24434Cu, 0x244354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244354u;
label_244354:
    // 0x244354: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x244354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_244358:
    // 0x244358: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_24435c:
    if (ctx->pc == 0x24435Cu) {
        ctx->pc = 0x24435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244358u;
        // 0x24435c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244360u;
        goto label_244360;
    }
    ctx->pc = 0x244358u;
    {
        const bool branch_taken_0x244358 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x244358) {
            ctx->pc = 0x24435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244358u;
            // 0x24435c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244338;
        }
    }
    ctx->pc = 0x244360u;
label_244360:
    // 0x244360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244364:
    // 0x244364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244368:
    // 0x244368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24436c:
    // 0x24436c: 0x3e00008  jr          $ra
label_244370:
    if (ctx->pc == 0x244370u) {
        ctx->pc = 0x244370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24436Cu;
        // 0x244370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244374u;
        goto label_fallthrough_0x24436c;
    }
    ctx->pc = 0x24436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24436Cu;
        // 0x244370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24436c:
    ctx->pc = 0x244374u;
}
