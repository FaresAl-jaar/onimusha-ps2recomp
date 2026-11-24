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

// Function: sub_002A0310
// Address: 0x2a0310 - 0x2a0364
void sub_002A0310_0x2a0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0310_0x2a0310");
#endif

    switch (ctx->pc) {
        case 0x2a0328u: goto label_2a0328;
        default: break;
    }

    ctx->pc = 0x2a0310u;

    // 0x2a0310: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a0314: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a0318: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2a0318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a031c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2a031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a0320: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2a0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a0324: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2a0324u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0328:
    // 0x2a0328: 0xacc80044  sw          $t0, 0x44($a2)
    ctx->pc = 0x2a0328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 8));
    // 0x2a032c: 0xacc70064  sw          $a3, 0x64($a2)
    ctx->pc = 0x2a032cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 7));
    // 0x2a0330: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x2a0334: 0xacc40054  sw          $a0, 0x54($a2)
    ctx->pc = 0x2a0334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 4));
    // 0x2a0338: 0x25080120  addiu       $t0, $t0, 0x120
    ctx->pc = 0x2a0338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x2a033c: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x2a033cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x2a0340: 0x24e70120  addiu       $a3, $a3, 0x120
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2a0344: 0xacc20074  sw          $v0, 0x74($a2)
    ctx->pc = 0x2a0344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 2));
    // 0x2a0348: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2a034c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2a0350: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2a0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a0354: 0x1ca0fff4  bgtz        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A0354u;
    {
        const bool branch_taken_0x2a0354 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x2A0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0354u;
        // 0x2a0358: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0354) {
            ctx->pc = 0x2A0328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0328;
        }
    }
    ctx->pc = 0x2A035Cu;
    // 0x2a035c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A035Cu;
        // 0x2a0360: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0364u;
}
