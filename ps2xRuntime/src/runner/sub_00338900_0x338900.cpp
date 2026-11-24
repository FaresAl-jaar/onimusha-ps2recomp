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

// Function: sub_00338900
// Address: 0x338900 - 0x338938
void sub_00338900_0x338900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338900_0x338900");
#endif

    ctx->pc = 0x338900u;

    // 0x338900: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x338900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x338904: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x338904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x338908: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x338908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33890c: 0x90830dcc  lbu         $v1, 0xDCC($a0)
    ctx->pc = 0x33890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3532)));
    // 0x338910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x338910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x338914: 0xa0830dcc  sb          $v1, 0xDCC($a0)
    ctx->pc = 0x338914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3532), (uint8_t)GPR_U32(ctx, 3));
    // 0x338918: 0x90830dcc  lbu         $v1, 0xDCC($a0)
    ctx->pc = 0x338918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3532)));
    // 0x33891c: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x33891cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x338920: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x338920u;
    {
        const bool branch_taken_0x338920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338920u;
        // 0x338924: 0x24850dcc  addiu       $a1, $a0, 0xDCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338920) {
            ctx->pc = 0x338930u;
            goto label_338930;
        }
    }
    ctx->pc = 0x338928u;
    // 0x338928: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x338928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x33892c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x33892cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_338930:
    // 0x338930: 0x3e00008  jr          $ra
    ctx->pc = 0x338930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338938u;
}
