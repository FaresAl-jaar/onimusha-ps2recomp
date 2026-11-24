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

// Function: sub_00382500
// Address: 0x382500 - 0x382550
void sub_00382500_0x382500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382500_0x382500");
#endif

    switch (ctx->pc) {
        case 0x382520u: goto label_382520;
        case 0x382528u: goto label_382528;
        default: break;
    }

    ctx->pc = 0x382500u;

    // 0x382500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x382508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38250c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382510: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x382510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382514: 0x3c100092  lui         $s0, 0x92
    ctx->pc = 0x382514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)146 << 16));
    // 0x382518: 0x26101760  addiu       $s0, $s0, 0x1760
    ctx->pc = 0x382518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5984));
    // 0x38251c: 0x0  nop
    ctx->pc = 0x38251cu;
    // NOP
label_382520:
    // 0x382520: 0xc0e0954  jal         func_382550
    ctx->pc = 0x382520u;
    SET_GPR_U32(ctx, 31, 0x382528u);
    ctx->pc = 0x382524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382520u;
    // 0x382524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382550u, 0x382520u, 0x382528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382528u;
label_382528:
    // 0x382528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x382528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38252c: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x38252cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x382530: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x382530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x382534: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x382534u;
    {
        const bool branch_taken_0x382534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382534) {
            ctx->pc = 0x382520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382520;
        }
    }
    ctx->pc = 0x38253Cu;
    // 0x38253c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382548: 0x3e00008  jr          $ra
    ctx->pc = 0x382548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382548u;
        // 0x38254c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382550u;
}
