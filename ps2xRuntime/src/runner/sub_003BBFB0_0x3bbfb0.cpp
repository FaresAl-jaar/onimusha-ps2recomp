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

// Function: sub_003BBFB0
// Address: 0x3bbfb0 - 0x3bbff0
void sub_003BBFB0_0x3bbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBFB0_0x3bbfb0");
#endif

    switch (ctx->pc) {
        case 0x3bbfc4u: goto label_3bbfc4;
        case 0x3bbfd4u: goto label_3bbfd4;
        default: break;
    }

    ctx->pc = 0x3bbfb0u;

    // 0x3bbfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bbfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bbfb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bbfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bbfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bbfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bbfbc: 0xc0eef28  jal         func_3BBCA0
    ctx->pc = 0x3BBFBCu;
    SET_GPR_U32(ctx, 31, 0x3BBFC4u);
    ctx->pc = 0x3BBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBFBCu;
    // 0x3bbfc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBCA0u, 0x3BBFBCu, 0x3BBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBFC4u;
label_3bbfc4:
    // 0x3bbfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbfc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbfcc: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3BBFCCu;
    SET_GPR_U32(ctx, 31, 0x3BBFD4u);
    ctx->pc = 0x3BBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBFCCu;
    // 0x3bbfd0: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3BBFCCu, 0x3BBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBFD4u;
label_3bbfd4:
    // 0x3bbfd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BBFD4u;
    {
        const bool branch_taken_0x3bbfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFD4u;
        // 0x3bbfd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbfd4) {
            ctx->pc = 0x3BBFE0u;
            goto label_3bbfe0;
        }
    }
    ctx->pc = 0x3BBFDCu;
    // 0x3bbfdc: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3bbfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
label_3bbfe0:
    // 0x3bbfe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bbfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bbfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBFE8u;
        // 0x3bbfec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBFF0u;
}
