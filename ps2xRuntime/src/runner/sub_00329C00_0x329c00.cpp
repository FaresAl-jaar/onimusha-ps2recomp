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

// Function: sub_00329C00
// Address: 0x329c00 - 0x329c1c
void sub_00329C00_0x329c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329C00_0x329c00");
#endif

    ctx->pc = 0x329c00u;

    // 0x329c00: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x329c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x329c04: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x329c04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x329c08: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x329c08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x329c0c: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x329c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x329c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c14: 0x3e00008  jr          $ra
    ctx->pc = 0x329C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C14u;
        // 0x329c18: 0xa083000e  sb          $v1, 0xE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329C1Cu;
}
