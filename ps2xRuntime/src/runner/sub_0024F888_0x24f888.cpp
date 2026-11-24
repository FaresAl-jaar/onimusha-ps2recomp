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

// Function: sub_0024F888
// Address: 0x24f888 - 0x24f8b4
void sub_0024F888_0x24f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F888_0x24f888");
#endif

    ctx->pc = 0x24f888u;

    // 0x24f888: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f88c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f890: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f894: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F894u;
    {
        const bool branch_taken_0x24f894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x24f894) {
            ctx->pc = 0x24F898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F894u;
            // 0x24f898: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F8ACu;
            goto label_24f8ac;
        }
    }
    ctx->pc = 0x24F89Cu;
    // 0x24f89c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f8a0: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f8a4: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F8A4u;
    {
        const bool branch_taken_0x24f8a4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x24f8a4) {
            ctx->pc = 0x24F8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F8A4u;
            // 0x24f8a8: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F8ACu;
            goto label_24f8ac;
        }
    }
    ctx->pc = 0x24F8ACu;
label_24f8ac:
    // 0x24f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F8B4u;
}
