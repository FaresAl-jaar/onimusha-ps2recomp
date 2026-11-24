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

// Function: sub_00237518
// Address: 0x237518 - 0x237544
void sub_00237518_0x237518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237518_0x237518");
#endif

    switch (ctx->pc) {
        case 0x23752cu: goto label_23752c;
        case 0x237534u: goto label_237534;
        default: break;
    }

    ctx->pc = 0x237518u;

    // 0x237518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23751c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237524: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x237524u;
    SET_GPR_U32(ctx, 31, 0x23752Cu);
    ctx->pc = 0x237528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237524u;
    // 0x237528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x237524u, 0x23752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23752Cu;
label_23752c:
    // 0x23752c: 0xc08dd52  jal         func_237548
    ctx->pc = 0x23752Cu;
    SET_GPR_U32(ctx, 31, 0x237534u);
    ctx->pc = 0x237530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23752Cu;
    // 0x237530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237548u, 0x23752Cu, 0x237534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237534u;
label_237534:
    // 0x237534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23753c: 0x808e2c2  j           func_238B08
    ctx->pc = 0x23753Cu;
    ctx->pc = 0x237540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23753Cu;
    // 0x237540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x237544u;
}
