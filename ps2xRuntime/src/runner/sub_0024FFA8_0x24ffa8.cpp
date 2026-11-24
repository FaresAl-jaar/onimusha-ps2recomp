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

// Function: sub_0024FFA8
// Address: 0x24ffa8 - 0x24ffd4
void sub_0024FFA8_0x24ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FFA8_0x24ffa8");
#endif

    switch (ctx->pc) {
        case 0x24ffbcu: goto label_24ffbc;
        case 0x24ffc4u: goto label_24ffc4;
        default: break;
    }

    ctx->pc = 0x24ffa8u;

    // 0x24ffa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ffa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ffac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ffb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24ffb4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x24FFB4u;
    SET_GPR_U32(ctx, 31, 0x24FFBCu);
    ctx->pc = 0x24FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFB4u;
    // 0x24ffb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x24FFB4u, 0x24FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFBCu;
label_24ffbc:
    // 0x24ffbc: 0xc093ff6  jal         func_24FFD8
    ctx->pc = 0x24FFBCu;
    SET_GPR_U32(ctx, 31, 0x24FFC4u);
    ctx->pc = 0x24FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFBCu;
    // 0x24ffc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FFD8u, 0x24FFBCu, 0x24FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFC4u;
label_24ffc4:
    // 0x24ffc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ffc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ffc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ffcc: 0x8093f40  j           func_24FD00
    ctx->pc = 0x24FFCCu;
    ctx->pc = 0x24FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFCCu;
    // 0x24ffd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x24FFD4u;
}
