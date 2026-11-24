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

// Function: sub_002509D8
// Address: 0x2509d8 - 0x250a04
void sub_002509D8_0x2509d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002509D8_0x2509d8");
#endif

    switch (ctx->pc) {
        case 0x2509ecu: goto label_2509ec;
        case 0x2509f4u: goto label_2509f4;
        default: break;
    }

    ctx->pc = 0x2509d8u;

    // 0x2509d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2509d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2509dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2509dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2509e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2509e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2509e4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2509E4u;
    SET_GPR_U32(ctx, 31, 0x2509ECu);
    ctx->pc = 0x2509E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509E4u;
    // 0x2509e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2509E4u, 0x2509ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509ECu;
label_2509ec:
    // 0x2509ec: 0xc094282  jal         func_250A08
    ctx->pc = 0x2509ECu;
    SET_GPR_U32(ctx, 31, 0x2509F4u);
    ctx->pc = 0x2509F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509ECu;
    // 0x2509f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A08u, 0x2509ECu, 0x2509F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509F4u;
label_2509f4:
    // 0x2509f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2509f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2509f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2509f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2509fc: 0x8093f40  j           func_24FD00
    ctx->pc = 0x2509FCu;
    ctx->pc = 0x250A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509FCu;
    // 0x250a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x250A04u;
}
