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

// Function: sub_002382D8
// Address: 0x2382d8 - 0x238310
void sub_002382D8_0x2382d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002382D8_0x2382d8");
#endif

    switch (ctx->pc) {
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382fcu: goto label_2382fc;
        default: break;
    }

    ctx->pc = 0x2382d8u;

    // 0x2382d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2382d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2382dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2382dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2382e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2382e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2382e4: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2382E4u;
    SET_GPR_U32(ctx, 31, 0x2382ECu);
    ctx->pc = 0x2382E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382E4u;
    // 0x2382e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2382E4u, 0x2382ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382ECu;
label_2382ec:
    // 0x2382ec: 0xc08e0c4  jal         func_238310
    ctx->pc = 0x2382ECu;
    SET_GPR_U32(ctx, 31, 0x2382F4u);
    ctx->pc = 0x2382F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382ECu;
    // 0x2382f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238310u, 0x2382ECu, 0x2382F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382F4u;
label_2382f4:
    // 0x2382f4: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x2382F4u;
    SET_GPR_U32(ctx, 31, 0x2382FCu);
    ctx->pc = 0x2382F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382F4u;
    // 0x2382f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x2382F4u, 0x2382FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382FCu;
label_2382fc:
    // 0x2382fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2382fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238308: 0x3e00008  jr          $ra
    ctx->pc = 0x238308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238308u;
        // 0x23830c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238310u;
}
