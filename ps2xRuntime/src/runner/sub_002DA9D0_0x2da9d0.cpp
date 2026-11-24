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

// Function: sub_002DA9D0
// Address: 0x2da9d0 - 0x2da9fc
void sub_002DA9D0_0x2da9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA9D0_0x2da9d0");
#endif

    switch (ctx->pc) {
        case 0x2da9ecu: goto label_2da9ec;
        default: break;
    }

    ctx->pc = 0x2da9d0u;

    // 0x2da9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da9d8: 0x90830049  lbu         $v1, 0x49($a0)
    ctx->pc = 0x2da9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x2da9dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA9DCu;
    {
        const bool branch_taken_0x2da9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9DCu;
        // 0x2da9e0: 0x2485001c  addiu       $a1, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9dc) {
            ctx->pc = 0x2DA9F0u;
            goto label_2da9f0;
        }
    }
    ctx->pc = 0x2DA9E4u;
    // 0x2da9e4: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA9E4u;
    SET_GPR_U32(ctx, 31, 0x2DA9ECu);
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA9E4u, 0x2DA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA9ECu;
label_2da9ec:
    // 0x2da9ec: 0x0  nop
    ctx->pc = 0x2da9ecu;
    // NOP
label_2da9f0:
    // 0x2da9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F4u;
        // 0x2da9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9FCu;
}
