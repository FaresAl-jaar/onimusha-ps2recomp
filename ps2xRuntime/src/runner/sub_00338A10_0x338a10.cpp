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

// Function: sub_00338A10
// Address: 0x338a10 - 0x338a68
void sub_00338A10_0x338a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338A10_0x338a10");
#endif

    switch (ctx->pc) {
        case 0x338a38u: goto label_338a38;
        default: break;
    }

    ctx->pc = 0x338a10u;

    // 0x338a10: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x338a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x338a14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x338a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x338a18: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338A18u;
    {
        const bool branch_taken_0x338a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x338A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A18u;
        // 0x338a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338a18) {
            ctx->pc = 0x338A30u;
            goto label_338a30;
        }
    }
    ctx->pc = 0x338A20u;
    // 0x338a20: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x338a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x338a24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x338a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338a28: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x338a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x338a2c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x338a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338a30:
    // 0x338a30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x338a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x338a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338a38:
    // 0x338a38: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x338a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x338a3c: 0x90630ee6  lbu         $v1, 0xEE6($v1)
    ctx->pc = 0x338a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3814)));
    // 0x338a40: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x338a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x338a44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x338A44u;
    {
        const bool branch_taken_0x338a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a44) {
            ctx->pc = 0x338A50u;
            goto label_338a50;
        }
    }
    ctx->pc = 0x338A4Cu;
    // 0x338a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_338a50:
    // 0x338a50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x338a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x338a54: 0x28c30035  slti        $v1, $a2, 0x35
    ctx->pc = 0x338a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x338a58: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x338A58u;
    {
        const bool branch_taken_0x338a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a58) {
            ctx->pc = 0x338A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338a38;
        }
    }
    ctx->pc = 0x338A60u;
    // 0x338a60: 0x3e00008  jr          $ra
    ctx->pc = 0x338A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A68u;
}
