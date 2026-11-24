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

// Function: sub_003F5340
// Address: 0x3f5340 - 0x3f5380
void sub_003F5340_0x3f5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5340_0x3f5340");
#endif

    switch (ctx->pc) {
        case 0x3f5374u: goto label_3f5374;
        default: break;
    }

    ctx->pc = 0x3f5340u;

    // 0x3f5340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f5344: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3f5344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3f5348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f534c: 0x24020ed0  addiu       $v0, $zero, 0xED0
    ctx->pc = 0x3f534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x3f5350: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3f5350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3f5354: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F5354u;
    {
        const bool branch_taken_0x3f5354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f5354) {
            ctx->pc = 0x3F5360u;
            goto label_3f5360;
        }
    }
    ctx->pc = 0x3F535Cu;
    // 0x3f535c: 0xaf808d4c  sw          $zero, -0x72B4($gp)
    ctx->pc = 0x3f535cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 0));
label_3f5360:
    // 0x3f5360: 0x8f848d4c  lw          $a0, -0x72B4($gp)
    ctx->pc = 0x3f5360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
    // 0x3f5364: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F5364u;
    {
        const bool branch_taken_0x3f5364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5364u;
        // 0x3f5368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5364) {
            ctx->pc = 0x3F5374u;
            goto label_3f5374;
        }
    }
    ctx->pc = 0x3F536Cu;
    // 0x3f536c: 0xc0fd60c  jal         func_3F5830
    ctx->pc = 0x3F536Cu;
    SET_GPR_U32(ctx, 31, 0x3F5374u);
    ctx->pc = 0x3F5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5830u, 0x3F536Cu, 0x3F5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5374u;
label_3f5374:
    // 0x3f5374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5378: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5378u;
        // 0x3f537c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5380u;
}
