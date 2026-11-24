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

// Function: sub_003D2070
// Address: 0x3d2070 - 0x3d2108
void sub_003D2070_0x3d2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2070_0x3d2070");
#endif

    ctx->pc = 0x3d2070u;

    // 0x3d2070: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x3d2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3d2074: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d2074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d2078: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d2078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d207c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3d207cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3d2080: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d2080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d2084: 0x1066001e  beq         $v1, $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D2084u;
    {
        const bool branch_taken_0x3d2084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3D2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2084u;
        // 0x3d2088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2084) {
            ctx->pc = 0x3D2100u;
            goto label_3d2100;
        }
    }
    ctx->pc = 0x3D208Cu;
    // 0x3d208c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D208Cu;
    {
        const bool branch_taken_0x3d208c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d208c) {
            ctx->pc = 0x3D20D0u;
            goto label_3d20d0;
        }
    }
    ctx->pc = 0x3D2094u;
    // 0x3d2094: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2094u;
    {
        const bool branch_taken_0x3d2094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2094) {
            ctx->pc = 0x3D20A8u;
            goto label_3d20a8;
        }
    }
    ctx->pc = 0x3D209Cu;
    // 0x3d209c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D209Cu;
    {
        const bool branch_taken_0x3d209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d209c) {
            ctx->pc = 0x3D2100u;
            goto label_3d2100;
        }
    }
    ctx->pc = 0x3D20A4u;
    // 0x3d20a4: 0x0  nop
    ctx->pc = 0x3d20a4u;
    // NOP
label_3d20a8:
    // 0x3d20a8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d20a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d20ac: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d20acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d20b0: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x3d20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x3d20b4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d20b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d20b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d20bc: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3d20bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d20c0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3d20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3d20c4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d20c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D20C8u;
    {
        const bool branch_taken_0x3d20c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20C8u;
        // 0x3d20cc: 0xa0850821  sb          $a1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d20c8) {
            ctx->pc = 0x3D2100u;
            goto label_3d2100;
        }
    }
    ctx->pc = 0x3D20D0u;
label_3d20d0:
    // 0x3d20d0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3d20d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3d20d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D20D4u;
    {
        const bool branch_taken_0x3d20d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d20d4) {
            ctx->pc = 0x3D2100u;
            goto label_3d2100;
        }
    }
    ctx->pc = 0x3D20DCu;
    // 0x3d20dc: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d20dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d20e0: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x3d20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x3d20e4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d20e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d20e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d20ec: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d20ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d20f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d20f4: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3d20f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d20f8: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d20fc: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x3d20fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
label_3d2100:
    // 0x3d2100: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2108u;
}
