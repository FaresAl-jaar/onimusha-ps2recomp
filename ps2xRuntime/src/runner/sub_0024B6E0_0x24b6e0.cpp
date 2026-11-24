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

// Function: sub_0024B6E0
// Address: 0x24b6e0 - 0x24b720
void sub_0024B6E0_0x24b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B6E0_0x24b6e0");
#endif

    ctx->pc = 0x24b6e0u;

    // 0x24b6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b6e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B6E4u;
    {
        const bool branch_taken_0x24b6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6E4u;
        // 0x24b6e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6e4) {
            ctx->pc = 0x24B700u;
            goto label_24b700;
        }
    }
    ctx->pc = 0x24B6ECu;
    // 0x24b6ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b6f4: 0x2484d7f8  addiu       $a0, $a0, -0x2808
    ctx->pc = 0x24b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957048));
    // 0x24b6f8: 0x8093008  j           func_24C020
    ctx->pc = 0x24B6F8u;
    ctx->pc = 0x24B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6F8u;
    // 0x24b6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24B700u;
label_24b700:
    // 0x24b700: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x24b700u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x24b704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B704u;
    {
        const bool branch_taken_0x24b704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B704u;
        // 0x24b708: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b704) {
            ctx->pc = 0x24B718u;
            goto label_24b718;
        }
    }
    ctx->pc = 0x24B70Cu;
    // 0x24b70c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x24b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x24b710: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x24b710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x24b714: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x24b714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_24b718:
    // 0x24b718: 0x3e00008  jr          $ra
    ctx->pc = 0x24B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B718u;
        // 0x24b71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B720u;
}
