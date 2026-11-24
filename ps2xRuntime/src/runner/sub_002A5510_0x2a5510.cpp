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

// Function: sub_002A5510
// Address: 0x2a5510 - 0x2a5550
void sub_002A5510_0x2a5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5510_0x2a5510");
#endif

    switch (ctx->pc) {
        case 0x2a5544u: goto label_2a5544;
        default: break;
    }

    ctx->pc = 0x2a5510u;

    // 0x2a5510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5514: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a551c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a551cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5520: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a5520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a5524: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5528: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a552c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a5530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5534: 0x24055884  addiu       $a1, $zero, 0x5884
    ctx->pc = 0x2a5534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22660));
    // 0x2a5538: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x2a5538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2a553c: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A553Cu;
    SET_GPR_U32(ctx, 31, 0x2A5544u);
    ctx->pc = 0x2A5540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A553Cu;
    // 0x2a5540: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A553Cu, 0x2A5544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5544u;
label_2a5544:
    // 0x2a5544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5548: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5548u;
        // 0x2a554c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5550u;
}
