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

// Function: sub_001791C0
// Address: 0x1791c0 - 0x179200
void sub_001791C0_0x1791c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001791C0_0x1791c0");
#endif

    switch (ctx->pc) {
        case 0x1791c8u: goto label_1791c8;
        default: break;
    }

    ctx->pc = 0x1791c0u;

    // 0x1791c0: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1791c4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_1791c8:
    // 0x1791c8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1791cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1791ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1791d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1791d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1791d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1791d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1791d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1791dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1791e0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1791e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1791e4: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1791e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1791e8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1791E8u;
    {
        const bool branch_taken_0x1791e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1791ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E8u;
        // 0x1791ec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791e8) {
            ctx->pc = 0x1791C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1791c8;
        }
    }
    ctx->pc = 0x1791F0u;
    // 0x1791f0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1791f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1791f4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1791f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1791f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1791F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791F8u;
        // 0x1791fc: 0xfc800008  sd          $zero, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1791F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179200u;
}
