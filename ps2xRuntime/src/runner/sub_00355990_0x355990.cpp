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

// Function: sub_00355990
// Address: 0x355990 - 0x3559d0
void sub_00355990_0x355990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355990_0x355990");
#endif

    switch (ctx->pc) {
        case 0x3559a0u: goto label_3559a0;
        default: break;
    }

    ctx->pc = 0x355990u;

    // 0x355990: 0x8f828bac  lw          $v0, -0x7454($gp)
    ctx->pc = 0x355990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x355994: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x355994u;
    {
        const bool branch_taken_0x355994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355994) {
            ctx->pc = 0x3559C0u;
            goto label_3559c0;
        }
    }
    ctx->pc = 0x35599Cu;
    // 0x35599c: 0x0  nop
    ctx->pc = 0x35599cu;
    // NOP
label_3559a0:
    // 0x3559a0: 0x8c4305b8  lw          $v1, 0x5B8($v0)
    ctx->pc = 0x3559a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1464)));
    // 0x3559a4: 0x904205bc  lbu         $v0, 0x5BC($v0)
    ctx->pc = 0x3559a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1468)));
    // 0x3559a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3559A8u;
    {
        const bool branch_taken_0x3559a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559a8) {
            ctx->pc = 0x3559B8u;
            goto label_3559b8;
        }
    }
    ctx->pc = 0x3559B0u;
    // 0x3559b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3559B0u;
    {
        const bool branch_taken_0x3559b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3559B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559B0u;
        // 0x3559b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559b0) {
            ctx->pc = 0x3559C8u;
            goto label_3559c8;
        }
    }
    ctx->pc = 0x3559B8u;
label_3559b8:
    // 0x3559b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3559B8u;
    {
        const bool branch_taken_0x3559b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3559BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559B8u;
        // 0x3559bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559b8) {
            ctx->pc = 0x3559A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3559a0;
        }
    }
    ctx->pc = 0x3559C0u;
label_3559c0:
    // 0x3559c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3559c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3559c4: 0x0  nop
    ctx->pc = 0x3559c4u;
    // NOP
label_3559c8:
    // 0x3559c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3559C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3559C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3559D0u;
}
