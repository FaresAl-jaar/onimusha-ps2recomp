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

// Function: sub_002546C0
// Address: 0x2546c0 - 0x2546f8
void sub_002546C0_0x2546c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002546C0_0x2546c0");
#endif

    ctx->pc = 0x2546c0u;

    // 0x2546c0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2546C0u;
    {
        const bool branch_taken_0x2546c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2546C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C0u;
        // 0x2546c4: 0x3c010083  lui         $at, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546c0) {
            ctx->pc = 0x2546D8u;
            goto label_2546d8;
        }
    }
    ctx->pc = 0x2546C8u;
    // 0x2546c8: 0x8c22cc6c  lw          $v0, -0x3394($at)
    ctx->pc = 0x2546c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954092)));
    // 0x2546cc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2546ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2546d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2546D0u;
    {
        const bool branch_taken_0x2546d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2546d0) {
            ctx->pc = 0x2546E0u;
            goto label_2546e0;
        }
    }
    ctx->pc = 0x2546D8u;
label_2546d8:
    // 0x2546d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2546D8u;
    {
        const bool branch_taken_0x2546d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546D8u;
        // 0x2546dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546d8) {
            ctx->pc = 0x2546F0u;
            goto label_2546f0;
        }
    }
    ctx->pc = 0x2546E0u;
label_2546e0:
    // 0x2546e0: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x2546e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x2546e4: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x2546e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x2546e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2546e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2546ec: 0x0  nop
    ctx->pc = 0x2546ecu;
    // NOP
label_2546f0:
    // 0x2546f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2546F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2546F8u;
}
