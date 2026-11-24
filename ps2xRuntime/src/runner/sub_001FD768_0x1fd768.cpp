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

// Function: sub_001FD768
// Address: 0x1fd768 - 0x1fd79c
void sub_001FD768_0x1fd768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD768_0x1fd768");
#endif

    switch (ctx->pc) {
        case 0x1fd778u: goto label_1fd778;
        default: break;
    }

    ctx->pc = 0x1fd768u;

    // 0x1fd768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd770: 0xc07f5e8  jal         func_1FD7A0
    ctx->pc = 0x1FD770u;
    SET_GPR_U32(ctx, 31, 0x1FD778u);
    ctx->pc = 0x1FD7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7A0u, 0x1FD770u, 0x1FD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD778u;
label_1fd778:
    // 0x1fd778: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd77c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD77Cu;
    {
        const bool branch_taken_0x1fd77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD77Cu;
        // 0x1fd780: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd77c) {
            ctx->pc = 0x1FD790u;
            goto label_1fd790;
        }
    }
    ctx->pc = 0x1FD784u;
    // 0x1fd784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd788: 0x807f5fe  j           func_1FD7F8
    ctx->pc = 0x1FD788u;
    ctx->pc = 0x1FD78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD788u;
    // 0x1fd78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F8u;
    sub_001FD7F8_0x1fd7f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD790u;
label_1fd790:
    // 0x1fd790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd794: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD794u;
        // 0x1fd798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD79Cu;
}
