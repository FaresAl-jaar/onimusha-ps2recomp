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

// Function: sub_0020B7A8
// Address: 0x20b7a8 - 0x20b7d0
void sub_0020B7A8_0x20b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B7A8_0x20b7a8");
#endif

    switch (ctx->pc) {
        case 0x20b7bcu: goto label_20b7bc;
        default: break;
    }

    ctx->pc = 0x20b7a8u;

    // 0x20b7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b7ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b7b4: 0xc094ef8  jal         func_253BE0
    ctx->pc = 0x20B7B4u;
    SET_GPR_U32(ctx, 31, 0x20B7BCu);
    ctx->pc = 0x20B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7B4u;
    // 0x20b7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253BE0u, 0x20B7B4u, 0x20B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7BCu;
label_20b7bc:
    // 0x20b7bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7c8: 0x8094efe  j           func_253BF8
    ctx->pc = 0x20B7C8u;
    ctx->pc = 0x20B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7C8u;
    // 0x20b7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BF8u;
    sub_00253BF8_0x253bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x20B7D0u;
}
