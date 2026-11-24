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

// Function: sub_0024B7B8
// Address: 0x24b7b8 - 0x24b7e4
void sub_0024B7B8_0x24b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B7B8_0x24b7b8");
#endif

    switch (ctx->pc) {
        case 0x24b7ccu: goto label_24b7cc;
        case 0x24b7d4u: goto label_24b7d4;
        default: break;
    }

    ctx->pc = 0x24b7b8u;

    // 0x24b7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b7c4: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B7C4u;
    SET_GPR_U32(ctx, 31, 0x24B7CCu);
    ctx->pc = 0x24B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7C4u;
    // 0x24b7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B7C4u, 0x24B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7CCu;
label_24b7cc:
    // 0x24b7cc: 0xc092dfa  jal         func_24B7E8
    ctx->pc = 0x24B7CCu;
    SET_GPR_U32(ctx, 31, 0x24B7D4u);
    ctx->pc = 0x24B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7CCu;
    // 0x24b7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7E8u, 0x24B7CCu, 0x24B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7D4u;
label_24b7d4:
    // 0x24b7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b7d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b7dc: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B7DCu;
    ctx->pc = 0x24B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7DCu;
    // 0x24b7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B7E4u;
}
