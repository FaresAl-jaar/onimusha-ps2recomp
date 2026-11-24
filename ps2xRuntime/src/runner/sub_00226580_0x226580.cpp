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

// Function: sub_00226580
// Address: 0x226580 - 0x2265bc
void sub_00226580_0x226580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226580_0x226580");
#endif

    switch (ctx->pc) {
        case 0x2265a4u: goto label_2265a4;
        default: break;
    }

    ctx->pc = 0x226580u;

    // 0x226580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226584: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x226584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x226588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22658c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22658cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226594: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x226594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x226598: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x226598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22659c: 0xc089454  jal         func_225150
    ctx->pc = 0x22659Cu;
    SET_GPR_U32(ctx, 31, 0x2265A4u);
    ctx->pc = 0x2265A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22659Cu;
    // 0x2265a0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225150u, 0x22659Cu, 0x2265A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265A4u;
label_2265a4:
    // 0x2265a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2265a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2265ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2265acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2265b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2265b4: 0x8089902  j           func_226408
    ctx->pc = 0x2265B4u;
    ctx->pc = 0x2265B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265B4u;
    // 0x2265b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226408u;
    sub_00226408_0x226408(rdram, ctx, runtime); return;
    ctx->pc = 0x2265BCu;
}
