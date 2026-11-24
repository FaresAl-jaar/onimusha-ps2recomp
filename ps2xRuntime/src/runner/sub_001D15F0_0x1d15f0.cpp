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

// Function: sub_001D15F0
// Address: 0x1d15f0 - 0x1d1618
void sub_001D15F0_0x1d15f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D15F0_0x1d15f0");
#endif

    ctx->pc = 0x1d15f0u;

    // 0x1d15f0: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d15f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d15f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d15fc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d1600: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1604: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d1604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d1608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d160c: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x1d160cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d1610: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1610u;
        // 0x1d1614: 0x621004  sllv        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1618u;
}
