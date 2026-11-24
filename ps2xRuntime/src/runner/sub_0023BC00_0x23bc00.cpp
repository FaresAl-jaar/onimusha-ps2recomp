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

// Function: sub_0023BC00
// Address: 0x23bc00 - 0x23bc2c
void sub_0023BC00_0x23bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BC00_0x23bc00");
#endif

    switch (ctx->pc) {
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc1cu: goto label_23bc1c;
        default: break;
    }

    ctx->pc = 0x23bc00u;

    // 0x23bc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bc08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bc0c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BC0Cu;
    SET_GPR_U32(ctx, 31, 0x23BC14u);
    ctx->pc = 0x23BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC0Cu;
    // 0x23bc10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BC0Cu, 0x23BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC14u;
label_23bc14:
    // 0x23bc14: 0xc08ef0c  jal         func_23BC30
    ctx->pc = 0x23BC14u;
    SET_GPR_U32(ctx, 31, 0x23BC1Cu);
    ctx->pc = 0x23BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC14u;
    // 0x23bc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BC30u, 0x23BC14u, 0x23BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC1Cu;
label_23bc1c:
    // 0x23bc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bc24: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23BC24u;
    ctx->pc = 0x23BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC24u;
    // 0x23bc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23BC2Cu;
}
