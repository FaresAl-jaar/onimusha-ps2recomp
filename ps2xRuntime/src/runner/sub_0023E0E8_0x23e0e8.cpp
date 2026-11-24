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

// Function: sub_0023E0E8
// Address: 0x23e0e8 - 0x23e114
void sub_0023E0E8_0x23e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E0E8_0x23e0e8");
#endif

    switch (ctx->pc) {
        case 0x23e0fcu: goto label_23e0fc;
        case 0x23e104u: goto label_23e104;
        default: break;
    }

    ctx->pc = 0x23e0e8u;

    // 0x23e0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23e0f4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23E0F4u;
    SET_GPR_U32(ctx, 31, 0x23E0FCu);
    ctx->pc = 0x23E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0F4u;
    // 0x23e0f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23E0F4u, 0x23E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0FCu;
label_23e0fc:
    // 0x23e0fc: 0xc08f846  jal         func_23E118
    ctx->pc = 0x23E0FCu;
    SET_GPR_U32(ctx, 31, 0x23E104u);
    ctx->pc = 0x23E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0FCu;
    // 0x23e100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E118u, 0x23E0FCu, 0x23E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E104u;
label_23e104:
    // 0x23e104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e10c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23E10Cu;
    ctx->pc = 0x23E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E10Cu;
    // 0x23e110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23E114u;
}
