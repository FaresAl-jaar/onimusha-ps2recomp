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

// Function: sub_00183500
// Address: 0x183500 - 0x183540
void sub_00183500_0x183500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183500_0x183500");
#endif

    ctx->pc = 0x183500u;

    // 0x183500: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x183504: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x183504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183508: 0x804501fc  lb          $a1, 0x1FC($v0)
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x18350c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18350Cu;
    {
        const bool branch_taken_0x18350c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x183510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18350Cu;
        // 0x183510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18350c) {
            ctx->pc = 0x18351Cu;
            goto label_18351c;
        }
    }
    ctx->pc = 0x183514u;
    // 0x183514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x183514u;
    {
        const bool branch_taken_0x183514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183514) {
            ctx->pc = 0x183538u;
            goto label_183538;
        }
    }
    ctx->pc = 0x18351Cu;
label_18351c:
    // 0x18351c: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x18351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x183520: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x183520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x183524: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x183524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183528: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18352c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x183530: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_183538:
    // 0x183538: 0x3e00008  jr          $ra
    ctx->pc = 0x183538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183540u;
}
