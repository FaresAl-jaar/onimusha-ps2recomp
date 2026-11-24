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

// Function: sub_00665800
// Address: 0x665800 - 0x66581c
void sub_00665800_0x665800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00665800_0x665800");
#endif

    switch (ctx->pc) {
        case 0x665800u: goto label_665800;
        case 0x665804u: goto label_665804;
        case 0x665808u: goto label_665808;
        case 0x66580cu: goto label_66580c;
        case 0x665810u: goto label_665810;
        case 0x665814u: goto label_665814;
        case 0x665818u: goto label_665818;
        default: break;
    }

    ctx->pc = 0x665800u;

label_665800:
    // 0x665800: 0x193c28  .word       0x00193C28                   # mfsa        $a3 # 00190400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665800u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_665804:
    // 0x665804: 0x193c40  sll         $a3, $t9, 17
    ctx->pc = 0x665804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 17));
label_665808:
    // 0x665808: 0x193c58  .word       0x00193C58                   # mult        $a3, $zero, $t9 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_66580c:
    // 0x66580c: 0x193c70  tge         $zero, $t9, 241
    ctx->pc = 0x66580cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_665810:
    // 0x665810: 0x193c28  .word       0x00193C28                   # mfsa        $a3 # 00190400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x665810u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_665814:
    // 0x665814: 0x193c88  .word       0x00193C88                   # jr          $zero # 00193C80 <InstrIdType: CPU_SPECIAL>
label_665818:
    if (ctx->pc == 0x665818u) {
        ctx->pc = 0x66581Cu;
        goto label_fallthrough_0x665814;
    }
    ctx->pc = 0x665814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x665814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x665814:
    ctx->pc = 0x66581Cu;
}
