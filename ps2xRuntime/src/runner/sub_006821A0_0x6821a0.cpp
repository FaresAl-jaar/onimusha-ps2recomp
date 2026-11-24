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

// Function: sub_006821A0
// Address: 0x6821a0 - 0x6821b0
void sub_006821A0_0x6821a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006821A0_0x6821a0");
#endif

    switch (ctx->pc) {
        case 0x6821a0u: goto label_6821a0;
        case 0x6821a4u: goto label_6821a4;
        case 0x6821a8u: goto label_6821a8;
        case 0x6821acu: goto label_6821ac;
        default: break;
    }

    ctx->pc = 0x6821a0u;

label_6821a0:
    // 0x6821a0: 0x38ebf0  tge         $at, $t8, 943
    ctx->pc = 0x6821a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_6821a4:
    // 0x6821a4: 0x38ebf8  .word       0x0038EBF8                   # dsll        $sp, $t8, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6821a4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 24) << 15);
label_6821a8:
    // 0x6821a8: 0x38ec08  .word       0x0038EC08                   # jr          $at # 0018EC00 <InstrIdType: CPU_SPECIAL>
label_6821ac:
    if (ctx->pc == 0x6821ACu) {
        ctx->pc = 0x6821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6821A8u;
        // 0x6821ac: 0x38ece8  .word       0x0038ECE8                   # mfsa        $sp # 003804C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 29, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x6821B0u;
        goto label_fallthrough_0x6821a8;
    }
    ctx->pc = 0x6821A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x6821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6821A8u;
        // 0x6821ac: 0x38ece8  .word       0x0038ECE8                   # mfsa        $sp # 003804C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 29, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6821A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6821a8:
    ctx->pc = 0x6821B0u;
}
