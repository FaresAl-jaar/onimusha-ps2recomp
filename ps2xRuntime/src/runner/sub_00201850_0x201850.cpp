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

// Function: sub_00201850
// Address: 0x201850 - 0x201880
void sub_00201850_0x201850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201850_0x201850");
#endif

    ctx->pc = 0x201850u;

    // 0x201850: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x201850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x201854: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x201854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x201858: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x201858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x20185c: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x20185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x201860: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x201860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x201864: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x201868: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x201868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x20186c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201870: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201878: 0x3e00008  jr          $ra
    ctx->pc = 0x201878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201878u;
        // 0x20187c: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201880u;
}
