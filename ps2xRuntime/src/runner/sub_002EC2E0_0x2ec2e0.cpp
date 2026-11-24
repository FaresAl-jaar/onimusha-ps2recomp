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

// Function: sub_002EC2E0
// Address: 0x2ec2e0 - 0x2ec328
void sub_002EC2E0_0x2ec2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC2E0_0x2ec2e0");
#endif

    switch (ctx->pc) {
        case 0x2ec300u: goto label_2ec300;
        default: break;
    }

    ctx->pc = 0x2ec2e0u;

    // 0x2ec2e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2E0u;
    {
        const bool branch_taken_0x2ec2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2E0u;
        // 0x2ec2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2e0) {
            ctx->pc = 0x2EC2F0u;
            goto label_2ec2f0;
        }
    }
    ctx->pc = 0x2EC2E8u;
    // 0x2ec2e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EC2E8u;
    {
        const bool branch_taken_0x2ec2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2e8) {
            ctx->pc = 0x2EC320u;
            goto label_2ec320;
        }
    }
    ctx->pc = 0x2EC2F0u;
label_2ec2f0:
    // 0x2ec2f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC2F0u;
    {
        const bool branch_taken_0x2ec2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2F0u;
        // 0x2ec2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2f0) {
            ctx->pc = 0x2EC320u;
            goto label_2ec320;
        }
    }
    ctx->pc = 0x2EC2F8u;
    // 0x2ec2f8: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2ec2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2ec2fc: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x2ec2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2ec300:
    // 0x2ec300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec304: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x2ec304u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ec308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec30c: 0x0  nop
    ctx->pc = 0x2ec30cu;
    // NOP
    // 0x2ec310: 0x1810  mfhi        $v1
    ctx->pc = 0x2ec310u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ec314: 0x320c2  srl         $a0, $v1, 3
    ctx->pc = 0x2ec314u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2ec318: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EC318u;
    {
        const bool branch_taken_0x2ec318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec318) {
            ctx->pc = 0x2EC300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec300;
        }
    }
    ctx->pc = 0x2EC320u;
label_2ec320:
    // 0x2ec320: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC328u;
}
