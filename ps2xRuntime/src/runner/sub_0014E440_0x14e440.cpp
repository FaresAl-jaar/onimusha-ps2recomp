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

// Function: sub_0014E440
// Address: 0x14e440 - 0x14e478
void sub_0014E440_0x14e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E440_0x14e440");
#endif

    ctx->pc = 0x14e440u;

    // 0x14e440: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e444: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e448: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E448u;
    {
        const bool branch_taken_0x14e448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e448) {
            ctx->pc = 0x14E470u;
            goto label_14e470;
        }
    }
    ctx->pc = 0x14E450u;
    // 0x14e450: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e454: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x14e454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e458: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e45c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e464: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x14e464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x14e468: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x14e468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e46c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x14e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_14e470:
    // 0x14e470: 0x3e00008  jr          $ra
    ctx->pc = 0x14E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E478u;
}
