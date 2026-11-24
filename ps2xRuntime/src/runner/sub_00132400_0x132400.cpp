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

// Function: sub_00132400
// Address: 0x132400 - 0x13243c
void sub_00132400_0x132400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132400_0x132400");
#endif

    ctx->pc = 0x132400u;

    // 0x132400: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x132400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x132404: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x132408: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x13240c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x132410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132414: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x132414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x132418: 0x27840000  addiu       $a0, $gp, 0x0
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x13241c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x132420: 0xace60018  sw          $a2, 0x18($a3)
    ctx->pc = 0x132420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 6));
    // 0x132424: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x132424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x132428: 0xace6001c  sw          $a2, 0x1C($a3)
    ctx->pc = 0x132428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
    // 0x13242c: 0xace50024  sw          $a1, 0x24($a3)
    ctx->pc = 0x13242cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 5));
    // 0x132430: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x132430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x132434: 0x3e00008  jr          $ra
    ctx->pc = 0x132434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132434u;
        // 0x132438: 0xa0e30004  sb          $v1, 0x4($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13243Cu;
}
