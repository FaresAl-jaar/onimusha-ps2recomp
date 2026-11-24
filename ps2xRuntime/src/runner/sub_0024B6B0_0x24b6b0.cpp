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

// Function: sub_0024B6B0
// Address: 0x24b6b0 - 0x24b6dc
void sub_0024B6B0_0x24b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B6B0_0x24b6b0");
#endif

    switch (ctx->pc) {
        case 0x24b6c4u: goto label_24b6c4;
        case 0x24b6ccu: goto label_24b6cc;
        default: break;
    }

    ctx->pc = 0x24b6b0u;

    // 0x24b6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b6b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b6bc: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B6BCu;
    SET_GPR_U32(ctx, 31, 0x24B6C4u);
    ctx->pc = 0x24B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6BCu;
    // 0x24b6c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B6BCu, 0x24B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6C4u;
label_24b6c4:
    // 0x24b6c4: 0xc092db8  jal         func_24B6E0
    ctx->pc = 0x24B6C4u;
    SET_GPR_U32(ctx, 31, 0x24B6CCu);
    ctx->pc = 0x24B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6C4u;
    // 0x24b6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B6E0u, 0x24B6C4u, 0x24B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6CCu;
label_24b6cc:
    // 0x24b6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b6d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b6d4: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B6D4u;
    ctx->pc = 0x24B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6D4u;
    // 0x24b6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B6DCu;
}
