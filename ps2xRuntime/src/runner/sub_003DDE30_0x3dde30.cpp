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

// Function: sub_003DDE30
// Address: 0x3dde30 - 0x3dde60
void sub_003DDE30_0x3dde30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDE30_0x3dde30");
#endif

    ctx->pc = 0x3dde30u;

    // 0x3dde30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3dde30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3dde34: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3dde34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dde38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3dde38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3dde3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dde40: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x3dde40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dde44: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3dde44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3dde48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3dde48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dde4c: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x3dde4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3dde50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3dde50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dde54: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3dde54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dde58: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE58u;
        // 0x3dde5c: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDE60u;
}
