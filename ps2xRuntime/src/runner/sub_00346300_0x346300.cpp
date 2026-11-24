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

// Function: sub_00346300
// Address: 0x346300 - 0x346340
void sub_00346300_0x346300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346300_0x346300");
#endif

    ctx->pc = 0x346300u;

    // 0x346300: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x346300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x346304: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x346304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x346308: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x346308u;
    {
        const bool branch_taken_0x346308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346308u;
        // 0x34630c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346308) {
            ctx->pc = 0x346330u;
            goto label_346330;
        }
    }
    ctx->pc = 0x346310u;
    // 0x346310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x346314: 0x2463f5a0  addiu       $v1, $v1, -0xA60
    ctx->pc = 0x346314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964640));
    // 0x346318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34631c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346320: 0x400008  jr          $v0
    ctx->pc = 0x346320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x346328u: goto label_346328;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x346328u;
label_346328:
    // 0x346328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346328u;
    {
        const bool branch_taken_0x346328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346328u;
        // 0x34632c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346328) {
            ctx->pc = 0x346338u;
            goto label_346338;
        }
    }
    ctx->pc = 0x346330u;
label_346330:
    // 0x346330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346334: 0x0  nop
    ctx->pc = 0x346334u;
    // NOP
label_346338:
    // 0x346338: 0x3e00008  jr          $ra
    ctx->pc = 0x346338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346340u;
}
