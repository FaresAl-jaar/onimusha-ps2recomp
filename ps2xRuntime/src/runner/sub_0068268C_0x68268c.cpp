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

// Function: sub_0068268C
// Address: 0x68268c - 0x682698
void sub_0068268C_0x68268c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0068268C_0x68268c");
#endif

    ctx->pc = 0x68268cu;

    // 0x68268c: 0x3a06f8  .word       0x003A06F8                   # dsll        $zero, $k0, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x68268cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) << 27);
    // 0x682690: 0x9020902  j           func_4082408
    ctx->pc = 0x682690u;
    ctx->pc = 0x682694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x682690u;
    // 0x682694: 0x9300930  j           func_4C024C0 (Delay Slot)
    // J 0x4C024C0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4082408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4082408u, 0x682690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x682698u;
}
