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

// Function: sub_001C1830
// Address: 0x1c1830 - 0x1c1844
void sub_001C1830_0x1c1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1830_0x1c1830");
#endif

    ctx->pc = 0x1c1830u;

    // 0x1c1830: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x1c1830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x1c1834: 0x3442ff60  ori         $v0, $v0, 0xFF60
    ctx->pc = 0x1c1834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x1c1838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c183c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1844u;
}
