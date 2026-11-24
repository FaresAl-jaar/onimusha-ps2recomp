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

// Function: sub_0022F018
// Address: 0x22f018 - 0x22f080
void sub_0022F018_0x22f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F018_0x22f018");
#endif

    switch (ctx->pc) {
        case 0x22f044u: goto label_22f044;
        case 0x22f058u: goto label_22f058;
        case 0x22f060u: goto label_22f060;
        default: break;
    }

    ctx->pc = 0x22f018u;

    // 0x22f018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f02c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f03c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F03Cu;
    SET_GPR_U32(ctx, 31, 0x22F044u);
    ctx->pc = 0x22F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F03Cu;
    // 0x22f040: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F03Cu, 0x22F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F044u;
label_22f044:
    // 0x22f044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f04c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f050: 0xc08bc20  jal         func_22F080
    ctx->pc = 0x22F050u;
    SET_GPR_U32(ctx, 31, 0x22F058u);
    ctx->pc = 0x22F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F050u;
    // 0x22f054: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F080u, 0x22F050u, 0x22F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F058u;
label_22f058:
    // 0x22f058: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F058u;
    SET_GPR_U32(ctx, 31, 0x22F060u);
    ctx->pc = 0x22F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F058u;
    // 0x22f05c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F058u, 0x22F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f078: 0x3e00008  jr          $ra
    ctx->pc = 0x22F078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F078u;
        // 0x22f07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F080u;
}
