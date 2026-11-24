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

// Function: sub_00346340
// Address: 0x346340 - 0x346380
void sub_00346340_0x346340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346340_0x346340");
#endif

    ctx->pc = 0x346340u;

    // 0x346340: 0x2482ffde  addiu       $v0, $a0, -0x22
    ctx->pc = 0x346340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967262));
    // 0x346344: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x346344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x346348: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x346348u;
    {
        const bool branch_taken_0x346348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346348u;
        // 0x34634c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346348) {
            ctx->pc = 0x346370u;
            goto label_346370;
        }
    }
    ctx->pc = 0x346350u;
    // 0x346350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x346350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x346354: 0x2463f5c0  addiu       $v1, $v1, -0xA40
    ctx->pc = 0x346354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964672));
    // 0x346358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x346358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34635c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346360: 0x400008  jr          $v0
    ctx->pc = 0x346360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x346368u: goto label_346368;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346360u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x346368u;
label_346368:
    // 0x346368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346368u;
    {
        const bool branch_taken_0x346368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346368u;
        // 0x34636c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346368) {
            ctx->pc = 0x346378u;
            goto label_346378;
        }
    }
    ctx->pc = 0x346370u;
label_346370:
    // 0x346370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346374: 0x0  nop
    ctx->pc = 0x346374u;
    // NOP
label_346378:
    // 0x346378: 0x3e00008  jr          $ra
    ctx->pc = 0x346378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346380u;
}
