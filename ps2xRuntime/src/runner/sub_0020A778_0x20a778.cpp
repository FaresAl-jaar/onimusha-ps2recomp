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

// Function: sub_0020A778
// Address: 0x20a778 - 0x20a7a4
void sub_0020A778_0x20a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A778_0x20a778");
#endif

    switch (ctx->pc) {
        case 0x20a790u: goto label_20a790;
        default: break;
    }

    ctx->pc = 0x20a778u;

    // 0x20a778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a780: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a784: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a788: 0xc092f9a  jal         func_24BE68
    ctx->pc = 0x20A788u;
    SET_GPR_U32(ctx, 31, 0x20A790u);
    ctx->pc = 0x20A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A788u;
    // 0x20a78c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BE68u, 0x20A788u, 0x20A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A790u;
label_20a790:
    // 0x20a790: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20a790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20a794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a79c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A79Cu;
        // 0x20a7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A7A4u;
}
