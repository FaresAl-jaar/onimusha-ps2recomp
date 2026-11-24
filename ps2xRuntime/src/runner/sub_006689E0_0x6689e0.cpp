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

// Function: sub_006689E0
// Address: 0x6689e0 - 0x6689ec
void sub_006689E0_0x6689e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006689E0_0x6689e0");
#endif

    switch (ctx->pc) {
        case 0x6689e0u: goto label_6689e0;
        case 0x6689e4u: goto label_6689e4;
        case 0x6689e8u: goto label_6689e8;
        default: break;
    }

    ctx->pc = 0x6689e0u;

label_6689e0:
    // 0x6689e0: 0x214f60  .word       0x00214F60                   # add         $t1, $at, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6689e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_6689e4:
    // 0x6689e4: 0x215048  .word       0x00215048                   # jr          $at # 00015040 <InstrIdType: CPU_SPECIAL>
label_6689e8:
    if (ctx->pc == 0x6689E8u) {
        ctx->pc = 0x6689E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6689E4u;
        // 0x6689e8: 0x215068  .word       0x00215068                   # mfsa        $t2 # 00210040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 10, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x6689ECu;
        goto label_fallthrough_0x6689e4;
    }
    ctx->pc = 0x6689E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x6689E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6689E4u;
        // 0x6689e8: 0x215068  .word       0x00215068                   # mfsa        $t2 # 00210040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 10, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6689E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6689e4:
    ctx->pc = 0x6689ECu;
}
