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

// Function: sub_00250600
// Address: 0x250600 - 0x250668
void sub_00250600_0x250600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250600_0x250600");
#endif

    switch (ctx->pc) {
        case 0x25062cu: goto label_25062c;
        case 0x250640u: goto label_250640;
        case 0x250648u: goto label_250648;
        default: break;
    }

    ctx->pc = 0x250600u;

    // 0x250600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25060c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250610: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250618: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x250618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25061c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x250620: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x250620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x250624: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x250624u;
    SET_GPR_U32(ctx, 31, 0x25062Cu);
    ctx->pc = 0x250628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250624u;
    // 0x250628: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x250624u, 0x25062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25062Cu;
label_25062c:
    // 0x25062c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250634: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x250634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250638: 0xc09419a  jal         func_250668
    ctx->pc = 0x250638u;
    SET_GPR_U32(ctx, 31, 0x250640u);
    ctx->pc = 0x25063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250638u;
    // 0x25063c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250668u, 0x250638u, 0x250640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250640u;
label_250640:
    // 0x250640: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x250640u;
    SET_GPR_U32(ctx, 31, 0x250648u);
    ctx->pc = 0x250644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250640u;
    // 0x250644: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x250640u, 0x250648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250648u;
label_250648:
    // 0x250648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25064c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25064cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x250650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x250658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25065c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250660: 0x3e00008  jr          $ra
    ctx->pc = 0x250660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250660u;
        // 0x250664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250668u;
}
