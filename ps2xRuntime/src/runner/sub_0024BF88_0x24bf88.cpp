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

// Function: sub_0024BF88
// Address: 0x24bf88 - 0x24bfb8
void sub_0024BF88_0x24bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF88_0x24bf88");
#endif

    ctx->pc = 0x24bf88u;

    // 0x24bf88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bf8c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BF8Cu;
    {
        const bool branch_taken_0x24bf8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF8Cu;
        // 0x24bf90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf8c) {
            ctx->pc = 0x24BFA8u;
            goto label_24bfa8;
        }
    }
    ctx->pc = 0x24BF94u;
    // 0x24bf94: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24bf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bf9c: 0x2484db20  addiu       $a0, $a0, -0x24E0
    ctx->pc = 0x24bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957856));
    // 0x24bfa0: 0x8093008  j           func_24C020
    ctx->pc = 0x24BFA0u;
    ctx->pc = 0x24BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BFA0u;
    // 0x24bfa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24BFA8u;
label_24bfa8:
    // 0x24bfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bfac: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x24bfacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x24bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x24BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFB0u;
        // 0x24bfb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BFB8u;
}
