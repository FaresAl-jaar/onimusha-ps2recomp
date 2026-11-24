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

// Function: sub_00201900
// Address: 0x201900 - 0x201928
void sub_00201900_0x201900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201900_0x201900");
#endif

    switch (ctx->pc) {
        case 0x201914u: goto label_201914;
        default: break;
    }

    ctx->pc = 0x201900u;

    // 0x201900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20190c: 0xc08a426  jal         func_229098
    ctx->pc = 0x20190Cu;
    SET_GPR_U32(ctx, 31, 0x201914u);
    ctx->pc = 0x201910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20190Cu;
    // 0x201910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229098u, 0x20190Cu, 0x201914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201914u;
label_201914:
    // 0x201914: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20191c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20191cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201920: 0x808e564  j           func_239590
    ctx->pc = 0x201920u;
    ctx->pc = 0x201924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201920u;
    // 0x201924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239590u;
    sub_00239590_0x239590(rdram, ctx, runtime); return;
    ctx->pc = 0x201928u;
}
