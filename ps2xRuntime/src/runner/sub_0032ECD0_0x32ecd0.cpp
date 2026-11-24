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

// Function: sub_0032ECD0
// Address: 0x32ecd0 - 0x32ed08
void sub_0032ECD0_0x32ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ECD0_0x32ecd0");
#endif

    ctx->pc = 0x32ecd0u;

    // 0x32ecd0: 0xa08000f0  sb          $zero, 0xF0($a0)
    ctx->pc = 0x32ecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ecd4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x32ecd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x32ecd8: 0xa08000f1  sb          $zero, 0xF1($a0)
    ctx->pc = 0x32ecd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 241), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ecdc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ece0: 0xa48000f2  sh          $zero, 0xF2($a0)
    ctx->pc = 0x32ece0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 0));
    // 0x32ece4: 0xa48500f4  sh          $a1, 0xF4($a0)
    ctx->pc = 0x32ece4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x32ece8: 0xa48600f6  sh          $a2, 0xF6($a0)
    ctx->pc = 0x32ece8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 246), (uint16_t)GPR_U32(ctx, 6));
    // 0x32ecec: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x32ececu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x32ecf0: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x32ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x32ecf4: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x32ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x32ecf8: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x32ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x32ecfc: 0xa0870109  sb          $a3, 0x109($a0)
    ctx->pc = 0x32ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 7));
    // 0x32ed00: 0x3e00008  jr          $ra
    ctx->pc = 0x32ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED00u;
        // 0x32ed04: 0xa483010a  sh          $v1, 0x10A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 266), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ED08u;
}
