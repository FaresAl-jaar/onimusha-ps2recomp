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

// Function: sub_00675890
// Address: 0x675890 - 0x6758b8
void sub_00675890_0x675890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00675890_0x675890");
#endif

    switch (ctx->pc) {
        case 0x675890u: goto label_675890;
        case 0x675894u: goto label_675894;
        case 0x675898u: goto label_675898;
        case 0x67589cu: goto label_67589c;
        case 0x6758a0u: goto label_6758a0;
        case 0x6758a4u: goto label_6758a4;
        case 0x6758a8u: goto label_6758a8;
        case 0x6758acu: goto label_6758ac;
        case 0x6758b0u: goto label_6758b0;
        case 0x6758b4u: goto label_6758b4;
        default: break;
    }

    ctx->pc = 0x675890u;

label_675890:
    // 0x675890: 0x269b98  .word       0x00269B98                   # mult        $s3, $at, $a2 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x675890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_675894:
    // 0x675894: 0x269bb8  .word       0x00269BB8                   # dsll        $s3, $a2, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x675894u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) << 14);
label_675898:
    // 0x675898: 0x269bd8  .word       0x00269BD8                   # mult        $s3, $at, $a2 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x675898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_67589c:
    // 0x67589c: 0x269be0  .word       0x00269BE0                   # add         $s3, $at, $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67589cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_6758a0:
    // 0x6758a0: 0x269bf0  tge         $at, $a2, 623
    ctx->pc = 0x6758a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_6758a4:
    // 0x6758a4: 0x269be8  .word       0x00269BE8                   # mfsa        $s3 # 002603C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6758a4u;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_6758a8:
    // 0x6758a8: 0x0  nop
    ctx->pc = 0x6758a8u;
    // NOP
label_6758ac:
    // 0x6758ac: 0x0  nop
    ctx->pc = 0x6758acu;
    // NOP
label_6758b0:
    // 0x6758b0: 0x26a888  .word       0x0026A888                   # jr          $at # 0006A880 <InstrIdType: CPU_SPECIAL>
label_6758b4:
    if (ctx->pc == 0x6758B4u) {
        ctx->pc = 0x6758B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6758B0u;
        // 0x6758b4: 0x26a8f0  tge         $at, $a2, 675 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x6758B8u;
        goto label_fallthrough_0x6758b0;
    }
    ctx->pc = 0x6758B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x6758B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6758B0u;
        // 0x6758b4: 0x26a8f0  tge         $at, $a2, 675 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6758B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6758b0:
    ctx->pc = 0x6758B8u;
}
