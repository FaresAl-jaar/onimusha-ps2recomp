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

// Function: sub_00275E90
// Address: 0x275e90 - 0x275ebc
void sub_00275E90_0x275e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275E90_0x275e90");
#endif

    ctx->pc = 0x275e90u;

    // 0x275e90: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x275e90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275e94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x275e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x275e98: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x275e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x275e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ea0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x275ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x275ea4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x275ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x275ea8: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x275ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x275eac: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x275eacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x275eb0: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x275eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x275eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x275EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EB4u;
        // 0x275eb8: 0xac8307ec  sw          $v1, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275EBCu;
}
