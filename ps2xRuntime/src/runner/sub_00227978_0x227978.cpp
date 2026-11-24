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

// Function: sub_00227978
// Address: 0x227978 - 0x2279d8
void sub_00227978_0x227978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227978_0x227978");
#endif

    switch (ctx->pc) {
        case 0x2279a8u: goto label_2279a8;
        case 0x2279c4u: goto label_2279c4;
        default: break;
    }

    ctx->pc = 0x227978u;

    // 0x227978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22797c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22797cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227988: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227988u;
    {
        const bool branch_taken_0x227988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227988u;
        // 0x22798c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227988) {
            ctx->pc = 0x227998u;
            goto label_227998;
        }
    }
    ctx->pc = 0x227990u;
    // 0x227990: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227990u;
    {
        const bool branch_taken_0x227990 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x227990) {
            ctx->pc = 0x2279A0u;
            goto label_2279a0;
        }
    }
    ctx->pc = 0x227998u;
label_227998:
    // 0x227998: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x227998u;
    {
        const bool branch_taken_0x227998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227998u;
        // 0x22799c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227998) {
            ctx->pc = 0x2279C8u;
            goto label_2279c8;
        }
    }
    ctx->pc = 0x2279A0u;
label_2279a0:
    // 0x2279a0: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x2279A0u;
    SET_GPR_U32(ctx, 31, 0x2279A8u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x2279A0u, 0x2279A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279A8u;
label_2279a8:
    // 0x2279a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2279a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2279ac: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2279b0: 0x24a59598  addiu       $a1, $a1, -0x6A68
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
    // 0x2279b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2279B4u;
    {
        const bool branch_taken_0x2279b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279B4u;
        // 0x2279b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279b4) {
            ctx->pc = 0x2279C8u;
            goto label_2279c8;
        }
    }
    ctx->pc = 0x2279BCu;
    // 0x2279bc: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x2279BCu;
    SET_GPR_U32(ctx, 31, 0x2279C4u);
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x2279BCu, 0x2279C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279C4u;
label_2279c4:
    // 0x2279c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2279c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2279c8:
    // 0x2279c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2279c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2279cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2279ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2279d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2279D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2279D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279D0u;
        // 0x2279d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2279D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2279D8u;
}
