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

// Function: sub_00229288
// Address: 0x229288 - 0x2292d0
void sub_00229288_0x229288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229288_0x229288");
#endif

    switch (ctx->pc) {
        case 0x2292acu: goto label_2292ac;
        case 0x2292bcu: goto label_2292bc;
        default: break;
    }

    ctx->pc = 0x229288u;

    // 0x229288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22928c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x229290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x229290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229294: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x229294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22929c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2292a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2292a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2292a4: 0xc08a386  jal         func_228E18
    ctx->pc = 0x2292A4u;
    SET_GPR_U32(ctx, 31, 0x2292ACu);
    ctx->pc = 0x2292A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292A4u;
    // 0x2292a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E18u, 0x2292A4u, 0x2292ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292ACu;
label_2292ac:
    // 0x2292ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2292b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2292b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292b4: 0xc08a398  jal         func_228E60
    ctx->pc = 0x2292B4u;
    SET_GPR_U32(ctx, 31, 0x2292BCu);
    ctx->pc = 0x2292B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292B4u;
    // 0x2292b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E60u, 0x2292B4u, 0x2292BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292BCu;
label_2292bc:
    // 0x2292bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2292bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2292c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2292c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2292c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2292c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2292c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2292C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2292CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C8u;
        // 0x2292cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2292C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2292D0u;
}
