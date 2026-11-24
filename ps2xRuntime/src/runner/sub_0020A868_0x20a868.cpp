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

// Function: sub_0020A868
// Address: 0x20a868 - 0x20a8b4
void sub_0020A868_0x20a868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A868_0x20a868");
#endif

    switch (ctx->pc) {
        case 0x20a898u: goto label_20a898;
        case 0x20a8a4u: goto label_20a8a4;
        default: break;
    }

    ctx->pc = 0x20a868u;

    // 0x20a868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a86c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20a86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a870: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x20a874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20a874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a878: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x20a878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x20a87c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20a880: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x20a884: 0x24a58550  addiu       $a1, $a1, -0x7AB0
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935888));
    // 0x20a888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a88c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20a890: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x20A890u;
    SET_GPR_U32(ctx, 31, 0x20A898u);
    ctx->pc = 0x20A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A890u;
    // 0x20a894: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x20A890u, 0x20A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A898u;
label_20a898:
    // 0x20a898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20a898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a89c: 0xc082856  jal         func_20A158
    ctx->pc = 0x20A89Cu;
    SET_GPR_U32(ctx, 31, 0x20A8A4u);
    ctx->pc = 0x20A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A89Cu;
    // 0x20a8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A158u, 0x20A89Cu, 0x20A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8A4u;
label_20a8a4:
    // 0x20a8a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20a8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a8a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x20A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8ACu;
        // 0x20a8b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A8B4u;
}
