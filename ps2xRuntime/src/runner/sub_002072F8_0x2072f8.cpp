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

// Function: sub_002072F8
// Address: 0x2072f8 - 0x20732c
void sub_002072F8_0x2072f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002072F8_0x2072f8");
#endif

    ctx->pc = 0x2072f8u;

    // 0x2072f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2072fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207304: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x207308: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207308u;
    {
        const bool branch_taken_0x207308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207308u;
        // 0x20730c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207308) {
            ctx->pc = 0x207320u;
            goto label_207320;
        }
    }
    ctx->pc = 0x207310u;
    // 0x207310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207314: 0x8084a0c  j           func_212830
    ctx->pc = 0x207314u;
    ctx->pc = 0x207318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207314u;
    // 0x207318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212830u;
    sub_00212830_0x212830(rdram, ctx, runtime); return;
    ctx->pc = 0x20731Cu;
    // 0x20731c: 0x0  nop
    ctx->pc = 0x20731cu;
    // NOP
label_207320:
    // 0x207320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207324: 0x3e00008  jr          $ra
    ctx->pc = 0x207324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207324u;
        // 0x207328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20732Cu;
}
