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

// Function: sub_0014B490
// Address: 0x14b490 - 0x14b4cc
void sub_0014B490_0x14b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B490_0x14b490");
#endif

    switch (ctx->pc) {
        case 0x14b4bcu: goto label_14b4bc;
        default: break;
    }

    ctx->pc = 0x14b490u;

    // 0x14b490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b494: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b498: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B498u;
    {
        const bool branch_taken_0x14b498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B498u;
        // 0x14b49c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b498) {
            ctx->pc = 0x14B4A8u;
            goto label_14b4a8;
        }
    }
    ctx->pc = 0x14B4A0u;
    // 0x14b4a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B4A0u;
    {
        const bool branch_taken_0x14b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4A0u;
        // 0x14b4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4a0) {
            ctx->pc = 0x14B4C0u;
            goto label_14b4c0;
        }
    }
    ctx->pc = 0x14B4A8u;
label_14b4a8:
    // 0x14b4a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4ac: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b4b0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b4b4: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x14B4B4u;
    SET_GPR_U32(ctx, 31, 0x14B4BCu);
    ctx->pc = 0x14B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4B4u;
    // 0x14b4b8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x14B4B4u, 0x14B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4BCu;
label_14b4bc:
    // 0x14b4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b4c0:
    // 0x14b4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4C4u;
        // 0x14b4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4CCu;
}
