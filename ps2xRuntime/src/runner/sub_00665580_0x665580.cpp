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

// Function: sub_00665580
// Address: 0x665580 - 0x6655b8
void sub_00665580_0x665580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00665580_0x665580");
#endif

    switch (ctx->pc) {
        case 0x665580u: goto label_665580;
        case 0x665584u: goto label_665584;
        case 0x665588u: goto label_665588;
        case 0x66558cu: goto label_66558c;
        case 0x665590u: goto label_665590;
        case 0x665594u: goto label_665594;
        case 0x665598u: goto label_665598;
        case 0x66559cu: goto label_66559c;
        case 0x6655a0u: goto label_6655a0;
        case 0x6655a4u: goto label_6655a4;
        case 0x6655a8u: goto label_6655a8;
        case 0x6655acu: goto label_6655ac;
        case 0x6655b0u: goto label_6655b0;
        case 0x6655b4u: goto label_6655b4;
        default: break;
    }

    ctx->pc = 0x665580u;

label_665580:
    // 0x665580: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665580u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_665584:
    // 0x665584: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665584u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_665588:
    // 0x665588: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665588u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_66558c:
    // 0x66558c: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x66558cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_665590:
    // 0x665590: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665590u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_665594:
    // 0x665594: 0x17b3d0  .word       0x0017B3D0                   # mfhi        $s6 # 001703C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x665594u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_665598:
    // 0x665598: 0x17b568  .word       0x0017B568                   # mfsa        $s6 # 00170540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665598u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_66559c:
    // 0x66559c: 0x17b568  .word       0x0017B568                   # mfsa        $s6 # 00170540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x66559cu;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_6655a0:
    // 0x6655a0: 0x182b18  .word       0x00182B18                   # mult        $a1, $zero, $t8 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6655a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_6655a4:
    // 0x6655a4: 0x182b20  .word       0x00182B20                   # add         $a1, $zero, $t8 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6655a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_6655a8:
    // 0x6655a8: 0x182b38  dsll        $a1, $t8, 12
    ctx->pc = 0x6655a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) << 12);
label_6655ac:
    // 0x6655ac: 0x182b40  sll         $a1, $t8, 13
    ctx->pc = 0x6655acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 13));
label_6655b0:
    // 0x6655b0: 0x182b88  .word       0x00182B88                   # jr          $zero # 00182B80 <InstrIdType: CPU_SPECIAL>
label_6655b4:
    if (ctx->pc == 0x6655B4u) {
        ctx->pc = 0x6655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6655B0u;
        // 0x6655b4: 0x182b88  .word       0x00182B88                   # jr          $zero # 00182B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x6655B8u;
        goto label_fallthrough_0x6655b0;
    }
    ctx->pc = 0x6655B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6655B0u;
        // 0x6655b4: 0x182b88  .word       0x00182B88                   # jr          $zero # 00182B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6655B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6655b0:
    ctx->pc = 0x6655B8u;
}
