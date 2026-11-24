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

// Function: sub_00130040
// Address: 0x130040 - 0x130074
void sub_00130040_0x130040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130040_0x130040");
#endif

    switch (ctx->pc) {
        case 0x130048u: goto label_130048;
        default: break;
    }

    ctx->pc = 0x130040u;

    // 0x130040: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x130040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x130044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x130044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130048:
    // 0x130048: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13004c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13004cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x130050: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x130050u;
    {
        const bool branch_taken_0x130050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x130050) {
            ctx->pc = 0x130060u;
            goto label_130060;
        }
    }
    ctx->pc = 0x130058u;
    // 0x130058: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13005c: 0x0  nop
    ctx->pc = 0x13005cu;
    // NOP
label_130060:
    // 0x130060: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x130060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130064: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x130064u;
    {
        const bool branch_taken_0x130064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x130064) {
            ctx->pc = 0x130048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130048;
        }
    }
    ctx->pc = 0x13006Cu;
    // 0x13006c: 0x3e00008  jr          $ra
    ctx->pc = 0x13006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13006Cu;
        // 0x130070: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130074u;
}
