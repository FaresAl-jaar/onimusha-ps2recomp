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

// Function: sub_00219F30
// Address: 0x219f30 - 0x219f78
void sub_00219F30_0x219f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219F30_0x219f30");
#endif

    switch (ctx->pc) {
        case 0x219f48u: goto label_219f48;
        default: break;
    }

    ctx->pc = 0x219f30u;

    // 0x219f30: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x219f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x219f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f38: 0x8c460178  lw          $a2, 0x178($v0)
    ctx->pc = 0x219f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x219f3c: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x219F3Cu;
    {
        const bool branch_taken_0x219f3c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x219F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F3Cu;
        // 0x219f40: 0x24430180  addiu       $v1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f3c) {
            ctx->pc = 0x219F6Cu;
            goto label_219f6c;
        }
    }
    ctx->pc = 0x219F44u;
    // 0x219f44: 0x248416b0  addiu       $a0, $a0, 0x16B0
    ctx->pc = 0x219f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5808));
label_219f48:
    // 0x219f48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x219f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f4c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x219F4Cu;
    {
        const bool branch_taken_0x219f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x219F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F4Cu;
        // 0x219f50: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f4c) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F54u;
    // 0x219f54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x219f58: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x219f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x219f5c: 0x0  nop
    ctx->pc = 0x219f5cu;
    // NOP
    // 0x219f60: 0x0  nop
    ctx->pc = 0x219f60u;
    // NOP
    // 0x219f64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x219F64u;
    {
        const bool branch_taken_0x219f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F64u;
        // 0x219f68: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f64) {
            ctx->pc = 0x219F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219f48;
        }
    }
    ctx->pc = 0x219F6Cu;
label_219f6c:
    // 0x219f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219f70:
    // 0x219f70: 0x3e00008  jr          $ra
    ctx->pc = 0x219F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F78u;
}
