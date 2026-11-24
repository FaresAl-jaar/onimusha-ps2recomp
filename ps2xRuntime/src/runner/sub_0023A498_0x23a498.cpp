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

// Function: sub_0023A498
// Address: 0x23a498 - 0x23a4d0
void sub_0023A498_0x23a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A498_0x23a498");
#endif

    switch (ctx->pc) {
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a4b4u: goto label_23a4b4;
        case 0x23a4bcu: goto label_23a4bc;
        default: break;
    }

    ctx->pc = 0x23a498u;

    // 0x23a498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a4a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a4a4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A4A4u;
    SET_GPR_U32(ctx, 31, 0x23A4ACu);
    ctx->pc = 0x23A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4A4u;
    // 0x23a4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A4A4u, 0x23A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0xc08e934  jal         func_23A4D0
    ctx->pc = 0x23A4ACu;
    SET_GPR_U32(ctx, 31, 0x23A4B4u);
    ctx->pc = 0x23A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4ACu;
    // 0x23a4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4D0u, 0x23A4ACu, 0x23A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4B4u;
label_23a4b4:
    // 0x23a4b4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A4B4u;
    SET_GPR_U32(ctx, 31, 0x23A4BCu);
    ctx->pc = 0x23A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4B4u;
    // 0x23a4b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A4B4u, 0x23A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4C8u;
        // 0x23a4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4D0u;
}
