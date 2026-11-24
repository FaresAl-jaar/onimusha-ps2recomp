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

// Function: sub_00220460
// Address: 0x220460 - 0x2204a8
void sub_00220460_0x220460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220460_0x220460");
#endif

    switch (ctx->pc) {
        case 0x220478u: goto label_220478;
        default: break;
    }

    ctx->pc = 0x220460u;

    // 0x220460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220468: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x220468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22046c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220470: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x220470u;
    SET_GPR_U32(ctx, 31, 0x220478u);
    ctx->pc = 0x220474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220470u;
    // 0x220474: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x220470u, 0x220478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220478u;
label_220478:
    // 0x220478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22047c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22047Cu;
    {
        const bool branch_taken_0x22047c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22047c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220484u;
    // 0x220484: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x220484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x220488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x220488u;
    {
        const bool branch_taken_0x220488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220488) {
            ctx->pc = 0x220498u;
            goto label_220498;
        }
    }
    ctx->pc = 0x220490u;
label_220490:
    // 0x220490: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x220490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x220494: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x220494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_220498:
    // 0x220498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22049c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2204a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2204A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2204A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204A0u;
        // 0x2204a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2204A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2204A8u;
}
