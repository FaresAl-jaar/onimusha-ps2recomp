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

// Function: sub_003D0160
// Address: 0x3d0160 - 0x3d01a0
void sub_003D0160_0x3d0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0160_0x3d0160");
#endif

    ctx->pc = 0x3d0160u;

    // 0x3d0160: 0x8f838ccc  lw          $v1, -0x7334($gp)
    ctx->pc = 0x3d0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x3d0164: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D0164u;
    {
        const bool branch_taken_0x3d0164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0164) {
            ctx->pc = 0x3D0180u;
            goto label_3d0180;
        }
    }
    ctx->pc = 0x3D016Cu;
    // 0x3d016c: 0xac830580  sw          $v1, 0x580($a0)
    ctx->pc = 0x3d016cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1408), GPR_U32(ctx, 3));
    // 0x3d0170: 0x8f838ccc  lw          $v1, -0x7334($gp)
    ctx->pc = 0x3d0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x3d0174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0174u;
    {
        const bool branch_taken_0x3d0174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0174u;
        // 0x3d0178: 0xac640584  sw          $a0, 0x584($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0174) {
            ctx->pc = 0x3D0188u;
            goto label_3d0188;
        }
    }
    ctx->pc = 0x3D017Cu;
    // 0x3d017c: 0x0  nop
    ctx->pc = 0x3d017cu;
    // NOP
label_3d0180:
    // 0x3d0180: 0xaf848cc8  sw          $a0, -0x7338($gp)
    ctx->pc = 0x3d0180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937800), GPR_U32(ctx, 4));
    // 0x3d0184: 0xac800580  sw          $zero, 0x580($a0)
    ctx->pc = 0x3d0184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1408), GPR_U32(ctx, 0));
label_3d0188:
    // 0x3d0188: 0xac800584  sw          $zero, 0x584($a0)
    ctx->pc = 0x3d0188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1412), GPR_U32(ctx, 0));
    // 0x3d018c: 0x8f838cd0  lw          $v1, -0x7330($gp)
    ctx->pc = 0x3d018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x3d0190: 0xaf848ccc  sw          $a0, -0x7334($gp)
    ctx->pc = 0x3d0190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 4));
    // 0x3d0194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d0194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d0198: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0198u;
        // 0x3d019c: 0xaf838cd0  sw          $v1, -0x7330($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D01A0u;
}
