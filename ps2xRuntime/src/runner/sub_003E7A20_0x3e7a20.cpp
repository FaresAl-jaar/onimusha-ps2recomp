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

// Function: sub_003E7A20
// Address: 0x3e7a20 - 0x3e7a54
void sub_003E7A20_0x3e7a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7A20_0x3e7a20");
#endif

    switch (ctx->pc) {
        case 0x3e7a30u: goto label_3e7a30;
        default: break;
    }

    ctx->pc = 0x3e7a20u;

    // 0x3e7a20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e7a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e7a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7a28: 0x2484e800  addiu       $a0, $a0, -0x1800
    ctx->pc = 0x3e7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961152));
    // 0x3e7a2c: 0x0  nop
    ctx->pc = 0x3e7a2cu;
    // NOP
label_3e7a30:
    // 0x3e7a30: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x3e7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x3e7a34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e7a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3e7a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e7a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e7a3c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e7a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7a40: 0x2cc3000c  sltiu       $v1, $a2, 0xC
    ctx->pc = 0x3e7a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3e7a44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E7A44u;
    {
        const bool branch_taken_0x3e7a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A44u;
        // 0x3e7a48: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a44) {
            ctx->pc = 0x3E7A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7a30;
        }
    }
    ctx->pc = 0x3E7A4Cu;
    // 0x3e7a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7A54u;
}
