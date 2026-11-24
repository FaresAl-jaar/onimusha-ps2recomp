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

// Function: sub_00363CD0
// Address: 0x363cd0 - 0x363d30
void sub_00363CD0_0x363cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363CD0_0x363cd0");
#endif

    switch (ctx->pc) {
        case 0x363ce0u: goto label_363ce0;
        default: break;
    }

    ctx->pc = 0x363cd0u;

    // 0x363cd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x363cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x363cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363cd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x363cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x363cdc: 0x2484a7c0  addiu       $a0, $a0, -0x5840
    ctx->pc = 0x363cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
label_363ce0:
    // 0x363ce0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x363ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363ce4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x363CE4u;
    {
        const bool branch_taken_0x363ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x363ce4) {
            ctx->pc = 0x363D10u;
            goto label_363d10;
        }
    }
    ctx->pc = 0x363CECu;
    // 0x363cec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x363cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x363cf0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x363cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x363cf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x363cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x363cf8: 0x2442a7c2  addiu       $v0, $v0, -0x583E
    ctx->pc = 0x363cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944706));
    // 0x363cfc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x363cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x363d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x363D04u;
    {
        const bool branch_taken_0x363d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D04u;
        // 0x363d08: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d04) {
            ctx->pc = 0x363D28u;
            goto label_363d28;
        }
    }
    ctx->pc = 0x363D0Cu;
    // 0x363d0c: 0x0  nop
    ctx->pc = 0x363d0cu;
    // NOP
label_363d10:
    // 0x363d10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x363d14: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x363d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x363d18: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x363D18u;
    {
        const bool branch_taken_0x363d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D18u;
        // 0x363d1c: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d18) {
            ctx->pc = 0x363CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363ce0;
        }
    }
    ctx->pc = 0x363D20u;
    // 0x363d20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d24: 0x0  nop
    ctx->pc = 0x363d24u;
    // NOP
label_363d28:
    // 0x363d28: 0x3e00008  jr          $ra
    ctx->pc = 0x363D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D30u;
}
