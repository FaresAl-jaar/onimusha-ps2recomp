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

// Function: sub_00298530
// Address: 0x298530 - 0x2985a0
void sub_00298530_0x298530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298530_0x298530");
#endif

    ctx->pc = 0x298530u;

    // 0x298530: 0x908306d8  lbu         $v1, 0x6D8($a0)
    ctx->pc = 0x298530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1752)));
    // 0x298534: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x298534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298538: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x298538u;
    {
        const bool branch_taken_0x298538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298538u;
        // 0x29853c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298538) {
            ctx->pc = 0x298580u;
            goto label_298580;
        }
    }
    ctx->pc = 0x298540u;
    // 0x298540: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298540u;
    {
        const bool branch_taken_0x298540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x298540) {
            ctx->pc = 0x298570u;
            goto label_298570;
        }
    }
    ctx->pc = 0x298548u;
    // 0x298548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29854c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29854Cu;
    {
        const bool branch_taken_0x29854c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29854c) {
            ctx->pc = 0x298560u;
            goto label_298560;
        }
    }
    ctx->pc = 0x298554u;
    // 0x298554: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x298554u;
    {
        const bool branch_taken_0x298554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298554) {
            ctx->pc = 0x298590u;
            goto label_298590;
        }
    }
    ctx->pc = 0x29855Cu;
    // 0x29855c: 0x0  nop
    ctx->pc = 0x29855cu;
    // NOP
label_298560:
    // 0x298560: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298564: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x298564u;
    {
        const bool branch_taken_0x298564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298564u;
        // 0x298568: 0xa08206d8  sb          $v0, 0x6D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1752), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298564) {
            ctx->pc = 0x298590u;
            goto label_298590;
        }
    }
    ctx->pc = 0x29856Cu;
    // 0x29856c: 0x0  nop
    ctx->pc = 0x29856cu;
    // NOP
label_298570:
    // 0x298570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x298570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x298574u;
    {
        const bool branch_taken_0x298574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298574u;
        // 0x298578: 0xa08206d8  sb          $v0, 0x6D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1752), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298574) {
            ctx->pc = 0x298590u;
            goto label_298590;
        }
    }
    ctx->pc = 0x29857Cu;
    // 0x29857c: 0x0  nop
    ctx->pc = 0x29857cu;
    // NOP
label_298580:
    // 0x298580: 0xa08006d8  sb          $zero, 0x6D8($a0)
    ctx->pc = 0x298580u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1752), (uint8_t)GPR_U32(ctx, 0));
    // 0x298584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298584u;
    {
        const bool branch_taken_0x298584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298584u;
        // 0x298588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298584) {
            ctx->pc = 0x298598u;
            goto label_298598;
        }
    }
    ctx->pc = 0x29858Cu;
    // 0x29858c: 0x0  nop
    ctx->pc = 0x29858cu;
    // NOP
label_298590:
    // 0x298590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298594: 0x0  nop
    ctx->pc = 0x298594u;
    // NOP
label_298598:
    // 0x298598: 0x3e00008  jr          $ra
    ctx->pc = 0x298598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2985A0u;
}
