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

// Function: sub_00231620
// Address: 0x231620 - 0x231698
void sub_00231620_0x231620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231620_0x231620");
#endif

    switch (ctx->pc) {
        case 0x231654u: goto label_231654;
        case 0x23166cu: goto label_23166c;
        case 0x231674u: goto label_231674;
        default: break;
    }

    ctx->pc = 0x231620u;

    // 0x231620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23162c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x231638: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23163c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x231640: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x231640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231644: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x231644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x231648: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x231648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23164c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x23164Cu;
    SET_GPR_U32(ctx, 31, 0x231654u);
    ctx->pc = 0x231650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23164Cu;
    // 0x231650: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x23164Cu, 0x231654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231654u;
label_231654:
    // 0x231654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23165c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23165cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231660: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x231660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231664: 0xc08c5a6  jal         func_231698
    ctx->pc = 0x231664u;
    SET_GPR_U32(ctx, 31, 0x23166Cu);
    ctx->pc = 0x231668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231664u;
    // 0x231668: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231698u, 0x231664u, 0x23166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23166Cu;
label_23166c:
    // 0x23166c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x23166Cu;
    SET_GPR_U32(ctx, 31, 0x231674u);
    ctx->pc = 0x231670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23166Cu;
    // 0x231670: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x23166Cu, 0x231674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231674u;
label_231674:
    // 0x231674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23167c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23167cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x231684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231688: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x231688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23168c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231690: 0x3e00008  jr          $ra
    ctx->pc = 0x231690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231690u;
        // 0x231694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231698u;
}
