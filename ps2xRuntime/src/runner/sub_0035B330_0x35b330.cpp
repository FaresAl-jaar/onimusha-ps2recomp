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

// Function: sub_0035B330
// Address: 0x35b330 - 0x35b360
void sub_0035B330_0x35b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B330_0x35b330");
#endif

    ctx->pc = 0x35b330u;

    // 0x35b330: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b334: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x35b338: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B338u;
    {
        const bool branch_taken_0x35b338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B338u;
        // 0x35b33c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b338) {
            ctx->pc = 0x35B358u;
            goto label_35b358;
        }
    }
    ctx->pc = 0x35B340u;
    // 0x35b340: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x35b340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b344: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b348: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x35b348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x35b34c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b350: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x35b350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b354: 0x0  nop
    ctx->pc = 0x35b354u;
    // NOP
label_35b358:
    // 0x35b358: 0x3e00008  jr          $ra
    ctx->pc = 0x35B358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B360u;
}
