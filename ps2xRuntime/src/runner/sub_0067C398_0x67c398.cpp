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

// Function: sub_0067C398
// Address: 0x67c398 - 0x67c3a0
void sub_0067C398_0x67c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C398_0x67c398");
#endif

    switch (ctx->pc) {
        case 0x67c398u: goto label_67c398;
        case 0x67c39cu: goto label_67c39c;
        default: break;
    }

    ctx->pc = 0x67c398u;

label_67c398:
    // 0x67c398: 0x181008  .word       0x00181008                   # jr          $zero # 00181000 <InstrIdType: CPU_SPECIAL>
label_67c39c:
    if (ctx->pc == 0x67C39Cu) {
        ctx->pc = 0x67C3A0u;
        goto label_fallthrough_0x67c398;
    }
    ctx->pc = 0x67C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x67C398u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x67c398:
    ctx->pc = 0x67C3A0u;
}
