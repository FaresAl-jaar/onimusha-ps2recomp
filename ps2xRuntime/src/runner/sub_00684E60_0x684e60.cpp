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

// Function: sub_00684E60
// Address: 0x684e60 - 0x684e88
void sub_00684E60_0x684e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00684E60_0x684e60");
#endif

    switch (ctx->pc) {
        case 0x684e60u: goto label_684e60;
        case 0x684e64u: goto label_684e64;
        case 0x684e68u: goto label_684e68;
        case 0x684e6cu: goto label_684e6c;
        case 0x684e70u: goto label_684e70;
        case 0x684e74u: goto label_684e74;
        case 0x684e78u: goto label_684e78;
        case 0x684e7cu: goto label_684e7c;
        case 0x684e80u: goto label_684e80;
        case 0x684e84u: goto label_684e84;
        default: break;
    }

    ctx->pc = 0x684e60u;

label_684e60:
    // 0x684e60: 0x3eb470  tge         $at, $fp, 721
    ctx->pc = 0x684e60u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_684e64:
    // 0x684e64: 0x3eb4b0  tge         $at, $fp, 722
    ctx->pc = 0x684e64u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_684e68:
    // 0x684e68: 0x3eb5d0  .word       0x003EB5D0                   # mfhi        $s6 # 003E05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e68u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_684e6c:
    // 0x684e6c: 0x3eb638  .word       0x003EB638                   # dsll        $s6, $fp, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e6cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) << 24);
label_684e70:
    // 0x684e70: 0x3eb7c0  .word       0x003EB7C0                   # sll         $s6, $fp, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e70u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 31));
label_684e74:
    // 0x684e74: 0x3eb7d0  .word       0x003EB7D0                   # mfhi        $s6 # 003E07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e74u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_684e78:
    // 0x684e78: 0x3eb9d0  .word       0x003EB9D0                   # mfhi        $s7 # 003E01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e78u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_684e7c:
    // 0x684e7c: 0x3eb9e0  .word       0x003EB9E0                   # add         $s7, $at, $fp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x684e7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_684e80:
    // 0x684e80: 0x3ebc08  .word       0x003EBC08                   # jr          $at # 001EBC00 <InstrIdType: CPU_SPECIAL>
label_684e84:
    if (ctx->pc == 0x684E84u) {
        ctx->pc = 0x684E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684E80u;
        // 0x684e84: 0x3ebc10  .word       0x003EBC10                   # mfhi        $s7 # 003E0400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x684E88u;
        goto label_fallthrough_0x684e80;
    }
    ctx->pc = 0x684E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x684E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x684E80u;
        // 0x684e84: 0x3ebc10  .word       0x003EBC10                   # mfhi        $s7 # 003E0400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 23, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x684E80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x684e80:
    ctx->pc = 0x684E88u;
}
