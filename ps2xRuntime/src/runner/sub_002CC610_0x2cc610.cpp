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

// Function: sub_002CC610
// Address: 0x2cc610 - 0x2cc62c
void sub_002CC610_0x2cc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC610_0x2cc610");
#endif

    ctx->pc = 0x2cc610u;

    // 0x2cc610: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cc614: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2cc618: 0xa0206c1c  sb          $zero, 0x6C1C($at)
    ctx->pc = 0x2cc618u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
    // 0x2cc61c: 0xa3808a50  sb          $zero, -0x75B0($gp)
    ctx->pc = 0x2cc61cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937168), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc620: 0xa3838a6c  sb          $v1, -0x7594($gp)
    ctx->pc = 0x2cc620u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937196), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc624: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC624u;
        // 0x2cc628: 0xa3808a51  sb          $zero, -0x75AF($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937169), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC62Cu;
}
