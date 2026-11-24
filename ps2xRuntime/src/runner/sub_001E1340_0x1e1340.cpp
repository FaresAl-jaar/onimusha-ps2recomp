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

// Function: sub_001E1340
// Address: 0x1e1340 - 0x1e1394
void sub_001E1340_0x1e1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1340_0x1e1340");
#endif

    switch (ctx->pc) {
        case 0x1e1340u: goto label_1e1340;
        case 0x1e1344u: goto label_1e1344;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e134cu: goto label_1e134c;
        case 0x1e1350u: goto label_1e1350;
        case 0x1e1354u: goto label_1e1354;
        case 0x1e1358u: goto label_1e1358;
        case 0x1e135cu: goto label_1e135c;
        case 0x1e1360u: goto label_1e1360;
        case 0x1e1364u: goto label_1e1364;
        case 0x1e1368u: goto label_1e1368;
        case 0x1e136cu: goto label_1e136c;
        case 0x1e1370u: goto label_1e1370;
        case 0x1e1374u: goto label_1e1374;
        case 0x1e1378u: goto label_1e1378;
        case 0x1e137cu: goto label_1e137c;
        case 0x1e1380u: goto label_1e1380;
        case 0x1e1384u: goto label_1e1384;
        case 0x1e1388u: goto label_1e1388;
        case 0x1e138cu: goto label_1e138c;
        case 0x1e1390u: goto label_1e1390;
        default: break;
    }

    ctx->pc = 0x1e1340u;

label_1e1340:
    // 0x1e1340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1344:
    // 0x1e1344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1348:
    // 0x1e1348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e134c:
    // 0x1e134c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1350:
    // 0x1e1350: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e1354:
    if (ctx->pc == 0x1E1354u) {
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1358u;
        goto label_1e1358;
    }
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E1380u;
            goto label_1e1380;
        }
    }
    ctx->pc = 0x1E1358u;
label_1e1358:
    // 0x1e1358: 0x24426730  addiu       $v0, $v0, 0x6730
    ctx->pc = 0x1e1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
label_1e135c:
    // 0x1e135c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1360:
    // 0x1e1360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1364:
    // 0x1e1364: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e1368:
    // 0x1e1368: 0x320f809  jalr        $t9
label_1e136c:
    if (ctx->pc == 0x1E136Cu) {
        ctx->pc = 0x1E1370u;
        goto label_1e1370;
    }
    ctx->pc = 0x1E1368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1370u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1368u, 0x1E1370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1370u;
label_1e1370:
    // 0x1e1370: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e1374:
    if (ctx->pc == 0x1E1374u) {
        ctx->pc = 0x1E1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1370u;
        // 0x1e1374: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1378u;
        goto label_1e1378;
    }
    ctx->pc = 0x1E1370u;
    {
        const bool branch_taken_0x1e1370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1370u;
        // 0x1e1374: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1370) {
            ctx->pc = 0x1E1380u;
            goto label_1e1380;
        }
    }
    ctx->pc = 0x1E1378u;
label_1e1378:
    // 0x1e1378: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e137c:
    // 0x1e137c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1380:
    // 0x1e1380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1384:
    // 0x1e1384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1388:
    // 0x1e1388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e138c:
    // 0x1e138c: 0x3e00008  jr          $ra
label_1e1390:
    if (ctx->pc == 0x1E1390u) {
        ctx->pc = 0x1E1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E138Cu;
        // 0x1e1390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1394u;
        goto label_fallthrough_0x1e138c;
    }
    ctx->pc = 0x1E138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E138Cu;
        // 0x1e1390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E138Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e138c:
    ctx->pc = 0x1E1394u;
}
