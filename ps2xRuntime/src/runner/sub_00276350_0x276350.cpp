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

// Function: sub_00276350
// Address: 0x276350 - 0x276370
void sub_00276350_0x276350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276350_0x276350");
#endif

    ctx->pc = 0x276350u;

    // 0x276350: 0x848300c2  lh          $v1, 0xC2($a0)
    ctx->pc = 0x276350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x276354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276358: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x27635c: 0xa48300c2  sh          $v1, 0xC2($a0)
    ctx->pc = 0x27635cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x276360: 0x848300c2  lh          $v1, 0xC2($a0)
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x276364: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x276364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x276368: 0x3e00008  jr          $ra
    ctx->pc = 0x276368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276368u;
        // 0x27636c: 0xa48300c2  sh          $v1, 0xC2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276370u;
}
