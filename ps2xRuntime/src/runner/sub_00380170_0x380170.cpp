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

// Function: sub_00380170
// Address: 0x380170 - 0x3801b4
void sub_00380170_0x380170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380170_0x380170");
#endif

    switch (ctx->pc) {
        case 0x380190u: goto label_380190;
        default: break;
    }

    ctx->pc = 0x380170u;

    // 0x380170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38017c: 0x8c842b84  lw          $a0, 0x2B84($a0)
    ctx->pc = 0x38017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11140)));
    // 0x380180: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x380180u;
    {
        const bool branch_taken_0x380180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380180u;
        // 0x380184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380180) {
            ctx->pc = 0x3801A0u;
            goto label_3801a0;
        }
    }
    ctx->pc = 0x380188u;
    // 0x380188: 0xc0c0890  jal         func_302240
    ctx->pc = 0x380188u;
    SET_GPR_U32(ctx, 31, 0x380190u);
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x380188u, 0x380190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380190u;
label_380190:
    // 0x380190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380190u;
    {
        const bool branch_taken_0x380190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380190) {
            ctx->pc = 0x3801A0u;
            goto label_3801a0;
        }
    }
    ctx->pc = 0x380198u;
    // 0x380198: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x380198u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x38019c: 0x0  nop
    ctx->pc = 0x38019cu;
    // NOP
label_3801a0:
    // 0x3801a0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3801a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3801a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3801a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3801a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3801a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3801ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3801ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3801B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801ACu;
        // 0x3801b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3801ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3801B4u;
}
