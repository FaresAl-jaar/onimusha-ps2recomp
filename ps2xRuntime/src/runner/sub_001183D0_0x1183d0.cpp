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

// Function: sub_001183D0
// Address: 0x1183d0 - 0x118408
void sub_001183D0_0x1183d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001183D0_0x1183d0");
#endif

    switch (ctx->pc) {
        case 0x1183e0u: goto label_1183e0;
        default: break;
    }

    ctx->pc = 0x1183d0u;

    // 0x1183d0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1183d4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1183D4u;
    {
        const bool branch_taken_0x1183d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183D4u;
        // 0x1183d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183d4) {
            ctx->pc = 0x118400u;
            goto label_118400;
        }
    }
    ctx->pc = 0x1183DCu;
    // 0x1183dc: 0x0  nop
    ctx->pc = 0x1183dcu;
    // NOP
label_1183e0:
    // 0x1183e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1183e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1183e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1183e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1183e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1183e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1183ec: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1183ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1183f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1183f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1183f4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1183f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1183F8u;
    {
        const bool branch_taken_0x1183f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1183f8) {
            ctx->pc = 0x1183E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1183e0;
        }
    }
    ctx->pc = 0x118400u;
label_118400:
    // 0x118400: 0x3e00008  jr          $ra
    ctx->pc = 0x118400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118400u;
        // 0x118404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118408u;
}
