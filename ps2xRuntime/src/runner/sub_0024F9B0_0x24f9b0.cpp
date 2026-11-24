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

// Function: sub_0024F9B0
// Address: 0x24f9b0 - 0x24f9e8
void sub_0024F9B0_0x24f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F9B0_0x24f9b0");
#endif

    ctx->pc = 0x24f9b0u;

    // 0x24f9b0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f9b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9b8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f9bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24f9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9c0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F9C0u;
    {
        const bool branch_taken_0x24f9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9C0u;
        // 0x24f9c4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9c0) {
            ctx->pc = 0x24F9D8u;
            goto label_24f9d8;
        }
    }
    ctx->pc = 0x24F9C8u;
    // 0x24f9c8: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24f9cc: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f9d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F9D0u;
    {
        const bool branch_taken_0x24f9d0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9D0u;
        // 0x24f9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9d0) {
            ctx->pc = 0x24F9E0u;
            goto label_24f9e0;
        }
    }
    ctx->pc = 0x24F9D8u;
label_24f9d8:
    // 0x24f9d8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x24f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x24f9dc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x24f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_24f9e0:
    // 0x24f9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F9E8u;
}
