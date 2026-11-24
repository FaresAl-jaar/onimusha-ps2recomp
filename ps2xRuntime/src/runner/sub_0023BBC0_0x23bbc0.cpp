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

// Function: sub_0023BBC0
// Address: 0x23bbc0 - 0x23bbf8
void sub_0023BBC0_0x23bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BBC0_0x23bbc0");
#endif

    switch (ctx->pc) {
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe4u: goto label_23bbe4;
        default: break;
    }

    ctx->pc = 0x23bbc0u;

    // 0x23bbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bbc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bbc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bbcc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BBCCu;
    SET_GPR_U32(ctx, 31, 0x23BBD4u);
    ctx->pc = 0x23BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBCCu;
    // 0x23bbd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BBCCu, 0x23BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBD4u;
label_23bbd4:
    // 0x23bbd4: 0xc08eefe  jal         func_23BBF8
    ctx->pc = 0x23BBD4u;
    SET_GPR_U32(ctx, 31, 0x23BBDCu);
    ctx->pc = 0x23BBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBD4u;
    // 0x23bbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBF8u, 0x23BBD4u, 0x23BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBDCu;
label_23bbdc:
    // 0x23bbdc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BBDCu;
    SET_GPR_U32(ctx, 31, 0x23BBE4u);
    ctx->pc = 0x23BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBDCu;
    // 0x23bbe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BBDCu, 0x23BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBE4u;
label_23bbe4:
    // 0x23bbe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bbe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BBF0u;
        // 0x23bbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BBF8u;
}
