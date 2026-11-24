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

// Function: sub_00233048
// Address: 0x233048 - 0x233088
void sub_00233048_0x233048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233048_0x233048");
#endif

    ctx->pc = 0x233048u;

    // 0x233048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23304c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23304Cu;
    {
        const bool branch_taken_0x23304c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23304Cu;
        // 0x233050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23304c) {
            ctx->pc = 0x233068u;
            goto label_233068;
        }
    }
    ctx->pc = 0x233054u;
    // 0x233054: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x233054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x233058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23305c: 0x2484ad48  addiu       $a0, $a0, -0x52B8
    ctx->pc = 0x23305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946120));
    // 0x233060: 0x808baa4  j           func_22EA90
    ctx->pc = 0x233060u;
    ctx->pc = 0x233064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233060u;
    // 0x233064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x233068u;
label_233068:
    // 0x233068: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x23306c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23306Cu;
    {
        const bool branch_taken_0x23306c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23306Cu;
        // 0x233070: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23306c) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x233074u;
    // 0x233074: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x233074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x233078: 0x8092dac  j           func_24B6B0
    ctx->pc = 0x233078u;
    ctx->pc = 0x23307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233078u;
    // 0x23307c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6B0u;
    sub_0024B6B0_0x24b6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x233080u;
label_233080:
    // 0x233080: 0x3e00008  jr          $ra
    ctx->pc = 0x233080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233080u;
        // 0x233084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233088u;
}
