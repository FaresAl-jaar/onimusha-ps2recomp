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

// Function: sub_00329390
// Address: 0x329390 - 0x3293cc
void sub_00329390_0x329390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329390_0x329390");
#endif

    switch (ctx->pc) {
        case 0x3293bcu: goto label_3293bc;
        default: break;
    }

    ctx->pc = 0x329390u;

    // 0x329390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329394: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x329394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329398: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329398u;
    {
        const bool branch_taken_0x329398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329398u;
        // 0x32939c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329398) {
            ctx->pc = 0x3293A8u;
            goto label_3293a8;
        }
    }
    ctx->pc = 0x3293A0u;
    // 0x3293a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3293A0u;
    {
        const bool branch_taken_0x3293a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3293A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293A0u;
        // 0x3293a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293a0) {
            ctx->pc = 0x3293C0u;
            goto label_3293c0;
        }
    }
    ctx->pc = 0x3293A8u;
label_3293a8:
    // 0x3293a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3293a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3293ac: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3293acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3293b0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3293b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3293b4: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x3293B4u;
    SET_GPR_U32(ctx, 31, 0x3293BCu);
    ctx->pc = 0x3293B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293B4u;
    // 0x3293b8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x3293B4u, 0x3293BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293BCu;
label_3293bc:
    // 0x3293bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3293bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3293c0:
    // 0x3293c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3293c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3293c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3293C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293C4u;
        // 0x3293c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3293C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3293CCu;
}
