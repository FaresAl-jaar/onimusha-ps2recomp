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

// Function: sub_00665280
// Address: 0x665280 - 0x66528c
void sub_00665280_0x665280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00665280_0x665280");
#endif

    switch (ctx->pc) {
        case 0x665280u: goto label_665280;
        case 0x665284u: goto label_665284;
        case 0x665288u: goto label_665288;
        default: break;
    }

    ctx->pc = 0x665280u;

label_665280:
    // 0x665280: 0x168e78  dsll        $s1, $s6, 25
    ctx->pc = 0x665280u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) << 25);
label_665284:
    // 0x665284: 0x168e88  .word       0x00168E88                   # jr          $zero # 00168E80 <InstrIdType: CPU_SPECIAL>
label_665288:
    if (ctx->pc == 0x665288u) {
        ctx->pc = 0x665288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x665284u;
        // 0x665288: 0x168e98  .word       0x00168E98                   # mult        $s1, $zero, $s6 # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x66528Cu;
        goto label_fallthrough_0x665284;
    }
    ctx->pc = 0x665284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x665288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x665284u;
        // 0x665288: 0x168e98  .word       0x00168E98                   # mult        $s1, $zero, $s6 # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x665284u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x665284:
    ctx->pc = 0x66528Cu;
}
