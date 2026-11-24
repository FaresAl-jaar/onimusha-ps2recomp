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

// Function: sub_00381D00
// Address: 0x381d00 - 0x381d24
void sub_00381D00_0x381d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381D00_0x381d00");
#endif

    ctx->pc = 0x381d00u;

    // 0x381d00: 0x94862b22  lhu         $a2, 0x2B22($a0)
    ctx->pc = 0x381d00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11042)));
    // 0x381d04: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x381d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x381d08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x381d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x381d0c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x381d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x381d10: 0xa08607f4  sb          $a2, 0x7F4($a0)
    ctx->pc = 0x381d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 6));
    // 0x381d14: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x381d14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x381d18: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x381d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x381d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x381D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D1Cu;
        // 0x381d20: 0xac8307ec  sw          $v1, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381D24u;
}
