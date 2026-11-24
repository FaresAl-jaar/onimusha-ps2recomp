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

// Function: sub_00274510
// Address: 0x274510 - 0x274554
void sub_00274510_0x274510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274510_0x274510");
#endif

    switch (ctx->pc) {
        case 0x274520u: goto label_274520;
        case 0x274544u: goto label_274544;
        default: break;
    }

    ctx->pc = 0x274510u;

    // 0x274510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274518: 0xc09d068  jal         func_2741A0
    ctx->pc = 0x274518u;
    SET_GPR_U32(ctx, 31, 0x274520u);
    ctx->pc = 0x27451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274518u;
    // 0x27451c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2741A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741A0u, 0x274518u, 0x274520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274520u;
label_274520:
    // 0x274520: 0x838388a4  lb          $v1, -0x775C($gp)
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x274524: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x274524u;
    {
        const bool branch_taken_0x274524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274524u;
        // 0x274528: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274524) {
            ctx->pc = 0x274548u;
            goto label_274548;
        }
    }
    ctx->pc = 0x27452Cu;
    // 0x27452c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x27452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x274530: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x274534: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274534u;
    {
        const bool branch_taken_0x274534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274534u;
        // 0x274538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274534) {
            ctx->pc = 0x274548u;
            goto label_274548;
        }
    }
    ctx->pc = 0x27453Cu;
    // 0x27453c: 0xc09d068  jal         func_2741A0
    ctx->pc = 0x27453Cu;
    SET_GPR_U32(ctx, 31, 0x274544u);
    ctx->pc = 0x2741A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741A0u, 0x27453Cu, 0x274544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274544u;
label_274544:
    // 0x274544: 0x0  nop
    ctx->pc = 0x274544u;
    // NOP
label_274548:
    // 0x274548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27454c: 0x3e00008  jr          $ra
    ctx->pc = 0x27454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27454Cu;
        // 0x274550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274554u;
}
