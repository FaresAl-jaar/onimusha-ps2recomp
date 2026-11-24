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

// Function: sub_00658290
// Address: 0x658290 - 0x6582a4
void sub_00658290_0x658290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00658290_0x658290");
#endif

    ctx->pc = 0x658290u;

    // 0x658290: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x658290u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
    // 0x658294: 0x4a00e0  .word       0x004A00E0                   # add         $zero, $v0, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x658294u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x658298: 0x160010  .word       0x00160010                   # mfhi        $zero # 00160000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x658298u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x65829c: 0x6c80008  tgei        $s6, 0x8
    ctx->pc = 0x65829cu;
    if (GPR_S64(ctx, 22) >= (int64_t)(int32_t)8) { runtime->handleTrap(rdram, ctx); }
    // 0x6582a0: 0x8280108  j           func_A00420
    ctx->pc = 0x6582A0u;
    ctx->pc = 0xA00420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA00420u, 0x6582A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x6582A8u;
}
