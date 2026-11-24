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

// Function: sub_0024F9E8
// Address: 0x24f9e8 - 0x24fa18
void sub_0024F9E8_0x24f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F9E8_0x24f9e8");
#endif

    ctx->pc = 0x24f9e8u;

    // 0x24f9e8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f9ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9f0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f9f4: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F9F4u;
    {
        const bool branch_taken_0x24f9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9F4u;
        // 0x24f9f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9f4) {
            ctx->pc = 0x24FA0Cu;
            goto label_24fa0c;
        }
    }
    ctx->pc = 0x24F9FCu;
    // 0x24f9fc: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24fa00: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24fa04: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FA04u;
    {
        const bool branch_taken_0x24fa04 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA04u;
        // 0x24fa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa04) {
            ctx->pc = 0x24FA10u;
            goto label_24fa10;
        }
    }
    ctx->pc = 0x24FA0Cu;
label_24fa0c:
    // 0x24fa0c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x24fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_24fa10:
    // 0x24fa10: 0x3e00008  jr          $ra
    ctx->pc = 0x24FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FA18u;
}
