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

// Function: sub_0010EBF8
// Address: 0x10ebf8 - 0x10ec60
void sub_0010EBF8_0x10ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EBF8_0x10ebf8");
#endif

    switch (ctx->pc) {
        case 0x10ec28u: goto label_10ec28;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec48u: goto label_10ec48;
        default: break;
    }

    ctx->pc = 0x10ebf8u;

    // 0x10ebf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ebfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ec00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ec04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ec04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ec0c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ec0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ec10: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ec14: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ec18: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EC18u;
    {
        const bool branch_taken_0x10ec18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec18) {
            ctx->pc = 0x10EC28u;
            goto label_10ec28;
        }
    }
    ctx->pc = 0x10EC20u;
    // 0x10ec20: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10EC20u;
    SET_GPR_U32(ctx, 31, 0x10EC28u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10EC20u, 0x10EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC28u;
label_10ec28:
    // 0x10ec28: 0xc043750  jal         func_10DD40
    ctx->pc = 0x10EC28u;
    SET_GPR_U32(ctx, 31, 0x10EC30u);
    ctx->pc = 0x10EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC28u;
    // 0x10ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD40u, 0x10EC28u, 0x10EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC30u;
label_10ec30:
    // 0x10ec30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ec30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec34: 0xf  sync
    ctx->pc = 0x10ec34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec38: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EC38u;
    {
        const bool branch_taken_0x10ec38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC38u;
        // 0x10ec3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec38) {
            ctx->pc = 0x10EC4Cu;
            goto label_10ec4c;
        }
    }
    ctx->pc = 0x10EC40u;
    // 0x10ec40: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10EC40u;
    SET_GPR_U32(ctx, 31, 0x10EC48u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10EC40u, 0x10EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC48u;
label_10ec48:
    // 0x10ec48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ec48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ec4c:
    // 0x10ec4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ec50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC58u;
        // 0x10ec5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EC60u;
}
