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

// Function: sub_0024CF78
// Address: 0x24cf78 - 0x24cf8c
void sub_0024CF78_0x24cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CF78_0x24cf78");
#endif

    ctx->pc = 0x24cf78u;

    // 0x24cf78: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24cf7c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24cf80: 0xac44651c  sw          $a0, 0x651C($v0)
    ctx->pc = 0x24cf80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D651Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D651Cu, _value); } while (0);
    // 0x24cf84: 0x3e00008  jr          $ra
    ctx->pc = 0x24CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF84u;
        // 0x24cf88: 0xac656520  sw          $a1, 0x6520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CF8Cu;
}
