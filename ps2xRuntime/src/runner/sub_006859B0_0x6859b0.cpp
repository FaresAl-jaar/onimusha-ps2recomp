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

// Function: sub_006859B0
// Address: 0x6859b0 - 0x6859fc
void sub_006859B0_0x6859b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006859B0_0x6859b0");
#endif

    switch (ctx->pc) {
        case 0x6859b0u: goto label_6859b0;
        case 0x6859b4u: goto label_6859b4;
        case 0x6859b8u: goto label_6859b8;
        case 0x6859bcu: goto label_6859bc;
        case 0x6859c0u: goto label_6859c0;
        case 0x6859c4u: goto label_6859c4;
        case 0x6859c8u: goto label_6859c8;
        case 0x6859ccu: goto label_6859cc;
        case 0x6859d0u: goto label_6859d0;
        case 0x6859d4u: goto label_6859d4;
        case 0x6859d8u: goto label_6859d8;
        case 0x6859dcu: goto label_6859dc;
        case 0x6859e0u: goto label_6859e0;
        case 0x6859e4u: goto label_6859e4;
        case 0x6859e8u: goto label_6859e8;
        case 0x6859ecu: goto label_6859ec;
        case 0x6859f0u: goto label_6859f0;
        case 0x6859f4u: goto label_6859f4;
        case 0x6859f8u: goto label_6859f8;
        default: break;
    }

    ctx->pc = 0x6859b0u;

label_6859b0:
    // 0x6859b0: 0x3eece0  .word       0x003EECE0                   # add         $sp, $at, $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_6859b4:
    // 0x6859b4: 0x3eedf8  .word       0x003EEDF8                   # dsll        $sp, $fp, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859b4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 30) << 23);
label_6859b8:
    // 0x6859b8: 0x3eee50  .word       0x003EEE50                   # mfhi        $sp # 003E0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859b8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_6859bc:
    // 0x6859bc: 0x3eeef8  .word       0x003EEEF8                   # dsll        $sp, $fp, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859bcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 30) << 27);
label_6859c0:
    // 0x6859c0: 0x3eef70  tge         $at, $fp, 957
    ctx->pc = 0x6859c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_6859c4:
    // 0x6859c4: 0x3eefd8  .word       0x003EEFD8                   # mult        $sp, $at, $fp # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6859c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_6859c8:
    // 0x6859c8: 0x0  nop
    ctx->pc = 0x6859c8u;
    // NOP
label_6859cc:
    // 0x6859cc: 0x0  nop
    ctx->pc = 0x6859ccu;
    // NOP
label_6859d0:
    // 0x6859d0: 0x3ef0d0  .word       0x003EF0D0                   # mfhi        $fp # 003E00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859d0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_6859d4:
    // 0x6859d4: 0x3ef1e8  .word       0x003EF1E8                   # mfsa        $fp # 003E01C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6859d4u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_6859d8:
    // 0x6859d8: 0x3ef238  .word       0x003EF238                   # dsll        $fp, $fp, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 8);
label_6859dc:
    // 0x6859dc: 0x3ef280  .word       0x003EF280                   # sll         $fp, $fp, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859dcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 10));
label_6859e0:
    // 0x6859e0: 0x3ef338  .word       0x003EF338                   # dsll        $fp, $fp, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 12);
label_6859e4:
    // 0x6859e4: 0x3ef3b0  tge         $at, $fp, 974
    ctx->pc = 0x6859e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_6859e8:
    // 0x6859e8: 0x3ef418  .word       0x003EF418                   # mult        $fp, $at, $fp # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6859e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_6859ec:
    // 0x6859ec: 0x0  nop
    ctx->pc = 0x6859ecu;
    // NOP
label_6859f0:
    // 0x6859f0: 0x3ef6c0  .word       0x003EF6C0                   # sll         $fp, $fp, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6859f0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 27));
label_6859f4:
    // 0x6859f4: 0x3ef6c8  .word       0x003EF6C8                   # jr          $at # 001EF6C0 <InstrIdType: CPU_SPECIAL>
label_6859f8:
    if (ctx->pc == 0x6859F8u) {
        ctx->pc = 0x6859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6859F4u;
        // 0x6859f8: 0x3ef6e8  .word       0x003EF6E8                   # mfsa        $fp # 003E06C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 30, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x6859FCu;
        goto label_fallthrough_0x6859f4;
    }
    ctx->pc = 0x6859F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x6859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6859F4u;
        // 0x6859f8: 0x3ef6e8  .word       0x003EF6E8                   # mfsa        $fp # 003E06C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 30, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6859F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6859f4:
    ctx->pc = 0x6859FCu;
}
