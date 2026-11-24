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

// Function: sub_002499D8
// Address: 0x2499d8 - 0x2499ec
void sub_002499D8_0x2499d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002499D8_0x2499d8");
#endif

    ctx->pc = 0x2499d8u;

    // 0x2499d8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2499d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2499dc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x2499e0: 0xac440cec  sw          $a0, 0xCEC($v0)
    ctx->pc = 0x2499e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D0CECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D0CECu, _value); } while (0);
    // 0x2499e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2499E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2499E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499E4u;
        // 0x2499e8: 0xac650cf0  sw          $a1, 0xCF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3312), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2499ECu;
}
