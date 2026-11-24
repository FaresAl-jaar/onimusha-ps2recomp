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

// Function: sub_00347C70
// Address: 0x347c70 - 0x347ca8
void sub_00347C70_0x347c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347C70_0x347c70");
#endif

    switch (ctx->pc) {
        case 0x347c8cu: goto label_347c8c;
        case 0x347c98u: goto label_347c98;
        default: break;
    }

    ctx->pc = 0x347c70u;

    // 0x347c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347c74: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x347c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x347c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347c7c: 0x24842ce0  addiu       $a0, $a0, 0x2CE0
    ctx->pc = 0x347c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    // 0x347c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347c84: 0xc0e3684  jal         func_38DA10
    ctx->pc = 0x347C84u;
    SET_GPR_U32(ctx, 31, 0x347C8Cu);
    ctx->pc = 0x347C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C84u;
    // 0x347c88: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA10u, 0x347C84u, 0x347C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C8Cu;
label_347c8c:
    // 0x347c8c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x347c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x347c90: 0xc0d1654  jal         func_345950
    ctx->pc = 0x347C90u;
    SET_GPR_U32(ctx, 31, 0x347C98u);
    ctx->pc = 0x347C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C90u;
    // 0x347c94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345950u, 0x347C90u, 0x347C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347C98u;
label_347c98:
    // 0x347c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x347CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CA0u;
        // 0x347ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347CA8u;
}
