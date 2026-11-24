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

// Function: sub_002A3AF0
// Address: 0x2a3af0 - 0x2a3b28
void sub_002A3AF0_0x2a3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3AF0_0x2a3af0");
#endif

    ctx->pc = 0x2a3af0u;

    // 0x2a3af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a3af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a3af4: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x2a3af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a3af8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a3b00: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2a3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2a3b04: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2a3b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3b08: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2a3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2a3b0c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2a3b0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a3b10: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2a3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2a3b14: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2a3b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a3b18: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2a3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2a3b1c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2a3b1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2a3b20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B20u;
        // 0x2a3b24: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3B28u;
}
