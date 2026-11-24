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

// Function: sub_001195D0
// Address: 0x1195d0 - 0x11961c
void sub_001195D0_0x1195d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001195D0_0x1195d0");
#endif

    switch (ctx->pc) {
        case 0x1195e8u: goto label_1195e8;
        case 0x1195f4u: goto label_1195f4;
        case 0x119604u: goto label_119604;
        default: break;
    }

    ctx->pc = 0x1195d0u;

    // 0x1195d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1195d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1195d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1195d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1195d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1195dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1195dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1195e0: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1195E0u;
    SET_GPR_U32(ctx, 31, 0x1195E8u);
    ctx->pc = 0x1195E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195E0u;
    // 0x1195e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1195E0u, 0x1195E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195E8u;
label_1195e8:
    // 0x1195e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1195e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195ec: 0xc046548  jal         func_119520
    ctx->pc = 0x1195ECu;
    SET_GPR_U32(ctx, 31, 0x1195F4u);
    ctx->pc = 0x1195F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195ECu;
    // 0x1195f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119520u, 0x1195ECu, 0x1195F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195F4u;
label_1195f4:
    // 0x1195f4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1195F4u;
    {
        const bool branch_taken_0x1195f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195F4u;
        // 0x1195f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195f4) {
            ctx->pc = 0x119604u;
            goto label_119604;
        }
    }
    ctx->pc = 0x1195FCu;
    // 0x1195fc: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1195FCu;
    SET_GPR_U32(ctx, 31, 0x119604u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1195FCu, 0x119604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119604u;
label_119604:
    // 0x119604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11960c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11960cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119614: 0x3e00008  jr          $ra
    ctx->pc = 0x119614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119614u;
        // 0x119618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11961Cu;
}
