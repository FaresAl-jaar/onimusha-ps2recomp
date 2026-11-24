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

// Function: sub_00372070
// Address: 0x372070 - 0x3720ac
void sub_00372070_0x372070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372070_0x372070");
#endif

    ctx->pc = 0x372070u;

    // 0x372070: 0x9483008c  lhu         $v1, 0x8C($a0)
    ctx->pc = 0x372070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x372074: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x372074u;
    {
        const bool branch_taken_0x372074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x372074) {
            ctx->pc = 0x372098u;
            goto label_372098;
        }
    }
    ctx->pc = 0x37207Cu;
    // 0x37207c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x37207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x372080: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x372080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x372084: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x372084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x372088: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x372088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x37208c: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x37208cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x372090: 0xa0830088  sb          $v1, 0x88($a0)
    ctx->pc = 0x372090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x372094: 0x0  nop
    ctx->pc = 0x372094u;
    // NOP
label_372098:
    // 0x372098: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x372098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x37209c: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x37209cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x3720a0: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x3720a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x3720a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3720A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3720A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720A4u;
        // 0x3720a8: 0xa487008c  sh          $a3, 0x8C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3720A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3720ACu;
}
