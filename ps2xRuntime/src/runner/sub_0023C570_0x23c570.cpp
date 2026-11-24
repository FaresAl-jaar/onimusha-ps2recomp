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

// Function: sub_0023C570
// Address: 0x23c570 - 0x23c5a8
void sub_0023C570_0x23c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C570_0x23c570");
#endif

    switch (ctx->pc) {
        case 0x23c584u: goto label_23c584;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c594u: goto label_23c594;
        default: break;
    }

    ctx->pc = 0x23c570u;

    // 0x23c570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c57c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C57Cu;
    // 0x23c580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C57Cu, 0x23C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0xc08f16a  jal         func_23C5A8
    ctx->pc = 0x23C584u;
    SET_GPR_U32(ctx, 31, 0x23C58Cu);
    ctx->pc = 0x23C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C584u;
    // 0x23c588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C5A8u, 0x23C584u, 0x23C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C58Cu;
label_23c58c:
    // 0x23c58c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23C58Cu;
    SET_GPR_U32(ctx, 31, 0x23C594u);
    ctx->pc = 0x23C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C58Cu;
    // 0x23c590: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23C58Cu, 0x23C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C594u;
label_23c594:
    // 0x23c594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23c598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A0u;
        // 0x23c5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C5A8u;
}
