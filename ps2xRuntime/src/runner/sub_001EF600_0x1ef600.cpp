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

// Function: sub_001EF600
// Address: 0x1ef600 - 0x1ef628
void sub_001EF600_0x1ef600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF600_0x1ef600");
#endif

    ctx->pc = 0x1ef600u;

    // 0x1ef600: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ef600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ef604: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ef604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef608: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ef60c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1ef60cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ef610: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1ef610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1ef614: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1ef614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ef618: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ef618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ef61c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ef61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ef620: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF620u;
        // 0x1ef624: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF628u;
}
