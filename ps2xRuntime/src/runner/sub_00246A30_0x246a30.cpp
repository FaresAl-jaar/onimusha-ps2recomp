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

// Function: sub_00246A30
// Address: 0x246a30 - 0x246a64
void sub_00246A30_0x246a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A30_0x246a30");
#endif

    ctx->pc = 0x246a30u;

    // 0x246a30: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246a34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246a38: 0x8c43e9f4  lw          $v1, -0x160C($v0)
    ctx->pc = 0x246a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE9F4u));
    // 0x246a3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x246a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246a40: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246A40u;
    {
        const bool branch_taken_0x246a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A40u;
        // 0x246a44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a40) {
            ctx->pc = 0x246A58u;
            goto label_246a58;
        }
    }
    ctx->pc = 0x246A48u;
    // 0x246a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a4c: 0x8094bde  j           func_252F78
    ctx->pc = 0x246A4Cu;
    ctx->pc = 0x246A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A4Cu;
    // 0x246a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F78u;
    sub_00252F78_0x252f78(rdram, ctx, runtime); return;
    ctx->pc = 0x246A54u;
    // 0x246a54: 0x0  nop
    ctx->pc = 0x246a54u;
    // NOP
label_246a58:
    // 0x246a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x246A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A5Cu;
        // 0x246a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A64u;
}
