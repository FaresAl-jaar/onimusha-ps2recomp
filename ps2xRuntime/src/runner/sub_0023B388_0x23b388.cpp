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

// Function: sub_0023B388
// Address: 0x23b388 - 0x23b3c0
void sub_0023B388_0x23b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B388_0x23b388");
#endif

    switch (ctx->pc) {
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3acu: goto label_23b3ac;
        default: break;
    }

    ctx->pc = 0x23b388u;

    // 0x23b388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b394: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B394u;
    SET_GPR_U32(ctx, 31, 0x23B39Cu);
    ctx->pc = 0x23B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B394u;
    // 0x23b398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B394u, 0x23B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B39Cu;
label_23b39c:
    // 0x23b39c: 0xc08ecf0  jal         func_23B3C0
    ctx->pc = 0x23B39Cu;
    SET_GPR_U32(ctx, 31, 0x23B3A4u);
    ctx->pc = 0x23B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B39Cu;
    // 0x23b3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B3C0u, 0x23B39Cu, 0x23B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3A4u;
label_23b3a4:
    // 0x23b3a4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B3A4u;
    SET_GPR_U32(ctx, 31, 0x23B3ACu);
    ctx->pc = 0x23B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B3A4u;
    // 0x23b3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B3A4u, 0x23B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3ACu;
label_23b3ac:
    // 0x23b3ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b3b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B3C0u;
}
