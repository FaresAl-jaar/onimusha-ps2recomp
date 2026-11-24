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

// Function: sub_0014E290
// Address: 0x14e290 - 0x14e2cc
void sub_0014E290_0x14e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E290_0x14e290");
#endif

    ctx->pc = 0x14e290u;

    // 0x14e290: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e294: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e298: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e29c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e2a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e2a4: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x14e2a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14e2a8: 0x24690060  addiu       $t1, $v1, 0x60
    ctx->pc = 0x14e2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x14e2ac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e2b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e2b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e2b8: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x14e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
    // 0x14e2bc: 0x8ca400ec  lw          $a0, 0xEC($a1)
    ctx->pc = 0x14e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e2c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2C4u;
        // 0x14e2c8: 0xa4680002  sh          $t0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E2CCu;
}
