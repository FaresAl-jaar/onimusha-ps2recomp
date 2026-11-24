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

// Function: sub_0024FBB0
// Address: 0x24fbb0 - 0x24fbec
void sub_0024FBB0_0x24fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBB0_0x24fbb0");
#endif

    ctx->pc = 0x24fbb0u;

    // 0x24fbb0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24fbb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fbb8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24fbbc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24fbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbc0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FBC0u;
    {
        const bool branch_taken_0x24fbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBC0u;
        // 0x24fbc4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbc0) {
            ctx->pc = 0x24FBD8u;
            goto label_24fbd8;
        }
    }
    ctx->pc = 0x24FBC8u;
    // 0x24fbc8: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24fbcc: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24fbd0: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24FBD0u;
    {
        const bool branch_taken_0x24fbd0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBD0u;
        // 0x24fbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbd0) {
            ctx->pc = 0x24FBE4u;
            goto label_24fbe4;
        }
    }
    ctx->pc = 0x24FBD8u;
label_24fbd8:
    // 0x24fbd8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24fbdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24fbe0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24fbe4:
    // 0x24fbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBECu;
}
