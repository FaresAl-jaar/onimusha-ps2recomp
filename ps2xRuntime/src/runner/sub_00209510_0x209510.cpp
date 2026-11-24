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

// Function: sub_00209510
// Address: 0x209510 - 0x209554
void sub_00209510_0x209510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209510_0x209510");
#endif

    switch (ctx->pc) {
        case 0x209534u: goto label_209534;
        default: break;
    }

    ctx->pc = 0x209510u;

    // 0x209510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20951c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209520: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x209520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x209524: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x209524u;
    {
        const bool branch_taken_0x209524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209524) {
            ctx->pc = 0x209528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209524u;
            // 0x209528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209548u;
            goto label_209548;
        }
    }
    ctx->pc = 0x20952Cu;
    // 0x20952c: 0xc082556  jal         func_209558
    ctx->pc = 0x20952Cu;
    SET_GPR_U32(ctx, 31, 0x209534u);
    ctx->pc = 0x209558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209558u, 0x20952Cu, 0x209534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209534u;
label_209534:
    // 0x209534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20953c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20953cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209540: 0x80825c2  j           func_209708
    ctx->pc = 0x209540u;
    ctx->pc = 0x209544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209540u;
    // 0x209544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209708u;
    sub_00209708_0x209708(rdram, ctx, runtime); return;
    ctx->pc = 0x209548u;
label_209548:
    // 0x209548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20954c: 0x3e00008  jr          $ra
    ctx->pc = 0x20954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20954Cu;
        // 0x209550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209554u;
}
