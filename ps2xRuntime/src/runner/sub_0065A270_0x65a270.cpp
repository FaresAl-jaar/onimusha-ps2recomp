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

// Function: sub_0065A270
// Address: 0x65a270 - 0x65a27c
void sub_0065A270_0x65a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065A270_0x65a270");
#endif

    ctx->pc = 0x65a270u;

    // 0x65a270: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x65a270u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x65a274: 0xa010a00  j           func_8042800
    ctx->pc = 0x65A274u;
    ctx->pc = 0x65A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x65A274u;
    // 0x65a278: 0xa030a02  j           func_80C2808 (Delay Slot)
    // J 0x80C2808 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8042800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8042800u, 0x65A274u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x65A27Cu;
}
