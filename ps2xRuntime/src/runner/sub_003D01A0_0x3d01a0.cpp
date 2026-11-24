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

// Function: sub_003D01A0
// Address: 0x3d01a0 - 0x3d0210
void sub_003D01A0_0x3d01a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D01A0_0x3d01a0");
#endif

    ctx->pc = 0x3d01a0u;

    // 0x3d01a0: 0x8c850580  lw          $a1, 0x580($a0)
    ctx->pc = 0x3d01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d01a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D01A4u;
    {
        const bool branch_taken_0x3d01a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d01a4) {
            ctx->pc = 0x3D01B8u;
            goto label_3d01b8;
        }
    }
    ctx->pc = 0x3D01ACu;
    // 0x3d01ac: 0x8c830584  lw          $v1, 0x584($a0)
    ctx->pc = 0x3d01acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1412)));
    // 0x3d01b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D01B0u;
    {
        const bool branch_taken_0x3d01b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D01B0u;
        // 0x3d01b4: 0xaca30584  sw          $v1, 0x584($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d01b0) {
            ctx->pc = 0x3D01D0u;
            goto label_3d01d0;
        }
    }
    ctx->pc = 0x3D01B8u;
label_3d01b8:
    // 0x3d01b8: 0x8c830584  lw          $v1, 0x584($a0)
    ctx->pc = 0x3d01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1412)));
    // 0x3d01bc: 0xaf838cc8  sw          $v1, -0x7338($gp)
    ctx->pc = 0x3d01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937800), GPR_U32(ctx, 3));
    // 0x3d01c0: 0x8f838cc8  lw          $v1, -0x7338($gp)
    ctx->pc = 0x3d01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937800)));
    // 0x3d01c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D01C4u;
    {
        const bool branch_taken_0x3d01c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d01c4) {
            ctx->pc = 0x3D01D0u;
            goto label_3d01d0;
        }
    }
    ctx->pc = 0x3D01CCu;
    // 0x3d01cc: 0xac600580  sw          $zero, 0x580($v1)
    ctx->pc = 0x3d01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1408), GPR_U32(ctx, 0));
label_3d01d0:
    // 0x3d01d0: 0x8c850584  lw          $a1, 0x584($a0)
    ctx->pc = 0x3d01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1412)));
    // 0x3d01d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D01D4u;
    {
        const bool branch_taken_0x3d01d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d01d4) {
            ctx->pc = 0x3D01E8u;
            goto label_3d01e8;
        }
    }
    ctx->pc = 0x3D01DCu;
    // 0x3d01dc: 0x8c830580  lw          $v1, 0x580($a0)
    ctx->pc = 0x3d01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d01e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D01E0u;
    {
        const bool branch_taken_0x3d01e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D01E0u;
        // 0x3d01e4: 0xaca30580  sw          $v1, 0x580($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d01e0) {
            ctx->pc = 0x3D0200u;
            goto label_3d0200;
        }
    }
    ctx->pc = 0x3D01E8u;
label_3d01e8:
    // 0x3d01e8: 0x8c830580  lw          $v1, 0x580($a0)
    ctx->pc = 0x3d01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x3d01ec: 0xaf838ccc  sw          $v1, -0x7334($gp)
    ctx->pc = 0x3d01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 3));
    // 0x3d01f0: 0x8f838ccc  lw          $v1, -0x7334($gp)
    ctx->pc = 0x3d01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x3d01f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D01F4u;
    {
        const bool branch_taken_0x3d01f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d01f4) {
            ctx->pc = 0x3D0200u;
            goto label_3d0200;
        }
    }
    ctx->pc = 0x3D01FCu;
    // 0x3d01fc: 0xac600584  sw          $zero, 0x584($v1)
    ctx->pc = 0x3d01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1412), GPR_U32(ctx, 0));
label_3d0200:
    // 0x3d0200: 0x8f838cd0  lw          $v1, -0x7330($gp)
    ctx->pc = 0x3d0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x3d0204: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d0208: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0208u;
        // 0x3d020c: 0xaf838cd0  sw          $v1, -0x7330($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0210u;
}
