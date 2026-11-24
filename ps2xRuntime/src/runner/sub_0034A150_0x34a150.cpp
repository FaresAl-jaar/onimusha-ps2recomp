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

// Function: sub_0034A150
// Address: 0x34a150 - 0x34a178
void sub_0034A150_0x34a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A150_0x34a150");
#endif

    ctx->pc = 0x34a150u;

    // 0x34a150: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x34a150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34a154: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34a154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a158: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x34a158u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x34a15c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x34a15cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x34a160: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x34a160u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x34a164: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x34a164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x34a168: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x34a168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a16c: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x34a16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x34a170: 0x3e00008  jr          $ra
    ctx->pc = 0x34A170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A170u;
        // 0x34a174: 0xa0830005  sb          $v1, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A178u;
}
