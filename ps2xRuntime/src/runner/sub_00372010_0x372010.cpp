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

// Function: sub_00372010
// Address: 0x372010 - 0x372034
void sub_00372010_0x372010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372010_0x372010");
#endif

    ctx->pc = 0x372010u;

    // 0x372010: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x372010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x372014: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x372014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x372018: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x372018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x37201c: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x37201cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x372020: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x372020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x372024: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x372024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x372028: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x372028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x37202c: 0x3e00008  jr          $ra
    ctx->pc = 0x37202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37202Cu;
        // 0x372030: 0xa480008c  sh          $zero, 0x8C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37202Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372034u;
}
