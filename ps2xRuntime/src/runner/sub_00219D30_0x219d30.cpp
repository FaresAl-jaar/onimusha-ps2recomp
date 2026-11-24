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

// Function: sub_00219D30
// Address: 0x219d30 - 0x219d60
void sub_00219D30_0x219d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219D30_0x219d30");
#endif

    ctx->pc = 0x219d30u;

    // 0x219d30: 0x8c8336b0  lw          $v1, 0x36B0($a0)
    ctx->pc = 0x219d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x219d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d38: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x219d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x219d3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x219D3Cu;
    {
        const bool branch_taken_0x219d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D3Cu;
        // 0x219d40: 0x24650ad0  addiu       $a1, $v1, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d3c) {
            ctx->pc = 0x219D58u;
            goto label_219d58;
        }
    }
    ctx->pc = 0x219D44u;
    // 0x219d44: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x219d48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x219d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d4c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x219d4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219d50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d54: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x219d54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_219d58:
    // 0x219d58: 0x3e00008  jr          $ra
    ctx->pc = 0x219D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D60u;
}
