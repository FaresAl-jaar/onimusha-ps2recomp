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

// Function: sub_003D50B0
// Address: 0x3d50b0 - 0x3d5108
void sub_003D50B0_0x3d50b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D50B0_0x3d50b0");
#endif

    ctx->pc = 0x3d50b0u;

    // 0x3d50b0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d50b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d50b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d50b8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3d50b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3d50bc: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d50c0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d50c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d50c4: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D50C4u;
    {
        const bool branch_taken_0x3d50c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d50c4) {
            ctx->pc = 0x3D5100u;
            goto label_3d5100;
        }
    }
    ctx->pc = 0x3D50CCu;
    // 0x3d50cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D50CCu;
    {
        const bool branch_taken_0x3d50cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d50cc) {
            ctx->pc = 0x3D50E0u;
            goto label_3d50e0;
        }
    }
    ctx->pc = 0x3D50D4u;
    // 0x3d50d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D50D4u;
    {
        const bool branch_taken_0x3d50d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d50d4) {
            ctx->pc = 0x3D5100u;
            goto label_3d5100;
        }
    }
    ctx->pc = 0x3D50DCu;
    // 0x3d50dc: 0x0  nop
    ctx->pc = 0x3d50dcu;
    // NOP
label_3d50e0:
    // 0x3d50e0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d50e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d50e4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d50e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d50e8: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x3d50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x3d50ec: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d50ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d50f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d50f4: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x3d50f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d50f8: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d50fc: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x3d50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_3d5100:
    // 0x3d5100: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5108u;
}
