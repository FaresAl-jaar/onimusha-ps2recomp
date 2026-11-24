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

// Function: sub_00677740
// Address: 0x677740 - 0x67774c
void sub_00677740_0x677740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00677740_0x677740");
#endif

    ctx->pc = 0x677740u;

    // 0x677740: 0xfc000400  sd          $zero, 0x400($zero)
    ctx->pc = 0x677740u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x400u, _value); } while (0);
    // 0x677744: 0x8000000  j           func_000000
    ctx->pc = 0x677744u;
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x677744u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x67774Cu;
}
