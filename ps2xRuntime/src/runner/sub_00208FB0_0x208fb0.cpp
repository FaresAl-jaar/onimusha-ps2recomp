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

// Function: sub_00208FB0
// Address: 0x208fb0 - 0x208fdc
void sub_00208FB0_0x208fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208FB0_0x208fb0");
#endif

    switch (ctx->pc) {
        case 0x208fc4u: goto label_208fc4;
        default: break;
    }

    ctx->pc = 0x208fb0u;

    // 0x208fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208fb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208fbc: 0xc0821e6  jal         func_208798
    ctx->pc = 0x208FBCu;
    SET_GPR_U32(ctx, 31, 0x208FC4u);
    ctx->pc = 0x208FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FBCu;
    // 0x208fc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x208FBCu, 0x208FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FC4u;
label_208fc4:
    // 0x208fc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x208fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fd4: 0x80898da  j           func_226368
    ctx->pc = 0x208FD4u;
    ctx->pc = 0x208FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FD4u;
    // 0x208fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    sub_00226368_0x226368(rdram, ctx, runtime); return;
    ctx->pc = 0x208FDCu;
}
