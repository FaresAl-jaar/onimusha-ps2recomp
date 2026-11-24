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

// Function: sub_0022B3F8
// Address: 0x22b3f8 - 0x22b434
void sub_0022B3F8_0x22b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B3F8_0x22b3f8");
#endif

    switch (ctx->pc) {
        case 0x22b408u: goto label_22b408;
        case 0x22b410u: goto label_22b410;
        case 0x22b424u: goto label_22b424;
        default: break;
    }

    ctx->pc = 0x22b3f8u;

    // 0x22b3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b400: 0xc08f8a2  jal         func_23E288
    ctx->pc = 0x22B400u;
    SET_GPR_U32(ctx, 31, 0x22B408u);
    ctx->pc = 0x23E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E288u, 0x22B400u, 0x22B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B408u;
label_22b408:
    // 0x22b408: 0xc08ac54  jal         func_22B150
    ctx->pc = 0x22B408u;
    SET_GPR_U32(ctx, 31, 0x22B410u);
    ctx->pc = 0x22B150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B150u, 0x22B408u, 0x22B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B410u;
label_22b410:
    // 0x22b410: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22b410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22b414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b418: 0x2484b308  addiu       $a0, $a0, -0x4CF8
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    // 0x22b41c: 0xc049590  jal         func_125640
    ctx->pc = 0x22B41Cu;
    SET_GPR_U32(ctx, 31, 0x22B424u);
    ctx->pc = 0x22B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B41Cu;
    // 0x22b420: 0x24061040  addiu       $a2, $zero, 0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22B41Cu, 0x22B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B424u;
label_22b424:
    // 0x22b424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b42c: 0x808acf6  j           func_22B3D8
    ctx->pc = 0x22B42Cu;
    ctx->pc = 0x22B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B42Cu;
    // 0x22b430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3D8u;
    sub_0022B3D8_0x22b3d8(rdram, ctx, runtime); return;
    ctx->pc = 0x22B434u;
}
