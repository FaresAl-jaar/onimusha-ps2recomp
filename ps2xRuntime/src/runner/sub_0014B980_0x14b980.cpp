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

// Function: sub_0014B980
// Address: 0x14b980 - 0x14b9bc
void sub_0014B980_0x14b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B980_0x14b980");
#endif

    switch (ctx->pc) {
        case 0x14b9acu: goto label_14b9ac;
        default: break;
    }

    ctx->pc = 0x14b980u;

    // 0x14b980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b984: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b988: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B988u;
    {
        const bool branch_taken_0x14b988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B988u;
        // 0x14b98c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b988) {
            ctx->pc = 0x14B998u;
            goto label_14b998;
        }
    }
    ctx->pc = 0x14B990u;
    // 0x14b990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B990u;
    {
        const bool branch_taken_0x14b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B990u;
        // 0x14b994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b990) {
            ctx->pc = 0x14B9B0u;
            goto label_14b9b0;
        }
    }
    ctx->pc = 0x14B998u;
label_14b998:
    // 0x14b998: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b99c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b9a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b9a4: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x14B9A4u;
    SET_GPR_U32(ctx, 31, 0x14B9ACu);
    ctx->pc = 0x14B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9A4u;
    // 0x14b9a8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x14B9A4u, 0x14B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9ACu;
label_14b9ac:
    // 0x14b9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b9b0:
    // 0x14b9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9B4u;
        // 0x14b9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B9BCu;
}
