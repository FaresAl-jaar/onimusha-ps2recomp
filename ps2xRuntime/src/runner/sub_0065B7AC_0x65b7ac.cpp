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

// Function: sub_0065B7AC
// Address: 0x65b7ac - 0x65b7b4
void sub_0065B7AC_0x65b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B7AC_0x65b7ac");
#endif

    switch (ctx->pc) {
        case 0x65b7acu: goto label_65b7ac;
        case 0x65b7b0u: goto label_65b7b0;
        default: break;
    }

    ctx->pc = 0x65b7acu;

label_65b7ac:
    // 0x65b7ac: 0x8  jr          $zero
label_65b7b0:
    if (ctx->pc == 0x65B7B0u) {
        ctx->pc = 0x65B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7ACu;
        // 0x65b7b0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B7B4u;
        goto label_fallthrough_0x65b7ac;
    }
    ctx->pc = 0x65B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7ACu;
        // 0x65b7b0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B7ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x65b7ac:
    ctx->pc = 0x65B7B4u;
}
