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

// Function: sub_002EC260
// Address: 0x2ec260 - 0x2ec2e0
void sub_002EC260_0x2ec260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC260_0x2ec260");
#endif

    switch (ctx->pc) {
        case 0x2ec278u: goto label_2ec278;
        default: break;
    }

    ctx->pc = 0x2ec260u;

    // 0x2ec260: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x2ec260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ec264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec268: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ec268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec26c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ec26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec270: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ec270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec274: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2ec274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ec278:
    // 0x2ec278: 0x1128000b  beq         $t1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC278u;
    {
        const bool branch_taken_0x2ec278 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ec278) {
            ctx->pc = 0x2EC2A8u;
            goto label_2ec2a8;
        }
    }
    ctx->pc = 0x2EC280u;
    // 0x2ec280: 0x11270007  beq         $t1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC280u;
    {
        const bool branch_taken_0x2ec280 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ec280) {
            ctx->pc = 0x2EC2A0u;
            goto label_2ec2a0;
        }
    }
    ctx->pc = 0x2EC288u;
    // 0x2ec288: 0x11260003  beq         $t1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC288u;
    {
        const bool branch_taken_0x2ec288 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ec288) {
            ctx->pc = 0x2EC298u;
            goto label_2ec298;
        }
    }
    ctx->pc = 0x2EC290u;
    // 0x2ec290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC290u;
    {
        const bool branch_taken_0x2ec290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec290) {
            ctx->pc = 0x2EC2B0u;
            goto label_2ec2b0;
        }
    }
    ctx->pc = 0x2EC298u;
label_2ec298:
    // 0x2ec298: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC298u;
    {
        const bool branch_taken_0x2ec298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC298u;
        // 0x2ec29c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec298) {
            ctx->pc = 0x2EC2B8u;
            goto label_2ec2b8;
        }
    }
    ctx->pc = 0x2EC2A0u;
label_2ec2a0:
    // 0x2ec2a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC2A0u;
    {
        const bool branch_taken_0x2ec2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2A0u;
        // 0x2ec2a4: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2a0) {
            ctx->pc = 0x2EC2B8u;
            goto label_2ec2b8;
        }
    }
    ctx->pc = 0x2EC2A8u;
label_2ec2a8:
    // 0x2ec2a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2A8u;
    {
        const bool branch_taken_0x2ec2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2A8u;
        // 0x2ec2ac: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2a8) {
            ctx->pc = 0x2EC2B8u;
            goto label_2ec2b8;
        }
    }
    ctx->pc = 0x2EC2B0u;
label_2ec2b0:
    // 0x2ec2b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC2B0u;
    {
        const bool branch_taken_0x2ec2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2B0u;
        // 0x2ec2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2b0) {
            ctx->pc = 0x2EC2D8u;
            goto label_2ec2d8;
        }
    }
    ctx->pc = 0x2EC2B8u;
label_2ec2b8:
    // 0x2ec2b8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2ec2b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ec2bc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC2BCu;
    {
        const bool branch_taken_0x2ec2bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2BCu;
        // 0x2ec2c0: 0xa92821  addu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2bc) {
            ctx->pc = 0x2EC2D8u;
            goto label_2ec2d8;
        }
    }
    ctx->pc = 0x2EC2C4u;
    // 0x2ec2c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2ec2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2ec2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec2cc: 0x2943000a  slti        $v1, $t2, 0xA
    ctx->pc = 0x2ec2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ec2d0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EC2D0u;
    {
        const bool branch_taken_0x2ec2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2D0u;
        // 0x2ec2d4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2d0) {
            ctx->pc = 0x2EC278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec278;
        }
    }
    ctx->pc = 0x2EC2D8u;
label_2ec2d8:
    // 0x2ec2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC2E0u;
}
