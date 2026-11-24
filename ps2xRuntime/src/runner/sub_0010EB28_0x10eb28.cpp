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

// Function: sub_0010EB28
// Address: 0x10eb28 - 0x10eb90
void sub_0010EB28_0x10eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EB28_0x10eb28");
#endif

    switch (ctx->pc) {
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb60u: goto label_10eb60;
        case 0x10eb78u: goto label_10eb78;
        default: break;
    }

    ctx->pc = 0x10eb28u;

    // 0x10eb28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eb30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eb34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eb3c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10eb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10eb40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10eb44: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10eb44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10eb48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB48u;
    {
        const bool branch_taken_0x10eb48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eb48) {
            ctx->pc = 0x10EB58u;
            goto label_10eb58;
        }
    }
    ctx->pc = 0x10EB50u;
    // 0x10eb50: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10EB50u;
    SET_GPR_U32(ctx, 31, 0x10EB58u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10EB50u, 0x10EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB58u;
label_10eb58:
    // 0x10eb58: 0xc043748  jal         func_10DD20
    ctx->pc = 0x10EB58u;
    SET_GPR_U32(ctx, 31, 0x10EB60u);
    ctx->pc = 0x10EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB58u;
    // 0x10eb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD20u, 0x10EB58u, 0x10EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB60u;
label_10eb60:
    // 0x10eb60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10eb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb64: 0xf  sync
    ctx->pc = 0x10eb64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10eb68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EB68u;
    {
        const bool branch_taken_0x10eb68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB68u;
        // 0x10eb6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb68) {
            ctx->pc = 0x10EB7Cu;
            goto label_10eb7c;
        }
    }
    ctx->pc = 0x10EB70u;
    // 0x10eb70: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10EB70u;
    SET_GPR_U32(ctx, 31, 0x10EB78u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10EB70u, 0x10EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB78u;
label_10eb78:
    // 0x10eb78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10eb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb7c:
    // 0x10eb7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10eb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eb80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB88u;
        // 0x10eb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB90u;
}
