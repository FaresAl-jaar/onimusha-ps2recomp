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

// Function: sub_00658258
// Address: 0x658258 - 0x65826c
void sub_00658258_0x658258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00658258_0x658258");
#endif

    switch (ctx->pc) {
        case 0x658258u: goto label_658258;
        case 0x65825cu: goto label_65825c;
        case 0x658260u: goto label_658260;
        case 0x658264u: goto label_658264;
        case 0x658268u: goto label_658268;
        default: break;
    }

    ctx->pc = 0x658258u;

label_658258:
    // 0x658258: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x658258u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_65825c:
    // 0x65825c: 0x9000a0  .word       0x009000A0                   # add         $zero, $a0, $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65825cu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_658260:
    // 0x658260: 0x140060  .word       0x00140060                   # add         $zero, $zero, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x658260u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_658264:
    // 0x658264: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_658268:
    if (ctx->pc == 0x658268u) {
        ctx->pc = 0x658268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x658264u;
        // 0x658268: 0x1480608  .word       0x01480608                   # jr          $t2 # 00080600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x65826Cu;
        goto label_fallthrough_0x658264;
    }
    ctx->pc = 0x658264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x658268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x658264u;
        // 0x658268: 0x1480608  .word       0x01480608                   # jr          $t2 # 00080600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x658264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x658264:
    ctx->pc = 0x65826Cu;
}
