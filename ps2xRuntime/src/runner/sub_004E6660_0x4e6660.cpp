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

// Function: sub_004E6660
// Address: 0x4e6660 - 0x4e6674
void sub_004E6660_0x4e6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6660_0x4e6660");
#endif

    switch (ctx->pc) {
        case 0x4e6660u: goto label_4e6660;
        case 0x4e6664u: goto label_4e6664;
        case 0x4e6668u: goto label_4e6668;
        case 0x4e666cu: goto label_4e666c;
        case 0x4e6670u: goto label_4e6670;
        default: break;
    }

    ctx->pc = 0x4e6660u;

label_4e6660:
    // 0x4e6660: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x4e6660u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_4e6664:
    // 0x4e6664: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x4e6664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4e6668:
    // 0x4e6668: 0x400080  .word       0x00400080                   # sll         $zero, $zero, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6668u;
    
label_4e666c:
    // 0x4e666c: 0x1080008  .word       0x01080008                   # jr          $t0 # 00080000 <InstrIdType: CPU_SPECIAL>
label_4e6670:
    if (ctx->pc == 0x4E6670u) {
        ctx->pc = 0x4E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E666Cu;
        // 0x4e6670: 0x5080808  tgei        $t0, 0x808 (Delay Slot)
        if (GPR_S64(ctx, 8) >= (int64_t)(int32_t)2056) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6674u;
        goto label_fallthrough_0x4e666c;
    }
    ctx->pc = 0x4E666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x4E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E666Cu;
        // 0x4e6670: 0x5080808  tgei        $t0, 0x808 (Delay Slot)
        if (GPR_S64(ctx, 8) >= (int64_t)(int32_t)2056) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E666Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e666c:
    ctx->pc = 0x4E6674u;
}
