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

// Function: sub_0024F3A0
// Address: 0x24f3a0 - 0x24f3d4
void sub_0024F3A0_0x24f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F3A0_0x24f3a0");
#endif

    ctx->pc = 0x24f3a0u;

    // 0x24f3a0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f3a8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f3ac: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F3ACu;
    {
        const bool branch_taken_0x24f3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3ACu;
        // 0x24f3b0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3ac) {
            ctx->pc = 0x24F3C4u;
            goto label_24f3c4;
        }
    }
    ctx->pc = 0x24F3B4u;
    // 0x24f3b4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f3b8: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f3bc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F3BCu;
    {
        const bool branch_taken_0x24f3bc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3BCu;
        // 0x24f3c0: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3bc) {
            ctx->pc = 0x24F3CCu;
            goto label_24f3cc;
        }
    }
    ctx->pc = 0x24F3C4u;
label_24f3c4:
    // 0x24f3c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x24f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x24f3c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x24f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_24f3cc:
    // 0x24f3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F3D4u;
}
