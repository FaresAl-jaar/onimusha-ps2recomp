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

// Function: sub_006758E0
// Address: 0x6758e0 - 0x6758fc
void sub_006758E0_0x6758e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006758E0_0x6758e0");
#endif

    switch (ctx->pc) {
        case 0x6758e0u: goto label_6758e0;
        case 0x6758e4u: goto label_6758e4;
        case 0x6758e8u: goto label_6758e8;
        case 0x6758ecu: goto label_6758ec;
        case 0x6758f0u: goto label_6758f0;
        case 0x6758f4u: goto label_6758f4;
        case 0x6758f8u: goto label_6758f8;
        default: break;
    }

    ctx->pc = 0x6758e0u;

label_6758e0:
    // 0x6758e0: 0x26a6b8  .word       0x0026A6B8                   # dsll        $s4, $a2, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6758e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 26);
label_6758e4:
    // 0x6758e4: 0x26a6d8  .word       0x0026A6D8                   # mult        $s4, $at, $a2 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6758e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_6758e8:
    // 0x6758e8: 0x26a6f8  .word       0x0026A6F8                   # dsll        $s4, $a2, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6758e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 27);
label_6758ec:
    // 0x6758ec: 0x26a700  .word       0x0026A700                   # sll         $s4, $a2, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6758ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
label_6758f0:
    // 0x6758f0: 0x26a710  .word       0x0026A710                   # mfhi        $s4 # 00260700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6758f0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_6758f4:
    // 0x6758f4: 0x26a708  .word       0x0026A708                   # jr          $at # 0006A700 <InstrIdType: CPU_SPECIAL>
label_6758f8:
    if (ctx->pc == 0x6758F8u) {
        ctx->pc = 0x6758FCu;
        goto label_fallthrough_0x6758f4;
    }
    ctx->pc = 0x6758F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6758F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6758f4:
    ctx->pc = 0x6758FCu;
}
