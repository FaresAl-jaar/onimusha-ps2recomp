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

// Function: sub_0017BCF0
// Address: 0x17bcf0 - 0x17bd48
void sub_0017BCF0_0x17bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BCF0_0x17bcf0");
#endif

    switch (ctx->pc) {
        case 0x17bd08u: goto label_17bd08;
        default: break;
    }

    ctx->pc = 0x17bcf0u;

    // 0x17bcf0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17bcf4: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BCF4u;
    {
        const bool branch_taken_0x17bcf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcf4) {
            ctx->pc = 0x17BD38u;
            goto label_17bd38;
        }
    }
    ctx->pc = 0x17BCFCu;
    // 0x17bcfc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x17bcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17bd00: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17bd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17bd04: 0x0  nop
    ctx->pc = 0x17bd04u;
    // NOP
label_17bd08:
    // 0x17bd08: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x17bd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17bd0c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BD0Cu;
    {
        const bool branch_taken_0x17bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17bd0c) {
            ctx->pc = 0x17BD28u;
            goto label_17bd28;
        }
    }
    ctx->pc = 0x17BD14u;
    // 0x17bd14: 0x90e20009  lbu         $v0, 0x9($a3)
    ctx->pc = 0x17bd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x17bd18: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BD18u;
    {
        const bool branch_taken_0x17bd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bd18) {
            ctx->pc = 0x17BD28u;
            goto label_17bd28;
        }
    }
    ctx->pc = 0x17BD20u;
    // 0x17bd20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BD20u;
    {
        const bool branch_taken_0x17bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD20u;
        // 0x17bd24: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd20) {
            ctx->pc = 0x17BD40u;
            goto label_17bd40;
        }
    }
    ctx->pc = 0x17BD28u;
label_17bd28:
    // 0x17bd28: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x17bd28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bd2c: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17BD2Cu;
    {
        const bool branch_taken_0x17bd2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bd2c) {
            ctx->pc = 0x17BD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bd08;
        }
    }
    ctx->pc = 0x17BD34u;
    // 0x17bd34: 0x0  nop
    ctx->pc = 0x17bd34u;
    // NOP
label_17bd38:
    // 0x17bd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17bd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd3c: 0x0  nop
    ctx->pc = 0x17bd3cu;
    // NOP
label_17bd40:
    // 0x17bd40: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD48u;
}
