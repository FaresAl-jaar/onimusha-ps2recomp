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

// Function: sub_002A2480
// Address: 0x2a2480 - 0x2a24ac
void sub_002A2480_0x2a2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2480_0x2a2480");
#endif

    ctx->pc = 0x2a2480u;

    // 0x2a2480: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a2480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a2484: 0x8c840118  lw          $a0, 0x118($a0)
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2a2488: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2a2488u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2a248c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a2490: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x2a2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2a2494: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a2498: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a2498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a249c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a24a0: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x2a24a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a24a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A24A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24A4u;
        // 0x2a24a8: 0xfc640000  sd          $a0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A24A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A24ACu;
}
