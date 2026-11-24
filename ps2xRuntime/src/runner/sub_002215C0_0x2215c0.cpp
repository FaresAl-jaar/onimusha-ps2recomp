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

// Function: sub_002215C0
// Address: 0x2215c0 - 0x2215f4
void sub_002215C0_0x2215c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002215C0_0x2215c0");
#endif

    ctx->pc = 0x2215c0u;

    // 0x2215c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2215c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2215c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2215c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215c8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2215C8u;
    {
        const bool branch_taken_0x2215c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215C8u;
        // 0x2215cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215c8) {
            ctx->pc = 0x2215E8u;
            goto label_2215e8;
        }
    }
    ctx->pc = 0x2215D0u;
    // 0x2215d0: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2215d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2215d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2215d8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x2215d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2215dc: 0x808857e  j           func_2215F8
    ctx->pc = 0x2215DCu;
    ctx->pc = 0x2215E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215DCu;
    // 0x2215e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215F8u;
    sub_002215F8_0x2215f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2215E4u;
    // 0x2215e4: 0x0  nop
    ctx->pc = 0x2215e4u;
    // NOP
label_2215e8:
    // 0x2215e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2215e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2215ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2215ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2215F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215ECu;
        // 0x2215f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2215ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2215F4u;
}
