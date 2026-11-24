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

// Function: sub_003390E0
// Address: 0x3390e0 - 0x339110
void sub_003390E0_0x3390e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003390E0_0x3390e0");
#endif

    ctx->pc = 0x3390e0u;

    // 0x3390e0: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x3390e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3390e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3390e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3390e8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x3390e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3390ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3390ECu;
    {
        const bool branch_taken_0x3390ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3390ec) {
            ctx->pc = 0x339108u;
            goto label_339108;
        }
    }
    ctx->pc = 0x3390F4u;
    // 0x3390f4: 0xa4860010  sh          $a2, 0x10($a0)
    ctx->pc = 0x3390f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x3390f8: 0x2403fda8  addiu       $v1, $zero, -0x258
    ctx->pc = 0x3390f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966696));
    // 0x3390fc: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x3390fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x339100: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x339100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339104: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x339104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
label_339108:
    // 0x339108: 0x3e00008  jr          $ra
    ctx->pc = 0x339108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339110u;
}
