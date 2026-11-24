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

// Function: sub_001FAD20
// Address: 0x1fad20 - 0x1fad74
void sub_001FAD20_0x1fad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD20_0x1fad20");
#endif

    switch (ctx->pc) {
        case 0x1fad48u: goto label_1fad48;
        default: break;
    }

    ctx->pc = 0x1fad20u;

    // 0x1fad20: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1fad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1fad24: 0x24423ee0  addiu       $v0, $v0, 0x3EE0
    ctx->pc = 0x1fad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16096));
    // 0x1fad28: 0x8c460040  lw          $a2, 0x40($v0)
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x873F20u));
    // 0x1fad2c: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAD2Cu;
    {
        const bool branch_taken_0x1fad2c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1FAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD2Cu;
        // 0x1fad30: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad2c) {
            ctx->pc = 0x1FAD6Cu;
            goto label_1fad6c;
        }
    }
    ctx->pc = 0x1FAD34u;
    // 0x1fad34: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fad38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fad3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fad40: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1fad40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1fad44: 0x0  nop
    ctx->pc = 0x1fad44u;
    // NOP
label_1fad48:
    // 0x1fad48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fad4c: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAD4Cu;
    {
        const bool branch_taken_0x1fad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD4Cu;
        // 0x1fad50: 0x24630640  addiu       $v1, $v1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad4c) {
            ctx->pc = 0x1FAD58u;
            goto label_1fad58;
        }
    }
    ctx->pc = 0x1FAD54u;
    // 0x1fad54: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fad54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1fad58:
    // 0x1fad58: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fad5c: 0x0  nop
    ctx->pc = 0x1fad5cu;
    // NOP
    // 0x1fad60: 0x0  nop
    ctx->pc = 0x1fad60u;
    // NOP
    // 0x1fad64: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FAD64u;
    {
        const bool branch_taken_0x1fad64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD64u;
        // 0x1fad68: 0x24840640  addiu       $a0, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad64) {
            ctx->pc = 0x1FAD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fad48;
        }
    }
    ctx->pc = 0x1FAD6Cu;
label_1fad6c:
    // 0x1fad6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD74u;
}
