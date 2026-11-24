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

// Function: sub_00378DC0
// Address: 0x378dc0 - 0x378e78
void sub_00378DC0_0x378dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378DC0_0x378dc0");
#endif

    ctx->pc = 0x378dc0u;

    // 0x378dc0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x378dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x378dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x378dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378dc8: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x378DC8u;
    {
        const bool branch_taken_0x378dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x378dc8) {
            ctx->pc = 0x378E08u;
            goto label_378e08;
        }
    }
    ctx->pc = 0x378DD0u;
    // 0x378dd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378DD0u;
    {
        const bool branch_taken_0x378dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378dd0) {
            ctx->pc = 0x378DE0u;
            goto label_378de0;
        }
    }
    ctx->pc = 0x378DD8u;
    // 0x378dd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x378DD8u;
    {
        const bool branch_taken_0x378dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378dd8) {
            ctx->pc = 0x378E70u;
            goto label_378e70;
        }
    }
    ctx->pc = 0x378DE0u;
label_378de0:
    // 0x378de0: 0xa4852b86  sh          $a1, 0x2B86($a0)
    ctx->pc = 0x378de0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 5));
    // 0x378de4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x378de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378de8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378dec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x378decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378df0: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x378df0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378df4: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x378df4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x378df8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378dfc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x378dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x378e00: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x378e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x378e04: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x378e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
label_378e08:
    // 0x378e08: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x378e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x378e0c: 0x34633e00  ori         $v1, $v1, 0x3E00
    ctx->pc = 0x378e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x378e10: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x378e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x378e14: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x378e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x378e18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378E18u;
    {
        const bool branch_taken_0x378e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e18) {
            ctx->pc = 0x378E28u;
            goto label_378e28;
        }
    }
    ctx->pc = 0x378E20u;
    // 0x378e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x378e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x378e24: 0xa4832b86  sh          $v1, 0x2B86($a0)
    ctx->pc = 0x378e24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11142), (uint16_t)GPR_U32(ctx, 3));
label_378e28:
    // 0x378e28: 0x84832b86  lh          $v1, 0x2B86($a0)
    ctx->pc = 0x378e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11142)));
    // 0x378e2c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378E2Cu;
    {
        const bool branch_taken_0x378e2c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x378E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E2Cu;
        // 0x378e30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e2c) {
            ctx->pc = 0x378E40u;
            goto label_378e40;
        }
    }
    ctx->pc = 0x378E34u;
    // 0x378e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x378E34u;
    {
        const bool branch_taken_0x378e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E34u;
        // 0x378e38: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e34) {
            ctx->pc = 0x378E70u;
            goto label_378e70;
        }
    }
    ctx->pc = 0x378E3Cu;
    // 0x378e3c: 0x0  nop
    ctx->pc = 0x378e3cu;
    // NOP
label_378e40:
    // 0x378e40: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x378e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x378e44: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x378E44u;
    {
        const bool branch_taken_0x378e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e44) {
            ctx->pc = 0x378E70u;
            goto label_378e70;
        }
    }
    ctx->pc = 0x378E4Cu;
    // 0x378e4c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x378e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378e50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378e54: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x378e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378e58: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x378e58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378e5c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x378e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x378e60: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378e64: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x378e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x378e68: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x378e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x378e6c: 0x0  nop
    ctx->pc = 0x378e6cu;
    // NOP
label_378e70:
    // 0x378e70: 0x3e00008  jr          $ra
    ctx->pc = 0x378E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378E78u;
}
