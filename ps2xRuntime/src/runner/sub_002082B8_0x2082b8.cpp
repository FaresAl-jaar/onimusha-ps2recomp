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

// Function: sub_002082B8
// Address: 0x2082b8 - 0x2082e8
void sub_002082B8_0x2082b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002082B8_0x2082b8");
#endif

    switch (ctx->pc) {
        case 0x2082d8u: goto label_2082d8;
        default: break;
    }

    ctx->pc = 0x2082b8u;

    // 0x2082b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2082bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2082bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2082c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2082c4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2082c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2082C8u;
    {
        const bool branch_taken_0x2082c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C8u;
        // 0x2082cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082c8) {
            ctx->pc = 0x2082DCu;
            goto label_2082dc;
        }
    }
    ctx->pc = 0x2082D0u;
    // 0x2082d0: 0xc083260  jal         func_20C980
    ctx->pc = 0x2082D0u;
    SET_GPR_U32(ctx, 31, 0x2082D8u);
    ctx->pc = 0x2082D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082D0u;
    // 0x2082d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C980u, 0x2082D0u, 0x2082D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082D8u;
label_2082d8:
    // 0x2082d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2082dc:
    // 0x2082dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2082dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2082e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2082E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2082E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082E0u;
        // 0x2082e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2082E8u;
}
