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

// Function: sub_002050F8
// Address: 0x2050f8 - 0x20515c
void sub_002050F8_0x2050f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002050F8_0x2050f8");
#endif

    switch (ctx->pc) {
        case 0x205120u: goto label_205120;
        default: break;
    }

    ctx->pc = 0x2050f8u;

    // 0x2050f8: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x2050f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x2050fc: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x2050fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x205100: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x205100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x205104: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x205104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x205108: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x205108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x20510c: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x20510cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x205110: 0x24890008  addiu       $t1, $a0, 0x8
    ctx->pc = 0x205110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x205114: 0x2488000c  addiu       $t0, $a0, 0xC
    ctx->pc = 0x205114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x205118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x205118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20511c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205120:
    // 0x205120: 0x24e200c0  addiu       $v0, $a3, 0xC0
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x205124: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x205124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x205128: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20512c: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x20512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x205130: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x205130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x205134: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x205138: 0xaca0fff0  sw          $zero, -0x10($a1)
    ctx->pc = 0x205138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 0));
    // 0x20513c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20513cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x205140: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205144: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x205144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x205148: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x205148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x20514c: 0x4c1fff4  bgez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x20514Cu;
    {
        const bool branch_taken_0x20514c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x205150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20514Cu;
        // 0x205150: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20514c) {
            ctx->pc = 0x205120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205120;
        }
    }
    ctx->pc = 0x205154u;
    // 0x205154: 0x3e00008  jr          $ra
    ctx->pc = 0x205154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20515Cu;
}
