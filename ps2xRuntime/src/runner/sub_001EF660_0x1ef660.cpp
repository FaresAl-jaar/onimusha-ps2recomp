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

// Function: sub_001EF660
// Address: 0x1ef660 - 0x1ef698
void sub_001EF660_0x1ef660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF660_0x1ef660");
#endif

    ctx->pc = 0x1ef660u;

    // 0x1ef660: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ef660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ef664: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x1ef664u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ef668: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1ef668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ef66c: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1ef66cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ef670: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ef670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef674: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ef674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1ef678: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ef678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ef67c: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x1ef67cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1ef680: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1ef680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1ef684: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1ef684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1ef688: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1ef688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1ef68c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ef690: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF690u;
        // 0x1ef694: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF698u;
}
