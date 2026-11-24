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

// Function: sub_003D3630
// Address: 0x3d3630 - 0x3d36a0
void sub_003D3630_0x3d3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3630_0x3d3630");
#endif

    ctx->pc = 0x3d3630u;

    // 0x3d3630: 0x8c85057c  lw          $a1, 0x57C($a0)
    ctx->pc = 0x3d3630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3d3634: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3634u;
    {
        const bool branch_taken_0x3d3634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3634) {
            ctx->pc = 0x3D3648u;
            goto label_3d3648;
        }
    }
    ctx->pc = 0x3D363Cu;
    // 0x3d363c: 0x8c830580  lw          $v1, 0x580($a0)
    ctx->pc = 0x3d363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d3640: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3640u;
    {
        const bool branch_taken_0x3d3640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3640u;
        // 0x3d3644: 0xaca30580  sw          $v1, 0x580($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3640) {
            ctx->pc = 0x3D3660u;
            goto label_3d3660;
        }
    }
    ctx->pc = 0x3D3648u;
label_3d3648:
    // 0x3d3648: 0x8c830580  lw          $v1, 0x580($a0)
    ctx->pc = 0x3d3648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d364c: 0xaf838cd4  sw          $v1, -0x732C($gp)
    ctx->pc = 0x3d364cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937812), GPR_U32(ctx, 3));
    // 0x3d3650: 0x8f838cd4  lw          $v1, -0x732C($gp)
    ctx->pc = 0x3d3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
    // 0x3d3654: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3654u;
    {
        const bool branch_taken_0x3d3654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3654) {
            ctx->pc = 0x3D3660u;
            goto label_3d3660;
        }
    }
    ctx->pc = 0x3D365Cu;
    // 0x3d365c: 0xac60057c  sw          $zero, 0x57C($v1)
    ctx->pc = 0x3d365cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1404), GPR_U32(ctx, 0));
label_3d3660:
    // 0x3d3660: 0x8c850580  lw          $a1, 0x580($a0)
    ctx->pc = 0x3d3660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d3664: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3664u;
    {
        const bool branch_taken_0x3d3664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3664) {
            ctx->pc = 0x3D3678u;
            goto label_3d3678;
        }
    }
    ctx->pc = 0x3D366Cu;
    // 0x3d366c: 0x8c83057c  lw          $v1, 0x57C($a0)
    ctx->pc = 0x3d366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3d3670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3670u;
    {
        const bool branch_taken_0x3d3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3670u;
        // 0x3d3674: 0xaca3057c  sw          $v1, 0x57C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3670) {
            ctx->pc = 0x3D3690u;
            goto label_3d3690;
        }
    }
    ctx->pc = 0x3D3678u;
label_3d3678:
    // 0x3d3678: 0x8c83057c  lw          $v1, 0x57C($a0)
    ctx->pc = 0x3d3678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3d367c: 0xaf838cd8  sw          $v1, -0x7328($gp)
    ctx->pc = 0x3d367cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 3));
    // 0x3d3680: 0x8f838cd8  lw          $v1, -0x7328($gp)
    ctx->pc = 0x3d3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
    // 0x3d3684: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D3684u;
    {
        const bool branch_taken_0x3d3684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3684) {
            ctx->pc = 0x3D3690u;
            goto label_3d3690;
        }
    }
    ctx->pc = 0x3D368Cu;
    // 0x3d368c: 0xac600580  sw          $zero, 0x580($v1)
    ctx->pc = 0x3d368cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1408), GPR_U32(ctx, 0));
label_3d3690:
    // 0x3d3690: 0x8f838cdc  lw          $v1, -0x7324($gp)
    ctx->pc = 0x3d3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937820)));
    // 0x3d3694: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d3694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d3698: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3698u;
        // 0x3d369c: 0xaf838cdc  sw          $v1, -0x7324($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937820), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D36A0u;
}
