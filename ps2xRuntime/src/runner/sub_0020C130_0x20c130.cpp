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

// Function: sub_0020C130
// Address: 0x20c130 - 0x20c188
void sub_0020C130_0x20c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C130_0x20c130");
#endif

    switch (ctx->pc) {
        case 0x20c15cu: goto label_20c15c;
        default: break;
    }

    ctx->pc = 0x20c130u;

    // 0x20c130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20c134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c138: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20c138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c13c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c144: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c148: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20c148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c14c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20c150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20c154: 0xc081544  jal         func_205510
    ctx->pc = 0x20C154u;
    SET_GPR_U32(ctx, 31, 0x20C15Cu);
    ctx->pc = 0x20C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C154u;
    // 0x20c158: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C154u, 0x20C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C15Cu;
label_20c15c:
    // 0x20c15c: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x20c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    // 0x20c160: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x20c160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x20c164: 0xac520044  sw          $s2, 0x44($v0)
    ctx->pc = 0x20c164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 18));
    // 0x20c168: 0xac530048  sw          $s3, 0x48($v0)
    ctx->pc = 0x20c168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 19));
    // 0x20c16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20c178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c17c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20c17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c180: 0x3e00008  jr          $ra
    ctx->pc = 0x20C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C180u;
        // 0x20c184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C188u;
}
