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

// Function: sub_0021A110
// Address: 0x21a110 - 0x21a13c
void sub_0021A110_0x21a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A110_0x21a110");
#endif

    ctx->pc = 0x21a110u;

    // 0x21a110: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A110u;
    {
        const bool branch_taken_0x21a110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A110u;
        // 0x21a114: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a110) {
            ctx->pc = 0x21A134u;
            goto label_21a134;
        }
    }
    ctx->pc = 0x21A118u;
    // 0x21a118: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a11c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A11Cu;
    {
        const bool branch_taken_0x21a11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a11c) {
            ctx->pc = 0x21A120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A11Cu;
            // 0x21a120: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A12Cu;
            goto label_21a12c;
        }
    }
    ctx->pc = 0x21A124u;
    // 0x21a124: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a128: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21a12c:
    // 0x21a12c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a130: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x21a130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_21a134:
    // 0x21a134: 0x3e00008  jr          $ra
    ctx->pc = 0x21A134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A13Cu;
}
