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

// Function: sub_003823E0
// Address: 0x3823e0 - 0x382438
void sub_003823E0_0x3823e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823E0_0x3823e0");
#endif

    switch (ctx->pc) {
        case 0x3823f0u: goto label_3823f0;
        default: break;
    }

    ctx->pc = 0x3823e0u;

    // 0x3823e0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3823e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3823e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3823e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3823e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3823e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3823ec: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x3823ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_3823f0:
    // 0x3823f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3823f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3823f4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3823F4u;
    {
        const bool branch_taken_0x3823f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3823f4) {
            ctx->pc = 0x382418u;
            goto label_382418;
        }
    }
    ctx->pc = 0x3823FCu;
    // 0x3823fc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3823fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x382400: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x382400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x382404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x382404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x382408: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x382408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x38240c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38240cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x382410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x382410u;
    {
        const bool branch_taken_0x382410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382410u;
        // 0x382414: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382410) {
            ctx->pc = 0x382430u;
            goto label_382430;
        }
    }
    ctx->pc = 0x382418u;
label_382418:
    // 0x382418: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38241c: 0x2ca2001b  sltiu       $v0, $a1, 0x1B
    ctx->pc = 0x38241cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x382420: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x382420u;
    {
        const bool branch_taken_0x382420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382420u;
        // 0x382424: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382420) {
            ctx->pc = 0x3823F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3823f0;
        }
    }
    ctx->pc = 0x382428u;
    // 0x382428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38242c: 0x0  nop
    ctx->pc = 0x38242cu;
    // NOP
label_382430:
    // 0x382430: 0x3e00008  jr          $ra
    ctx->pc = 0x382430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382438u;
}
