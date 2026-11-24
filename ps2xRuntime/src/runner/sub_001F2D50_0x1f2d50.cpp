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

// Function: sub_001F2D50
// Address: 0x1f2d50 - 0x1f2e30
void sub_001F2D50_0x1f2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2D50_0x1f2d50");
#endif

    switch (ctx->pc) {
        case 0x1f2da8u: goto label_1f2da8;
        case 0x1f2dd8u: goto label_1f2dd8;
        default: break;
    }

    ctx->pc = 0x1f2d50u;

    // 0x1f2d50: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f2d54: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1f2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f2d58: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F2D58u;
    {
        const bool branch_taken_0x1f2d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2d58) {
            ctx->pc = 0x1F2E28u;
            goto label_1f2e28;
        }
    }
    ctx->pc = 0x1F2D60u;
    // 0x1f2d60: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f2d64: 0x3c0300ab  lui         $v1, 0xAB
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)171 << 16));
    // 0x1f2d68: 0x3463cdef  ori         $v1, $v1, 0xCDEF
    ctx->pc = 0x1f2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52719);
    // 0x1f2d6c: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2D6Cu;
    {
        const bool branch_taken_0x1f2d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f2d6c) {
            ctx->pc = 0x1F2D90u;
            goto label_1f2d90;
        }
    }
    ctx->pc = 0x1F2D74u;
    // 0x1f2d74: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x1f2d74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1f2d78: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x1f2d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2d7c: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1f2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2d80: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x1f2d80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2d84: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x1f2d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2d88: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1f2d8c: 0x0  nop
    ctx->pc = 0x1f2d8cu;
    // NOP
label_1f2d90:
    // 0x1f2d90: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1f2d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2d94: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f2d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2d98: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2D98u;
    {
        const bool branch_taken_0x1f2d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D98u;
        // 0x1f2d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d98) {
            ctx->pc = 0x1F2DC8u;
            goto label_1f2dc8;
        }
    }
    ctx->pc = 0x1F2DA0u;
    // 0x1f2da0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da4: 0x0  nop
    ctx->pc = 0x1f2da4u;
    // NOP
label_1f2da8:
    // 0x1f2da8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1f2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f2dac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2db0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f2db4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1f2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1f2db8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1f2db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2dbc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1f2dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2dc0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F2DC0u;
    {
        const bool branch_taken_0x1f2dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DC0u;
        // 0x1f2dc4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dc0) {
            ctx->pc = 0x1F2DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2da8;
        }
    }
    ctx->pc = 0x1F2DC8u;
label_1f2dc8:
    // 0x1f2dc8: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x1f2dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1f2dcc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f2dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2dd0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2DD0u;
    {
        const bool branch_taken_0x1f2dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DD0u;
        // 0x1f2dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dd0) {
            ctx->pc = 0x1F2E08u;
            goto label_1f2e08;
        }
    }
    ctx->pc = 0x1F2DD8u;
label_1f2dd8:
    // 0x1f2dd8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x1f2dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2ddc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f2de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f2de4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2de8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1f2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f2dec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f2df0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f2df4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1f2df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1f2df8: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x1f2df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1f2dfc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1f2dfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2e00: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F2E00u;
    {
        const bool branch_taken_0x1f2e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2e00) {
            ctx->pc = 0x1F2DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2dd8;
        }
    }
    ctx->pc = 0x1F2E08u;
label_1f2e08:
    // 0x1f2e08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f2e0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2E0Cu;
    {
        const bool branch_taken_0x1f2e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2e0c) {
            ctx->pc = 0x1F2E20u;
            goto label_1f2e20;
        }
    }
    ctx->pc = 0x1F2E14u;
    // 0x1f2e14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f2e18: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1f2e1c: 0x0  nop
    ctx->pc = 0x1f2e1cu;
    // NOP
label_1f2e20:
    // 0x1f2e20: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1f2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f2e24: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f2e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f2e28:
    // 0x1f2e28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2E30u;
}
