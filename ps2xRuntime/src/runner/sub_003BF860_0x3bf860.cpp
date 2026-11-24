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

// Function: sub_003BF860
// Address: 0x3bf860 - 0x3bf880
void sub_003BF860_0x3bf860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF860_0x3bf860");
#endif

    ctx->pc = 0x3bf860u;

    // 0x3bf860: 0x24a30100  addiu       $v1, $a1, 0x100
    ctx->pc = 0x3bf860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x3bf864: 0x32143  sra         $a0, $v1, 5
    ctx->pc = 0x3bf864u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
    // 0x3bf868: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x3bf868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x3bf86c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bf870: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x3bf870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x3bf874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bf874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bf878: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF878u;
        // 0x3bf87c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF880u;
}
