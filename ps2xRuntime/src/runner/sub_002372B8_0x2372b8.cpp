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

// Function: sub_002372B8
// Address: 0x2372b8 - 0x2372fc
void sub_002372B8_0x2372b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002372B8_0x2372b8");
#endif

    switch (ctx->pc) {
        case 0x2372e0u: goto label_2372e0;
        case 0x2372f0u: goto label_2372f0;
        default: break;
    }

    ctx->pc = 0x2372b8u;

    // 0x2372b8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2372b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2372bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2372c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2372c4: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2372c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2372c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2372c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2372cc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2372ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2372D0u;
    {
        const bool branch_taken_0x2372d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D0u;
        // 0x2372d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d0) {
            ctx->pc = 0x2372E8u;
            goto label_2372e8;
        }
    }
    ctx->pc = 0x2372D8u;
    // 0x2372d8: 0xc08dc32  jal         func_2370C8
    ctx->pc = 0x2372D8u;
    SET_GPR_U32(ctx, 31, 0x2372E0u);
    ctx->pc = 0x2372DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372D8u;
    // 0x2372dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370C8u, 0x2372D8u, 0x2372E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372E0u;
label_2372e0:
    // 0x2372e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2372E0u;
    {
        const bool branch_taken_0x2372e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372E0u;
        // 0x2372e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372e0) {
            ctx->pc = 0x2372F4u;
            goto label_2372f4;
        }
    }
    ctx->pc = 0x2372E8u;
label_2372e8:
    // 0x2372e8: 0xc08dc68  jal         func_2371A0
    ctx->pc = 0x2372E8u;
    SET_GPR_U32(ctx, 31, 0x2372F0u);
    ctx->pc = 0x2372ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372E8u;
    // 0x2372ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2371A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2371A0u, 0x2372E8u, 0x2372F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372F0u;
label_2372f0:
    // 0x2372f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2372f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2372f4:
    // 0x2372f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2372F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2372F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372F4u;
        // 0x2372f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2372F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2372FCu;
}
