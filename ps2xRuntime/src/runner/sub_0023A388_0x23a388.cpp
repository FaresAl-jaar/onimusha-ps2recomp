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

// Function: sub_0023A388
// Address: 0x23a388 - 0x23a3c0
void sub_0023A388_0x23a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A388_0x23a388");
#endif

    switch (ctx->pc) {
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3acu: goto label_23a3ac;
        default: break;
    }

    ctx->pc = 0x23a388u;

    // 0x23a388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a394: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A394u;
    SET_GPR_U32(ctx, 31, 0x23A39Cu);
    ctx->pc = 0x23A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A394u;
    // 0x23a398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A394u, 0x23A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A39Cu;
label_23a39c:
    // 0x23a39c: 0xc08e8f0  jal         func_23A3C0
    ctx->pc = 0x23A39Cu;
    SET_GPR_U32(ctx, 31, 0x23A3A4u);
    ctx->pc = 0x23A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A39Cu;
    // 0x23a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A3C0u, 0x23A39Cu, 0x23A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3A4u;
label_23a3a4:
    // 0x23a3a4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A3A4u;
    SET_GPR_U32(ctx, 31, 0x23A3ACu);
    ctx->pc = 0x23A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3A4u;
    // 0x23a3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A3A4u, 0x23A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3ACu;
label_23a3ac:
    // 0x23a3ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a3b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B8u;
        // 0x23a3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A3C0u;
}
