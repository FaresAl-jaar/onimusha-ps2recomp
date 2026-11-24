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

// Function: sub_00682530
// Address: 0x682530 - 0x682540
void sub_00682530_0x682530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682530_0x682530");
#endif

    switch (ctx->pc) {
        case 0x682530u: goto label_682530;
        case 0x682534u: goto label_682534;
        case 0x682538u: goto label_682538;
        case 0x68253cu: goto label_68253c;
        default: break;
    }

    ctx->pc = 0x682530u;

label_682530:
    // 0x682530: 0x39d1a0  .word       0x0039D1A0                   # add         $k0, $at, $t9 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682530u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_682534:
    // 0x682534: 0x39d218  .word       0x0039D218                   # mult        $k0, $at, $t9 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_682538:
    // 0x682538: 0x39d388  .word       0x0039D388                   # jr          $at # 0019D380 <InstrIdType: CPU_SPECIAL>
label_68253c:
    if (ctx->pc == 0x68253Cu) {
        ctx->pc = 0x68253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682538u;
        // 0x68253c: 0x39d400  .word       0x0039D400                   # sll         $k0, $t9, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x682540u;
        goto label_fallthrough_0x682538;
    }
    ctx->pc = 0x682538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x68253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682538u;
        // 0x68253c: 0x39d400  .word       0x0039D400                   # sll         $k0, $t9, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 25), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682538:
    ctx->pc = 0x682540u;
}
