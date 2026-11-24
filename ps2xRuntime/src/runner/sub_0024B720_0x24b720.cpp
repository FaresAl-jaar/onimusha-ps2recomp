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

// Function: sub_0024B720
// Address: 0x24b720 - 0x24b74c
void sub_0024B720_0x24b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B720_0x24b720");
#endif

    switch (ctx->pc) {
        case 0x24b734u: goto label_24b734;
        case 0x24b73cu: goto label_24b73c;
        default: break;
    }

    ctx->pc = 0x24b720u;

    // 0x24b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b72c: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B72Cu;
    SET_GPR_U32(ctx, 31, 0x24B734u);
    ctx->pc = 0x24B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B72Cu;
    // 0x24b730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B72Cu, 0x24B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B734u;
label_24b734:
    // 0x24b734: 0xc092dd4  jal         func_24B750
    ctx->pc = 0x24B734u;
    SET_GPR_U32(ctx, 31, 0x24B73Cu);
    ctx->pc = 0x24B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B734u;
    // 0x24b738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B750u, 0x24B734u, 0x24B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B73Cu;
label_24b73c:
    // 0x24b73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b744: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B744u;
    ctx->pc = 0x24B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B744u;
    // 0x24b748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B74Cu;
}
