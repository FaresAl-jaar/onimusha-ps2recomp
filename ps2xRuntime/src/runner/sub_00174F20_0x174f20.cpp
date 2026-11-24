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

// Function: sub_00174F20
// Address: 0x174f20 - 0x174f70
void sub_00174F20_0x174f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174F20_0x174f20");
#endif

    switch (ctx->pc) {
        case 0x174f38u: goto label_174f38;
        default: break;
    }

    ctx->pc = 0x174f20u;

    // 0x174f20: 0x28c10041  slti        $at, $a2, 0x41
    ctx->pc = 0x174f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x174f24: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x174F24u;
    {
        const bool branch_taken_0x174f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F24u;
        // 0x174f28: 0xa6082a  slt         $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f24) {
            ctx->pc = 0x174F68u;
            goto label_174f68;
        }
    }
    ctx->pc = 0x174F2Cu;
    // 0x174f2c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x174F2Cu;
    {
        const bool branch_taken_0x174f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F2Cu;
        // 0x174f30: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f2c) {
            ctx->pc = 0x174F58u;
            goto label_174f58;
        }
    }
    ctx->pc = 0x174F34u;
    // 0x174f34: 0x0  nop
    ctx->pc = 0x174f34u;
    // NOP
label_174f38:
    // 0x174f38: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x174f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x174f3c: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x174f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x174f40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x174f44: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x174f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x174f48: 0x0  nop
    ctx->pc = 0x174f48u;
    // NOP
    // 0x174f4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174F4Cu;
    {
        const bool branch_taken_0x174f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174f4c) {
            ctx->pc = 0x174F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174f38;
        }
    }
    ctx->pc = 0x174F54u;
    // 0x174f54: 0x0  nop
    ctx->pc = 0x174f54u;
    // NOP
label_174f58:
    // 0x174f58: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x174f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x174f5c: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x174f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x174f60: 0xa0830041  sb          $v1, 0x41($a0)
    ctx->pc = 0x174f60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x174f64: 0x0  nop
    ctx->pc = 0x174f64u;
    // NOP
label_174f68:
    // 0x174f68: 0x3e00008  jr          $ra
    ctx->pc = 0x174F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F70u;
}
