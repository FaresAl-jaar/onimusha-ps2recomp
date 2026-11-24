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

// Function: sub_0022BE18
// Address: 0x22be18 - 0x22be34
void sub_0022BE18_0x22be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE18_0x22be18");
#endif

    ctx->pc = 0x22be18u;

    // 0x22be18: 0x948200a0  lhu         $v0, 0xA0($a0)
    ctx->pc = 0x22be18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x22be1c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22be1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22be20: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x22be20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x22be24: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x22be24u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22be28: 0x948200a4  lhu         $v0, 0xA4($a0)
    ctx->pc = 0x22be28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x22be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE2Cu;
        // 0x22be30: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE34u;
}
