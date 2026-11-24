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

// Function: sub_00225308
// Address: 0x225308 - 0x225340
void sub_00225308_0x225308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225308_0x225308");
#endif

    ctx->pc = 0x225308u;

    // 0x225308: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x225308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22530c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x22530cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x225310: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x225310u;
    {
        const bool branch_taken_0x225310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x225314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225310u;
        // 0x225314: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225310) {
            ctx->pc = 0x225338u;
            goto label_225338;
        }
    }
    ctx->pc = 0x225318u;
    // 0x225318: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x225318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x22531c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22531Cu;
    {
        const bool branch_taken_0x22531c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x225320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22531Cu;
        // 0x225320: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22531c) {
            ctx->pc = 0x225338u;
            goto label_225338;
        }
    }
    ctx->pc = 0x225324u;
    // 0x225324: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x225328: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22532c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225330: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x225330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x225334: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x225334u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_225338:
    // 0x225338: 0x3e00008  jr          $ra
    ctx->pc = 0x225338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225340u;
}
