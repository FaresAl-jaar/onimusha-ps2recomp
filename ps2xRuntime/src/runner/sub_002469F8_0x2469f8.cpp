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

// Function: sub_002469F8
// Address: 0x2469f8 - 0x246a2c
void sub_002469F8_0x2469f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002469F8_0x2469f8");
#endif

    ctx->pc = 0x2469f8u;

    // 0x2469f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2469f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2469fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2469fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246a00: 0x8c43e9f4  lw          $v1, -0x160C($v0)
    ctx->pc = 0x246a00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE9F4u));
    // 0x246a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x246a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246a08: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246A08u;
    {
        const bool branch_taken_0x246a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x246A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A08u;
        // 0x246a0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a08) {
            ctx->pc = 0x246A20u;
            goto label_246a20;
        }
    }
    ctx->pc = 0x246A10u;
    // 0x246a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a14: 0x8094bc0  j           func_252F00
    ctx->pc = 0x246A14u;
    ctx->pc = 0x246A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A14u;
    // 0x246a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F00u;
    sub_00252F00_0x252f00(rdram, ctx, runtime); return;
    ctx->pc = 0x246A1Cu;
    // 0x246a1c: 0x0  nop
    ctx->pc = 0x246a1cu;
    // NOP
label_246a20:
    // 0x246a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246a24: 0x3e00008  jr          $ra
    ctx->pc = 0x246A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A24u;
        // 0x246a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246A2Cu;
}
