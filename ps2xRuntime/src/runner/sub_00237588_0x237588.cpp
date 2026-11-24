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

// Function: sub_00237588
// Address: 0x237588 - 0x2375b4
void sub_00237588_0x237588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237588_0x237588");
#endif

    switch (ctx->pc) {
        case 0x23759cu: goto label_23759c;
        case 0x2375a4u: goto label_2375a4;
        default: break;
    }

    ctx->pc = 0x237588u;

    // 0x237588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23758c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237594: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x237594u;
    SET_GPR_U32(ctx, 31, 0x23759Cu);
    ctx->pc = 0x237598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237594u;
    // 0x237598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x237594u, 0x23759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23759Cu;
label_23759c:
    // 0x23759c: 0xc08dd6e  jal         func_2375B8
    ctx->pc = 0x23759Cu;
    SET_GPR_U32(ctx, 31, 0x2375A4u);
    ctx->pc = 0x2375A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23759Cu;
    // 0x2375a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2375B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2375B8u, 0x23759Cu, 0x2375A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2375A4u;
label_2375a4:
    // 0x2375a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2375a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2375a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2375a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2375ac: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2375ACu;
    ctx->pc = 0x2375B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375ACu;
    // 0x2375b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2375B4u;
}
