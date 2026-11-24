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

// Function: sub_0024B368
// Address: 0x24b368 - 0x24b394
void sub_0024B368_0x24b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B368_0x24b368");
#endif

    switch (ctx->pc) {
        case 0x24b37cu: goto label_24b37c;
        case 0x24b384u: goto label_24b384;
        default: break;
    }

    ctx->pc = 0x24b368u;

    // 0x24b368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b374: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B374u;
    SET_GPR_U32(ctx, 31, 0x24B37Cu);
    ctx->pc = 0x24B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B374u;
    // 0x24b378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B374u, 0x24B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B37Cu;
label_24b37c:
    // 0x24b37c: 0xc092ce6  jal         func_24B398
    ctx->pc = 0x24B37Cu;
    SET_GPR_U32(ctx, 31, 0x24B384u);
    ctx->pc = 0x24B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B37Cu;
    // 0x24b380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B398u, 0x24B37Cu, 0x24B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B384u;
label_24b384:
    // 0x24b384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b38c: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B38Cu;
    ctx->pc = 0x24B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B38Cu;
    // 0x24b390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B394u;
}
