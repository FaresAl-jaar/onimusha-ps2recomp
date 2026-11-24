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

// Function: sub_0032BAB0
// Address: 0x32bab0 - 0x32bb08
void sub_0032BAB0_0x32bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BAB0_0x32bab0");
#endif

    switch (ctx->pc) {
        case 0x32baecu: goto label_32baec;
        default: break;
    }

    ctx->pc = 0x32bab0u;

    // 0x32bab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32bab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bab8: 0x97828b7c  lhu         $v0, -0x7484($gp)
    ctx->pc = 0x32bab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937468)));
    // 0x32babc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32BABCu;
    {
        const bool branch_taken_0x32babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BABCu;
        // 0x32bac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32babc) {
            ctx->pc = 0x32BAE0u;
            goto label_32bae0;
        }
    }
    ctx->pc = 0x32BAC4u;
    // 0x32bac4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x32bac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x32bac8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32bac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32bacc: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x32baccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x32bad0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BAD0u;
    {
        const bool branch_taken_0x32bad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32bad0) {
            ctx->pc = 0x32BAE0u;
            goto label_32bae0;
        }
    }
    ctx->pc = 0x32BAD8u;
    // 0x32bad8: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x32bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x32badc: 0x24a50ed0  addiu       $a1, $a1, 0xED0
    ctx->pc = 0x32badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
label_32bae0:
    // 0x32bae0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32bae4: 0xc0ca9e8  jal         func_32A7A0
    ctx->pc = 0x32BAE4u;
    SET_GPR_U32(ctx, 31, 0x32BAECu);
    ctx->pc = 0x32BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAE4u;
    // 0x32bae8: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7A0u, 0x32BAE4u, 0x32BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAECu;
label_32baec:
    // 0x32baec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32baf0: 0xaf808b70  sw          $zero, -0x7490($gp)
    ctx->pc = 0x32baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 0));
    // 0x32baf4: 0x8c23ceb4  lw          $v1, -0x314C($at)
    ctx->pc = 0x32baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB4u));
    // 0x32baf8: 0xaf838b74  sw          $v1, -0x748C($gp)
    ctx->pc = 0x32baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937460), GPR_U32(ctx, 3));
    // 0x32bafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB00u;
        // 0x32bb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB08u;
}
