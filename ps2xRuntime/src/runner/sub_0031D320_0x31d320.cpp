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

// Function: sub_0031D320
// Address: 0x31d320 - 0x31d35c
void sub_0031D320_0x31d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D320_0x31d320");
#endif

    switch (ctx->pc) {
        case 0x31d344u: goto label_31d344;
        default: break;
    }

    ctx->pc = 0x31d320u;

    // 0x31d320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31d324: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x31d324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x31d328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31d32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d338: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d33c: 0xc049590  jal         func_125640
    ctx->pc = 0x31D33Cu;
    SET_GPR_U32(ctx, 31, 0x31D344u);
    ctx->pc = 0x31D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D33Cu;
    // 0x31d340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x31D33Cu, 0x31D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D344u;
label_31d344:
    // 0x31d344: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x31d344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x31d348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d354: 0x3e00008  jr          $ra
    ctx->pc = 0x31D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D354u;
        // 0x31d358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D35Cu;
}
