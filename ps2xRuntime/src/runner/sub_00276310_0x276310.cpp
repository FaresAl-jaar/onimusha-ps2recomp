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

// Function: sub_00276310
// Address: 0x276310 - 0x276330
void sub_00276310_0x276310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276310_0x276310");
#endif

    ctx->pc = 0x276310u;

    // 0x276310: 0x848300c2  lh          $v1, 0xC2($a0)
    ctx->pc = 0x276310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x276314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276318: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x27631c: 0xa48300c2  sh          $v1, 0xC2($a0)
    ctx->pc = 0x27631cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x276320: 0x848300c2  lh          $v1, 0xC2($a0)
    ctx->pc = 0x276320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x276324: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x276324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x276328: 0x3e00008  jr          $ra
    ctx->pc = 0x276328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276328u;
        // 0x27632c: 0xa48300c2  sh          $v1, 0xC2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276330u;
}
