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

// Function: sub_002BCA50
// Address: 0x2bca50 - 0x2bca7c
void sub_002BCA50_0x2bca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA50_0x2bca50");
#endif

    switch (ctx->pc) {
        case 0x2bca68u: goto label_2bca68;
        default: break;
    }

    ctx->pc = 0x2bca50u;

    // 0x2bca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bca54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bca58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bca5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca60: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2BCA60u;
    SET_GPR_U32(ctx, 31, 0x2BCA68u);
    ctx->pc = 0x2BCA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA60u;
    // 0x2bca64: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8330u, 0x2BCA60u, 0x2BCA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA68u;
label_2bca68:
    // 0x2bca68: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bca6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bca6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bca70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bca74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA74u;
        // 0x2bca78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA7Cu;
}
