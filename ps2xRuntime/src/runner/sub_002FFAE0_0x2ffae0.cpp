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

// Function: sub_002FFAE0
// Address: 0x2ffae0 - 0x2ffb28
void sub_002FFAE0_0x2ffae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFAE0_0x2ffae0");
#endif

    ctx->pc = 0x2ffae0u;

    // 0x2ffae0: 0x8486009a  lh          $a2, 0x9A($a0)
    ctx->pc = 0x2ffae0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x2ffae4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ffae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ffae8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ffae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ffaec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ffaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ffaf0: 0xa4860088  sh          $a2, 0x88($a0)
    ctx->pc = 0x2ffaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ffaf4: 0xa480008a  sh          $zero, 0x8A($a0)
    ctx->pc = 0x2ffaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ffaf8: 0x8486009a  lh          $a2, 0x9A($a0)
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x2ffafc: 0xa486008c  sh          $a2, 0x8C($a0)
    ctx->pc = 0x2ffafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ffb00: 0x84860088  lh          $a2, 0x88($a0)
    ctx->pc = 0x2ffb00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2ffb04: 0xa486008e  sh          $a2, 0x8E($a0)
    ctx->pc = 0x2ffb04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 142), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ffb08: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x2ffb08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ffb0c: 0xa4800092  sh          $zero, 0x92($a0)
    ctx->pc = 0x2ffb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ffb10: 0xa4830094  sh          $v1, 0x94($a0)
    ctx->pc = 0x2ffb10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ffb14: 0x84830090  lh          $v1, 0x90($a0)
    ctx->pc = 0x2ffb14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2ffb18: 0xa4830096  sh          $v1, 0x96($a0)
    ctx->pc = 0x2ffb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ffb1c: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x2ffb1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ffb20: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB20u;
        // 0x2ffb24: 0x7c830070  sq          $v1, 0x70($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFB28u;
}
