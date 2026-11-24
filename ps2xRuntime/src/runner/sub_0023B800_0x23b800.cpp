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

// Function: sub_0023B800
// Address: 0x23b800 - 0x23b838
void sub_0023B800_0x23b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B800_0x23b800");
#endif

    switch (ctx->pc) {
        case 0x23b814u: goto label_23b814;
        case 0x23b81cu: goto label_23b81c;
        case 0x23b824u: goto label_23b824;
        default: break;
    }

    ctx->pc = 0x23b800u;

    // 0x23b800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b80c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B80Cu;
    SET_GPR_U32(ctx, 31, 0x23B814u);
    ctx->pc = 0x23B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B80Cu;
    // 0x23b810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B80Cu, 0x23B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B814u;
label_23b814:
    // 0x23b814: 0xc08ee0e  jal         func_23B838
    ctx->pc = 0x23B814u;
    SET_GPR_U32(ctx, 31, 0x23B81Cu);
    ctx->pc = 0x23B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B814u;
    // 0x23b818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B838u, 0x23B814u, 0x23B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B81Cu;
label_23b81c:
    // 0x23b81c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B81Cu;
    SET_GPR_U32(ctx, 31, 0x23B824u);
    ctx->pc = 0x23B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B81Cu;
    // 0x23b820: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B81Cu, 0x23B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B824u;
label_23b824:
    // 0x23b824: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b830: 0x3e00008  jr          $ra
    ctx->pc = 0x23B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B830u;
        // 0x23b834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B838u;
}
