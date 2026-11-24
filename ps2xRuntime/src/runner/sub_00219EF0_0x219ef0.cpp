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

// Function: sub_00219EF0
// Address: 0x219ef0 - 0x219f30
void sub_00219EF0_0x219ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219EF0_0x219ef0");
#endif

    switch (ctx->pc) {
        case 0x219f00u: goto label_219f00;
        default: break;
    }

    ctx->pc = 0x219ef0u;

    // 0x219ef0: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x219ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x219ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ef8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x219ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x219efc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x219efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_219f00:
    // 0x219f00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x219f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f04: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x219F04u;
    {
        const bool branch_taken_0x219f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x219F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F04u;
        // 0x219f08: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f04) {
            ctx->pc = 0x219F28u;
            goto label_219f28;
        }
    }
    ctx->pc = 0x219F0Cu;
    // 0x219f0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x219f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x219f10: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x219f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x219f14: 0x0  nop
    ctx->pc = 0x219f14u;
    // NOP
    // 0x219f18: 0x0  nop
    ctx->pc = 0x219f18u;
    // NOP
    // 0x219f1c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x219F1Cu;
    {
        const bool branch_taken_0x219f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219f1c) {
            ctx->pc = 0x219F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219F1Cu;
            // 0x219f20: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219f00;
        }
    }
    ctx->pc = 0x219F24u;
    // 0x219f24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219f28:
    // 0x219f28: 0x3e00008  jr          $ra
    ctx->pc = 0x219F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F30u;
}
