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

// Function: sub_00681F40
// Address: 0x681f40 - 0x681f68
void sub_00681F40_0x681f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681F40_0x681f40");
#endif

    switch (ctx->pc) {
        case 0x681f40u: goto label_681f40;
        case 0x681f44u: goto label_681f44;
        case 0x681f48u: goto label_681f48;
        case 0x681f4cu: goto label_681f4c;
        case 0x681f50u: goto label_681f50;
        case 0x681f54u: goto label_681f54;
        case 0x681f58u: goto label_681f58;
        case 0x681f5cu: goto label_681f5c;
        case 0x681f60u: goto label_681f60;
        case 0x681f64u: goto label_681f64;
        default: break;
    }

    ctx->pc = 0x681f40u;

label_681f40:
    // 0x681f40: 0x388238  .word       0x00388238                   # dsll        $s0, $t8, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 24) << 8);
label_681f44:
    // 0x681f44: 0x388268  .word       0x00388268                   # mfsa        $s0 # 00380240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f44u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_681f48:
    // 0x681f48: 0x388368  .word       0x00388368                   # mfsa        $s0 # 00380340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f48u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_681f4c:
    // 0x681f4c: 0x388398  .word       0x00388398                   # mult        $s0, $at, $t8 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x681f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_681f50:
    // 0x681f50: 0x388520  .word       0x00388520                   # add         $s0, $at, $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_681f54:
    // 0x681f54: 0x388520  .word       0x00388520                   # add         $s0, $at, $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_681f58:
    // 0x681f58: 0x388470  tge         $at, $t8, 529
    ctx->pc = 0x681f58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_681f5c:
    // 0x681f5c: 0x388478  .word       0x00388478                   # dsll        $s0, $t8, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 24) << 17);
label_681f60:
    // 0x681f60: 0x388688  .word       0x00388688                   # jr          $at # 00188680 <InstrIdType: CPU_SPECIAL>
label_681f64:
    if (ctx->pc == 0x681F64u) {
        ctx->pc = 0x681F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681F60u;
        // 0x681f64: 0x3886b8  .word       0x003886B8                   # dsll        $s0, $t8, 26 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 24) << 26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x681F68u;
        goto label_fallthrough_0x681f60;
    }
    ctx->pc = 0x681F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x681F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x681F60u;
        // 0x681f64: 0x3886b8  .word       0x003886B8                   # dsll        $s0, $t8, 26 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 24) << 26);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x681F60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x681f60:
    ctx->pc = 0x681F68u;
}
