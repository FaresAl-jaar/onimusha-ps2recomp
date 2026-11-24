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

// Function: sub_003BBC70
// Address: 0x3bbc70 - 0x3bbca0
void sub_003BBC70_0x3bbc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBC70_0x3bbc70");
#endif

    ctx->pc = 0x3bbc70u;

    // 0x3bbc70: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x3bbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3bbc74: 0x24892b30  addiu       $t1, $a0, 0x2B30
    ctx->pc = 0x3bbc74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
    // 0x3bbc78: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x3bbc78u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bbc7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bbc7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbc80: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x3bbc80u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x3bbc84: 0x24832b20  addiu       $v1, $a0, 0x2B20
    ctx->pc = 0x3bbc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
    // 0x3bbc88: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x3bbc88u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bbc8c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3bbc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3bbc90: 0xa4802b42  sh          $zero, 0x2B42($a0)
    ctx->pc = 0x3bbc90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11074), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bbc94: 0xa4862b44  sh          $a2, 0x2B44($a0)
    ctx->pc = 0x3bbc94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11076), (uint16_t)GPR_U32(ctx, 6));
    // 0x3bbc98: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC98u;
        // 0x3bbc9c: 0xa4872b40  sh          $a3, 0x2B40($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11072), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBCA0u;
}
