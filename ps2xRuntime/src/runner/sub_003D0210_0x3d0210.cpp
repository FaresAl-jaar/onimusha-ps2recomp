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

// Function: sub_003D0210
// Address: 0x3d0210 - 0x3d0260
void sub_003D0210_0x3d0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0210_0x3d0210");
#endif

    switch (ctx->pc) {
        case 0x3d0238u: goto label_3d0238;
        default: break;
    }

    ctx->pc = 0x3d0210u;

    // 0x3d0210: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x3d0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x3d0214: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0214u;
    {
        const bool branch_taken_0x3d0214 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3D0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0214u;
        // 0x3d0218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0214) {
            ctx->pc = 0x3D0228u;
            goto label_3d0228;
        }
    }
    ctx->pc = 0x3D021Cu;
    // 0x3d021c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3D021Cu;
    {
        const bool branch_taken_0x3d021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d021c) {
            ctx->pc = 0x3D0258u;
            goto label_3d0258;
        }
    }
    ctx->pc = 0x3D0224u;
    // 0x3d0224: 0x0  nop
    ctx->pc = 0x3d0224u;
    // NOP
label_3d0228:
    // 0x3d0228: 0x8f838cc8  lw          $v1, -0x7338($gp)
    ctx->pc = 0x3d0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937800)));
    // 0x3d022c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D022Cu;
    {
        const bool branch_taken_0x3d022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D022Cu;
        // 0x3d0230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d022c) {
            ctx->pc = 0x3D0258u;
            goto label_3d0258;
        }
    }
    ctx->pc = 0x3D0234u;
    // 0x3d0234: 0x0  nop
    ctx->pc = 0x3d0234u;
    // NOP
label_3d0238:
    // 0x3d0238: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D0238u;
    {
        const bool branch_taken_0x3d0238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3D023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0238u;
        // 0x3d023c: 0x8c650584  lw          $a1, 0x584($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0238) {
            ctx->pc = 0x3D0250u;
            goto label_3d0250;
        }
    }
    ctx->pc = 0x3D0240u;
    // 0x3d0240: 0x9063055a  lbu         $v1, 0x55A($v1)
    ctx->pc = 0x3d0240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1370)));
    // 0x3d0244: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D0244u;
    {
        const bool branch_taken_0x3d0244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0244) {
            ctx->pc = 0x3D0250u;
            goto label_3d0250;
        }
    }
    ctx->pc = 0x3D024Cu;
    // 0x3d024c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3d0250:
    // 0x3d0250: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D0250u;
    {
        const bool branch_taken_0x3d0250 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0250u;
        // 0x3d0254: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0250) {
            ctx->pc = 0x3D0238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0238;
        }
    }
    ctx->pc = 0x3D0258u;
label_3d0258:
    // 0x3d0258: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0260u;
}
