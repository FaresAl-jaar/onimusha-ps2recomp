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

// Function: sub_0024EB00
// Address: 0x24eb00 - 0x24eb24
void sub_0024EB00_0x24eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EB00_0x24eb00");
#endif

    ctx->pc = 0x24eb00u;

    // 0x24eb00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24eb04: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x24eb04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24eb08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EB08u;
    {
        const bool branch_taken_0x24eb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB08u;
        // 0x24eb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb08) {
            ctx->pc = 0x24EB1Cu;
            goto label_24eb1c;
        }
    }
    ctx->pc = 0x24EB10u;
    // 0x24eb10: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24eb14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24eb18: 0x8c427510  lw          $v0, 0x7510($v0)
    ctx->pc = 0x24eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29968)));
label_24eb1c:
    // 0x24eb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x24EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EB24u;
}
