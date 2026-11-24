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

// Function: sub_0067C3A0
// Address: 0x67c3a0 - 0x67c3cc
void sub_0067C3A0_0x67c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C3A0_0x67c3a0");
#endif

    switch (ctx->pc) {
        case 0x67c3a0u: goto label_67c3a0;
        case 0x67c3a4u: goto label_67c3a4;
        case 0x67c3a8u: goto label_67c3a8;
        case 0x67c3acu: goto label_67c3ac;
        case 0x67c3b0u: goto label_67c3b0;
        case 0x67c3b4u: goto label_67c3b4;
        case 0x67c3b8u: goto label_67c3b8;
        case 0x67c3bcu: goto label_67c3bc;
        case 0x67c3c0u: goto label_67c3c0;
        case 0x67c3c4u: goto label_67c3c4;
        case 0x67c3c8u: goto label_67c3c8;
        default: break;
    }

    ctx->pc = 0x67c3a0u;

label_67c3a0:
    // 0x67c3a0: 0x685040  .word       0x00685040                   # sll         $t2, $t0, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_67c3a4:
    // 0x67c3a4: 0x0  nop
    ctx->pc = 0x67c3a4u;
    // NOP
label_67c3a8:
    // 0x67c3a8: 0x605854  .word       0x00605854                   # dsllv       $t3, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (GPR_U32(ctx, 3) & 0x3F));
label_67c3ac:
    // 0x67c3ac: 0x0  nop
    ctx->pc = 0x67c3acu;
    // NOP
label_67c3b0:
    // 0x67c3b0: 0x2edce0  .word       0x002EDCE0                   # add         $k1, $at, $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_67c3b4:
    // 0x67c3b4: 0x2edcf8  .word       0x002EDCF8                   # dsll        $k1, $t6, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3b4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 14) << 19);
label_67c3b8:
    // 0x67c3b8: 0x2edd10  .word       0x002EDD10                   # mfhi        $k1 # 002E0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3b8u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_67c3bc:
    // 0x67c3bc: 0x2edd28  .word       0x002EDD28                   # mfsa        $k1 # 002E0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67c3bcu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_67c3c0:
    // 0x67c3c0: 0x2edd40  .word       0x002EDD40                   # sll         $k1, $t6, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c3c0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 14), 21));
label_67c3c4:
    // 0x67c3c4: 0x2edd88  .word       0x002EDD88                   # jr          $at # 000EDD80 <InstrIdType: CPU_SPECIAL>
label_67c3c8:
    if (ctx->pc == 0x67C3C8u) {
        ctx->pc = 0x67C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x67C3C4u;
        // 0x67c3c8: 0x2edd58  .word       0x002EDD58                   # mult        $k1, $at, $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x67C3CCu;
        goto label_fallthrough_0x67c3c4;
    }
    ctx->pc = 0x67C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x67C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x67C3C4u;
        // 0x67c3c8: 0x2edd58  .word       0x002EDD58                   # mult        $k1, $at, $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x67C3C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x67c3c4:
    ctx->pc = 0x67C3CCu;
}
