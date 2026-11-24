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

// Function: sub_00233018
// Address: 0x233018 - 0x233044
void sub_00233018_0x233018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233018_0x233018");
#endif

    switch (ctx->pc) {
        case 0x23302cu: goto label_23302c;
        case 0x233034u: goto label_233034;
        default: break;
    }

    ctx->pc = 0x233018u;

    // 0x233018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23301c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233024: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x233024u;
    SET_GPR_U32(ctx, 31, 0x23302Cu);
    ctx->pc = 0x233028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233024u;
    // 0x233028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x233024u, 0x23302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23302Cu;
label_23302c:
    // 0x23302c: 0xc08cc12  jal         func_233048
    ctx->pc = 0x23302Cu;
    SET_GPR_U32(ctx, 31, 0x233034u);
    ctx->pc = 0x233030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23302Cu;
    // 0x233030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233048u, 0x23302Cu, 0x233034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233034u;
label_233034:
    // 0x233034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23303c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23303Cu;
    ctx->pc = 0x233040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23303Cu;
    // 0x233040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x233044u;
}
