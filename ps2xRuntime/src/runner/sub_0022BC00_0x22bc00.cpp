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

// Function: sub_0022BC00
// Address: 0x22bc00 - 0x22bc60
void sub_0022BC00_0x22bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BC00_0x22bc00");
#endif

    ctx->pc = 0x22bc00u;

    // 0x22bc00: 0x84850098  lh          $a1, 0x98($a0)
    ctx->pc = 0x22bc00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x22bc04: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22BC04u;
    {
        const bool branch_taken_0x22bc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC04u;
        // 0x22bc08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc04) {
            ctx->pc = 0x22BC58u;
            goto label_22bc58;
        }
    }
    ctx->pc = 0x22BC0Cu;
    // 0x22bc0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22bc10: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BC10u;
    {
        const bool branch_taken_0x22bc10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC10u;
        // 0x22bc14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc10) {
            ctx->pc = 0x22BC38u;
            goto label_22bc38;
        }
    }
    ctx->pc = 0x22BC18u;
    // 0x22bc18: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22bc1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22bc20: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x22BC20u;
    {
        const bool branch_taken_0x22bc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC20u;
        // 0x22bc24: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc20) {
            ctx->pc = 0x22BC58u;
            goto label_22bc58;
        }
    }
    ctx->pc = 0x22BC28u;
    // 0x22bc28: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x22bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22bc2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22bc30: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC30u;
        // 0x22bc34: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC38u;
label_22bc38:
    // 0x22bc38: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BC38u;
    {
        const bool branch_taken_0x22bc38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22bc38) {
            ctx->pc = 0x22BC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC38u;
            // 0x22bc3c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC58u;
            goto label_22bc58;
        }
    }
    ctx->pc = 0x22BC40u;
    // 0x22bc40: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x22bc40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22bc44: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22bc48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22bc4c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x22bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x22bc50: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC50u;
        // 0x22bc54: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC58u;
label_22bc58:
    // 0x22bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC60u;
}
