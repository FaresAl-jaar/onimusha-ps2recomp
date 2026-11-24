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

// Function: sub_00223660
// Address: 0x223660 - 0x2236a4
void sub_00223660_0x223660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223660_0x223660");
#endif

    switch (ctx->pc) {
        case 0x223698u: goto label_223698;
        default: break;
    }

    ctx->pc = 0x223660u;

    // 0x223660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223664: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x223664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22366c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x22366cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223670: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x223674: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x223674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x223678: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22367c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22367Cu;
    {
        const bool branch_taken_0x22367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22367Cu;
        // 0x223680: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22367c) {
            ctx->pc = 0x223690u;
            goto label_223690;
        }
    }
    ctx->pc = 0x223684u;
    // 0x223684: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x223684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x223688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223688u;
    {
        const bool branch_taken_0x223688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223688u;
        // 0x22368c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223688) {
            ctx->pc = 0x223698u;
            goto label_223698;
        }
    }
    ctx->pc = 0x223690u;
label_223690:
    // 0x223690: 0xc084034  jal         func_2100D0
    ctx->pc = 0x223690u;
    SET_GPR_U32(ctx, 31, 0x223698u);
    ctx->pc = 0x223694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223690u;
    // 0x223694: 0x8c6520d8  lw          $a1, 0x20D8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2100D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2100D0u, 0x223690u, 0x223698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223698u;
label_223698:
    // 0x223698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22369c: 0x3e00008  jr          $ra
    ctx->pc = 0x22369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2236A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22369Cu;
        // 0x2236a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2236A4u;
}
