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

// Function: sub_00682860
// Address: 0x682860 - 0x68286c
void sub_00682860_0x682860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682860_0x682860");
#endif

    switch (ctx->pc) {
        case 0x682860u: goto label_682860;
        case 0x682864u: goto label_682864;
        case 0x682868u: goto label_682868;
        default: break;
    }

    ctx->pc = 0x682860u;

label_682860:
    // 0x682860: 0x3a7a50  .word       0x003A7A50                   # mfhi        $t7 # 003A0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682860u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_682864:
    // 0x682864: 0x3a7a88  .word       0x003A7A88                   # jr          $at # 001A7A80 <InstrIdType: CPU_SPECIAL>
label_682868:
    if (ctx->pc == 0x682868u) {
        ctx->pc = 0x682868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682864u;
        // 0x682868: 0x3a7ac0  .word       0x003A7AC0                   # sll         $t7, $k0, 11 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 26), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x68286Cu;
        goto label_fallthrough_0x682864;
    }
    ctx->pc = 0x682864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x682868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682864u;
        // 0x682868: 0x3a7ac0  .word       0x003A7AC0                   # sll         $t7, $k0, 11 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 26), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682864:
    ctx->pc = 0x68286Cu;
}
