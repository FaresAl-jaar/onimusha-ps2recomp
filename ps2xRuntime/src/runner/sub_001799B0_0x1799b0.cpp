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

// Function: sub_001799B0
// Address: 0x1799b0 - 0x1799f0
void sub_001799B0_0x1799b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001799B0_0x1799b0");
#endif

    switch (ctx->pc) {
        case 0x1799b8u: goto label_1799b8;
        default: break;
    }

    ctx->pc = 0x1799b0u;

    // 0x1799b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1799b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1799b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1799b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1799b8:
    // 0x1799b8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1799b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1799bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1799BCu;
    {
        const bool branch_taken_0x1799bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1799bc) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799C4u;
    // 0x1799c4: 0x9083000b  lbu         $v1, 0xB($a0)
    ctx->pc = 0x1799c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x1799c8: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1799C8u;
    {
        const bool branch_taken_0x1799c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1799c8) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799D0u;
    // 0x1799d0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1799d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1799d4: 0x0  nop
    ctx->pc = 0x1799d4u;
    // NOP
label_1799d8:
    // 0x1799d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1799dc: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1799e0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1799E0u;
    {
        const bool branch_taken_0x1799e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799E0u;
        // 0x1799e4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799e0) {
            ctx->pc = 0x1799B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1799b8;
        }
    }
    ctx->pc = 0x1799E8u;
    // 0x1799e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1799E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1799E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1799F0u;
}
