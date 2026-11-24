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

// Function: sub_00254180
// Address: 0x254180 - 0x2541bc
void sub_00254180_0x254180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254180_0x254180");
#endif

    switch (ctx->pc) {
        case 0x2541acu: goto label_2541ac;
        default: break;
    }

    ctx->pc = 0x254180u;

    // 0x254180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254184: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x254184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254188: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254188u;
    {
        const bool branch_taken_0x254188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254188u;
        // 0x25418c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254188) {
            ctx->pc = 0x254198u;
            goto label_254198;
        }
    }
    ctx->pc = 0x254190u;
    // 0x254190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x254190u;
    {
        const bool branch_taken_0x254190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254190u;
        // 0x254194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254190) {
            ctx->pc = 0x2541B0u;
            goto label_2541b0;
        }
    }
    ctx->pc = 0x254198u;
label_254198:
    // 0x254198: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x254198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25419c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x25419cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2541a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2541a4: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x2541A4u;
    SET_GPR_U32(ctx, 31, 0x2541ACu);
    ctx->pc = 0x2541A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2541A4u;
    // 0x2541a8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x2541A4u, 0x2541ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2541ACu;
label_2541ac:
    // 0x2541ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2541acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2541b0:
    // 0x2541b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2541b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2541b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2541B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2541B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541B4u;
        // 0x2541b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2541BCu;
}
