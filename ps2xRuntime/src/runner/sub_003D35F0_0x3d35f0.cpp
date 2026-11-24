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

// Function: sub_003D35F0
// Address: 0x3d35f0 - 0x3d3630
void sub_003D35F0_0x3d35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D35F0_0x3d35f0");
#endif

    ctx->pc = 0x3d35f0u;

    // 0x3d35f0: 0x8f838cd8  lw          $v1, -0x7328($gp)
    ctx->pc = 0x3d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
    // 0x3d35f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D35F4u;
    {
        const bool branch_taken_0x3d35f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d35f4) {
            ctx->pc = 0x3D3610u;
            goto label_3d3610;
        }
    }
    ctx->pc = 0x3D35FCu;
    // 0x3d35fc: 0xac83057c  sw          $v1, 0x57C($a0)
    ctx->pc = 0x3d35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1404), GPR_U32(ctx, 3));
    // 0x3d3600: 0x8f838cd8  lw          $v1, -0x7328($gp)
    ctx->pc = 0x3d3600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
    // 0x3d3604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3604u;
    {
        const bool branch_taken_0x3d3604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3604u;
        // 0x3d3608: 0xac640580  sw          $a0, 0x580($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3604) {
            ctx->pc = 0x3D3618u;
            goto label_3d3618;
        }
    }
    ctx->pc = 0x3D360Cu;
    // 0x3d360c: 0x0  nop
    ctx->pc = 0x3d360cu;
    // NOP
label_3d3610:
    // 0x3d3610: 0xaf848cd4  sw          $a0, -0x732C($gp)
    ctx->pc = 0x3d3610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937812), GPR_U32(ctx, 4));
    // 0x3d3614: 0xac80057c  sw          $zero, 0x57C($a0)
    ctx->pc = 0x3d3614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1404), GPR_U32(ctx, 0));
label_3d3618:
    // 0x3d3618: 0xac800580  sw          $zero, 0x580($a0)
    ctx->pc = 0x3d3618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1408), GPR_U32(ctx, 0));
    // 0x3d361c: 0x8f838cdc  lw          $v1, -0x7324($gp)
    ctx->pc = 0x3d361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937820)));
    // 0x3d3620: 0xaf848cd8  sw          $a0, -0x7328($gp)
    ctx->pc = 0x3d3620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 4));
    // 0x3d3624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d3624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d3628: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3628u;
        // 0x3d362c: 0xaf838cdc  sw          $v1, -0x7324($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937820), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3630u;
}
