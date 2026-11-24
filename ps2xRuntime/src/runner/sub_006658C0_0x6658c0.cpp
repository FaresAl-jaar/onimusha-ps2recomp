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

// Function: sub_006658C0
// Address: 0x6658c0 - 0x6658f8
void sub_006658C0_0x6658c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006658C0_0x6658c0");
#endif

    switch (ctx->pc) {
        case 0x6658c0u: goto label_6658c0;
        case 0x6658c4u: goto label_6658c4;
        case 0x6658c8u: goto label_6658c8;
        case 0x6658ccu: goto label_6658cc;
        case 0x6658d0u: goto label_6658d0;
        case 0x6658d4u: goto label_6658d4;
        case 0x6658d8u: goto label_6658d8;
        case 0x6658dcu: goto label_6658dc;
        case 0x6658e0u: goto label_6658e0;
        case 0x6658e4u: goto label_6658e4;
        case 0x6658e8u: goto label_6658e8;
        case 0x6658ecu: goto label_6658ec;
        case 0x6658f0u: goto label_6658f0;
        case 0x6658f4u: goto label_6658f4;
        default: break;
    }

    ctx->pc = 0x6658c0u;

label_6658c0:
    // 0x6658c0: 0x1a5370  tge         $zero, $k0, 333
    ctx->pc = 0x6658c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6658c4:
    // 0x6658c4: 0x1a4f80  sll         $t1, $k0, 30
    ctx->pc = 0x6658c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 26), 30));
label_6658c8:
    // 0x6658c8: 0x1a4ff0  tge         $zero, $k0, 319
    ctx->pc = 0x6658c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_6658cc:
    // 0x6658cc: 0x1a5018  mult        $t2, $zero, $k0
    ctx->pc = 0x6658ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_6658d0:
    // 0x6658d0: 0x1a5040  sll         $t2, $k0, 1
    ctx->pc = 0x6658d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 26), 1));
label_6658d4:
    // 0x6658d4: 0x1a5068  .word       0x001A5068                   # mfsa        $t2 # 001A0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6658d4u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_6658d8:
    // 0x6658d8: 0x1a5090  .word       0x001A5090                   # mfhi        $t2 # 001A0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6658d8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_6658dc:
    // 0x6658dc: 0x1a50b8  dsll        $t2, $k0, 2
    ctx->pc = 0x6658dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 26) << 2);
label_6658e0:
    // 0x6658e0: 0x1a50f8  dsll        $t2, $k0, 3
    ctx->pc = 0x6658e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 26) << 3);
label_6658e4:
    // 0x6658e4: 0x1a5138  dsll        $t2, $k0, 4
    ctx->pc = 0x6658e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 26) << 4);
label_6658e8:
    // 0x6658e8: 0x1a5178  dsll        $t2, $k0, 5
    ctx->pc = 0x6658e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 26) << 5);
label_6658ec:
    // 0x6658ec: 0x1a51a0  .word       0x001A51A0                   # add         $t2, $zero, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6658ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_6658f0:
    // 0x6658f0: 0x1a51c8  .word       0x001A51C8                   # jr          $zero # 001A51C0 <InstrIdType: CPU_SPECIAL>
label_6658f4:
    if (ctx->pc == 0x6658F4u) {
        ctx->pc = 0x6658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6658F0u;
        // 0x6658f4: 0x1a51f0  tge         $zero, $k0, 327 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x6658F8u;
        goto label_fallthrough_0x6658f0;
    }
    ctx->pc = 0x6658F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6658F0u;
        // 0x6658f4: 0x1a51f0  tge         $zero, $k0, 327 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6658F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6658f0:
    ctx->pc = 0x6658F8u;
}
