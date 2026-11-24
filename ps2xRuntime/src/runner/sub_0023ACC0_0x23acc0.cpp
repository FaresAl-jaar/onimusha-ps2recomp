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

// Function: sub_0023ACC0
// Address: 0x23acc0 - 0x23acf8
void sub_0023ACC0_0x23acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ACC0_0x23acc0");
#endif

    switch (ctx->pc) {
        case 0x23acd4u: goto label_23acd4;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace4u: goto label_23ace4;
        default: break;
    }

    ctx->pc = 0x23acc0u;

    // 0x23acc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23acc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23acc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23accc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23ACCCu;
    SET_GPR_U32(ctx, 31, 0x23ACD4u);
    ctx->pc = 0x23ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACCCu;
    // 0x23acd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23ACCCu, 0x23ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACD4u;
label_23acd4:
    // 0x23acd4: 0xc08eb40  jal         func_23AD00
    ctx->pc = 0x23ACD4u;
    SET_GPR_U32(ctx, 31, 0x23ACDCu);
    ctx->pc = 0x23ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACD4u;
    // 0x23acd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD00u, 0x23ACD4u, 0x23ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACDCu;
label_23acdc:
    // 0x23acdc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23ACDCu;
    SET_GPR_U32(ctx, 31, 0x23ACE4u);
    ctx->pc = 0x23ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACDCu;
    // 0x23ace0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23ACDCu, 0x23ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACE4u;
label_23ace4:
    // 0x23ace4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ace8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ace8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23acecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23acf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF0u;
        // 0x23acf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ACF8u;
}
