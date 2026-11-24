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

// Function: sub_001D18F0
// Address: 0x1d18f0 - 0x1d191c
void sub_001D18F0_0x1d18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D18F0_0x1d18f0");
#endif

    ctx->pc = 0x1d18f0u;

    // 0x1d18f0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d18f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d18f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d18fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d18fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1900: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d1900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d1904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d1904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d1908: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1d1908u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1d190c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1d190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d1910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1914u;
        // 0x1d1918: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D191Cu;
}
