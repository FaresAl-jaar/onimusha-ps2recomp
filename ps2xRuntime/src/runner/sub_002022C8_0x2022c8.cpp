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

// Function: sub_002022C8
// Address: 0x2022c8 - 0x2022f4
void sub_002022C8_0x2022c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002022C8_0x2022c8");
#endif

    ctx->pc = 0x2022c8u;

    // 0x2022c8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2022c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2022cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2022ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2022d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2022d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2022d4: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x2022d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2022d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2022d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2022dc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2022dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2022e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2022e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2022e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2022ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2022ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2022F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022ECu;
        // 0x2022f0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2022ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2022F4u;
}
