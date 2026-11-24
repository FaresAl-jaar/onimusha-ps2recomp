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

// Function: sub_0010EAC0
// Address: 0x10eac0 - 0x10eb28
void sub_0010EAC0_0x10eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EAC0_0x10eac0");
#endif

    switch (ctx->pc) {
        case 0x10eaf0u: goto label_10eaf0;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eb10u: goto label_10eb10;
        default: break;
    }

    ctx->pc = 0x10eac0u;

    // 0x10eac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eacc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ead0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ead4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ead8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10eadc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10eadcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10eae0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EAE0u;
    {
        const bool branch_taken_0x10eae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eae0) {
            ctx->pc = 0x10EAF0u;
            goto label_10eaf0;
        }
    }
    ctx->pc = 0x10EAE8u;
    // 0x10eae8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10EAE8u;
    SET_GPR_U32(ctx, 31, 0x10EAF0u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10EAE8u, 0x10EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAF0u;
label_10eaf0:
    // 0x10eaf0: 0xc04374c  jal         func_10DD30
    ctx->pc = 0x10EAF0u;
    SET_GPR_U32(ctx, 31, 0x10EAF8u);
    ctx->pc = 0x10EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAF0u;
    // 0x10eaf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD30u, 0x10EAF0u, 0x10EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EAF8u;
label_10eaf8:
    // 0x10eaf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10eaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eafc: 0xf  sync
    ctx->pc = 0x10eafcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10eb00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EB00u;
    {
        const bool branch_taken_0x10eb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB00u;
        // 0x10eb04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb00) {
            ctx->pc = 0x10EB14u;
            goto label_10eb14;
        }
    }
    ctx->pc = 0x10EB08u;
    // 0x10eb08: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10EB08u;
    SET_GPR_U32(ctx, 31, 0x10EB10u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10EB08u, 0x10EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB10u;
label_10eb10:
    // 0x10eb10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10eb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb14:
    // 0x10eb14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eb18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eb18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb20: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB20u;
        // 0x10eb24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EB28u;
}
