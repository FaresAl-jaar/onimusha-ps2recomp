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

// Function: sub_00254720
// Address: 0x254720 - 0x254758
void sub_00254720_0x254720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254720_0x254720");
#endif

    ctx->pc = 0x254720u;

    // 0x254720: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x254720u;
    {
        const bool branch_taken_0x254720 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x254724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254720u;
        // 0x254724: 0x3c010083  lui         $at, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254720) {
            ctx->pc = 0x254738u;
            goto label_254738;
        }
    }
    ctx->pc = 0x254728u;
    // 0x254728: 0x8c22cc6c  lw          $v0, -0x3394($at)
    ctx->pc = 0x254728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954092)));
    // 0x25472c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x25472cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254730: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254730u;
    {
        const bool branch_taken_0x254730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254730) {
            ctx->pc = 0x254740u;
            goto label_254740;
        }
    }
    ctx->pc = 0x254738u;
label_254738:
    // 0x254738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x254738u;
    {
        const bool branch_taken_0x254738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254738u;
        // 0x25473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254738) {
            ctx->pc = 0x254750u;
            goto label_254750;
        }
    }
    ctx->pc = 0x254740u;
label_254740:
    // 0x254740: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x254740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x254744: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x254744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x254748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25474c: 0x0  nop
    ctx->pc = 0x25474cu;
    // NOP
label_254750:
    // 0x254750: 0x3e00008  jr          $ra
    ctx->pc = 0x254750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254758u;
}
