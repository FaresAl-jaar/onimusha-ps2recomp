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

// Function: sub_006582F0
// Address: 0x6582f0 - 0x658304
void sub_006582F0_0x6582f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006582F0_0x6582f0");
#endif

    ctx->pc = 0x6582f0u;

    // 0x6582f0: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x6582f0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
    // 0x6582f4: 0x1f00d6  .word       0x001F00D6                   # dsrlv       $zero, $ra, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6582f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) >> (GPR_U32(ctx, 0) & 0x3F));
    // 0x6582f8: 0x320010  .word       0x00320010                   # mfhi        $zero # 00320000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6582f8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x6582fc: 0x8480008  j           func_1200020
    ctx->pc = 0x6582FCu;
    ctx->pc = 0x658300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x6582FCu;
    // 0x658300: 0xb680108  j           func_DA00420 (Delay Slot)
    // J 0xDA00420 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200020u, 0x6582FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x658304u;
}
