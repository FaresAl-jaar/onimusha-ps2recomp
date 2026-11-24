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

// Function: sub_0022B438
// Address: 0x22b438 - 0x22b46c
void sub_0022B438_0x22b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B438_0x22b438");
#endif

    switch (ctx->pc) {
        case 0x22b448u: goto label_22b448;
        case 0x22b450u: goto label_22b450;
        default: break;
    }

    ctx->pc = 0x22b438u;

    // 0x22b438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b440: 0xc08f8ac  jal         func_23E2B0
    ctx->pc = 0x22B440u;
    SET_GPR_U32(ctx, 31, 0x22B448u);
    ctx->pc = 0x23E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E2B0u, 0x22B440u, 0x22B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B448u;
label_22b448:
    // 0x22b448: 0xc08ac5c  jal         func_22B170
    ctx->pc = 0x22B448u;
    SET_GPR_U32(ctx, 31, 0x22B450u);
    ctx->pc = 0x22B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B170u, 0x22B448u, 0x22B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B450u;
label_22b450:
    // 0x22b450: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22b454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b45c: 0x2484b308  addiu       $a0, $a0, -0x4CF8
    ctx->pc = 0x22b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    // 0x22b460: 0x24061040  addiu       $a2, $zero, 0x1040
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x22b464: 0x8049590  j           func_125640
    ctx->pc = 0x22B464u;
    ctx->pc = 0x22B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B464u;
    // 0x22b468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x22B46Cu;
}
