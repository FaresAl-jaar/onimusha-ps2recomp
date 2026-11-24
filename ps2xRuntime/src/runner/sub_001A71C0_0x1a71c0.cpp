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

// Function: sub_001A71C0
// Address: 0x1a71c0 - 0x1a71f8
void sub_001A71C0_0x1a71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A71C0_0x1a71c0");
#endif

    ctx->pc = 0x1a71c0u;

    // 0x1a71c0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A71C0u;
    {
        const bool branch_taken_0x1a71c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71c0) {
            ctx->pc = 0x1A71F0u;
            goto label_1a71f0;
        }
    }
    ctx->pc = 0x1A71C8u;
    // 0x1a71c8: 0xac857840  sw          $a1, 0x7840($a0)
    ctx->pc = 0x1a71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30784), GPR_U32(ctx, 5));
    // 0x1a71cc: 0x8c837848  lw          $v1, 0x7848($a0)
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30792)));
    // 0x1a71d0: 0x8c857840  lw          $a1, 0x7840($a0)
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1a71d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a71d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a71dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a71e0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1a71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1a71e4: 0x8c837840  lw          $v1, 0x7840($a0)
    ctx->pc = 0x1a71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1a71e8: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x1a71e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a71ec: 0x0  nop
    ctx->pc = 0x1a71ecu;
    // NOP
label_1a71f0:
    // 0x1a71f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71F8u;
}
