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

// Function: sub_002F3020
// Address: 0x2f3020 - 0x2f3044
void sub_002F3020_0x2f3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3020_0x2f3020");
#endif

    ctx->pc = 0x2f3020u;

    // 0x2f3020: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f3020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f3024: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x2f3024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f3028: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f302c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f302cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f3030: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
    // 0x2f3034: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f3038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f303c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F303Cu;
        // 0x2f3040: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3044u;
}
