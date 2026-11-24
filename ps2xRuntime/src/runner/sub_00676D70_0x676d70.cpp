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

// Function: sub_00676D70
// Address: 0x676d70 - 0x676dd0
void sub_00676D70_0x676d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00676D70_0x676d70");
#endif

    switch (ctx->pc) {
        case 0x676d70u: goto label_676d70;
        case 0x676d74u: goto label_676d74;
        case 0x676d78u: goto label_676d78;
        case 0x676d7cu: goto label_676d7c;
        case 0x676d80u: goto label_676d80;
        case 0x676d84u: goto label_676d84;
        case 0x676d88u: goto label_676d88;
        case 0x676d8cu: goto label_676d8c;
        case 0x676d90u: goto label_676d90;
        case 0x676d94u: goto label_676d94;
        case 0x676d98u: goto label_676d98;
        case 0x676d9cu: goto label_676d9c;
        case 0x676da0u: goto label_676da0;
        case 0x676da4u: goto label_676da4;
        case 0x676da8u: goto label_676da8;
        case 0x676dacu: goto label_676dac;
        case 0x676db0u: goto label_676db0;
        case 0x676db4u: goto label_676db4;
        case 0x676db8u: goto label_676db8;
        case 0x676dbcu: goto label_676dbc;
        case 0x676dc0u: goto label_676dc0;
        case 0x676dc4u: goto label_676dc4;
        case 0x676dc8u: goto label_676dc8;
        case 0x676dccu: goto label_676dcc;
        default: break;
    }

    ctx->pc = 0x676d70u;

label_676d70:
    // 0x676d70: 0x290a80  .word       0x00290A80                   # sll         $at, $t1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d70u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_676d74:
    // 0x676d74: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d78:
    // 0x676d78: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d7c:
    // 0x676d7c: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d80:
    // 0x676d80: 0x290898  .word       0x00290898                   # mult        $at, $at, $t1 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d84:
    // 0x676d84: 0x290880  .word       0x00290880                   # sll         $at, $t1, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d84u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_676d88:
    // 0x676d88: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d8c:
    // 0x676d8c: 0x290b58  .word       0x00290B58                   # mult        $at, $at, $t1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676d90:
    // 0x676d90: 0x290bd0  .word       0x00290BD0                   # mfhi        $at # 002903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d90u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_676d94:
    // 0x676d94: 0x290580  .word       0x00290580                   # sll         $zero, $t1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d94u;
    
label_676d98:
    // 0x676d98: 0x290bf8  .word       0x00290BF8                   # dsll        $at, $t1, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 15);
label_676d9c:
    // 0x676d9c: 0x290c38  .word       0x00290C38                   # dsll        $at, $t1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 16);
label_676da0:
    // 0x676da0: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676da4:
    // 0x676da4: 0x290c58  .word       0x00290C58                   # mult        $at, $at, $t1 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676da8:
    // 0x676da8: 0x290cc0  .word       0x00290CC0                   # sll         $at, $t1, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676da8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 9), 19));
label_676dac:
    // 0x676dac: 0x290ce0  .word       0x00290CE0                   # add         $at, $at, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676dacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_676db0:
    // 0x676db0: 0x290e38  .word       0x00290E38                   # dsll        $at, $t1, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) << 24);
label_676db4:
    // 0x676db4: 0x290ed8  .word       0x00290ED8                   # mult        $at, $at, $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x676db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_676db8:
    // 0x676db8: 0x290ca0  .word       0x00290CA0                   # add         $at, $at, $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676db8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_676dbc:
    // 0x676dbc: 0x0  nop
    ctx->pc = 0x676dbcu;
    // NOP
label_676dc0:
    // 0x676dc0: 0x292620  .word       0x00292620                   # add         $a0, $at, $t1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x676dc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_676dc4:
    // 0x676dc4: 0x292630  tge         $at, $t1, 152
    ctx->pc = 0x676dc4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_676dc8:
    // 0x676dc8: 0x292688  .word       0x00292688                   # jr          $at # 00092680 <InstrIdType: CPU_SPECIAL>
label_676dcc:
    if (ctx->pc == 0x676DCCu) {
        ctx->pc = 0x676DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x676DC8u;
        // 0x676dcc: 0x2926a8  .word       0x002926A8                   # mfsa        $a0 # 00290680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 4, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x676DD0u;
        goto label_fallthrough_0x676dc8;
    }
    ctx->pc = 0x676DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x676DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x676DC8u;
        // 0x676dcc: 0x2926a8  .word       0x002926A8                   # mfsa        $a0 # 00290680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 4, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x676DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x676dc8:
    ctx->pc = 0x676DD0u;
}
