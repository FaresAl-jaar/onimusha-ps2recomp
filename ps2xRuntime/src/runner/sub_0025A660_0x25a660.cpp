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

// Function: sub_0025A660
// Address: 0x25a660 - 0x25a684
void sub_0025A660_0x25a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A660_0x25a660");
#endif

    ctx->pc = 0x25a660u;

    // 0x25a660: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x25a664: 0x3402d431  ori         $v0, $zero, 0xD431
    ctx->pc = 0x25a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54321);
    // 0x25a668: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25a668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a66c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a670: 0xaf828840  sw          $v0, -0x77C0($gp)
    ctx->pc = 0x25a670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936640), GPR_U32(ctx, 2));
    // 0x25a674: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x25a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x25a678: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x25a678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x25a67c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A67Cu;
        // 0x25a680: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A684u;
}
