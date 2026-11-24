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

// Function: sub_002268D8
// Address: 0x2268d8 - 0x226928
void sub_002268D8_0x2268d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002268D8_0x2268d8");
#endif

    switch (ctx->pc) {
        case 0x2268f8u: goto label_2268f8;
        default: break;
    }

    ctx->pc = 0x2268d8u;

    // 0x2268d8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2268dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2268dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268e0: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x2268e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x2268e4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BA848u));
    // 0x2268e8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2268E8u;
    {
        const bool branch_taken_0x2268e8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268E8u;
        // 0x2268ec: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268e8) {
            ctx->pc = 0x22691Cu;
            goto label_22691c;
        }
    }
    ctx->pc = 0x2268F0u;
    // 0x2268f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2268f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268f4: 0x0  nop
    ctx->pc = 0x2268f4u;
    // NOP
label_2268f8:
    // 0x2268f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2268fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2268fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226900: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x226900u;
    {
        const bool branch_taken_0x226900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226900u;
        // 0x226904: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226900) {
            ctx->pc = 0x226920u;
            goto label_226920;
        }
    }
    ctx->pc = 0x226908u;
    // 0x226908: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22690c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x22690cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x226910: 0x0  nop
    ctx->pc = 0x226910u;
    // NOP
    // 0x226914: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x226914u;
    {
        const bool branch_taken_0x226914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226914) {
            ctx->pc = 0x2268F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2268f8;
        }
    }
    ctx->pc = 0x22691Cu;
label_22691c:
    // 0x22691c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226920:
    // 0x226920: 0x3e00008  jr          $ra
    ctx->pc = 0x226920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226928u;
}
