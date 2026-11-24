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

// Function: sub_00399600
// Address: 0x399600 - 0x39964c
void sub_00399600_0x399600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399600_0x399600");
#endif

    switch (ctx->pc) {
        case 0x399610u: goto label_399610;
        case 0x399628u: goto label_399628;
        default: break;
    }

    ctx->pc = 0x399600u;

    // 0x399600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39960c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x39960cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_399610:
    // 0x399610: 0x8ca30784  lw          $v1, 0x784($a1)
    ctx->pc = 0x399610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x399614: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399614u;
    {
        const bool branch_taken_0x399614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x399618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399614u;
        // 0x399618: 0x24a70780  addiu       $a3, $a1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399614) {
            ctx->pc = 0x399630u;
            goto label_399630;
        }
    }
    ctx->pc = 0x39961Cu;
    // 0x39961c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x39961cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x399620: 0xc0f0444  jal         func_3C1110
    ctx->pc = 0x399620u;
    SET_GPR_U32(ctx, 31, 0x399628u);
    ctx->pc = 0x399624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399620u;
    // 0x399624: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1110u, 0x399620u, 0x399628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399628u;
label_399628:
    // 0x399628: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x399628u;
    {
        const bool branch_taken_0x399628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399628) {
            ctx->pc = 0x399640u;
            goto label_399640;
        }
    }
    ctx->pc = 0x399630u;
label_399630:
    // 0x399630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x399630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x399634: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x399634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x399638: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x399638u;
    {
        const bool branch_taken_0x399638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399638u;
        // 0x39963c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399638) {
            ctx->pc = 0x399610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399610;
        }
    }
    ctx->pc = 0x399640u;
label_399640:
    // 0x399640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399644: 0x3e00008  jr          $ra
    ctx->pc = 0x399644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399644u;
        // 0x399648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39964Cu;
}
