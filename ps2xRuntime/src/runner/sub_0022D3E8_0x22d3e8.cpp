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

// Function: sub_0022D3E8
// Address: 0x22d3e8 - 0x22d440
void sub_0022D3E8_0x22d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D3E8_0x22d3e8");
#endif

    ctx->pc = 0x22d3e8u;

    // 0x22d3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d3ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d3f4: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x22d3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22d3f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D3F8u;
    {
        const bool branch_taken_0x22d3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3F8u;
        // 0x22d3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3f8) {
            ctx->pc = 0x22D410u;
            goto label_22d410;
        }
    }
    ctx->pc = 0x22D400u;
    // 0x22d400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d404: 0x808b478  j           func_22D1E0
    ctx->pc = 0x22D404u;
    ctx->pc = 0x22D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D404u;
    // 0x22d408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1E0u;
    sub_0022D1E0_0x22d1e0(rdram, ctx, runtime); return;
    ctx->pc = 0x22D40Cu;
    // 0x22d40c: 0x0  nop
    ctx->pc = 0x22d40cu;
    // NOP
label_22d410:
    // 0x22d410: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D410u;
    {
        const bool branch_taken_0x22d410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D410u;
        // 0x22d414: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d410) {
            ctx->pc = 0x22D420u;
            goto label_22d420;
        }
    }
    ctx->pc = 0x22D418u;
    // 0x22d418: 0x808b412  j           func_22D048
    ctx->pc = 0x22D418u;
    ctx->pc = 0x22D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D418u;
    // 0x22d41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D048u;
    sub_0022D048_0x22d048(rdram, ctx, runtime); return;
    ctx->pc = 0x22D420u;
label_22d420:
    // 0x22d420: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D420u;
    {
        const bool branch_taken_0x22d420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d420) {
            ctx->pc = 0x22D438u;
            goto label_22d438;
        }
    }
    ctx->pc = 0x22D428u;
    // 0x22d428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d42c: 0x808b3b4  j           func_22CED0
    ctx->pc = 0x22D42Cu;
    ctx->pc = 0x22D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D42Cu;
    // 0x22d430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CED0u;
    sub_0022CED0_0x22ced0(rdram, ctx, runtime); return;
    ctx->pc = 0x22D434u;
    // 0x22d434: 0x0  nop
    ctx->pc = 0x22d434u;
    // NOP
label_22d438:
    // 0x22d438: 0x3e00008  jr          $ra
    ctx->pc = 0x22D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D438u;
        // 0x22d43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D440u;
}
