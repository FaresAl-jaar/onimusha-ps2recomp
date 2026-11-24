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

// Function: sub_00237610
// Address: 0x237610 - 0x237648
void sub_00237610_0x237610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237610_0x237610");
#endif

    switch (ctx->pc) {
        case 0x237624u: goto label_237624;
        case 0x23762cu: goto label_23762c;
        case 0x237634u: goto label_237634;
        default: break;
    }

    ctx->pc = 0x237610u;

    // 0x237610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23761c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23761Cu;
    SET_GPR_U32(ctx, 31, 0x237624u);
    ctx->pc = 0x237620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23761Cu;
    // 0x237620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23761Cu, 0x237624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237624u;
label_237624:
    // 0x237624: 0xc08dd92  jal         func_237648
    ctx->pc = 0x237624u;
    SET_GPR_U32(ctx, 31, 0x23762Cu);
    ctx->pc = 0x237628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237624u;
    // 0x237628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237648u, 0x237624u, 0x23762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23762Cu;
label_23762c:
    // 0x23762c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23762Cu;
    SET_GPR_U32(ctx, 31, 0x237634u);
    ctx->pc = 0x237630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23762Cu;
    // 0x237630: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23762Cu, 0x237634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237634u;
label_237634:
    // 0x237634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23763c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23763cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237640: 0x3e00008  jr          $ra
    ctx->pc = 0x237640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237640u;
        // 0x237644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237648u;
}
