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

// Function: sub_001C1FF0
// Address: 0x1c1ff0 - 0x1c201c
void sub_001C1FF0_0x1c1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FF0_0x1c1ff0");
#endif

    ctx->pc = 0x1c1ff0u;

    // 0x1c1ff0: 0x8c847840  lw          $a0, 0x7840($a0)
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c1ff4: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x1c1ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1c1ff8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1ffc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c2000: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1c2000u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c2004: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c2008: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x1c2008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c200c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c2014: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2014u;
        // 0x1c2018: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C201Cu;
}
