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

// Function: sub_0023BB18
// Address: 0x23bb18 - 0x23bb44
void sub_0023BB18_0x23bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BB18_0x23bb18");
#endif

    switch (ctx->pc) {
        case 0x23bb2cu: goto label_23bb2c;
        case 0x23bb34u: goto label_23bb34;
        default: break;
    }

    ctx->pc = 0x23bb18u;

    // 0x23bb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bb1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bb20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bb24: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BB24u;
    SET_GPR_U32(ctx, 31, 0x23BB2Cu);
    ctx->pc = 0x23BB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB24u;
    // 0x23bb28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BB24u, 0x23BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB2Cu;
label_23bb2c:
    // 0x23bb2c: 0xc08eed2  jal         func_23BB48
    ctx->pc = 0x23BB2Cu;
    SET_GPR_U32(ctx, 31, 0x23BB34u);
    ctx->pc = 0x23BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB2Cu;
    // 0x23bb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BB48u, 0x23BB2Cu, 0x23BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BB34u;
label_23bb34:
    // 0x23bb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bb38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bb3c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23BB3Cu;
    ctx->pc = 0x23BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BB3Cu;
    // 0x23bb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23BB44u;
}
