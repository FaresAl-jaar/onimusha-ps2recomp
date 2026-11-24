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

// Function: sub_00681C60
// Address: 0x681c60 - 0x681c80
void sub_00681C60_0x681c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681C60_0x681c60");
#endif

    switch (ctx->pc) {
        case 0x681c60u: goto label_681c60;
        case 0x681c64u: goto label_681c64;
        case 0x681c68u: goto label_681c68;
        case 0x681c6cu: goto label_681c6c;
        case 0x681c70u: goto label_681c70;
        case 0x681c74u: goto label_681c74;
        case 0x681c78u: goto label_681c78;
        case 0x681c7cu: goto label_681c7c;
        default: break;
    }

    ctx->pc = 0x681c60u;

label_681c60:
    // 0x681c60: 0x3793e8  .word       0x003793E8                   # mfsa        $s2 # 003703C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681c60u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_681c64:
    // 0x681c64: 0x379418  .word       0x00379418                   # mult        $s2, $at, $s7 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_681c68:
    // 0x681c68: 0x379420  .word       0x00379420                   # add         $s2, $at, $s7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681c68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_681c6c:
    // 0x681c6c: 0x3795a0  .word       0x003795A0                   # add         $s2, $at, $s7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681c6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_681c70:
    // 0x681c70: 0x3797a0  .word       0x003797A0                   # add         $s2, $at, $s7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681c70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_681c74:
    // 0x681c74: 0x379838  .word       0x00379838                   # dsll        $s3, $s7, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681c74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 23) << 0);
label_681c78:
    // 0x681c78: 0x379908  .word       0x00379908                   # jr          $at # 00179900 <InstrIdType: CPU_SPECIAL>
label_681c7c:
    if (ctx->pc == 0x681C7Cu) {
        ctx->pc = 0x681C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681C78u;
        // 0x681c7c: 0x379910  .word       0x00379910                   # mfhi        $s3 # 00370100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x681C80u;
        goto label_fallthrough_0x681c78;
    }
    ctx->pc = 0x681C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x681C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681C78u;
        // 0x681c7c: 0x379910  .word       0x00379910                   # mfhi        $s3 # 00370100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x681C78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x681c78:
    ctx->pc = 0x681C80u;
}
