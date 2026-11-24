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

// Function: sub_00221428
// Address: 0x221428 - 0x221478
void sub_00221428_0x221428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221428_0x221428");
#endif

    switch (ctx->pc) {
        case 0x221444u: goto label_221444;
        case 0x221450u: goto label_221450;
        case 0x221464u: goto label_221464;
        default: break;
    }

    ctx->pc = 0x221428u;

    // 0x221428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22142c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221430: 0x24900d30  addiu       $s0, $a0, 0xD30
    ctx->pc = 0x221430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x221434: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x221434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x221438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x221438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22143c: 0xc080568  jal         func_2015A0
    ctx->pc = 0x22143Cu;
    SET_GPR_U32(ctx, 31, 0x221444u);
    ctx->pc = 0x221440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22143Cu;
    // 0x221440: 0x8e0402e0  lw          $a0, 0x2E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x22143Cu, 0x221444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221444u;
label_221444:
    // 0x221444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x221444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221448: 0xc084990  jal         func_212640
    ctx->pc = 0x221448u;
    SET_GPR_U32(ctx, 31, 0x221450u);
    ctx->pc = 0x22144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221448u;
    // 0x22144c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x221448u, 0x221450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221450u;
label_221450:
    // 0x221450: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x221450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x221454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221458: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22145c: 0xc084996  jal         func_212658
    ctx->pc = 0x22145Cu;
    SET_GPR_U32(ctx, 31, 0x221464u);
    ctx->pc = 0x221460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22145Cu;
    // 0x221460: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x22145Cu, 0x221464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221464u;
label_221464:
    // 0x221464: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x221464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221468: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x221468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22146c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221470: 0x3e00008  jr          $ra
    ctx->pc = 0x221470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221470u;
        // 0x221474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221478u;
}
