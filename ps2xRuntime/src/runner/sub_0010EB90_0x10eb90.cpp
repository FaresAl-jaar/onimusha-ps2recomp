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

// Function: sub_0010EB90
// Address: 0x10eb90 - 0x10ebf8
void sub_0010EB90_0x10eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EB90_0x10eb90");
#endif

    switch (ctx->pc) {
        case 0x10ebc0u: goto label_10ebc0;
        case 0x10ebc8u: goto label_10ebc8;
        case 0x10ebe0u: goto label_10ebe0;
        default: break;
    }

    ctx->pc = 0x10eb90u;

    // 0x10eb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eb98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eb9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eba4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10eba8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ebac: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ebacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ebb0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EBB0u;
    {
        const bool branch_taken_0x10ebb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ebb0) {
            ctx->pc = 0x10EBC0u;
            goto label_10ebc0;
        }
    }
    ctx->pc = 0x10EBB8u;
    // 0x10ebb8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10EBB8u;
    SET_GPR_U32(ctx, 31, 0x10EBC0u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10EBB8u, 0x10EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBC0u;
label_10ebc0:
    // 0x10ebc0: 0xc043754  jal         func_10DD50
    ctx->pc = 0x10EBC0u;
    SET_GPR_U32(ctx, 31, 0x10EBC8u);
    ctx->pc = 0x10EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBC0u;
    // 0x10ebc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD50u, 0x10EBC0u, 0x10EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBC8u;
label_10ebc8:
    // 0x10ebc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ebc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebcc: 0xf  sync
    ctx->pc = 0x10ebccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ebd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBD0u;
        // 0x10ebd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EBE4u;
            goto label_10ebe4;
        }
    }
    ctx->pc = 0x10EBD8u;
    // 0x10ebd8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10EBD8u;
    SET_GPR_U32(ctx, 31, 0x10EBE0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10EBD8u, 0x10EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBE0u;
label_10ebe0:
    // 0x10ebe0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ebe4:
    // 0x10ebe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ebe8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ebe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ebec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF0u;
        // 0x10ebf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EBF8u;
}
