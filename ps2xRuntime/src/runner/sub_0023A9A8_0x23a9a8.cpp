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

// Function: sub_0023A9A8
// Address: 0x23a9a8 - 0x23a9d8
void sub_0023A9A8_0x23a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9A8_0x23a9a8");
#endif

    switch (ctx->pc) {
        case 0x23a9c0u: goto label_23a9c0;
        default: break;
    }

    ctx->pc = 0x23a9a8u;

    // 0x23a9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a9ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A9ACu;
    {
        const bool branch_taken_0x23a9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9ACu;
        // 0x23a9b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9ac) {
            ctx->pc = 0x23A9C8u;
            goto label_23a9c8;
        }
    }
    ctx->pc = 0x23A9B4u;
    // 0x23a9b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a9b8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A9B8u;
    SET_GPR_U32(ctx, 31, 0x23A9C0u);
    ctx->pc = 0x23A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9B8u;
    // 0x23a9bc: 0x2484b2a8  addiu       $a0, $a0, -0x4D58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A9B8u, 0x23A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9C0u;
label_23a9c0:
    // 0x23a9c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A9C0u;
    {
        const bool branch_taken_0x23a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9C0u;
        // 0x23a9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9c0) {
            ctx->pc = 0x23A9CCu;
            goto label_23a9cc;
        }
    }
    ctx->pc = 0x23A9C8u;
label_23a9c8:
    // 0x23a9c8: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_23a9cc:
    // 0x23a9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9D0u;
        // 0x23a9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A9D8u;
}
