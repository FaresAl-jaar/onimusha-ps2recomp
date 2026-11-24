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

// Function: sub_0024D210
// Address: 0x24d210 - 0x24d23c
void sub_0024D210_0x24d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D210_0x24d210");
#endif

    switch (ctx->pc) {
        case 0x24d224u: goto label_24d224;
        case 0x24d22cu: goto label_24d22c;
        default: break;
    }

    ctx->pc = 0x24d210u;

    // 0x24d210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24d21c: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D21Cu;
    SET_GPR_U32(ctx, 31, 0x24D224u);
    ctx->pc = 0x24D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D21Cu;
    // 0x24d220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D21Cu, 0x24D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D224u;
label_24d224:
    // 0x24d224: 0xc093490  jal         func_24D240
    ctx->pc = 0x24D224u;
    SET_GPR_U32(ctx, 31, 0x24D22Cu);
    ctx->pc = 0x24D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D224u;
    // 0x24d228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D240u, 0x24D224u, 0x24D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D22Cu;
label_24d22c:
    // 0x24d22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24d230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d234: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D234u;
    ctx->pc = 0x24D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D234u;
    // 0x24d238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D23Cu;
}
