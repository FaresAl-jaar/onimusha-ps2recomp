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

// Function: sub_003EC9B0
// Address: 0x3ec9b0 - 0x3eca40
void sub_003EC9B0_0x3ec9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC9B0_0x3ec9b0");
#endif

    ctx->pc = 0x3ec9b0u;

    // 0x3ec9b0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ec9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ec9b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ec9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ec9b8: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EC9B8u;
    {
        const bool branch_taken_0x3ec9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ec9b8) {
            ctx->pc = 0x3EC9F0u;
            goto label_3ec9f0;
        }
    }
    ctx->pc = 0x3EC9C0u;
    // 0x3ec9c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC9C0u;
    {
        const bool branch_taken_0x3ec9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec9c0) {
            ctx->pc = 0x3EC9D0u;
            goto label_3ec9d0;
        }
    }
    ctx->pc = 0x3EC9C8u;
    // 0x3ec9c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3EC9C8u;
    {
        const bool branch_taken_0x3ec9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec9c8) {
            ctx->pc = 0x3ECA38u;
            goto label_3eca38;
        }
    }
    ctx->pc = 0x3EC9D0u;
label_3ec9d0:
    // 0x3ec9d0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3ec9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec9d4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3ec9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec9d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3ec9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ec9dc: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3ec9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ec9e0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ec9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ec9e4: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x3ec9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ec9e8: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3ec9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3ec9ec: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x3ec9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_3ec9f0:
    // 0x3ec9f0: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3ec9f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ec9f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC9F4u;
    {
        const bool branch_taken_0x3ec9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec9f4) {
            ctx->pc = 0x3ECA08u;
            goto label_3eca08;
        }
    }
    ctx->pc = 0x3EC9FCu;
    // 0x3ec9fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eca00: 0xa4832b24  sh          $v1, 0x2B24($a0)
    ctx->pc = 0x3eca00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eca04: 0x0  nop
    ctx->pc = 0x3eca04u;
    // NOP
label_3eca08:
    // 0x3eca08: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3eca08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3eca0c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECA0Cu;
    {
        const bool branch_taken_0x3eca0c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA0Cu;
        // 0x3eca10: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca0c) {
            ctx->pc = 0x3ECA20u;
            goto label_3eca20;
        }
    }
    ctx->pc = 0x3ECA14u;
    // 0x3eca14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECA14u;
    {
        const bool branch_taken_0x3eca14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA14u;
        // 0x3eca18: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca14) {
            ctx->pc = 0x3ECA38u;
            goto label_3eca38;
        }
    }
    ctx->pc = 0x3ECA1Cu;
    // 0x3eca1c: 0x0  nop
    ctx->pc = 0x3eca1cu;
    // NOP
label_3eca20:
    // 0x3eca20: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3eca20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3eca24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECA24u;
    {
        const bool branch_taken_0x3eca24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA24u;
        // 0x3eca28: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca24) {
            ctx->pc = 0x3ECA38u;
            goto label_3eca38;
        }
    }
    ctx->pc = 0x3ECA2Cu;
    // 0x3eca2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ECA2Cu;
    {
        const bool branch_taken_0x3eca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA2Cu;
        // 0x3eca30: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca2c) {
            ctx->pc = 0x3ECA38u;
            goto label_3eca38;
        }
    }
    ctx->pc = 0x3ECA34u;
    // 0x3eca34: 0x0  nop
    ctx->pc = 0x3eca34u;
    // NOP
label_3eca38:
    // 0x3eca38: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECA40u;
}
