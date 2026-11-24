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

// Function: sub_0024D030
// Address: 0x24d030 - 0x24d05c
void sub_0024D030_0x24d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D030_0x24d030");
#endif

    switch (ctx->pc) {
        case 0x24d044u: goto label_24d044;
        case 0x24d04cu: goto label_24d04c;
        default: break;
    }

    ctx->pc = 0x24d030u;

    // 0x24d030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24d03c: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D03Cu;
    SET_GPR_U32(ctx, 31, 0x24D044u);
    ctx->pc = 0x24D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D03Cu;
    // 0x24d040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D03Cu, 0x24D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D044u;
label_24d044:
    // 0x24d044: 0xc093418  jal         func_24D060
    ctx->pc = 0x24D044u;
    SET_GPR_U32(ctx, 31, 0x24D04Cu);
    ctx->pc = 0x24D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D044u;
    // 0x24d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D060u, 0x24D044u, 0x24D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D04Cu;
label_24d04c:
    // 0x24d04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d050: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24d050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d054: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D054u;
    ctx->pc = 0x24D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D054u;
    // 0x24d058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D05Cu;
}
