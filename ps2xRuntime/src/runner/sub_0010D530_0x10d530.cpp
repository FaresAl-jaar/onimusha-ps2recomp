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

// Function: sub_0010D530
// Address: 0x10d530 - 0x10d570
void sub_0010D530_0x10d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D530_0x10d530");
#endif

    switch (ctx->pc) {
        case 0x10d554u: goto label_10d554;
        case 0x10d560u: goto label_10d560;
        default: break;
    }

    ctx->pc = 0x10d530u;

    // 0x10d530: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x10d534: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10d534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d538: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10d53c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10d53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d544: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10d548: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10d548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x10d54c: 0xc044304  jal         func_110C10
    ctx->pc = 0x10D54Cu;
    SET_GPR_U32(ctx, 31, 0x10D554u);
    ctx->pc = 0x10D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D54Cu;
    // 0x10d550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C10u, 0x10D54Cu, 0x10D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D554u;
label_10d554:
    // 0x10d554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d558: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10D558u;
    SET_GPR_U32(ctx, 31, 0x10D560u);
    ctx->pc = 0x10D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D558u;
    // 0x10d55c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10D558u, 0x10D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D560u;
label_10d560:
    // 0x10d560: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10d564: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10d568: 0x3e00008  jr          $ra
    ctx->pc = 0x10D568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D568u;
        // 0x10d56c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D570u;
}
