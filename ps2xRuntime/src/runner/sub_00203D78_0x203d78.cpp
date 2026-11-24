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

// Function: sub_00203D78
// Address: 0x203d78 - 0x203df0
void sub_00203D78_0x203d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203D78_0x203d78");
#endif

    ctx->pc = 0x203d78u;

    // 0x203d78: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x203d7c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203D84u;
    // 0x203d84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203d88: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x203D88u;
    {
        const bool branch_taken_0x203d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x203d88) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203D90u;
    // 0x203d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d94: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x203D94u;
    {
        const bool branch_taken_0x203d94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x203d94) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203D9Cu;
    // 0x203d9c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x203d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x203da0: 0x24022ee0  addiu       $v0, $zero, 0x2EE0
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    // 0x203da4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x203DA4u;
    {
        const bool branch_taken_0x203da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x203DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA4u;
        // 0x203da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203da4) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203DACu;
    // 0x203dac: 0x28822ee1  slti        $v0, $a0, 0x2EE1
    ctx->pc = 0x203dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12001) ? 1 : 0);
    // 0x203db0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203DB0u;
    {
        const bool branch_taken_0x203db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB0u;
        // 0x203db4: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203db0) {
            ctx->pc = 0x203DC8u;
            goto label_203dc8;
        }
    }
    ctx->pc = 0x203DB8u;
    // 0x203db8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x203DB8u;
    {
        const bool branch_taken_0x203db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203db8) {
            ctx->pc = 0x203DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203DB8u;
            // 0x203dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203DC0u;
    // 0x203dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x203DC0u;
    {
        const bool branch_taken_0x203dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC0u;
        // 0x203dc4: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dc0) {
            ctx->pc = 0x203DD4u;
            goto label_203dd4;
        }
    }
    ctx->pc = 0x203DC8u;
label_203dc8:
    // 0x203dc8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203DC8u;
    {
        const bool branch_taken_0x203dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x203DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DC8u;
        // 0x203dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dc8) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203DD0u;
    // 0x203dd0: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_203dd4:
    // 0x203dd4: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203DD4u;
    {
        const bool branch_taken_0x203dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x203dd4) {
            ctx->pc = 0x203DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203DD4u;
            // 0x203dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203DDCu;
    // 0x203ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x203DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DDCu;
        // 0x203de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DE4u;
    // 0x203de4: 0x0  nop
    ctx->pc = 0x203de4u;
    // NOP
label_203de8:
    // 0x203de8: 0x3e00008  jr          $ra
    ctx->pc = 0x203DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DF0u;
}
