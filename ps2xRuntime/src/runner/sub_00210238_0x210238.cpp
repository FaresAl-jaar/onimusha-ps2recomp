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

// Function: sub_00210238
// Address: 0x210238 - 0x21026c
void sub_00210238_0x210238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210238_0x210238");
#endif

    ctx->pc = 0x210238u;

    // 0x210238: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x210238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21023c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x210240: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x210244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210248: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21024c: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21024Cu;
    {
        const bool branch_taken_0x21024c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x210250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21024Cu;
        // 0x210250: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21024c) {
            ctx->pc = 0x210264u;
            goto label_210264;
        }
    }
    ctx->pc = 0x210254u;
    // 0x210254: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x210254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x210258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x210258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21025c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210260: 0x8c62131c  lw          $v0, 0x131C($v1)
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4892)));
label_210264:
    // 0x210264: 0x3e00008  jr          $ra
    ctx->pc = 0x210264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21026Cu;
}
