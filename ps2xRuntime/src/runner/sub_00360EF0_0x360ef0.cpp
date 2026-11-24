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

// Function: sub_00360EF0
// Address: 0x360ef0 - 0x360f40
void sub_00360EF0_0x360ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360EF0_0x360ef0");
#endif

    switch (ctx->pc) {
        case 0x360f08u: goto label_360f08;
        default: break;
    }

    ctx->pc = 0x360ef0u;

    // 0x360ef0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x360ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x360ef4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x360ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x360ef8: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x360ef8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x360efc: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x360efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x360f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x360f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f04: 0x0  nop
    ctx->pc = 0x360f04u;
    // NOP
label_360f08:
    // 0x360f08: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x360f08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360f0c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360F0Cu;
    {
        const bool branch_taken_0x360f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x360f0c) {
            ctx->pc = 0x360F20u;
            goto label_360f20;
        }
    }
    ctx->pc = 0x360F14u;
    // 0x360f14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x360F14u;
    {
        const bool branch_taken_0x360f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f14) {
            ctx->pc = 0x360F38u;
            goto label_360f38;
        }
    }
    ctx->pc = 0x360F1Cu;
    // 0x360f1c: 0x0  nop
    ctx->pc = 0x360f1cu;
    // NOP
label_360f20:
    // 0x360f20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x360f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x360f24: 0x2ca300ec  sltiu       $v1, $a1, 0xEC
    ctx->pc = 0x360f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)236) ? 1 : 0);
    // 0x360f28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x360F28u;
    {
        const bool branch_taken_0x360f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F28u;
        // 0x360f2c: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f28) {
            ctx->pc = 0x360F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360f08;
        }
    }
    ctx->pc = 0x360F30u;
    // 0x360f30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f34: 0x0  nop
    ctx->pc = 0x360f34u;
    // NOP
label_360f38:
    // 0x360f38: 0x3e00008  jr          $ra
    ctx->pc = 0x360F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360F40u;
}
