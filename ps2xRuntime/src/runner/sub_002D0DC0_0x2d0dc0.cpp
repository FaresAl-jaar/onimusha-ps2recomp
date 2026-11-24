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

// Function: sub_002D0DC0
// Address: 0x2d0dc0 - 0x2d0e48
void sub_002D0DC0_0x2d0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0DC0_0x2d0dc0");
#endif

    ctx->pc = 0x2d0dc0u;

    // 0x2d0dc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d0dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0dc4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2d0dc8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0DC8u;
    {
        const bool branch_taken_0x2d0dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC8u;
        // 0x2d0dcc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dc8) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0DD0u;
    // 0x2d0dd0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0DD0u;
    {
        const bool branch_taken_0x2d0dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0dd0) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0DD8u;
    // 0x2d0dd8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2d0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d0ddc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0DDCu;
    {
        const bool branch_taken_0x2d0ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DDCu;
        // 0x2d0de0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ddc) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0DE4u;
    // 0x2d0de4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D0DE4u;
    {
        const bool branch_taken_0x2d0de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0de4) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0DECu;
    // 0x2d0dec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d0df0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0DF0u;
    {
        const bool branch_taken_0x2d0df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DF0u;
        // 0x2d0df4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0df0) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0DF8u;
    // 0x2d0df8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0DF8u;
    {
        const bool branch_taken_0x2d0df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0df8) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E00u;
    // 0x2d0e00: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2d0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2d0e04: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0E04u;
    {
        const bool branch_taken_0x2d0e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E04u;
        // 0x2d0e08: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e04) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E0Cu;
    // 0x2d0e0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0E0Cu;
    {
        const bool branch_taken_0x2d0e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0e0c) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E14u;
    // 0x2d0e14: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2d0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d0e18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0E18u;
    {
        const bool branch_taken_0x2d0e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E18u;
        // 0x2d0e1c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e18) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E20u;
    // 0x2d0e20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0E20u;
    {
        const bool branch_taken_0x2d0e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0e20) {
            ctx->pc = 0x2D0E30u;
            goto label_2d0e30;
        }
    }
    ctx->pc = 0x2D0E28u;
    // 0x2d0e28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0E28u;
    {
        const bool branch_taken_0x2d0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e28) {
            ctx->pc = 0x2D0E38u;
            goto label_2d0e38;
        }
    }
    ctx->pc = 0x2D0E30u;
label_2d0e30:
    // 0x2d0e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0E30u;
    {
        const bool branch_taken_0x2d0e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E30u;
        // 0x2d0e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e30) {
            ctx->pc = 0x2D0E40u;
            goto label_2d0e40;
        }
    }
    ctx->pc = 0x2D0E38u;
label_2d0e38:
    // 0x2d0e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e3c: 0x0  nop
    ctx->pc = 0x2d0e3cu;
    // NOP
label_2d0e40:
    // 0x2d0e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0E48u;
}
