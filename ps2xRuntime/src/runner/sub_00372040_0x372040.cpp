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

// Function: sub_00372040
// Address: 0x372040 - 0x372064
void sub_00372040_0x372040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372040_0x372040");
#endif

    ctx->pc = 0x372040u;

    // 0x372040: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x372040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x372044: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x372044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372048: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x372048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x37204c: 0xa0870070  sb          $a3, 0x70($a0)
    ctx->pc = 0x37204cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x372050: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x372050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x372054: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x372054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x372058: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x372058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x37205c: 0x3e00008  jr          $ra
    ctx->pc = 0x37205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37205Cu;
        // 0x372060: 0xa480008c  sh          $zero, 0x8C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372064u;
}
