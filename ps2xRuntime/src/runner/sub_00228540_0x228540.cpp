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

// Function: sub_00228540
// Address: 0x228540 - 0x228570
void sub_00228540_0x228540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228540_0x228540");
#endif

    switch (ctx->pc) {
        case 0x228554u: goto label_228554;
        default: break;
    }

    ctx->pc = 0x228540u;

    // 0x228540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x228548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22854c: 0xc08a172  jal         func_2285C8
    ctx->pc = 0x22854Cu;
    SET_GPR_U32(ctx, 31, 0x228554u);
    ctx->pc = 0x228550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22854Cu;
    // 0x228550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C8u, 0x22854Cu, 0x228554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228554u;
label_228554:
    // 0x228554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x228554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22855c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22855cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228564: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x228564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x228568: 0x8049590  j           func_125640
    ctx->pc = 0x228568u;
    ctx->pc = 0x22856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228568u;
    // 0x22856c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x228570u;
}
