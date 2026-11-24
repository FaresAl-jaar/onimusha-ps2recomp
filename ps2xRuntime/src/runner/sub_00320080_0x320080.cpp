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

// Function: sub_00320080
// Address: 0x320080 - 0x3200a0
void sub_00320080_0x320080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320080_0x320080");
#endif

    ctx->pc = 0x320080u;

    // 0x320080: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320080u;
    {
        const bool branch_taken_0x320080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x320084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320080u;
        // 0x320084: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320080) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320088u;
    // 0x320088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320088u;
    {
        const bool branch_taken_0x320088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320088u;
        // 0x32008c: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320088) {
            ctx->pc = 0x320098u;
            goto label_320098;
        }
    }
    ctx->pc = 0x320090u;
label_320090:
    // 0x320090: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x320090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x320094: 0xa487000c  sh          $a3, 0xC($a0)
    ctx->pc = 0x320094u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 7));
label_320098:
    // 0x320098: 0x3e00008  jr          $ra
    ctx->pc = 0x320098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3200A0u;
}
