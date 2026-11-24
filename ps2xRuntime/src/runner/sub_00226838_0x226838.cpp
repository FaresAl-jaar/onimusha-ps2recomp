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

// Function: sub_00226838
// Address: 0x226838 - 0x226878
void sub_00226838_0x226838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226838_0x226838");
#endif

    switch (ctx->pc) {
        case 0x22685cu: goto label_22685c;
        default: break;
    }

    ctx->pc = 0x226838u;

    // 0x226838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22683c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226844: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x226844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x226848: 0x2610a840  addiu       $s0, $s0, -0x57C0
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944832));
    // 0x22684c: 0x2406026c  addiu       $a2, $zero, 0x26C
    ctx->pc = 0x22684cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x226850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226854: 0xc049590  jal         func_125640
    ctx->pc = 0x226854u;
    SET_GPR_U32(ctx, 31, 0x22685Cu);
    ctx->pc = 0x226858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226854u;
    // 0x226858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x226854u, 0x22685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22685Cu;
label_22685c:
    // 0x22685c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226860: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x226860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x226864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22686c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226870: 0x8089c66  j           func_227198
    ctx->pc = 0x226870u;
    ctx->pc = 0x226874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226870u;
    // 0x226874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227198u;
    sub_00227198_0x227198(rdram, ctx, runtime); return;
    ctx->pc = 0x226878u;
}
