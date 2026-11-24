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

// Function: sub_0014E2D0
// Address: 0x14e2d0 - 0x14e308
void sub_0014E2D0_0x14e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E2D0_0x14e2d0");
#endif

    ctx->pc = 0x14e2d0u;

    // 0x14e2d0: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e2d4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e2d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e2d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E2D8u;
    {
        const bool branch_taken_0x14e2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2d8) {
            ctx->pc = 0x14E300u;
            goto label_14e300;
        }
    }
    ctx->pc = 0x14E2E0u;
    // 0x14e2e0: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e2e4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x14e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e2e8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x14e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e2ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e2f4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x14e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x14e2f8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x14e2f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e2fc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x14e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_14e300:
    // 0x14e300: 0x3e00008  jr          $ra
    ctx->pc = 0x14E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E308u;
}
