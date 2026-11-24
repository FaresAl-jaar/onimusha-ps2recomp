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

// Function: sub_00682C50
// Address: 0x682c50 - 0x682c78
void sub_00682C50_0x682c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682C50_0x682c50");
#endif

    switch (ctx->pc) {
        case 0x682c50u: goto label_682c50;
        case 0x682c54u: goto label_682c54;
        case 0x682c58u: goto label_682c58;
        case 0x682c5cu: goto label_682c5c;
        case 0x682c60u: goto label_682c60;
        case 0x682c64u: goto label_682c64;
        case 0x682c68u: goto label_682c68;
        case 0x682c6cu: goto label_682c6c;
        case 0x682c70u: goto label_682c70;
        case 0x682c74u: goto label_682c74;
        default: break;
    }

    ctx->pc = 0x682c50u;

label_682c50:
    // 0x682c50: 0x3b7e18  .word       0x003B7E18                   # mult        $t7, $at, $k1 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_682c54:
    // 0x682c54: 0x3b7e28  .word       0x003B7E28                   # mfsa        $t7 # 003B0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682c54u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_682c58:
    // 0x682c58: 0x3b7e30  tge         $at, $k1, 504
    ctx->pc = 0x682c58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_682c5c:
    // 0x682c5c: 0x3b7e40  .word       0x003B7E40                   # sll         $t7, $k1, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 25));
label_682c60:
    // 0x682c60: 0x3b7e50  .word       0x003B7E50                   # mfhi        $t7 # 003B0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682c60u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_682c64:
    // 0x682c64: 0x3b7e60  .word       0x003B7E60                   # add         $t7, $at, $k1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682c64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_682c68:
    // 0x682c68: 0x3b7e68  .word       0x003B7E68                   # mfsa        $t7 # 003B0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x682c68u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_682c6c:
    // 0x682c6c: 0x3b7e78  .word       0x003B7E78                   # dsll        $t7, $k1, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682c6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 27) << 25);
label_682c70:
    // 0x682c70: 0x3b7e88  .word       0x003B7E88                   # jr          $at # 001B7E80 <InstrIdType: CPU_SPECIAL>
label_682c74:
    if (ctx->pc == 0x682C74u) {
        ctx->pc = 0x682C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682C70u;
        // 0x682c74: 0x3b7e98  .word       0x003B7E98                   # mult        $t7, $at, $k1 # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x682C78u;
        goto label_fallthrough_0x682c70;
    }
    ctx->pc = 0x682C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x682C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682C70u;
        // 0x682c74: 0x3b7e98  .word       0x003B7E98                   # mult        $t7, $at, $k1 # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 27); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682C70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682c70:
    ctx->pc = 0x682C78u;
}
