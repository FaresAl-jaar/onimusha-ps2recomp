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

// Function: sub_003D66B0
// Address: 0x3d66b0 - 0x3d6760
void sub_003D66B0_0x3d66b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D66B0_0x3d66b0");
#endif

    ctx->pc = 0x3d66b0u;

    // 0x3d66b0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d66b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d66b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d66b8: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3D66B8u;
    {
        const bool branch_taken_0x3d66b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d66b8) {
            ctx->pc = 0x3D66F8u;
            goto label_3d66f8;
        }
    }
    ctx->pc = 0x3D66C0u;
    // 0x3d66c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D66C0u;
    {
        const bool branch_taken_0x3d66c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d66c0) {
            ctx->pc = 0x3D66D0u;
            goto label_3d66d0;
        }
    }
    ctx->pc = 0x3D66C8u;
    // 0x3d66c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3D66C8u;
    {
        const bool branch_taken_0x3d66c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d66c8) {
            ctx->pc = 0x3D6758u;
            goto label_3d6758;
        }
    }
    ctx->pc = 0x3D66D0u;
label_3d66d0:
    // 0x3d66d0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d66d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d66d4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d66d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d66d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d66dc: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d66dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d66e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d66e4: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3d66e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d66e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d66ec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d66ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d66f0: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d66f4: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x3d66f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_3d66f8:
    // 0x3d66f8: 0x84832b26  lh          $v1, 0x2B26($a0)
    ctx->pc = 0x3d66f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11046)));
    // 0x3d66fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D66FCu;
    {
        const bool branch_taken_0x3d66fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d66fc) {
            ctx->pc = 0x3D6710u;
            goto label_3d6710;
        }
    }
    ctx->pc = 0x3D6704u;
    // 0x3d6704: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6708: 0xa4832b26  sh          $v1, 0x2B26($a0)
    ctx->pc = 0x3d6708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11046), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d670c: 0x0  nop
    ctx->pc = 0x3d670cu;
    // NOP
label_3d6710:
    // 0x3d6710: 0x84832b26  lh          $v1, 0x2B26($a0)
    ctx->pc = 0x3d6710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11046)));
    // 0x3d6714: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6714u;
    {
        const bool branch_taken_0x3d6714 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3D6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6714u;
        // 0x3d6718: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6714) {
            ctx->pc = 0x3D6728u;
            goto label_3d6728;
        }
    }
    ctx->pc = 0x3D671Cu;
    // 0x3d671c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3D671Cu;
    {
        const bool branch_taken_0x3d671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D671Cu;
        // 0x3d6720: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d671c) {
            ctx->pc = 0x3D6758u;
            goto label_3d6758;
        }
    }
    ctx->pc = 0x3D6724u;
    // 0x3d6724: 0x0  nop
    ctx->pc = 0x3d6724u;
    // NOP
label_3d6728:
    // 0x3d6728: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3d6728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3d672c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D672Cu;
    {
        const bool branch_taken_0x3d672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d672c) {
            ctx->pc = 0x3D6758u;
            goto label_3d6758;
        }
    }
    ctx->pc = 0x3D6734u;
    // 0x3d6734: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d6734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6738: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3d6738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d673c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d673cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6740: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d6740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6744: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d6744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6748: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d674c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3d674cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d6750: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6754: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d6754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
label_3d6758:
    // 0x3d6758: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6760u;
}
