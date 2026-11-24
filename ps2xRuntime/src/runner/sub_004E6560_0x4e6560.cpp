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

// Function: sub_004E6560
// Address: 0x4e6560 - 0x4e6574
void sub_004E6560_0x4e6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6560_0x4e6560");
#endif

    switch (ctx->pc) {
        case 0x4e6560u: goto label_4e6560;
        case 0x4e6564u: goto label_4e6564;
        case 0x4e6568u: goto label_4e6568;
        case 0x4e656cu: goto label_4e656c;
        case 0x4e6570u: goto label_4e6570;
        default: break;
    }

    ctx->pc = 0x4e6560u;

label_4e6560:
    // 0x4e6560: 0x808080  .word       0x00808080                   # sll         $s0, $zero, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6560u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_4e6564:
    // 0x4e6564: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x4e6564u;
    
label_4e6568:
    // 0x4e6568: 0x100050  .word       0x00100050                   # mfhi        $zero # 00100040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6568u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_4e656c:
    // 0x4e656c: 0x3080208  .word       0x03080208                   # jr          $t8 # 00080200 <InstrIdType: CPU_SPECIAL>
label_4e6570:
    if (ctx->pc == 0x4E6570u) {
        ctx->pc = 0x4E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E656Cu;
        // 0x4e6570: 0x4080708  tgei        $zero, 0x708 (Delay Slot)
        if (GPR_S64(ctx, 0) >= (int64_t)(int32_t)1800) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6574u;
        goto label_fallthrough_0x4e656c;
    }
    ctx->pc = 0x4E656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 24);
        ctx->pc = 0x4E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E656Cu;
        // 0x4e6570: 0x4080708  tgei        $zero, 0x708 (Delay Slot)
        if (GPR_S64(ctx, 0) >= (int64_t)(int32_t)1800) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E656Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e656c:
    ctx->pc = 0x4E6574u;
}
