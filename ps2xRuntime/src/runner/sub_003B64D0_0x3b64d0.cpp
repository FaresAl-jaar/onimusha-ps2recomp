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

// Function: sub_003B64D0
// Address: 0x3b64d0 - 0x3b6508
void sub_003B64D0_0x3b64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B64D0_0x3b64d0");
#endif

    ctx->pc = 0x3b64d0u;

    // 0x3b64d0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3b64d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3b64d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B64D4u;
    {
        const bool branch_taken_0x3b64d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64D4u;
        // 0x3b64d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64d4) {
            ctx->pc = 0x3B64E8u;
            goto label_3b64e8;
        }
    }
    ctx->pc = 0x3B64DCu;
    // 0x3b64dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B64DCu;
    {
        const bool branch_taken_0x3b64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64DCu;
        // 0x3b64e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64dc) {
            ctx->pc = 0x3B6500u;
            goto label_3b6500;
        }
    }
    ctx->pc = 0x3B64E4u;
    // 0x3b64e4: 0x0  nop
    ctx->pc = 0x3b64e4u;
    // NOP
label_3b64e8:
    // 0x3b64e8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3b64e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3b64ec: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x3b64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x3b64f0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3b64f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b64f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B64F4u;
    {
        const bool branch_taken_0x3b64f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b64f4) {
            ctx->pc = 0x3B6500u;
            goto label_3b6500;
        }
    }
    ctx->pc = 0x3B64FCu;
    // 0x3b64fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b6500:
    // 0x3b6500: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6508u;
}
